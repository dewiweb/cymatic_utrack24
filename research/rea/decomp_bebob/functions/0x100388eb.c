// rea decompile_all
// name: FID_conflict:LoadState
// address: 0x100388eb
// body: available
// range: 0x100388eb-0x10038926 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Different Base Names
    public: virtual int __thiscall CPaneFrameWnd::LoadState(char const *,unsigned int)
    public: virtual int __thiscall CPaneFrameWnd::LoadState(wchar_t const *,unsigned int)
    public: virtual int __thiscall CPaneFrameWnd::SaveState(char const *,unsigned int)
    public: virtual int __thiscall CPaneFrameWnd::SaveState(wchar_t const *,unsigned int)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall FID_conflict_LoadState(void *this,undefined4 param_1,undefined4 param_2)

{
  CWnd *pCVar1;
  CObject *pCVar2;
  undefined4 uVar3;
  
  pCVar1 = CWnd::FromHandlePermanent(*(HWND__ **)((int)this + 200));
  pCVar2 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CBasePane_1012a214,(CObject *)pCVar1);
  if (pCVar2 == (CObject *)0x0) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)(*(int *)pCVar2 + 0x228))(param_1,param_2,0xffffffff);
  }
  return uVar3;
}

