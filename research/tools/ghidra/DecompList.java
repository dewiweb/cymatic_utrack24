import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.app.decompiler.*;
import java.io.*;

// Usage: -postScript DecompList.java <out.txt> <hexaddr> [hexaddr...]  -> decompile + callers.
public class DecompList extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[0]));
    DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
    for(int i=1;i<a.length;i++){
      Function f=getFunctionContaining(toAddr(Long.parseLong(a[i],16)));
      if(f==null){w.println("?? "+a[i]);continue;}
      w.println("\n=========== "+f.getName()+" callers: "+f.getCallingFunctions(monitor));
      DecompileResults r=d.decompileFunction(f,180,monitor);
      if(r.decompileCompleted())w.println(r.getDecompiledFunction().getC());
    }
    w.close();println("done");
  }
}
