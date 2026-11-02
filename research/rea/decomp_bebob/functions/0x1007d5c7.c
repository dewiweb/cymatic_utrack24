// rea decompile_all
// name: CMFCToolBarMenuButton::GetImageRect
// address: 0x1007d5c7
// body: available
// range: 0x1007d5c7-0x1007d617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCToolBarMenuButton::GetImageRect(class CRect &)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBarMenuButton::GetImageRect(CMFCToolBarMenuButton *this,CRect *param_1)

{
  CMFCVisualManager *pCVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined8 uVar3;
  CMFCToolBarMenuButton *local_c;
  CMFCToolBarMenuButton *pCStack_8;
  
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x54);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x58);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x60);
  local_c = this;
  pCStack_8 = this;
  pCVar1 = CMFCVisualManager::GetInstance();
  iVar2 = (**(code **)(*(int *)pCVar1 + 0x2d0))();
  *(int *)param_1 = *(int *)param_1 + iVar2;
  pCVar1 = CMFCVisualManager::GetInstance();
  uVar3 = FUN_10026c8e(extraout_ECX,extraout_EDX,&local_c);
  iVar2 = (**(code **)(*(int *)pCVar1 + 0x2d0))();
  *(int *)(param_1 + 8) = iVar2 + *(int *)param_1 + *(int *)uVar3;
  return;
}

