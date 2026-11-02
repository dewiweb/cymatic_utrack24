// rea decompile_all
// name: FUN_100ee41e
// address: 0x100ee41e
// body: available
// range: 0x100ee41e-0x100ee6af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_100ee41e(void *this,uint param_1)

{
  POINT pt;
  POINT pt_00;
  BOOL BVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int iVar3;
  ulonglong uVar4;
  tagPOINT local_24;
  int local_1c;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (param_1 != 4) {
    if (param_1 == 5) {
      local_24.x = 0;
      local_24.y = 0;
      GetCursorPos(&local_24);
      ScreenToClient(*(HWND *)((int)this + 0x20),&local_24);
      pt.y = local_24.y;
      pt.x = local_24.x;
      BVar1 = PtInRect((RECT *)((int)this + 0x40c),pt);
      if ((BVar1 == 0) || (-1 < *(int *)((int)this + 0x378))) {
        pt_00.y = local_24.y;
        pt_00.x = local_24.x;
        BVar1 = PtInRect((RECT *)((int)this + 0x41c),pt_00);
        if ((BVar1 == 0) || (*(int *)((int)this + 0x378) < 1)) {
          KillTimer(*(HWND *)((int)this + 0x20),5);
          *(undefined4 *)((int)this + 0x378) = 0;
          InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)((int)this + 0x41c),1);
          InvalidateRect(*(HWND *)((int)this + 0x20),(RECT *)((int)this + 0x40c),1);
          UpdateWindow(*(HWND *)((int)this + 0x20));
          goto LAB_100ee695;
        }
        *(int *)((int)this + 0x380) = *(int *)((int)this + 0x380) + 1;
      }
      else {
        *(int *)((int)this + 0x380) = *(int *)((int)this + 0x380) + -1;
      }
      CMFCTasksPane::AdjustScroll(this);
      (**(code **)(*(int *)this + 0x3e4))(0);
      RedrawWindow(*(HWND *)((int)this + 0x20),(RECT *)0x0,(HRGN)0x0,5);
    }
    goto LAB_100ee695;
  }
  if ((*(int *)((int)this + 0x520) == 0) || (*(int *)((int)this + 0x38c) == 0)) {
    KillTimer(*(HWND *)((int)this + 0x20),4);
    *(undefined4 *)((int)this + 0x520) = 0;
    goto LAB_100ee695;
  }
  local_24.y = _clock();
  local_1c = local_24.y - _DAT_10169edc;
  uVar4 = FUN_100f8660(extraout_ECX,extraout_EDX);
  local_1c = (int)uVar4;
  iVar2 = *(int *)((int)this + 0x3f8);
  iVar3 = *(int *)((int)this + 0x38c);
  uVar4 = FUN_100f8660(extraout_ECX_00,(int)(uVar4 >> 0x20));
  if (9 < (int)uVar4) {
    local_1c = ((int)uVar4 * local_1c) / 9 + 1;
  }
  iVar3 = iVar3 * local_1c;
  if (*(int *)(*(int *)((int)this + 0x520) + 0x30) == 0) {
    *(int *)((int)this + 0x3f8) = iVar3 + iVar2;
  }
  else {
    *(int *)((int)this + 0x3f8) = iVar2 - iVar3;
  }
  local_18.left = *(LONG *)((int)this + 0x42c);
  local_18.right = *(LONG *)((int)this + 0x434);
  local_18.bottom = *(LONG *)((int)this + 0x438);
  iVar2 = *(int *)(*(int *)((int)this + 0x520) + 0x38) + -1;
  local_18.top = iVar2;
  InvalidateRect(*(HWND *)((int)this + 0x20),&local_18,1);
  RedrawWindow(*(HWND *)((int)this + 0x20),(RECT *)0x0,(HRGN)0x0,0x184);
  (**(code **)(*(int *)this + 0x3e4))(0);
  local_18.left = *(LONG *)((int)this + 0x42c);
  local_18.right = *(LONG *)((int)this + 0x434);
  local_18.bottom = *(LONG *)((int)this + 0x438);
  local_18.top = *(int *)(*(int *)((int)this + 0x520) + 0x38) + -1;
  if (iVar2 <= local_18.top) {
    local_18.top = iVar2;
  }
  InvalidateRect(*(HWND *)((int)this + 0x20),&local_18,1);
  RedrawWindow(*(HWND *)((int)this + 0x20),(RECT *)0x0,(HRGN)0x0,4);
  iVar2 = *(int *)((int)this + 0x520);
  if (*(int *)(iVar2 + 0x30) == 0) {
LAB_100ee656:
    if (*(int *)(iVar2 + 0x50) - *(int *)(iVar2 + 0x48) < *(int *)((int)this + 0x3f8)) {
LAB_100ee664:
      *(undefined4 *)((int)this + 0x520) = 0;
      *(undefined4 *)((int)this + 0x3f4) = 0;
      *(undefined4 *)((int)this + 0x3f8) = 0;
    }
  }
  else {
    if (*(int *)((int)this + 0x3f8) < 0) goto LAB_100ee664;
    if (*(int *)(iVar2 + 0x30) == 0) goto LAB_100ee656;
  }
  _DAT_10169edc = local_24.y;
LAB_100ee695:
  CDockablePane::OnTimer(this,param_1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

