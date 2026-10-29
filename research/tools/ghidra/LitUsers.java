import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.Memory;
import java.io.*;
import java.util.*;

// Usage: -postScript LitUsers.java <out.txt> <hexval> [hexval...]
// Finds every dword == hexval in memory, then every instruction/function referencing that slot.
public class LitUsers extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[0]));
    Memory mem=currentProgram.getMemory();
    for(int i=1;i<a.length;i++){
      long val=Long.parseLong(a[i],16);
      byte[] pat=new byte[]{(byte)val,(byte)(val>>8),(byte)(val>>16),(byte)(val>>24)};
      Address s=mem.getMinAddress();
      w.println("=== literal 0x"+a[i]);
      Set<String> seen=new HashSet<>();
      while(true){
        Address hit=mem.findBytes(s,pat,null,true,monitor);
        if(hit==null)break;
        for(Reference r: getReferencesTo(hit)){
          Function f=getFunctionContaining(r.getFromAddress());
          String k=(f==null?"?":f.getName())+"@"+(f==null?r.getFromAddress():f.getEntryPoint());
          if(seen.add(k))w.println("  "+hit+" <- "+r.getFromAddress()+" "+(f==null?"?":f.getName()));
        }
        s=hit.add(1);
      }
    }
    w.close();println("done");
  }
}
