// rea decompile_all
// name: CMFCToolBar::NextMenu
// address: 0x100299d3
// body: available
// range: 0x100299d3-0x10029ac8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual int __thiscall CMFCToolBar::NextMenu(void)
   
   Library: Visual Studio 2010 Release */

int __thiscall CMFCToolBar::NextMenu(CMFCToolBar *this)

{
  CMFCToolBarMenuButton *pCVar1;
  int iVar2;
  CObject *pCVar3;
  CObject *pCVar4;
  ANIMATION_TYPE AVar5;
  int iVar6;
  int local_8;
  
  pCVar1 = GetDroppedDownMenu(this,&local_8);
  if ((pCVar1 == (CMFCToolBarMenuButton *)0x0) ||
     (iVar2 = (**(code **)(*(int *)pCVar1 + 0xe8))(), iVar2 != 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(this + 0xbd4);
    iVar6 = local_8 + 1;
    AVar5 = DAT_10168438;
    if (iVar6 != local_8) {
      do {
        if (iVar2 <= iVar6) {
          iVar6 = 0;
        }
        pCVar3 = (CObject *)FUN_100261ef(this,iVar6);
        pCVar4 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420,pCVar3);
      } while (((pCVar4 == (CObject *)0x0) || ((*(uint *)(pCVar3 + 0x24) & 0x40000) != 0)) &&
              (iVar6 = iVar6 + 1, iVar6 != local_8));
      AVar5 = DAT_10168438;
      if (iVar6 != local_8) {
        AVar5 = CMFCPopupMenu::GetAnimationType(0);
        DAT_10168438 = 0;
        (**(code **)(*(int *)this + 0x3b0))(iVar6);
        if (-1 < *(int *)(this + 0xb84)) {
          pCVar3 = (CObject *)FUN_100261ef(this,*(int *)(this + 0xb84));
          pCVar3 = AfxDynamicDownCast((CRuntimeClass *)&PTR_s_CMFCToolBarMenuButton_10161420,pCVar3)
          ;
          if ((pCVar3 != (CObject *)0x0) &&
             (iVar2 = (**(code **)(*(int *)pCVar3 + 0x70))(), iVar2 != 0)) {
            SendMessageW(*(HWND *)(*(int *)(pCVar3 + 0x8c) + 0x20),0x100,0x24,0);
          }
        }
      }
    }
    DAT_10168438 = AVar5;
    iVar2 = 1;
  }
  return iVar2;
}

