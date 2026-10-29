import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.app.decompiler.*;
import java.io.*;
public class DecompOne extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[1]));
    DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
    for(int i=2;i<a.length;i++){
      Address addr=toAddr(a[i]);
      Function f=getFunctionContaining(addr);
      if(f==null){w.println("no func @ "+a[i]);continue;}
      w.println("=========== "+f.getName()+" @ "+f.getEntryPoint());
      DecompileResults r=d.decompileFunction(f,120,monitor);
      if(r.decompileCompleted())w.println(r.getDecompiledFunction().getC());
    }
    w.close();println("done");
  }
}
