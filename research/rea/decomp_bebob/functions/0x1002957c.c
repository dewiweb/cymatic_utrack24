// rea decompile_all
// name: CMFCToolBar::EnableContextMenuItems
// address: 0x1002957c
// body: available
// range: 0x1002957c-0x100296e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100296b2 to 0x10009068 FUN_10009068 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: virtual int __thiscall CMFCToolBar::EnableContextMenuItems(class CMFCToolBarButton
   *,class CMenu *)
   
   Library: Visual Studio 2010 Release */

int __thiscall
CMFCToolBar::EnableContextMenuItems(CMFCToolBar *this,CMFCToolBarButton *param_1,CMenu *param_2)

{
  int *piVar1;
  CMFCToolBarButton *pCVar2;
  int iVar3;
  undefined4 *puVar4;
  CMFCToolBarButton *pCVar5;
  code *pcVar6;
  bool bVar7;
  UINT uIDCheckItem;
  
  bVar7 = (*(uint *)(this + 0x90) & 0xa000) != 0;
  iVar3 = (**(code **)(*(int *)param_1 + 0x68))(param_2);
  pcVar6 = EnableMenuItem_exref;
  if (iVar3 != 0) goto LAB_1002968e;
  if (*(int *)(param_1 + 0xc) == 0) {
LAB_100295c6:
    EnableMenuItem(*(HMENU *)(param_2 + 4),0x420f,1);
  }
  else {
    if (*(int *)(param_1 + 4) == 0) {
      iVar3 = *(int *)(param_1 + 0x34);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x38);
    }
    if (iVar3 < 0) goto LAB_100295c6;
  }
  if ((*(int *)(param_1 + 0x20) == -1) || (*(int *)(param_1 + 0x20) == 0)) {
    EnableMenuItem(*(HMENU *)(param_2 + 4),0x420e,1);
  }
  if ((*(int *)(param_1 + 8) != 0) || ((*(int *)(param_1 + 0x18) != 0 && (bVar7)))) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uIDCheckItem = 0x4213;
    }
    else {
      uIDCheckItem = 0x4214;
    }
  }
  else {
    uIDCheckItem = 0x4212;
  }
  CheckMenuItem(*(HMENU *)(param_2 + 4),uIDCheckItem,8);
  pcVar6 = EnableMenuItem_exref;
  if ((*(int *)(param_1 + 0x18) != 0) && (bVar7)) {
    EnableMenuItem(*(HMENU *)(param_2 + 4),0x4212,1);
  }
  iVar3 = (**(code **)(*(int *)this + 0x408))(param_1);
  if (iVar3 != 0) {
    EnableMenuItem(*(HMENU *)(param_2 + 4),0x4212,1);
    EnableMenuItem(*(HMENU *)(param_2 + 4),0x4213,1);
    EnableMenuItem(*(HMENU *)(param_2 + 4),0x4214,1);
    *(undefined4 *)(param_1 + 8) = 1;
  }
LAB_1002968e:
  puVar4 = *(undefined4 **)(this + 0xbcc);
  pCVar2 = (CMFCToolBarButton *)0x0;
  while( true ) {
    pCVar5 = pCVar2;
    if (puVar4 == (undefined4 *)0x0) {
      return 1;
    }
    if (puVar4 == (undefined4 *)0x0) break;
    piVar1 = puVar4 + 2;
    puVar4 = (undefined4 *)*puVar4;
    pCVar2 = (CMFCToolBarButton *)*piVar1;
    if ((CMFCToolBarButton *)*piVar1 == param_1) {
      if (pCVar5 == (CMFCToolBarButton *)0x0) {
        (*pcVar6)(*(undefined4 *)(param_2 + 4),0x4215,1);
      }
      else if (((byte)pCVar5[0x24] & 1) != 0) {
        CheckMenuItem(*(HMENU *)(param_2 + 4),0x4215,8);
      }
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_10009068();
}

