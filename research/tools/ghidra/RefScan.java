import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.program.model.address.*;
import ghidra.program.model.mem.*;
import java.io.*;
import java.util.*;

// Usage: -postScript RefScan.java <out.txt> <startHex> <endHex>
// Lists every defined data/string inside [start,end] plus every reference FROM
// anywhere TO any address in the range (walks all memory dwords + xref table).
public class RefScan extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[0]));
    Address start=toAddr(a[1]), end=toAddr(a[2]);
    Memory mem=currentProgram.getMemory();
    ReferenceManager rm=currentProgram.getReferenceManager();
    AddressSetView range=new AddressSet(start,end);
    // 1) all references whose TO address is in range
    ReferenceIterator it=rm.getReferenceIterator(start);
    int cnt=0;
    while(it.hasNext()){
      Reference r=it.next();
      if(r.getToAddress().compareTo(end)>0)break;
      Function f=getFunctionContaining(r.getFromAddress());
      w.println("REF "+r.getFromAddress()+" -> "+r.getToAddress()+" "+r.getReferenceType()+
                " func="+(f==null?"?":f.getName()));
      cnt++;
    }
    w.println("total refs into range: "+cnt);
    // 2) list functions overlapping the range (code there?)
    FunctionManager fm=currentProgram.getFunctionManager();
    int f2=0;
    for(Function f: fm.getFunctions(range,true)){w.println("FUNC "+f.getEntryPoint()+" "+f.getName());f2++;}
    w.println("funcs in range: "+f2);
    // 3) instruction count in range
    int ins=0;
    for(Instruction i: currentProgram.getListing().getInstructions(range,true))ins++;
    w.println("instructions in range: "+ins);
    w.close();println("done");
  }
}
