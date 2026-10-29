import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.Memory;
import java.io.*;

// Usage: -postScript ReadPtrs.java <out.txt> <hexaddr> [hexaddr...]
// Dumps 8 dwords at each address; for each, if it points at code, print the function there.
public class ReadPtrs extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[0]));
    Memory mem=currentProgram.getMemory();
    for(int i=1;i<a.length;i++){
      Address addr=toAddr(Long.parseLong(a[i],16));
      w.println("=== @ "+addr);
      for(int k=0;k<8;k++){
        try{
          int v=mem.getInt(addr.add(k*4));
          long lv=v&0xffffffffL;
          Address t=toAddr(lv);
          String tag="";
          if(mem.contains(t)){
            Function f=getFunctionAt(t);
            if(f==null)f=getFunctionContaining(t);
            tag=" -> "+(f==null?"data":f.getName()+"@"+f.getEntryPoint());
          }
          w.println(String.format("  +%02x: %08x%s",k*4,lv,tag));
        }catch(Exception e){w.println("  +"+(k*4)+": ??");}
      }
    }
    w.close();println("done");
  }
}
