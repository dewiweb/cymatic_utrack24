import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import java.io.*;

// Usage: -postScript MapDump.java <out.txt> ["str1" "str2" ...]
// Dumps memory blocks, then for each string: every occurrence + refs (or NO-REFS).
public class MapDump extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[0]));
    Memory mem=currentProgram.getMemory();
    w.println("=== MEMORY BLOCKS ===");
    for(MemoryBlock b: mem.getBlocks())
      w.println(b.getName()+" "+b.getStart()+" .. "+b.getEnd()+" size="+b.getSize()+" exec="+b.isExecute()+" init="+b.isInitialized());
    for(int i=1;i<a.length;i++){
      byte[] pat=(a[i]+"\0").getBytes("US-ASCII");
      Address s=mem.getMinAddress();
      w.println("=== '"+a[i]+"' ===");
      int n=0;
      while(true){
        Address hit=mem.findBytes(s,pat,null,true,monitor);
        if(hit==null)break;
        StringBuilder sb=new StringBuilder();
        sb.append("  @ ").append(hit);
        int nr=0;
        for(Reference r: getReferencesTo(hit)){
          Function f=getFunctionContaining(r.getFromAddress());
          sb.append(" <- ").append(r.getFromAddress()).append(" ").append(f==null?"?":f.getName());
          nr++;
        }
        if(nr==0)sb.append("  NO-REFS");
        w.println(sb);n++;
        s=hit.add(1);
      }
      if(n==0)w.println("  (not found)");
    }
    w.close();println("done");
  }
}
