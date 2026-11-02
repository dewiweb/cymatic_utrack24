// rea decompile_all
// name: CMFCColorPickerCtrl::GetCursorPos
// address: 0x100f482a
// body: available
// range: 0x100f482a-0x100f48d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: class CPoint __thiscall CMFCColorPickerCtrl::GetCursorPos(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCColorPickerCtrl::GetCursorPos(CMFCColorPickerCtrl *this)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  ulonglong uVar2;
  ulonglong uVar3;
  int *in_stack_00000004;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  GetClientRect(*(HWND *)(this + 0x20),&local_18);
  *in_stack_00000004 = 0;
  in_stack_00000004[1] = 0;
  if (*(int *)(this + 0x74) == 1) {
    iVar1 = PointFromLum(this,*(double *)(this + 0x78));
    *in_stack_00000004 = *(int *)(this + 0x98) + 6 + local_18.left;
  }
  else {
    if (*(int *)(this + 0x74) != 2) goto LAB_100f48c6;
    uVar2 = FUN_100f8660(extraout_ECX,extraout_EDX);
    uVar3 = FUN_100f8660(extraout_ECX_00,(int)(uVar2 >> 0x20));
    iVar1 = (int)uVar3;
    *in_stack_00000004 = (int)uVar2;
  }
  in_stack_00000004[1] = iVar1;
LAB_100f48c6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

