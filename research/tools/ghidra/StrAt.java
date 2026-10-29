import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import java.io.*;

// Usage: -postScript StrAt.java <out.txt> <litaddr>...
// At each litaddr read stored dword; convert 0x60xxxxxx->file off; if it lands on
// ASCII, print the string; else print raw value.
public class StrAt extends GhidraScript {
  long toFile(long v){
    if(v>=0x60000000L && v<0x6040_0000L) return v-0x60005f84L;
    return v;
  }
  String readStr(Memory mem,long off){
    StringBuilder sb=new StringBuilder();
    try{
      for(int i=0;i<160;i++){
        int b=mem.getByte(toAddr(off+i))&0xff;
        if(b==0)break;
        if(b<0x20||b>0x7e)return null;
        sb.append((char)b);
      }
    }catch(Exception e){return null;}
    return sb.length()>0?sb.toString():null;
  }
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[0]));
    Memory mem=currentProgram.getMemory();
    for(int i=1;i<a.length;i++){
      Address lit=toAddr(Long.parseLong(a[i],16));
      long p;
      try{p=mem.getInt(lit)&0xffffffffL;}catch(Exception e){w.println(lit+" unreadable");continue;}
      long fp=toFile(p);
      String s=readStr(mem,fp);
      w.println(String.format("%s -> %08x %s",lit,p,s!=null?"\""+s+"\"":"(bin)"));
    }
    w.close();println("done");
  }
}
