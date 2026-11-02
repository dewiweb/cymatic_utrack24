// rea decompile_all
// name: CMFCControlContainer::SubclassDlgControls
// address: 0x1001ae3e
// body: available
// range: 0x1001ae3e-0x1001af06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: int __thiscall CMFCControlContainer::SubclassDlgControls(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCControlContainer::SubclassDlgControls(CMFCControlContainer *this)

{
  HWND pHVar1;
  CWnd *pCVar2;
  CWnd *this_00;
  HWND__ *pHVar3;
  int iVar4;
  WCHAR local_80c [1026];
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar4 = *(int *)(this + 4);
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0x20) != 0)) {
    pHVar1 = GetWindow(*(HWND *)(iVar4 + 0x20),5);
    pCVar2 = CWnd::FromHandle(pHVar1);
    while (pCVar2 != (CWnd *)0x0) {
      GetClassNameW(*(HWND *)(pCVar2 + 0x20),local_80c,0x400);
      this_00 = (CWnd *)CreateDlgControl(local_80c);
      if (this_00 != (CWnd *)0x0) {
        CObArray::SetAtGrow((CObArray *)(this + 8),*(int *)(this + 0x10),(CObject *)this_00);
        if (pCVar2 == (CWnd *)0x0) {
          pHVar3 = (HWND__ *)0x0;
        }
        else {
          pHVar3 = *(HWND__ **)(pCVar2 + 0x20);
        }
        CWnd::SubclassWindow(this_00,pHVar3);
      }
      pHVar1 = GetWindow(*(HWND *)(pCVar2 + 0x20),2);
      pCVar2 = CWnd::FromHandle(pHVar1);
    }
  }
  iVar4 = __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return iVar4;
}

