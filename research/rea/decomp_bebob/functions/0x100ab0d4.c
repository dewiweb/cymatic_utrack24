// rea decompile_all
// name: CMFCRibbonCategory::UpdateScrollButtons
// address: 0x100ab0d4
// body: available
// range: 0x100ab0d4-0x100ab1d9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    protected: void __thiscall CMFCRibbonCategory::UpdateScrollButtons(void)
   
   Library: Visual Studio 2010 Release */

void __thiscall CMFCRibbonCategory::UpdateScrollButtons(CMFCRibbonCategory *this)

{
  BOOL BVar1;
  undefined4 in_EDX;
  ulonglong uVar2;
  int local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  RECT local_28;
  RECT local_18;
  uint local_8;
  
  local_8 = DAT_10163564 ^ (uint)&stack0xfffffffc;
  local_28.left = *(LONG *)(this + 0x26c);
  local_28.top = *(LONG *)(this + 0x270);
  local_28.right = *(LONG *)(this + 0x274);
  local_28.bottom = *(LONG *)(this + 0x278);
  *(undefined4 *)(this + 0x124) = *(undefined4 *)(this + 0x3c4);
  *(undefined4 *)(this + 0x28c) = *(undefined4 *)(this + 0x3c4);
  uVar2 = FUN_100f8660(this,in_EDX);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_18.left = 0;
  local_18.top = 0;
  local_18.right = 0;
  local_18.bottom = 0;
  if (0 < *(int *)(this + 0x3bc)) {
    local_38 = *(int *)(this + 0x20);
    local_34 = *(undefined4 *)(this + 0x24);
    local_2c = *(undefined4 *)(this + 0x2c);
    local_30 = local_38 + (int)uVar2;
  }
  if ((*(int *)(this + 0x28) - *(int *)(this + 0x20)) + *(int *)(this + 0x3bc) <
      *(int *)(this + 0x3c8)) {
    local_18.top = *(LONG *)(this + 0x24);
    local_18.right = *(LONG *)(this + 0x28);
    local_18.bottom = *(LONG *)(this + 0x2c);
    local_18.left = local_18.right - (int)uVar2;
  }
  *(int *)(this + 0x104) = local_38;
  *(undefined4 *)(this + 0x108) = local_34;
  *(int *)(this + 0x10c) = local_30;
  *(undefined4 *)(this + 0x110) = local_2c;
  *(LONG *)(this + 0x26c) = local_18.left;
  *(LONG *)(this + 0x270) = local_18.top;
  *(LONG *)(this + 0x274) = local_18.right;
  *(LONG *)(this + 0x278) = local_18.bottom;
  BVar1 = IsRectEmpty(&local_18);
  if ((BVar1 != 0) && (BVar1 = IsRectEmpty(&local_28), BVar1 == 0)) {
    RedrawWindow(*(HWND *)(*(int *)(this + 0x3c0) + 0x20),&local_28,(HRGN)0x0,0x105);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

