import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.app.decompiler.*;
import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import java.io.*;

// Usage: -postScript DisasDecomp.java x <out.txt> <hexaddr> [hexaddr...]
// Force-disassembles + creates a function at each address (in-memory only), then decompiles.
public class DisasDecomp extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[1]));
    DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
    for(int i=2;i<a.length;i++){
      Address addr=toAddr(Long.parseLong(a[i],16));
      try{
        new DisassembleCommand(addr,null,true).applyTo(currentProgram,monitor);
        new CreateFunctionCmd(addr).applyTo(currentProgram,monitor);
      }catch(Exception e){w.println("disas err "+a[i]+": "+e);}
      Function f=getFunctionContaining(addr);
      if(f==null){w.println("no func @ "+a[i]);continue;}
      w.println("\n=========== "+f.getName()+" @ "+f.getEntryPoint()+" callers "+f.getCallingFunctions(monitor));
      DecompileResults r=d.decompileFunction(f,180,monitor);
      if(r.decompileCompleted())w.println(r.getDecompiledFunction().getC());
      else w.println("DECOMP FAILED");
    }
    w.close();println("done");
  }
}
