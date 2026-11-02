// rea decompile_all
// name: OnCreate
// address: 0x100a34dc
// body: available
// range: 0x100a34dc-0x100a3602 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Multiple Matches With Same Base Name
    protected: int __thiscall CMFCRibbonPanelMenuBar::OnCreate(struct tagCREATESTRUCTA *)
    protected: int __thiscall CMFCRibbonPanelMenuBar::OnCreate(struct tagCREATESTRUCTW *)
   
   Library: Visual Studio 2010 Release */

void __thiscall OnCreate(void *this,tagCREATESTRUCTW *param_1)

{
  CToolTipCtrl **ppCVar1;
  int iVar2;
  uint uVar3;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  iVar2 = CMFCPopupMenuBar::OnCreate(this,param_1);
  if (iVar2 != -1) {
    if ((*(int *)((int)this + 0xd70) == 0) || (*(int *)((int)this + 0xd68) != 0)) {
      ppCVar1 = (CToolTipCtrl **)((int)this + 0xc94);
      CTooltipManager::CreateToolTip(ppCVar1,this,0x200);
      if ((*ppCVar1 != (CToolTipCtrl *)0x0) && (*(int *)(*ppCVar1 + 0x20) != 0)) {
        local_18.left = 0;
        local_18.top = 0;
        local_18.right = 0;
        local_18.bottom = 0;
        GetClientRect(*(HWND *)((int)this + 0x20),&local_18);
        SendMessageW(*(HWND *)(*ppCVar1 + 0x20),0x418,0,0x280);
        uVar3 = CWnd::GetDlgCtrlID(this);
        CToolTipCtrl::AddTool(*ppCVar1,this,(wchar_t *)0xffffffff,&local_18,uVar3);
      }
    }
    if ((*(int *)((int)this + 0xe20) != 0) && (*(int *)(*(int *)((int)this + 0xe20) + 0xb0) != 0)) {
      local_18.left = 0;
      local_18.top = 0;
      local_18.right = 0;
      local_18.bottom = 0;
      (**(code **)(*(int *)((int)this + 0xda8) + 0x160))(0x50000001,&local_18,this,1);
      *(int **)(*(int *)((int)this + 0xe20) + 0xa4) = (int *)((int)this + 0xda8);
    }
    if ((*(int *)((int)this + 0xe1c) != 0) && (-1 < *(int *)(*(int *)((int)this + 0xe1c) + 0x2c0)))
    {
      *(undefined4 *)((int)this + 0xd78) = 1;
      *(undefined4 *)((int)this + 0xd74) = 1;
    }
    GetCursorPos((LPPOINT)((int)this + 0xda0));
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

