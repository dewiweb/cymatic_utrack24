// rea decompile_all
// name: Concurrency::details::WorkQueue::~WorkQueue
// address: 0x549710
// body: available
// range: 0x549710-0x549765 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: __thiscall Concurrency::details::WorkQueue::~WorkQueue(void)
   
   Library: Visual Studio 2010 Debug */

void __thiscall Concurrency::details::WorkQueue::~WorkQueue(WorkQueue *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d7748;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_005376f0(DAT_00955fd4 ^ (uint)&stack0xfffffffc,this);
  local_8 = 0xffffffff;
  FUN_0054f510();
  ExceptionList = local_10;
  return;
}

