// rea decompile_all
// name: AllocateHeap
// address: 0x1000ae0e
// body: available
// range: 0x1000ae0e-0x1000ae33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000ae28 to 0x10001000 FUN_10001000 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    private: void __thiscall ATL::CTempBuffer<char,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
    private: void __thiscall ATL::CTempBuffer<unsigned char,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
    private: void __thiscall ATL::CTempBuffer<wchar_t,10,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
    private: void __thiscall ATL::CTempBuffer<wchar_t,128,class
   ATL::CCRTAllocator>::AllocateHeap(unsigned int)
   
   Library: Visual Studio 2010 Release */

void __thiscall AllocateHeap(void *this,size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_1);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10001000((undefined4 *)0x8007000e);
  }
  *(void **)this = pvVar1;
  return;
}

