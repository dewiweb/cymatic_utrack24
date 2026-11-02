// rea decompile_all
// name: FUN_100f49f9
// address: 0x100f49f9
// body: available
// range: 0x100f49f9-0x100f4c65 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_100f49f9(void *this,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  code *pcVar6;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  if (*(int *)((int)this + 0x74) == 1) {
    CMFCColorPickerCtrl::GetCursorRect(this);
    InflateRect(&local_18,1,1);
    dVar1 = *(double *)((int)this + 0x78);
    if (param_1 == 0x26) {
      dVar2 = *(double *)((int)this + 0x78) + 0.05;
LAB_100f4bdc:
      *(double *)((int)this + 0x78) = dVar2;
    }
    else if (param_1 == 0x28) {
      dVar2 = *(double *)((int)this + 0x78) - 0.05;
      goto LAB_100f4bdc;
    }
    if (((*(double *)((int)this + 0x78) < 0.0) ||
        (dVar2 = 1.0, *(double *)((int)this + 0x78) <= 1.0)) &&
       (dVar2 = 0.0, 0.0 <= *(double *)((int)this + 0x78))) {
      dVar2 = *(double *)((int)this + 0x78);
    }
    *(double *)((int)this + 0x78) = dVar2;
    if (dVar2 == dVar1) goto LAB_100f4b3e;
    uVar5 = FUN_1009c879(*(double *)((int)this + 0x88),dVar2,*(double *)((int)this + 0x80));
    pcVar6 = InvalidateRect_exref;
    *(uint *)((int)this + 0x90) = uVar5;
    InvalidateRect(*(HWND *)((int)this + 0x20),&local_18,1);
  }
  else {
    if (*(int *)((int)this + 0x74) != 2) goto LAB_100f4b3e;
    CMFCColorPickerCtrl::GetCursorRect(this);
    InflateRect(&local_18,1,1);
    dVar1 = *(double *)((int)this + 0x80);
    dVar2 = *(double *)((int)this + 0x88);
    if (param_1 == 0x25) {
      dVar3 = *(double *)((int)this + 0x88) - 0.05;
LAB_100f4a90:
      *(double *)((int)this + 0x88) = dVar3;
    }
    else if (param_1 == 0x26) {
      dVar3 = *(double *)((int)this + 0x80) + 0.05;
LAB_100f4a7c:
      *(double *)((int)this + 0x80) = dVar3;
    }
    else {
      if (param_1 == 0x27) {
        dVar3 = *(double *)((int)this + 0x88) + 0.05;
        goto LAB_100f4a90;
      }
      if (param_1 == 0x28) {
        dVar3 = *(double *)((int)this + 0x80) - 0.05;
        goto LAB_100f4a7c;
      }
    }
    dVar3 = 1.0;
    if ((*(double *)((int)this + 0x80) < 0.0) || (*(double *)((int)this + 0x80) <= 1.0)) {
      if (0.0 <= *(double *)((int)this + 0x80)) {
        dVar3 = *(double *)((int)this + 0x80);
      }
      else {
        dVar3 = 0.0;
      }
    }
    *(double *)((int)this + 0x80) = dVar3;
    if ((*(double *)((int)this + 0x88) < 0.0) || (*(double *)((int)this + 0x88) <= 1.0)) {
      if (*(double *)((int)this + 0x88) < 0.0) {
        dVar4 = 0.0;
      }
      else {
        dVar4 = *(double *)((int)this + 0x88);
      }
    }
    else {
      dVar4 = 1.0;
    }
    *(double *)((int)this + 0x88) = dVar4;
    if ((dVar4 == dVar2) && (dVar3 == dVar1)) goto LAB_100f4b3e;
    uVar5 = FUN_1009c879(dVar4,*(double *)((int)this + 0x78),dVar3);
    pcVar6 = InvalidateRect_exref;
    *(uint *)((int)this + 0x90) = uVar5;
    InvalidateRect(*(HWND *)((int)this + 0x20),&local_18,1);
  }
  CMFCColorPickerCtrl::GetCursorRect(this);
  (*pcVar6)();
  CMFCColorPickerCtrl::NotifyParent(this);
LAB_100f4b3e:
  CWnd::Default(this);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

