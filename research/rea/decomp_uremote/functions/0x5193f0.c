// rea decompile_all
// name: FUN_005193f0
// address: 0x5193f0
// body: available
// range: 0x5193f0-0x519537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005193f0(int param_1,short param_2,short param_3,undefined4 param_4,short *param_5)

{
  uint uVar1;
  int in_ECX;
  ushort local_10;
  uint local_8;
  
  uVar1 = (*(code *)**(undefined4 **)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)))();
  uVar1 = uVar1 & 0xffff;
  local_10 = 0;
  while( true ) {
    if (uVar1 <= local_10) {
      return 0;
    }
    (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0xc))
              (local_10,param_4,param_5);
    if (*param_5 == param_2) break;
    local_10 = local_10 + 1;
  }
  local_8 = (uint)local_10;
  if (param_3 < 0) {
    local_8 = local_8 - 1;
  }
  else if (0 < param_3) {
    local_8 = local_8 + 1;
  }
  if ((int)local_8 < 0) {
    if (param_1 == 1) {
      local_8 = uVar1 - 1;
    }
    else {
      local_8 = 0;
    }
  }
  if ((int)uVar1 <= (int)local_8) {
    if (param_1 == 1) {
      local_8 = 0;
    }
    else {
      local_8 = uVar1 - 1;
    }
  }
  (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0xc))
            (local_8 & 0xffff,param_4,param_5);
  return 1;
}

