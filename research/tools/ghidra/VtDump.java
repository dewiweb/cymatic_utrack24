import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import java.io.*;

// Usage: -postScript VtDump.java <out.txt> <litaddr>...
// At each litaddr: read stored dword = runtime ptr (0x60xxxxxx -> file off -0x60005f84,
// small -> file off directly). Then dump 16 dwords at that vtable resolving funcs.
public class VtDump extends GhidraScript {
  long toFile(long v){
    if(v>=0x60000000L && v<0x6040_0000L) return v-0x60005f84L;
    return v;
  }
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[0]));
    Memory mem=currentProgram.getMemory();
    for(int i=1;i<a.length;i++){
      Address lit=toAddr(Long.parseLong(a[i],16));
      long p;
      try{p=mem.getInt(lit)&0xffffffffL;}catch(Exception e){w.println("=== @"+lit+" unreadable");continue;}
      long fp=toFile(p);
      Address vt=toAddr(fp);
      w.println(String.format("=== lit %s -> %08x -> vt @%s",lit,p,vt));
      for(int k=0;k<16;k++){
        try{
          long v=mem.getInt(vt.add(k*4))&0xffffffffL;
          long fv=toFile(v);
          Address t=toAddr(fv);
          String tag="";
          if(mem.contains(t)){
            Function f=getFunctionAt(t);
            if(f==null)f=getFunctionContaining(t);
            tag=" -> "+(f==null?"DATA":f.getName()+"@"+f.getEntryPoint());
          }
          w.println(String.format("  +%02x: %08x%s",k*4,v,tag));
        }catch(Exception e){w.println(String.format("  +%02x: ??",k*4));}
      }
    }
    w.close();println("done");
  }
}
