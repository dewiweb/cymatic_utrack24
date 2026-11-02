// rea decompile_all
// name: OnCreate
// address: 0x100a85e6
// body: available
// range: 0x100a85e6-0x100a8696 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCColorBar::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCColorBar::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2010 Release */

undefined4 __thiscall OnCreate(void *this,tagCREATESTRUCTW *param_1)

{
  int iVar1;
  HWND pHVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined8 uVar4;
  void *local_c;
  void *pvStack_8;
  
  local_c = this;
  pvStack_8 = this;
  iVar1 = CMFCPopupMenuBar::OnCreate(this,param_1);
  if (iVar1 == -1) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar4 = FUN_10026c8e(extraout_ECX,extraout_EDX,&local_c);
    *(undefined4 *)((int)this + 0xdc0) = *(undefined4 *)uVar4;
    uVar3 = ((undefined4 *)uVar4)[1];
    *(int *)((int)this + 0xdc0) = *(int *)((int)this + 0xdc0) + 1;
    *(undefined4 *)((int)this + 0xb20) = 0;
    *(undefined4 *)((int)this + 0xdc4) = uVar3;
    *(int *)((int)this + 0xdc4) = *(int *)((int)this + 0xdc4) + 1;
    *(int *)((int)this + 0xd6c) = (*(int *)((int)this + 0xdc4) * 3) / 2;
    (**(code **)(*(int *)this + 0x458))();
    if (*(int *)((int)this + 0xde4) == 0) {
      if (*(int *)((int)this + 0xde8) != 0) {
        pHVar2 = SetCapture(*(HWND *)((int)this + 0x20));
        CWnd::FromHandle(pHVar2);
      }
    }
    else {
      pHVar2 = SetCapture(*(HWND *)((int)this + 0x20));
      CWnd::FromHandle(pHVar2);
      *(undefined4 *)(*(int *)((int)this + 0xde4) + 0xac) = 0;
    }
    uVar3 = 0;
  }
  return uVar3;
}

