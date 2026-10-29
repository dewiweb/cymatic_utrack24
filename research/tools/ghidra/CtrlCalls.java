import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.scalar.Scalar;
import ghidra.app.decompiler.*;
import java.util.*;
import java.util.regex.*;
import java.io.*;

public class CtrlCalls extends GhidraScript {
  public void run() throws Exception {
    DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
    Listing L=currentProgram.getListing();
    PrintWriter w=new PrintWriter(new FileWriter("C:\\Users\\Administrateur\\Documents\\GitHub\\cymatic_utrack24\\research\\notes\\ctrl_calls.txt"));
    Pattern p=Pattern.compile("\\+ 0x17[4c]\\)\\)\\)?\\(([^;]*)\\);");
    int n=0;
    for(Function f: currentProgram.getFunctionManager().getFunctions(true)){
      long ep=f.getEntryPoint().getOffset();
      if(ep>0x600000L)continue;
      boolean hit=false;
      for(Instruction ins: L.getInstructions(f.getBody(),true)){
        if(!ins.getFlowType().isCall())continue;
        for(Object o: ins.getOpObjects(0))
          if(o instanceof Scalar){long v=((Scalar)o).getUnsignedValue();if(v==0x174||v==0x17c)hit=true;}
      }
      if(!hit)continue;
      DecompileResults r=d.decompileFunction(f,60,monitor);
      if(!r.decompileCompleted())continue;
      String c=r.getDecompiledFunction().getC();
      Matcher m=p.matcher(c);
      StringBuilder sb=new StringBuilder();
      while(m.find())sb.append("   args(").append(m.group(1)).append(")\n");
      if(sb.length()==0)continue;
      StringBuilder cl=new StringBuilder();
      for(Function g: f.getCallingFunctions(monitor))cl.append(g.getName()).append(' ');
      w.println("== "+f.getName()+" callers: "+cl);
      w.print(sb);n++;
    }
    w.close();
    println("CTRL functions: "+n);
  }
}
