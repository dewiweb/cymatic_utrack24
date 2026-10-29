import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import java.io.*;
import java.util.*;

// Usage: -postScript RttiScan.java <out.txt> <ClassName1> <ClassName2>...
// Class names WITHOUT the length prefix (e.g. BeBobStreamProcess).
// Finds "<len><name>" typeinfo-name string, then the typeinfo object
// (dword pair {ti_vtbl*, name*}), then vtables whose slot[-2]==typeinfo
// (GNU ARM EABI: vtable address point precedeed by offset-to-top(0/-4) and RTTI ptr).
public class RttiScan extends GhidraScript {
  long toFile(long v){
    if(v>=0x60000000L && v<0x6040_0000L) return v-0x60005f84L;
    return -1;
  }
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[0]));
    Memory mem=currentProgram.getMemory();
    Address lo=mem.getMinAddress(), hi=mem.getMaxAddress();
    for(int i=1;i<a.length;i++){
      String cn=a[i];
      String needle=cn.length()+cn;
      byte[] pat=needle.getBytes("US-ASCII");
      Address s=lo;
      List<Long> names=new ArrayList<>();
      while(true){
        Address hit=mem.findBytes(s,pat,null,true,monitor);
        if(hit==null)break;
        // next byte must be 0 (string end) and prev byte non-alpha
        try{
          if(mem.getByte(hit.add(needle.length()))==0) names.add(hit.getOffset());
        }catch(Exception e){}
        s=hit.add(1);
      }
      w.println("### "+cn+" name@"+names);
      for(long noff:names){
        long rt=noBase(noff);
        // find typeinfo obj: dword == rt of name at some offset in image
        List<Long> tiobjs=findDword(mem,rt);
        for(long tio:tiobjs){
          w.println(String.format("  typeinfo @%x",tio));
          // vtable: dword at V-8 (or V-4) == rt of typeinfo obj
          long tiRt=0x60005f84L+tio;
          for(long vo=0;vo<mem.getSize();vo+=4){
            try{
              long v=mem.getInt(toAddr(vo))&0xffffffffL;
              if(v==tiRt){
                // candidate: check preceding dword is 0 (offset-to-top)
                long prev=mem.getInt(toAddr(vo-4))&0xffffffffL;
                if(prev==0){
                  w.println(String.format("    vtable @%x (rt %08x)",vo+4,tiRt+4));
                  for(int k=0;k<12;k++){
                    long e=mem.getInt(toAddr(vo+4+k*4))&0xffffffffL;
                    long fe=toFile(e);
                    String tag="";
                    if(fe>=0){
                      Function f=getFunctionAt(toAddr(fe));
                      if(f==null)f=getFunctionContaining(toAddr(fe));
                      if(f!=null)tag=" -> "+f.getName()+"@"+f.getEntryPoint();
                    }
                    w.println(String.format("      +%02x %08x%s",k*4,e,tag));
                  }
                }
              }
            }catch(Exception e){}
          }
        }
      }
    }
    w.close();println("done");
  }
  long noBase(long off){return 0x60005f84L+off;}
  List<Long> findDword(Memory mem,long val){
    List<Long> r=new ArrayList<>();
    for(long o=0;o<mem.getSize();o+=4){
      try{
        if((mem.getInt(toAddr(o))&0xffffffffL)==val)r.add(o);
      }catch(Exception e){}
    }
    return r;
  }
}
