// rea decompile_all
// name: FUN_00579570
// address: 0x579570
// body: available
// range: 0x579570-0x57964d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_00579570(uint *param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined1 local_20 [4];
  uint local_1c;
  uint local_18;
  undefined1 local_14 [4];
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_10 = 0;
  local_8 = 0;
  for (local_c = FUN_0057a110(); local_c != 0; local_c = FUN_0057a1c0(local_c)) {
    puVar2 = (uint *)(**(code **)(*(int *)(local_c + 0x28 + *(int *)(*(int *)(local_c + 0x28) + 0xc)
                                          ) + 0x2c))(local_14);
    uVar1 = local_8;
    if ((*puVar2 & 0x10000) == 0) {
      puVar2 = (uint *)(**(code **)(*(int *)(local_c + 0x28 +
                                            *(int *)(*(int *)(local_c + 0x28) + 0xc)) + 0x2c))
                                 (local_20);
      local_1c = uVar1 | *puVar2;
      local_18 = local_1c;
      local_8 = local_1c;
    }
  }
  *param_1 = local_8;
  return param_1;
}

