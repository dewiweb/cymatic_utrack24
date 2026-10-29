import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;
import ghidra.app.decompiler.*;
import java.io.*;
import java.util.*;

// Usage: -postScript CallTree.java <out.txt> <depth> <namefilter|hexaddr>...
// Decompile chaque fonction racine (symboles exportes contenant le filtre, ou adresse) et ses appeles jusqu'a <depth>.
public class CallTree extends GhidraScript {
  public void run() throws Exception {
    String[] a=getScriptArgs();
    PrintWriter w=new PrintWriter(new FileWriter(a[0]));
    int depth=Integer.parseInt(a[1]);
    List<Function> roots=new ArrayList<>();
    for(int i=2;i<a.length;i++){
      if(a[i].matches("[0-9a-fA-F]{6,}")){Function f=getFunctionContaining(toAddr(Long.parseLong(a[i],16)));if(f!=null)roots.add(f);continue;}
      SymbolIterator it=currentProgram.getSymbolTable().getAllSymbols(true);
      while(it.hasNext()){Symbol s=it.next();
        if(s.getName().contains(a[i])){Function f=getFunctionAt(s.getAddress());if(f!=null&&!roots.contains(f))roots.add(f);}}
    }
    DecompInterface d=new DecompInterface();d.openProgram(currentProgram);
    Set<Function> done=new HashSet<>();
    for(Function r: roots){
      w.println("\n#################### ROOT "+r.getName()+" @ "+r.getEntryPoint());
      Deque<Object[]> q=new ArrayDeque<>();q.add(new Object[]{r,0});
      while(!q.isEmpty()){
        Object[] e=q.poll();Function f=(Function)e[0];int lv=(Integer)e[1];
        if(done.contains(f))continue;done.add(f);
        if(f.isThunk()||f.isExternal()){w.println("-- ext "+f.getName());continue;}
        w.println("\n=========== ["+lv+"] "+f.getName()+" @ "+f.getEntryPoint());
        DecompileResults res=d.decompileFunction(f,120,monitor);
        if(res.decompileCompleted())w.println(res.getDecompiledFunction().getC());
        if(lv<depth)for(Function c: f.getCalledFunctions(monitor))q.add(new Object[]{c,lv+1});
      }
    }
    w.close();println("done "+done.size());
  }
}
