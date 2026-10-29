import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.app.decompiler.*;
import java.io.*;
import java.util.*;

// Usage: -postScript FieldUsers.java x <out.txt> <funcAddr-hex> <fieldOff-hex>
// Decompiles every caller of the function at funcAddr; prints those whose
// decompiled text references the given field offset (e.g. "+ 0x7c").
public class FieldUsers extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[1]));
    Function g=getFunctionContaining(toAddr(Long.parseLong(a[2],16)));
    String needle="0x"+a[3].replaceAll("^0x","");
    DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
    int n=0;
    for(Function f: g.getCallingFunctions(monitor)){
      DecompileResults r=d.decompileFunction(f,90,monitor);
      if(!r.decompileCompleted())continue;
      String c=r.getDecompiledFunction().getC();
      if(c.contains("+ "+needle)||c.contains("+ 0x"+a[3])||c.contains("+ "+a[3]+")")||c.contains("+0x"+a[3])||c.contains("+ "+a[3])){
        w.println("\n=========== "+f.getName()+" @ "+f.getEntryPoint()+" callers "+f.getCallingFunctions(monitor));
        w.println(c);n++;
      }
    }
    w.println("\nTOTAL "+n);
    w.close();println("done "+n);
  }
}
