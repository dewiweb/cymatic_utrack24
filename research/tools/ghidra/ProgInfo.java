import ghidra.app.script.GhidraScript;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.address.*;

// Usage: -postScript ProgInfo.java  -> prints memory blocks + function count
public class ProgInfo extends GhidraScript {
  public void run() throws Exception {
    println("PROGRAM: " + currentProgram.getName());
    println("IMAGE BASE: " + currentProgram.getImageBase());
    for (MemoryBlock b : currentProgram.getMemory().getBlocks())
      println("BLOCK " + b.getName() + " " + b.getStart() + " - " + b.getEnd() +
              " size=0x" + Long.toHexString(b.getSize()) + " exec=" + b.isExecute() + " init=" + b.isInitialized());
    FunctionManager fm = currentProgram.getFunctionManager();
    println("FUNCTIONS: " + fm.getFunctionCount());
    println("INSTRUCTIONS approx: " + currentProgram.getListing().getNumInstructions());
    println("SYMBOLS: " + currentProgram.getSymbolTable().getNumSymbols());
  }
}
