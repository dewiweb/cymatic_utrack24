import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.address.Address;
import ghidra.app.decompiler.*;
import java.util.*;
import java.io.*;

public class Truth extends GhidraScript {
  DecompInterface d;
  PrintWriter w;
  Set<Function> done=new HashSet<>();
  void dump(Function f,String why) throws Exception{
    if(f==null||!done.add(f))return;
    StringBuilder cl=new StringBuilder();
    for(Function g: f.getCallingFunctions(monitor))cl.append(g.getName()).append(' ');
    w.println("=========== "+f.getName()+" ["+why+"] callers: "+cl);
    DecompileResults r=d.decompileFunction(f,90,monitor);
    if(r.decompileCompleted())w.println(r.getDecompiledFunction().getC());
  }
  public void run() throws Exception {
    d=new DecompInterface();d.openProgram(currentProgram);
    w=new PrintWriter(new FileWriter("C:\\Users\\Administrateur\\Documents\\GitHub\\cymatic_utrack24\\research\\notes\\truth_decomp.txt"));
    Listing L=currentProgram.getListing();
    Map<Long,String> want=new HashMap<>();
    want.put(0x3743L,"TLV 4337");want.put(0x3784L,"msg 8437");want.put(0x3748L,"TLV 4837");want.put(0x3708L,"TLV 0837");
    List<String> btn=new ArrayList<>();
    for(Instruction ins: L.getInstructions(true)){
      for(int i=0;i<ins.getNumOperands();i++)
        for(Object o: ins.getOpObjects(i))
          if(o instanceof Scalar){
            long v=((Scalar)o).getUnsignedValue();
            if(want.containsKey(v)){
              Function f=getFunctionContaining(ins.getAddress());
              w.println("# "+want.get(v)+" @ "+ins.getAddress()+" in "+(f!=null?f.getName():"?")+" : "+ins);
              dump(f,want.get(v));
            }
          }
      String s=ins.toString();
      if(s.startsWith("MOV dword ptr [")&&s.contains("+ 0x180],")&&ins.getScalar(1)!=null){
        Function f=getFunctionContaining(ins.getAddress());
        btn.add(ins.getAddress()+" "+(f!=null?f.getName():"?")+" : "+s);
      }
    }
    w.println("\n##### MOV [x+0x180], imm (valeur bouton transport) #####");
    for(String b: btn)w.println(b);
    w.close();println("done btn="+btn.size()+" funcs="+done.size());
  }
}
