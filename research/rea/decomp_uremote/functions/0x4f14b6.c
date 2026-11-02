// rea decompile_all
// name: FUN_004f14b6
// address: 0x4f14b6
// body: available
// range: 0x4f14b6-0x4f152a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004f14b6(undefined4 param_1)

{
  int *piVar1;
  HWND pHVar2;
  int in_ECX;
  undefined1 local_34 [16];
  int local_24;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int local_14;
  int local_10;
  
  piVar1 = (int *)FUN_004f0b41(&local_14,*(undefined4 *)(in_ECX + 0x38));
  local_24 = *piVar1;
  local_20 = piVar1[1];
  iStack_1c = piVar1[2];
  iStack_18 = piVar1[3];
  FUN_004f0b04(&local_14);
  pHVar2 = GetParent(*(HWND *)(in_ECX + 0x38));
  if (pHVar2 != (HWND)0x0) {
    piVar1 = (int *)FUN_004f0b41(local_34,pHVar2);
    local_24 = *piVar1;
    local_20 = piVar1[1];
    iStack_1c = piVar1[2];
    iStack_18 = piVar1[3];
    local_14 = local_14 - local_24;
    local_10 = local_10 - local_20;
  }
  FUN_004f640a();
  return param_1;
}

