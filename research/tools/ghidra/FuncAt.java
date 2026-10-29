import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.lang.*;
import ghidra.app.decompiler.*;
import java.io.*;
import java.math.BigInteger;

// Usage: -postScript FuncAt.java <out.txt> <hexsite> [T|A] ...
public class FuncAt extends GhidraScript {
  public void run() throws Exception {
    String[] a = getScriptArgs();
    PrintWriter w = new PrintWriter(new FileWriter(a[0]));
    DecompInterface d = new DecompInterface(); d.openProgram(currentProgram);
    Memory mem = currentProgram.getMemory();
    ProgramContext ctx = currentProgram.getProgramContext();
    Register tmode = ctx.getRegister("TMode");
    for (int i = 1; i < a.length; i++) {
      long site = Long.parseLong(a[i], 16);
      boolean thumb = (i + 1 < a.length && a[i + 1].equals("T"));
      if (thumb) i++;
      Address s = toAddr(site);
      w.println("\n############ site " + Long.toHexString(site) + (thumb ? " THUMB" : ""));
      int tx = currentProgram.startTransaction("disasm");
      try {
        Function f = getFunctionContaining(s);
        if (f == null) {
          long bestStart = -1; boolean bestThumb = thumb;
          for (long off = site & ~1L; off > site - 0x800 && off > 0; off -= 2) {
            int hw = mem.getShort(toAddr(off)) & 0xffff;
            if ((hw & 0xFF00) == 0xB500) { bestStart = off; bestThumb = true; break; }
            if (off % 4 == 0) {
              int w2 = mem.getInt(toAddr(off));
              if ((w2 & 0xFFFF0000) == 0xE92D0000) { bestStart = off; bestThumb = false; break; }
            }
          }
          if (bestStart < 0) { bestStart = site & ~1L; bestThumb = thumb; }
          Address st = toAddr(bestStart);
          ctx.setValue(tmode, st, st.add(0x1000), BigInteger.valueOf(bestThumb ? 1 : 0));
          disassemble(st);
          f = getFunctionContaining(s);
          if (f == null) f = createFunction(st, null);
        }
        if (f == null) { w.println("NO FUNCTION"); continue; }
        w.println("=== " + f.getName() + " @ " + f.getEntryPoint());
        DecompileResults r = d.decompileFunction(f, 120, monitor);
        if (r.decompileCompleted()) w.println(r.getDecompiledFunction().getC());
        else w.println("decompile failed");
      } catch (Exception e) { w.println("ERR " + e); }
      finally { currentProgram.endTransaction(tx, false); }
    }
    w.close(); println("done");
  }
}
