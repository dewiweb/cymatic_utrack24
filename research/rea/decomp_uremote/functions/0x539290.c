// rea decompile_all
// name: FID_conflict:~CAtlWinModule
// address: 0x539290
// body: available
// range: 0x539290-0x5392e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: __thiscall ATL::CAtlWinModule::~CAtlWinModule(void)
    public: __thiscall CPaneContainerGC::~CPaneContainerGC(void)
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug */

void FID_conflict__CAtlWinModule(void)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005d1948;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00579650(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  local_8 = 0xffffffff;
  FUN_00539350();
  ExceptionList = local_10;
  return;
}

