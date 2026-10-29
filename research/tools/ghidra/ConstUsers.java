import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;
import ghidra.app.decompiler.*;
import java.io.*;
import java.util.*;

// Usage: -postScript ConstUsers.java <out.txt> <hex> [hex...] : fonctions utilisant ces constantes immediates + decompilation.
public class ConstUsers extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[0]));
    Set<Long> vals=new HashSet<>();for(int i=1;i<a.length;i++)vals.add(Long.parseLong(a[i],16));
    Map<Function,Set<String>> fs=new LinkedHashMap<>();
    InstructionIterator it=currentProgram.getListing().getInstructions(true);
    while(it.hasNext()){
      Instruction in=it.next();
      for(int i=0;i<in.getNumOperands();i++){
        Scalar s=in.getScalar(i);
        if(s==null||!vals.contains(s.getUnsignedValue()))continue;
        Function f=getFunctionContaining(in.getAddress());
        w.println(in.getAddress()+" "+(f==null?"?":f.getName())+" : "+in);
        if(f!=null)fs.computeIfAbsent(f,k->new TreeSet<>()).add(Long.toHexString(s.getUnsignedValue()));
      }
    }
    DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
    for(Map.Entry<Function,Set<String>> e: fs.entrySet()){
      Function f=e.getKey();
      w.println("\n=========== "+f.getName()+" @ "+f.getEntryPoint()+" consts "+e.getValue()+" callers "+f.getCallingFunctions(monitor));
      DecompileResults r=d.decompileFunction(f,120,monitor);
      if(r.decompileCompleted())w.println(r.getDecompiledFunction().getC());
    }
    w.close();println("done "+fs.size());
  }
}
