import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.address.Address;
import ghidra.program.model.data.StringDataInstance;
import ghidra.app.decompiler.*;
import java.util.*;
import java.util.regex.*;
import java.io.*;

public class WidgetMap extends GhidraScript {
  String strAt(Address a){
    Data dt=getDataAt(a);
    if(dt!=null&&dt.hasStringValue())return String.valueOf(dt.getValue());
    try{
      StringBuilder sb=new StringBuilder();
      for(int i=0;i<64;i++){int c=getByte(a.add(i))&0xff;if(c==0)break;if(c<32||c>126)return null;sb.append((char)c);}
      return sb.length()>=2?sb.toString():null;
    }catch(Exception e){return null;}
  }
  public void run() throws Exception {
    DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
    PrintWriter w=new PrintWriter(new FileWriter("C:\\Users\\Administrateur\\Documents\\GitHub\\cymatic_utrack24\\research\\notes\\widget_map.txt"));
    long[] handlers={0x541c20L,0x541cc0L,0x543ab0L,0x544090L,0x544130L,0x5441d0L,0x544270L,0x544310L,0x5443b0L,0x544450L,
      0x5444f0L,0x544810L,0x5448b0L,0x544950L,0x5449f0L,0x544b00L,0x544ba0L,0x544c40L,0x544ce0L,0x544d80L,0x544e20L,
      0x544ec0L,0x544f60L,0x5450f0L,0x545200L,0x545290L,0x545320L,0x5453a0L,0x545420L,0x546ef0L,0x546f80L,0x547350L,
      0x547400L,0x547780L};
    Pattern off=Pattern.compile("param_1 \\+ (0x[0-9a-f]{3,5})\\)");
    Set<Long> offsets=new TreeSet<>();
    for(long h: handlers){
      Function f=getFunctionAt(toAddr(h));if(f==null)continue;
      w.println("### handler "+f.getName());
      for(Function c: f.getCallingFunctions(monitor)){
        DecompileResults r=d.decompileFunction(c,60,monitor);
        if(!r.decompileCompleted())continue;
        String code=r.getDecompiledFunction().getC();
        // lignes du caller qui menent a l'appel du handler
        for(String line: code.split("\n")){
          if(line.contains(f.getName())||line.contains("== (int *)(param_1 +")||line.contains("== param_1 +")){
            w.println("   "+c.getName()+": "+line.trim());
            Matcher m=off.matcher(line);while(m.find())offsets.add(Long.decode(m.group(1)));
          }
        }
      }
    }
    // constructeurs: instructions utilisant ces offsets + chaines proches
    w.println("\n##### offset widget -> chaines proches (constructeurs) #####");
    Listing L=currentProgram.getListing();
    for(Function f: currentProgram.getFunctionManager().getFunctions(toAddr(0x500000L),true)){
      if(f.getEntryPoint().getOffset()>0x560000L)break;
      List<Instruction> ins=new ArrayList<>();
      for(Instruction i: L.getInstructions(f.getBody(),true))ins.add(i);
      for(int k=0;k<ins.size();k++){
        Instruction i=ins.get(k);
        if(!i.getMnemonicString().equals("LEA")&&!i.getMnemonicString().equals("MOV"))continue;
        for(Object o: i.getOpObjects(1)){
          if(!(o instanceof Scalar))continue;
          long v=((Scalar)o).getUnsignedValue();
          if(!offsets.contains(v))continue;
          List<String> ss=new ArrayList<>();
          for(int j=Math.max(0,k-25);j<Math.min(ins.size(),k+25);j++)
            for(Reference r: ins.get(j).getReferencesFrom()){
              String s=strAt(r.getToAddress());if(s!=null&&!ss.contains(s))ss.add(s);
            }
          if(!ss.isEmpty())w.println(String.format("0x%x %s %s : %s",v,f.getName(),i.getAddress(),ss));
        }
      }
    }
    w.close();println("done offsets="+offsets.size());
  }
}
