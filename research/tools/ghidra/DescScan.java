import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import java.io.*;

// Usage: -postScript DescScan.java <out.txt>
// Scan whole image for SDS command descriptors:
//   {u32 vtable(0x602d0000..0x602fffff), u32 name*, u32 desc*, u32 usage*, u32 argc<16}
// name/usage must point to printable ASCII. Prints table + handler (vtable+0x1c).
public class DescScan extends GhidraScript {
  long toFile(long v){
    if(v>=0x60000000L && v<0x6040_0000L) return v-0x60005f84L;
    return -1;
  }
  String ascii(Memory mem,long rt){
    long off=toFile(rt);
    if(off<0)return null;
    StringBuilder sb=new StringBuilder();
    try{
      for(int i=0;i<140;i++){
        int b=mem.getByte(toAddr(off+i))&0xff;
        if(b==0)break;
        if(b<0x20||b>0x7e)return null;
        sb.append((char)b);
      }
      return sb.length()>=2?sb.toString():null;
    }catch(Exception e){return null;}
  }
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[0]));
    Memory mem=currentProgram.getMemory();
    Address end=mem.getMaxAddress();
    Address cur=mem.getMinAddress();
    int n=0;
    while(cur.compareTo(end)<0){
      long base=cur.getOffset();
      long v0;
      try{v0=mem.getInt(cur)&0xffffffffL;}catch(Exception e){cur=cur.add(4);continue;}
      if(v0<0x602d0000L||v0>0x60300000L){cur=cur.add(4);continue;}
      long v1=mem.getInt(cur.add(4))&0xffffffffL;
      long v2=mem.getInt(cur.add(8))&0xffffffffL;
      long v3=mem.getInt(cur.add(12))&0xffffffffL;
      long v4=mem.getInt(cur.add(16))&0xffffffffL;
      if(v4>16){cur=cur.add(4);continue;}
      String nm=ascii(mem,v1);
      if(nm==null||nm.length()>32){cur=cur.add(4);continue;}
      String ds=ascii(mem,v2);
      String us=ascii(mem,v3);
      // handler = vtable+0x1c
      String h="";
      long vto=toFile(v0);
      if(vto>=0){
        try{
          long hp=mem.getInt(toAddr(vto+0x1c))&0xffffffffL;
          long hf=toFile(hp);
          Function f=hf>=0?getFunctionContaining(toAddr(hf)):null;
          h=String.format("%08x %s",hp,f==null?"":f.getName());
        }catch(Exception e){}
      }
      w.println(String.format("@%06x vt=%08x argc=%d name=%-16s handler=%s | desc=%s | usage=%s",
        base,v0,v4,nm,h,ds==null?"?":ds,us==null?"?":us));
      n++;
      cur=cur.add(4);
    }
    w.println("total "+n);
    w.close();println("done "+n);
  }
}
