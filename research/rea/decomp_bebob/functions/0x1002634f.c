// rea decompile_all
// name: CMFCToolBar::UpdateButton
// address: 0x1002634f
// body: available
// range: 0x1002634f-0x10026403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CMFCToolBar::UpdateButton(int)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCToolBar::UpdateButton(CMFCToolBar *this,int param_1)

{
  uint uVar1;
  CCmdTarget *pCVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined **local_2c;
  undefined4 local_28;
  int local_24;
  CMFCToolBar *local_18;
  undefined4 local_c;
  
  pCVar2 = (CCmdTarget *)(**(code **)(*(int *)this + 0x3c4))();
  if (pCVar2 != (CCmdTarget *)0x0) {
    CCmdUI::CCmdUI((CCmdUI *)&local_2c);
    local_c = *(undefined4 *)(this + 0xbd4);
    local_2c = CMFCToolBarCmdUI::vftable;
    local_24 = param_1;
    local_18 = this;
    iVar3 = FUN_100261ef(this,param_1);
    if ((((iVar3 != 0) && (uVar1 = *(uint *)(iVar3 + 0x20), uVar1 != 0)) && (0x1ef < uVar1 - 0xf000)
        ) && (uVar1 < 0xff00)) {
      iVar5 = 0;
      iVar4 = (**(code **)(*(int *)pCVar2 + 0x14c))();
      if (iVar4 != 0) {
        iVar5 = *(int *)(pCVar2 + 0x74);
      }
      local_28 = *(undefined4 *)(iVar3 + 0x20);
      if ((iVar5 == 0) ||
         (((DAT_101685b0 != 0 && (*(uint *)(DAT_101685b0 + 0x24) <= *(uint *)(iVar3 + 0x20))) &&
          (*(uint *)(iVar3 + 0x20) <= *(uint *)(DAT_101685b0 + 0x28))))) {
        iVar3 = 0;
      }
      else {
        iVar3 = 1;
      }
      CCmdUI::DoUpdate((CCmdUI *)&local_2c,pCVar2,iVar3);
    }
  }
  return;
}

