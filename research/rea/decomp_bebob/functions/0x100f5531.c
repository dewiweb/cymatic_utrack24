// rea decompile_all
// name: CMFCColorPickerCtrl::OnMouseMove
// address: 0x100f5531
// body: available
// range: 0x100f5531-0x100f572e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCColorPickerCtrl::OnMouseMove(unsigned int,class CPoint)
   
   Library: Visual Studio 2010 Release */

void __thiscall
CMFCColorPickerCtrl::OnMouseMove(CMFCColorPickerCtrl *this,byte param_1,int param_3,int param_4)

{
  double dVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  code *pcVar7;
  double dVar8;
  tagRECT local_28;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  pHVar2 = GetCapture();
  pCVar3 = CWnd::FromHandle(pHVar2);
  if (pCVar3 != (CWnd *)this) goto LAB_100f5720;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  iVar4 = local_18.left;
  if (local_18.left <= param_3) {
    iVar4 = param_3;
  }
  if (iVar4 < local_18.right) {
    if (param_3 < local_18.left) {
      param_3 = local_18.left;
    }
  }
  else {
    param_3 = local_18.right;
  }
  iVar4 = local_18.top;
  if (local_18.top <= param_4) {
    iVar4 = param_4;
  }
  if (iVar4 < local_18.bottom) {
    if (param_4 < local_18.top) {
      param_4 = local_18.top;
    }
  }
  else {
    param_4 = local_18.bottom;
  }
  iVar4 = *(int *)(this + 0x74);
  if (iVar4 == 1) {
    GetCursorRect(this);
    InflateRect(&local_28,1,1);
    dVar8 = LumFromPoint(this,param_4);
    *(double *)(this + 0x78) = dVar8;
    uVar6 = FUN_1009c879(*(double *)(this + 0x88),dVar8,*(double *)(this + 0x80));
    pcVar7 = InvalidateRect_exref;
    *(uint *)(this + 0x90) = uVar6;
    InvalidateRect(*(HWND *)(this + 0x20),&local_28,1);
LAB_100f56ff:
    GetCursorRect(this);
    (*pcVar7)();
  }
  else {
    if (iVar4 == 2) {
      GetCursorRect(this);
      InflateRect(&local_28,1,1);
      if ((param_1 & 8) != 0) {
        piVar5 = (int *)GetCursorPos(this);
        param_3 = *piVar5;
      }
      if ((param_1 & 4) != 0) {
        iVar4 = GetCursorPos(this);
        param_4 = *(int *)(iVar4 + 4);
      }
      dVar8 = (double)param_3 / (double)(local_18.right - local_18.left);
      *(double *)(this + 0x88) = dVar8;
      dVar1 = 1.0 - (double)param_4 / (double)(local_18.bottom - local_18.top);
      *(double *)(this + 0x80) = dVar1;
      uVar6 = FUN_1009c879(dVar8,*(double *)(this + 0x78),dVar1);
      pcVar7 = InvalidateRect_exref;
      *(uint *)(this + 0x90) = uVar6;
      InvalidateRect(*(HWND *)(this + 0x20),&local_28,1);
      goto LAB_100f56ff;
    }
    if (iVar4 - 3U < 2) {
      iVar4 = FUN_100f5026(this,param_3,param_4);
      if (iVar4 == 0) goto LAB_100f5720;
      InvalidateRect(*(HWND *)(this + 0x20),(RECT *)0x0,1);
    }
  }
  NotifyParent(this);
  UpdateWindow(*(HWND *)(this + 0x20));
LAB_100f5720:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

