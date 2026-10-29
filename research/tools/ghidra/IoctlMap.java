import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.address.Address;
import ghidra.app.decompiler.*;
import java.io.*;
import java.util.*;

// Usage: -postScript IoctlMap.java <out.txt> <ImportName>
// Toutes les fonctions qui appellent l'import donne (ex. DeviceIoControl), avec leurs references (code et vtables) et leur decompilation.
public class IoctlMap extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[0]));
    Set<Function> fs=new LinkedHashSet<>();
    for(Symbol s: currentProgram.getSymbolTable().getSymbols(a[1])){
      for(Reference r: getReferencesTo(s.getAddress())){
        Function f=getFunctionContaining(r.getFromAddress());
        if(f!=null){fs.add(f);continue;}
        for(Reference r2: getReferencesTo(r.getFromAddress())){Function g=getFunctionContaining(r2.getFromAddress());if(g!=null)fs.add(g);}
      }
    }
    for(Function t: new ArrayList<>(fs))if(t.isThunk())for(Function c: t.getCallingFunctions(monitor))fs.add(c);
    DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
    for(Function f: fs){
      if(f.isThunk())continue;
      StringBuilder refs=new StringBuilder();
      for(Reference r: getReferencesTo(f.getEntryPoint())){
        Function c=getFunctionContaining(r.getFromAddress());
        refs.append(c!=null?c.getName():("DATA@"+r.getFromAddress())).append(' ');
      }
      w.println("\n=========== "+f.getName()+" @ "+f.getEntryPoint()+" refs: "+refs);
      DecompileResults res=d.decompileFunction(f,120,monitor);
      if(res.decompileCompleted())w.println(res.getDecompiledFunction().getC());
    }
    w.close();println("done "+fs.size());
  }
}
