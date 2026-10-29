import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.lang.*;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import java.io.*;
import java.math.BigInteger;
import java.util.*;

// Usage: -postScript BulkDisas.java <log.txt> <startHex> <endHex>
// Seeds disassembly at every dword in the program that points into [start,end]
// (odd -> Thumb entry, even -> ARM entry). Clears local context per site.
// Committed: results stay in the program.
public class BulkDisas extends GhidraScript {
  public void run() throws Exception {
    String[] a = getScriptArgs();
    PrintWriter w = new PrintWriter(new FileWriter(a[0]));
    long lo = Long.parseLong(a[1], 16), hi = Long.parseLong(a[2], 16);
    Memory mem = currentProgram.getMemory();
    ProgramContext ctx = currentProgram.getProgramContext();
    Register tmode = ctx.getRegister("TMode");
    Address minA = mem.getMinAddress(), maxA = mem.getMaxAddress();
    TreeSet<Long> thumbSeeds = new TreeSet<>(), armSeeds = new TreeSet<>();
    // scan all dwords in program for code pointers into range
    for (Address p = minA; p.compareTo(maxA) < 0; p = p.add(4)) {
      int v;
      try { v = mem.getInt(p); } catch (Exception e) { continue; }
      long u = v & 0xffffffffL;
      if (u >= 0x60000000L && u < 0x60000000L + hi) {
        long f = u - 0x60000000L;
        if ((f & 1) == 1) {
          long e = f - 1;
          if (e >= lo && e < hi) thumbSeeds.add(e);
        } else if (f >= lo && f < hi) {
          armSeeds.add(f);
        }
      }
    }
    w.println("thumbSeeds=" + thumbSeeds.size() + " armSeeds=" + armSeeds.size());
    w.flush();
    int tx = currentProgram.startTransaction("bulk");
    int done = 0;
    for (long site : armSeeds) {
      try { seedAt(site, false, mem, ctx, tmode); } catch (Exception e) {}
      if (++done % 200 == 0) { w.println("arm " + done); w.flush(); }
    }
    done = 0;
    for (long site : thumbSeeds) {
      try { seedAt(site, true, mem, ctx, tmode); } catch (Exception e) {}
      if (++done % 500 == 0) { w.println("thumb " + done); w.flush(); }
    }
    currentProgram.endTransaction(tx, true);
    // stats
    int nf = 0;
    for (Function f : currentProgram.getFunctionManager().getFunctions(true)) nf++;
    w.println("total funcs now " + nf);
    w.close(); println("done");
  }

  void seedAt(long site, boolean thumb, Memory mem, ProgramContext ctx, Register tmode) throws Exception {
    Address st = toAddr(site);
    Function ex = currentProgram.getFunctionManager().getFunctionAt(st);
    if (ex != null) return;
    Address end = st.add(0x2000);
    // remove functions overlapping window
    AddressSet w = new AddressSet(st, end);
    for (Function fx : currentProgram.getFunctionManager().getFunctions(w, true)) {
      try { currentProgram.getFunctionManager().removeFunction(fx.getEntryPoint()); } catch (Exception rf) {}
    }
    currentProgram.getListing().clearCodeUnits(st, end, false);
    try { ctx.setValue(tmode, st, end, BigInteger.valueOf(thumb ? 1 : 0)); }
    catch (Exception cx) {
      try { ctx.setValue(tmode, st, end, null); } catch (Exception e2) {}
      try { ctx.setValue(tmode, st, end, BigInteger.valueOf(thumb ? 1 : 0)); } catch (Exception e3) {}
    }
    new DisassembleCommand(st, null, true).applyTo(currentProgram, monitor);
    if (currentProgram.getFunctionManager().getFunctionAt(st) == null) {
      new CreateFunctionCmd(st).applyTo(currentProgram, monitor);
    }
  }
}
