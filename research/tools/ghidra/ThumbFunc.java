import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.lang.*;
import ghidra.app.decompiler.*;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.program.model.listing.Function;
import java.io.*;
import java.math.BigInteger;

// Usage: -postScript ThumbFunc.java <out.txt> <hexsite> ...
// For each site: if no good function exists, clear code units around it, force
// TMode=1, disassemble from a found function start, create function, decompile.
public class ThumbFunc extends GhidraScript {
  public void run() throws Exception {
    String[] a = getScriptArgs();
    PrintWriter w = new PrintWriter(new FileWriter(a[0]));
    DecompInterface d = new DecompInterface(); d.openProgram(currentProgram);
    Memory mem = currentProgram.getMemory();
    ProgramContext ctx = currentProgram.getProgramContext();
    Register tmode = ctx.getRegister("TMode");
    for (int i = 1; i < a.length; i++) {
      long site = Long.parseLong(a[i], 16);
      Address s = toAddr(site);
      w.println("\n############ site " + Long.toHexString(site));
      int tx = currentProgram.startTransaction("tdisasm");
      try {
        Function f = getFunctionContaining(s);
        {
          // find function start: scan back for Thumb push (B5xx) up to 0x8000
          long bestStart = -1;
          for (long off = site & ~1L; off > site - 0x8000 && off > 0; off -= 2) {
            int hw = mem.getShort(toAddr(off)) & 0xffff;
            if ((hw & 0xFF00) == 0xB500) { bestStart = off; break; }
            if ((hw & 0xFE00) == 0xB400 && (hw & 0x100) != 0) { bestStart = off; break; }
          }
          if (bestStart < 0) bestStart = site & ~1L;
          Address st = toAddr(bestStart);
          Address cEnd = s.add(0x4000);
          // remove all functions overlapping [st, cEnd] then wipe code units + context
          ghidra.program.model.address.AddressSet wr =
            new ghidra.program.model.address.AddressSet(st, cEnd);
          for (Function fx : currentProgram.getFunctionManager().getFunctions(wr, true)) {
            try { currentProgram.getFunctionManager().removeFunction(fx.getEntryPoint()); } catch (Exception rf) {}
          }
          currentProgram.getListing().clearCodeUnits(st, cEnd, false);
          try {
            ctx.setValue(tmode, st, cEnd, BigInteger.ONE);
          } catch (Exception cx) {
            try { ctx.setValue(tmode, st, cEnd, null); } catch (Exception e2) {}
            ctx.setValue(tmode, st, cEnd, BigInteger.ONE);
          }
          new DisassembleCommand(st, null, true).applyTo(currentProgram, monitor);
          f = getFunctionContaining(s);
          if (f == null) {
            ghidra.app.cmd.function.CreateFunctionCmd c =
              new ghidra.app.cmd.function.CreateFunctionCmd(st);
            c.applyTo(currentProgram, monitor);
            f = getFunctionContaining(s);
          }
        }
        if (f == null) { w.println("NO FUNCTION"); continue; }
        w.println("=== " + f.getName() + " @ " + f.getEntryPoint() +
                  " callers " + f.getCallingFunctions(monitor));
        // dump instruction list
        Listing lst = currentProgram.getListing();
        InstructionIterator it = lst.getInstructions(f.getBody(), true);
        int cnt = 0;
        while (it.hasNext() && cnt < 400) {
          Instruction ins = it.next();
          w.println("  " + ins.getAddress() + "  " + ins.toString());
          cnt++;
        }
        DecompileResults r = d.decompileFunction(f, 180, monitor);
        if (r.decompileCompleted()) w.println(r.getDecompiledFunction().getC());
        else w.println("decompile failed");
      } catch (Exception e) { w.println("ERR " + e); }
      finally { currentProgram.endTransaction(tx, false); }
    }
    w.close(); println("done");
  }
}
