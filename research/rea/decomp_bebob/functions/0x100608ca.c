// rea decompile_all
// name: CFrameImpl::ProcessMouseWheel
// address: 0x100608ca
// body: available
// range: 0x100608ca-0x100609bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: int __thiscall CFrameImpl::ProcessMouseWheel(unsigned int,long)
   
   Library: Visual Studio 2010 Release */

int __thiscall CFrameImpl::ProcessMouseWheel(CFrameImpl *this,uint param_1,long param_2)

{
  BOOL BVar1;
  int iVar2;
  HWND pHVar3;
  CWnd *pCVar4;
  LRESULT LVar5;
  
  if ((DAT_1016843c == (int *)0x0) || (BVar1 = IsWindow((HWND)DAT_1016843c[8]), BVar1 == 0)) {
    if ((*(int *)(this + 0xfc) != 0) &&
       (BVar1 = IsWindowVisible(*(HWND *)(*(int *)(this + 0xfc) + 0x20)), BVar1 != 0)) {
      LVar5 = SendMessageW(*(HWND *)(*(int *)(this + 0xfc) + 0x20),0x20a,param_1,param_2);
      return LVar5;
    }
    return 0;
  }
  if (DAT_1016843c[0x3bc] != 0) {
    SendMessageW((HWND)DAT_1016843c[8],0x20a,param_1,param_2);
  }
  iVar2 = (**(code **)(*DAT_1016843c + 0x200))();
  if (iVar2 != 0) {
    pHVar3 = GetFocus();
    pCVar4 = CWnd::FromHandle(pHVar3);
    if ((pCVar4 != (CWnd *)0x0) && (*(HWND *)(pCVar4 + 0x20) != (HWND)0x0)) {
      BVar1 = IsChild((HWND)DAT_1016843c[8],*(HWND *)(pCVar4 + 0x20));
      if (BVar1 != 0) {
        return 1;
      }
      if (DAT_1016843c == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = DAT_1016843c[8];
      }
      if (*(int *)(pCVar4 + 0x20) == iVar2) {
        return 1;
      }
    }
    SendMessageW((HWND)DAT_1016843c[8],0x10,0,0);
    return 1;
  }
  return 1;
}

