import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.Memory;
import ghidra.program.disassemble.*;
import ghidra.app.decompiler.*;
import java.io.*;
import java.util.*;

// Usage: -postScript StrFile.java <strings.txt> <out.txt>
// Pour chaque chaine du fichier: adresse, instructions qui la referencent (code ou donnees),
// disassemblage a la demande autour des xref si besoin, puis decompilation des fonctions.
public class StrFile extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    List<String> strs=new ArrayList<>();
    try(BufferedReader r=new BufferedReader(new FileReader(a[0]))){String l;while((l=r.readLine())!=null)if(!l.isEmpty())strs.add(l);}
    PrintWriter w=new PrintWriter(new FileWriter(a[1]));
    Memory mem=currentProgram.getMemory();
    Map<Function,List<String>> fs=new LinkedHashMap<>();
    for(String s: strs){
      byte[] pat=(s+"\0").getBytes("US-ASCII");
      Address st=mem.getMinAddress();
      while(true){
        Address hit=mem.findBytes(st,pat,null,true,monitor);
        if(hit==null)break;
        boolean prevNul=false;try{prevNul=mem.getByte(hit.subtract(1))==0;}catch(Exception e){}
        if(prevNul){
          Set<Address> froms=new HashSet<>();
          for(Reference ref: getReferencesTo(hit))froms.add(ref.getFromAddress());
          for(Reference ref: getReferencesFrom(hit))froms.add(ref.getToAddress());
          w.println("str '"+s+"' @ "+hit+" xrefs="+froms.size());
          for(Address from: froms){
            // disassemble le contexte si pas encore d'instruction
            if(getInstructionAt(from)==null){
              for(long off=-0x40;off<=0x40;off+=2)try{disassemble(from.add(off));}catch(Exception e){}
            }
            Instruction in=getInstructionAt(from);
            Function f=getFunctionContaining(from);
            w.println("   <- "+from+" "+(f==null?"?":f.getName())+" "+(in==null?"?":in));
            if(f!=null)fs.computeIfAbsent(f,k->new ArrayList<>()).add(s);
          }
        }
        st=hit.add(1);
      }
    }
    // tente aussi les xref vers les adresses juste apres chaque string (tables de commandes)
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
