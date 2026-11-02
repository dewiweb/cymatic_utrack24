// rea decompile_all
// name: FUN_004f503d
// address: 0x4f503d
// body: available
// range: 0x4f503d-0x4f5116 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f503d(HMONITOR param_1)

{
  int iVar1;
  tagMONITORINFO *ptVar2;
  int local_70;
  int local_6c;
  double local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  double dStack_40;
  byte bStack_38;
  tagMONITORINFO local_30;
  
  ptVar2 = &local_30;
  for (iVar1 = 9; ptVar2 = (tagMONITORINFO *)&ptVar2->rcMonitor, iVar1 != 0; iVar1 = iVar1 + -1) {
    ((RECT *)ptVar2)->left = 0;
  }
  local_30.cbSize = 0x28;
  GetMonitorInfoW(param_1,&local_30);
  local_68 = 0.0;
  if (DAT_0095d6c4 != (code *)0x0) {
    local_70 = 0;
    local_6c = 0;
    iVar1 = (*DAT_0095d6c4)(param_1,0,&local_70,&local_6c);
    if (-1 < iVar1) {
      local_6c = local_6c + local_70;
      local_68 = (double)local_6c;
      if (local_6c < 0) {
        local_68 = local_68 + 4294967296.0;
      }
      local_68 = local_68 * 0.5;
    }
  }
  FUN_004f0b04(&local_60);
  dStack_40 = local_68;
  uStack_50 = local_60;
  uStack_4c = uStack_5c;
  uStack_48 = uStack_58;
  uStack_44 = uStack_54;
  bStack_38 = (byte)local_30.dwFlags & 1;
  FUN_004f7479(&uStack_50);
  return 1;
}

