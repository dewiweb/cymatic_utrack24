// rea decompile_all
// name: CMFCRibbonDefaultPanelButton::SetACCData
// address: 0x100b647f
// body: available
// range: 0x100b647f-0x100b6527 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCRibbonDefaultPanelButton::SetACCData(class CWnd *,class
   CAccessibilityData &)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCRibbonDefaultPanelButton::SetACCData
          (CMFCRibbonDefaultPanelButton *this,CWnd *param_1,CAccessibilityData *param_2)

{
  int iVar1;
  undefined **ppuVar2;
  
  iVar1 = CMFCRibbonButton::SetACCData((CMFCRibbonButton *)this,param_1,param_2);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(int *)(this + 0x20) == *(int *)(this + 0x18)) &&
     (*(int *)(this + 0x24) == *(int *)(this + 0x1c))) {
    *(undefined4 *)(param_2 + 0x18) = 0x16;
    FUN_100022b0(param_2 + 4,L"group");
    iVar1 = *(int *)(this + 0x168);
    ((tagRECT *)(param_2 + 0x24))->left = *(LONG *)(iVar1 + 0x6c);
    *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(iVar1 + 0x70);
    *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)(iVar1 + 0x74);
    *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(iVar1 + 0x78);
    CWnd::ClientToScreen(param_1,(tagRECT *)(param_2 + 0x24));
    *(undefined4 *)(param_2 + 0x1c) = 0;
    ppuVar2 = &PTR_1011d390;
  }
  else {
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 0x40000000;
    *(undefined4 *)(param_2 + 0x18) = 0x3a;
    FUN_100022b0(param_2 + 0x14,L"Open");
    iVar1 = (**(code **)(*(int *)this + 0x40))();
    if (iVar1 == 0) {
      return 1;
    }
    *(uint *)(param_2 + 0x1c) = *(uint *)(param_2 + 0x1c) | 8;
    ppuVar2 = (undefined **)L"Close";
  }
  FUN_100022b0(param_2 + 0x14,(short *)ppuVar2);
  return 1;
}

