// rea decompile_all
// name: OnCreate
// address: 0x100ce01b
// body: available
// range: 0x100ce01b-0x100ce101 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCColorPopupMenu::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCColorPopupMenu::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall OnCreate(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  ANIMATION_TYPE AVar3;
  HWND pHVar4;
  CWnd *this_00;
  CFrameWnd *pCVar5;
  uint uVar6;
  
  if (((DAT_10166e54 == 0) || (*(int *)((int)this + 0x1eb4) != 0)) &&
     (iVar2 = OnCreate(this,param_1), iVar2 != -1)) {
    uVar6 = 0x50402808;
    AVar3 = CMFCPopupMenu::GetAnimationType(0);
    if ((AVar3 != 0) && (DAT_10166e54 == 0)) {
      uVar6 = 0x40402808;
    }
    iVar2 = (**(code **)(*(int *)((int)this + 0x10c4) + 0x44c))(this,uVar6 | 0x30,1,0,0,0,0);
    if (iVar2 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      pHVar4 = GetParent(*(HWND *)((int)this + 0x20));
      this_00 = CWnd::FromHandle(pHVar4);
      if (this_00 == (CWnd *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(this_00 + 0x20);
      }
      iVar2 = *(int *)((int)this + 0x10c4);
      *(undefined4 *)((int)this + 0x1118) = uVar1;
      uVar6 = (**(code **)(iVar2 + 0x1bc))();
      (**(code **)(iVar2 + 0x1e0))(uVar6 | 0x10);
      pCVar5 = DAT_10168578;
      if (DAT_10168578 == (CFrameWnd *)0x0) {
        pCVar5 = CWnd::GetTopLevelFrame(this_00);
      }
      CMFCPopupMenu::ActivatePopupMenu(pCVar5,this);
      (**(code **)(*(int *)this + 0x174))(1);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

