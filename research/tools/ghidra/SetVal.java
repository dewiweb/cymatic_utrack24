import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;
import ghidra.app.decompiler.*;
import java.io.*;
import java.util.*;

// Ou sont ecrits les types TLV 0x3740..0x374f (set-value) + decompilation des impl. 0x174/0x17c et du constructeur de valeur.
public class SetVal extends GhidraScript {
  public void run() throws Exception {
    PrintWriter w=new PrintWriter(new FileWriter("C:\\Users\\Administrateur\\Documents\\GitHub\\cymatic_utrack24\\research\\notes\\setval_decomp.txt"));
    Set<Function> hits=new LinkedHashSet<>();
    InstructionIterator it=currentProgram.getListing().getInstructions(true);
    while(it.hasNext()){
      Instruction in=it.next();
      for(int i=0;i<in.getNumOperands();i++){
        Scalar s=in.getScalar(i);
        if(s==null)continue;
        long v=s.getUnsignedValue();
        if((v>=0x3740&&v<=0x374f)||(v>=0x3780&&v<=0x378f&&v!=0x3784)||(v>=0x37c0&&v<=0x37cf)){
          Function f=getFunctionContaining(in.getAddress());
          w.println(in.getAddress()+" "+(f==null?"?":f.getName())+" : "+in);
          if(f!=null)hits.add(f);
        }
      }
    }
    DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
    long[] fs={0x682a40L,0x6834a0L,0x624830L,0x64df20L,0x64dd50L};
    for(long a: fs){Function f=getFunctionAt(toAddr(a));if(f!=null)hits.add(f);else w.println("?? "+Long.toHexString(a));}
    for(Function f: hits){
      w.println("\n=========== "+f.getName()+" callers: "+f.getCallingFunctions(monitor));
      DecompileResults r=d.decompileFunction(f,120,monitor);
      if(r.decompileCompleted())w.println(r.getDecompiledFunction().getC());
    }
    w.close();println("done");
  }
}
