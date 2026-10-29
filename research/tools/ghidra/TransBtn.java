import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.app.decompiler.*;
import java.io.*;

// Valeurs des boutons transport: ecritures "MOV [reg+0x180], imm" + decompilation des handlers transport.
public class TransBtn extends GhidraScript {
  public void run() throws Exception {
    PrintWriter w=new PrintWriter(new FileWriter("C:\\Users\\Administrateur\\Documents\\GitHub\\cymatic_utrack24\\research\\notes\\transport_buttons.txt"));
    InstructionIterator it=currentProgram.getListing().getInstructions(true);
    w.println("== MOV [x+0x180], imm");
    while(it.hasNext()){
      Instruction in=it.next();
      if(!in.getMnemonicString().equals("MOV")||in.getNumOperands()!=2)continue;
      String o0=in.getDefaultOperandRepresentation(0);
      if(!o0.contains("+ 0x180]"))continue;
      if(in.getScalar(1)==null)continue;
      Function f=getFunctionContaining(in.getAddress());
      w.println(in.getAddress()+" "+(f==null?"?":f.getName())+" : "+in);
    }
    DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
    long[] fs={0x547780L,0x5450f0L,0x545070L,0x543ab0L,0x64de20L,0x541c20L,0x541cc0L};
    for(long a: fs){
      Function f=getFunctionAt(toAddr(a));
      if(f==null){w.println("?? "+Long.toHexString(a));continue;}
      w.println("\n=========== "+f.getName());
      DecompileResults r=d.decompileFunction(f,120,monitor);
      if(r.decompileCompleted())w.println(r.getDecompiledFunction().getC());
    }
    w.close();println("done");
  }
}
