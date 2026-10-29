import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.address.*;
import java.io.*;

// Usage: -postScript XrefTo.java x <out.txt> <hexaddr> [hexaddr...]
// For each address: list every reference-from (instruction + function) with access type.
public class XrefTo extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[1]));
    for(int i=2;i<a.length;i++){
      Address addr=toAddr(Long.parseLong(a[i],16));
      w.println("=== refs to "+addr);
      for(Reference r: getReferencesTo(addr)){
        Function f=getFunctionContaining(r.getFromAddress());
        w.println("  "+r.getFromAddress()+" "+r.getReferenceType()+" in "+(f==null?"?":f.getName()+" @ "+f.getEntryPoint()));
      }
    }
    w.close();println("done");
  }
}
