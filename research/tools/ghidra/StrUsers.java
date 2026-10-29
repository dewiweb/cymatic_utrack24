import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.Memory;
import ghidra.app.decompiler.*;
import java.io.*;
import java.util.*;

// Usage: -postScript StrUsers.java <out.txt> "<chaine1>" "<chaine2>" ...
// Trouve chaque chaine ASCII exacte (terminee par 0), les fonctions qui la referencent, et les decompile.
public class StrUsers extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[0]));
    Map<Function,List<String>> fs=new LinkedHashMap<>();
    Memory mem=currentProgram.getMemory();
    for(int i=1;i<a.length;i++){
      byte[] pat=(a[i]+"\0").getBytes("US-ASCII");
      Address s=mem.getMinAddress();
      while(true){
        Address hit=mem.findBytes(s,pat,null,true,monitor);
        if(hit==null)break;
        boolean prevNul=false;try{prevNul=mem.getByte(hit.subtract(1))==0;}catch(Exception e){}
        if(prevNul)for(Reference r: getReferencesTo(hit)){
          Function f=getFunctionContaining(r.getFromAddress());
          w.println("str '"+a[i]+"' @ "+hit+" <- "+r.getFromAddress()+" "+(f==null?"?":f.getName()));
          if(f!=null)fs.computeIfAbsent(f,k->new ArrayList<>()).add(a[i]);
        }
        s=hit.add(1);
      }
    }
    DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
    for(Map.Entry<Function,List<String>> e: fs.entrySet()){
      Function f=e.getKey();
      w.println("\n=========== "+f.getName()+" @ "+f.getEntryPoint()+" strings "+e.getValue());
      DecompileResults r=d.decompileFunction(f,180,monitor);
      if(r.decompileCompleted())w.println(r.getDecompiledFunction().getC());
    }
    w.close();println("done "+fs.size());
  }
}
