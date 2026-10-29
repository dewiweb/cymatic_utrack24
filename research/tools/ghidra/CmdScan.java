import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import java.io.*;
import java.util.*;

// Usage: -postScript CmdScan.java <out.txt>
// 1) every callsite to known SDS/shell registration primitives
// 2) for each callsite function, also prints calls it makes to FUN_0007f01c-style fill
public class CmdScan extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[0]));
    // targets: descriptor-fill (0x7f01c), attach-to-shell (0x1a7b9c), group-add (0x1c70ac),
    // plus possible alternates discovered later passed as args
    TreeMap<Long,String> targets=new TreeMap<>();
    targets.put(0x0007f01cL,"FILL_DESC");
    targets.put(0x001a7b9cL,"ATTACH");
    targets.put(0x001c70acL,"GROUP_ADD");
    for(int i=1;i<a.length;i++)targets.put(Long.parseLong(a[i],16),"T"+a[i]);
    AddressSetView all=currentProgram.getMemory().getExecuteSet();
    Map<Function,List<String>> hits=new LinkedHashMap<>();
    for(Instruction ins: currentProgram.getListing().getInstructions(all,true)){
      if(!ins.getFlowType().isCall())continue;
      Reference[] refs=ins.getReferencesFrom();
      for(Reference r: refs){
        Long off=r.getToAddress().getOffset();
        String tn=targets.get(off);
        if(tn!=null){
          Function f=getFunctionContaining(ins.getAddress());
          hits.computeIfAbsent(f,k->new ArrayList<>())
              .add(tn+"@"+ins.getAddress());
        }
      }
    }
    w.println("=== CALLSITES ===");
    for(Map.Entry<Function,List<String>> e: hits.entrySet()){
      Function f=e.getKey();
      w.println((f==null?"?":f.getName()+" @ "+f.getEntryPoint())+" : "+e.getValue().size()+"x "+e.getValue().subList(0,Math.min(4,e.getValue().size())));
    }
    w.println("total funcs: "+hits.size());
    w.close();println("done "+hits.size());
  }
}
