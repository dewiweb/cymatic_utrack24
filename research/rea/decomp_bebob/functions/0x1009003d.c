// rea decompile_all
// name: CDockingPanesRow::MovePane
// address: 0x1009003d
// body: available
// range: 0x1009003d-0x100901ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    public: void __thiscall CDockingPanesRow::MovePane(class CPane *,class CPoint,int,void * &)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CDockingPanesRow::MovePane
          (CDockingPanesRow *this,CPane *param_1,int param_3,int param_4,undefined4 param_5,
          undefined4 param_6)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int local_44;
  int local_40;
  int local_3c;
  tagRECT local_38;
  LONG local_28;
  LONG local_24;
  LONG local_20;
  LONG local_1c;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  CPane::GetVirtualRect(param_1,(CRect *)&local_28);
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  ::GetWindowRect(*(HWND *)(param_1 + 0x20),&local_18);
  local_38.left = local_28;
  local_38.top = local_24;
  local_38.right = local_20;
  local_38.bottom = local_1c;
  OffsetRect(&local_38,param_3,param_4);
  local_40 = 0;
  local_3c = 0;
  if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
    local_3c = param_4;
    param_3 = param_4;
  }
  else {
    local_40 = param_3;
  }
  local_44 = param_3;
  iVar1 = IsEnoughSpaceToMove(this,param_1,-1 < param_3,&local_44);
  if (iVar1 == 0) goto LAB_1009019c;
  if ((*(uint *)(this + 0x40) & 0xa000) == 0) {
LAB_10090118:
    lVar2 = _labs(local_3c);
    iVar1 = local_44;
    lVar3 = _labs(local_44);
    if (lVar3 < lVar2) {
      local_3c = iVar1;
    }
  }
  else {
    lVar2 = _labs(local_40);
    lVar3 = _labs(local_44);
    if (lVar3 < lVar2) {
      local_40 = local_44;
    }
    else if ((*(uint *)(this + 0x40) & 0xa000) == 0) goto LAB_10090118;
  }
  OffsetRect(&local_18,local_40,local_3c);
  iVar1 = CheckPanes(this,&local_18,param_1,-1 < param_3,local_40,local_3c,param_5,param_6);
  if (iVar1 != 0) {
    CWnd::ScreenToClient(*(CWnd **)(this + 0x44),&local_18);
    (**(code **)(*(int *)param_1 + 0x234))
              (0,local_18.left,local_18.top,local_18.right - local_18.left,
               local_18.bottom - local_18.top,0x14,0);
  }
  (**(code **)(*(int *)this + 0x28))(param_1);
LAB_1009019c:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

