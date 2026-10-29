import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.address.Address;
import ghidra.app.decompiler.*;
import java.io.*;

public class ClassOf extends GhidraScript {
  String rtti(Address vtEntry){
    try{
      for(int k=0;k<0x800;k+=4){
        Address slot=vtEntry.subtract(k);
        long col=getInt(slot.subtract(4))&0xffffffffL;
        Address c=toAddr(col);
        if(getInt(c)!=0)continue;
        long td=getInt(c.add(12))&0xffffffffL;
        Address t=toAddr(td).add(8);
        StringBuilder sb=new StringBuilder();
        for(int i=0;i<120;i++){int b=getByte(t.add(i))&0xff;if(b==0)break;sb.append((char)b);}
        if(sb.toString().startsWith(".?AV"))return sb+" slot+0x"+Integer.toHexString(k);
      }
    }catch(Exception e){}
    return null;
  }
  public void run() throws Exception {
    DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
    PrintWriter w=new PrintWriter(new FileWriter("C:\\Users\\Administrateur\\Documents\\GitHub\\cymatic_utrack24\\research\\notes\\ctrl_classes.txt"));
    long[] callers={0x548860L,0x535750L,0x5324b0L,0x5324f0L,0x532550L,0x5325b0L,0x5318f0L,0x531950L,0x5319d0L,0x5315d0L,
      0x530310L,0x530410L,0x530720L,0x530820L,0x530b30L,0x52e8a0L,0x52e6c0L,0x52e720L,0x52e780L,0x52e7e0L,0x52e840L,
      0x52e2b0L,0x52e520L,0x528fa0L,0x537350L,0x5262c0L,0x526290L,0x5261f0L,0x520b70L,0x526180L,0x51da00L,0x516c30L,0x512810L};
    for(long a: callers){
      Function f=getFunctionAt(toAddr(a));if(f==null){w.println("? "+Long.toHexString(a));continue;}
      String cls=null;
      for(Reference r: getReferencesTo(f.getEntryPoint())){
        if(getInstructionAt(r.getFromAddress())!=null)continue;
        cls=rtti(r.getFromAddress());if(cls!=null)break;
      }
      if(cls==null)for(Function g: f.getCallingFunctions(monitor))
        for(Reference r: getReferencesTo(g.getEntryPoint())){
          if(getInstructionAt(r.getFromAddress())!=null)continue;
          String c2=rtti(r.getFromAddress());if(c2!=null){cls="(via "+g.getName()+") "+c2;break;}
        }
      w.println(f.getName()+" -> "+cls);
      DecompileResults res=d.decompileFunction(f,60,monitor);
      if(res.decompileCompleted()){String c=res.getDecompiledFunction().getC();w.println(c.length()>1500?c.substring(0,1500):c);}
    }
    w.close();println("done");
  }
}
