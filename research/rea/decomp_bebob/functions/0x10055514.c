// rea decompile_all
// name: CFrameWnd::OnDDEInitiate
// address: 0x10055514
// body: available
// range: 0x10055514-0x100555fe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: long __thiscall CFrameWnd::OnDDEInitiate(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

long __thiscall CFrameWnd::OnDDEInitiate(CFrameWnd *this,uint param_1,long param_2)

{
  int iVar1;
  AFX_MODULE_STATE *pAVar2;
  long lVar3;
  short sVar4;
  WCHAR local_210 [260];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pAVar2 = AfxGetModuleState();
  iVar1 = *(int *)(pAVar2 + 4);
  if ((((iVar1 != 0) && ((ATOM)param_2 != 0)) &&
      (sVar4 = (short)((uint)param_2 >> 0x10), sVar4 != 0)) &&
     (((ATOM)param_2 == *(ATOM *)(iVar1 + 0x98) && (sVar4 == *(short *)(iVar1 + 0x9a))))) {
    GlobalGetAtomNameW(*(ATOM *)(iVar1 + 0x98),local_210,0x103);
    GlobalAddAtomW(local_210);
    GlobalGetAtomNameW(*(ATOM *)(iVar1 + 0x9a),local_210,0x103);
    GlobalAddAtomW(local_210);
    SendMessageW((HWND)param_1,0x3e4,*(WPARAM *)(this + 0x20),*(LPARAM *)(iVar1 + 0x98));
  }
  lVar3 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return lVar3;
}

