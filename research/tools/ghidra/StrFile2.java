import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.Memory;
import ghidra.app.decompiler.*;
import java.io.*;
import java.util.*;

// Usage: -postScript StrFile2.java <strings.txt> <out.txt>
// Like StrFile but NO prevNul requirement (firmware strings carry 2-byte tags),
// and also scans for 4-byte LE pointers TO each string hit (string tables).
public class StrFile2 extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    List<String> strs=new ArrayList<>();
    try(BufferedReader r=new BufferedReader(new FileReader(a[0]))){String l;while((l=r.readLine())!=null)if(!l.isEmpty())strs.add(l);}
    PrintWriter w=new PrintWriter(new FileWriter(a[1]));
    Memory mem=currentProgram.getMemory();
    Map<Function,List<String>> fs=new LinkedHashMap<>();
    for(String s: strs){
      byte[] pat1=(s+"\0").getBytes("US-ASCII");
      byte[] pat2=(s+"\n\0").getBytes("US-ASCII");
      Address st=mem.getMinAddress();
      while(true){
        Address hit=mem.findBytes(st,pat1,null,true,monitor);
        Address hit2=mem.findBytes(st,pat2,null,true,monitor);
        if(hit2!=null && (hit==null || hit2.getOffset()<hit.getOffset()))hit=hit2;
        if(hit==null)break;
        if(hit==null)break;
        Set<Address> froms=new HashSet<>();
        for(Reference ref: getReferencesTo(hit))froms.add(ref.getFromAddress());
        // also scan for LE dword pointers to this string (missed refs / tables)
        byte[] ptr=new byte[4]; long hv=hit.getOffset();
        for(int i=0;i<4;i++)ptr[i]=(byte)(hv>>(8*i));
        Address ps=mem.getMinAddress();
        int pcount=0;
        while(true){
          Address ph=mem.findBytes(ps,ptr,null,true,monitor);
          if(ph==null)break;
          pcount++;
          for(Reference ref: getReferencesTo(ph))froms.add(ref.getFromAddress());
          for(Reference ref: getReferencesFrom(ph))froms.add(ref.getToAddress());
          froms.add(ph); // report table slot itself
          ps=ph.add(1);
        }
        w.println("str '"+s+"' @ "+hit+" codeXrefs+ptrslots="+froms.size()+" (ptrscan="+pcount+")");
        for(Address from: froms){
          if(getInstructionAt(from)==null){
            for(long off=-0x40;off<=0x40;off+=4)try{disassemble(from.add(off));}catch(Exception e){}
          }
          Instruction in=getInstructionAt(from);
          Function f=getFunctionContaining(from);
          w.println("   <- "+from+" "+(f==null?"?":f.getName())+" "+(in==null?"?":in));
          if(f!=null)fs.computeIfAbsent(f,k->new ArrayList<>()).add(s);
        }
        st=hit.add(1);
      }
    }
    DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
    for(Map.Entry<Function,List<String>> e: fs.entrySet()){
      Function f=e.getKey();
      w.println("\n=========== "+f.getName()+" @ "+f.getEntryPoint()+" strings "+e.getValue());
      DecompileResults res=d.decompileFunction(f,180,monitor);
      if(res.decompileCompleted())w.println(res.getDecompiledFunction().getC());
    }
    w.close();println("done "+fs.size());
  }
}
