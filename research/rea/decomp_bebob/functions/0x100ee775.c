// rea decompile_all
// name: FUN_100ee775
// address: 0x100ee775
// body: available
// range: 0x100ee775-0x100ee840 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100ee83c to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100ee775(void *this,CCmdTarget *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined **local_2c;
  undefined4 local_28;
  int local_24;
  void *local_18;
  undefined4 local_c;
  
  CCmdUI::CCmdUI((CCmdUI *)&local_2c);
  puVar2 = *(undefined4 **)((int)this + 0x46c);
  local_c = *(undefined4 *)((int)this + 0x474);
  local_24 = 0;
  local_2c = CMFCTasksPaneToolBarCmdUI::vftable;
  local_18 = this;
  iVar5 = DAT_101685b0;
  while( true ) {
    if (puVar2 == (undefined4 *)0x0) {
      CDockablePane::OnUpdateCmdUI(this,(CFrameWnd *)param_1,param_2);
      return;
    }
    if (puVar2 == (undefined4 *)0x0) break;
    piVar1 = puVar2 + 2;
    puVar2 = (undefined4 *)*puVar2;
    puVar6 = *(undefined4 **)(*piVar1 + 0x10);
    while (puVar6 != (undefined4 *)0x0) {
      if (puVar6 == (undefined4 *)0x0) goto LAB_100ee83c;
      puVar3 = (undefined4 *)*puVar6;
      iVar4 = puVar6[2];
      if (((iVar5 != 0) && (*(uint *)(iVar5 + 0x24) <= *(uint *)(iVar4 + 0x24))) &&
         (*(uint *)(iVar4 + 0x24) <= *(uint *)(iVar5 + 0x28))) {
        param_2 = 0;
      }
      local_28 = *(undefined4 *)(iVar4 + 0x24);
      puVar6 = puVar3;
      if (((*(int *)(iVar4 + 0x24) != 0) && (0x1ef < *(uint *)(iVar4 + 0x24) - 0xf000)) &&
         (*(uint *)(iVar4 + 0x24) < 0xff00)) {
        CCmdUI::DoUpdate((CCmdUI *)&local_2c,param_1,param_2);
        iVar5 = DAT_101685b0;
      }
    }
    local_24 = local_24 + 1;
  }
LAB_100ee83c:
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

