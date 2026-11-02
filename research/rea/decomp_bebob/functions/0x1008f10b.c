// rea decompile_all
// name: CDockingPanesRow::AddPane
// address: 0x1008f10b
// body: available
// range: 0x1008f10b-0x1008f28b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: virtual void __thiscall CDockingPanesRow::AddPane(class CPane *,enum
   AFX_DOCK_METHOD,struct tagRECT const *,int)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDockingPanesRow::AddPane
          (CDockingPanesRow *this,CPane *param_1,AFX_DOCK_METHOD param_2,tagRECT *param_3,
          int param_4)

{
  BOOL BVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_48;
  undefined4 local_44;
  CPane *local_40;
  uint local_3c;
  tagRECT local_38;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_40 = param_1;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  if (param_3 != (tagRECT *)0x0) {
    BVar1 = IsRectEmpty(param_3);
    if (BVar1 == 0) {
      CopyRect(&local_38,param_3);
      local_28.left = 0;
      local_28.top = 0;
      local_28.right = 0;
      local_28.bottom = 0;
      ::GetClientRect(*(HWND *)(*(int *)(this + 0x44) + 0x20),&local_28);
      GetWindowRect(this,(CRect *)&local_18);
      CWnd::ScreenToClient(*(CWnd **)(this + 0x44),&local_38);
      CWnd::ScreenToClient(*(CWnd **)(this + 0x44),&local_18);
      uVar2 = *(uint *)(this + 0x40);
      local_3c = uVar2 & 0x2000;
      if ((local_3c == 0) && ((uVar2 & 0x8000) == 0)) {
        iVar5 = *(int *)(this + 0x18) + local_28.left;
        iVar4 = local_38.top - local_18.top;
      }
      else {
        iVar5 = local_38.left - local_18.left;
        iVar4 = *(int *)(this + 0x18) + local_28.top;
      }
      goto LAB_1008f22a;
    }
  }
  iVar5 = 0;
  if (param_4 != 0) {
    iVar5 = CalcLastPaneOffset(this);
    if (0 < iVar5) {
      iVar5 = iVar5 + DAT_10166c58;
    }
  }
  GetClientRect(this,(CRect *)&local_18);
  uVar2 = *(uint *)(this + 0x40);
  local_3c = uVar2 & 0x2000;
  if ((local_3c == 0) && ((uVar2 & 0x8000) == 0)) {
    iVar4 = iVar5 + local_18.top;
    iVar5 = *(int *)(this + 0x18);
    if (*(int *)(this + 0x20) == 1) {
      iVar5 = iVar5 + *(int *)(this + 0x1c);
    }
  }
  else {
    iVar5 = iVar5 + local_18.left;
    iVar4 = *(int *)(this + 0x18);
    if (*(int *)(this + 0x20) == 1) {
      iVar4 = iVar4 + *(int *)(this + 0x1c);
    }
  }
LAB_1008f22a:
  if ((local_3c == 0) && ((uVar2 & 0x8000) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  (**(code **)(*(int *)local_40 + 0x25c))(&local_48,0,uVar3);
  (**(code **)(*(int *)local_40 + 0x234))(0,iVar5,iVar4,local_48,local_44,0x34,0);
  (**(code **)(*(int *)this + 100))(local_40);
  CPane::UpdateVirtualRect(local_40);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

