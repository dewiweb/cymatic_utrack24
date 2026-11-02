// rea decompile_all
// name: FUN_00593e60
// address: 0x593e60
// body: available
// range: 0x593e60-0x5940c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00593e60(undefined4 param_1,ushort param_2)

{
  int in_ECX;
  int local_68;
  int local_60;
  undefined4 *local_3c;
  undefined4 *local_20;
  ushort local_18;
  ushort local_10;
  byte local_9;
  char local_8 [4];
  
  if (((0x2fff < param_2) && (param_2 < 0x3002)) && (*(int *)(in_ECX + 0x58) == 0)) {
    for (local_9 = 0; local_9 < 0x10; local_9 = local_9 + 1) {
      local_8[0] = local_9 + 0xb0;
      local_8[1] = 0x7b;
      local_8[2] = 0;
      local_10 = 0;
      while( true ) {
        local_20 = (undefined4 *)0x0;
        if (local_10 < *(ushort *)(in_ECX + 0x30)) {
          local_20 = *(undefined4 **)(*(int *)(in_ECX + 0x2c) + (uint)local_10 * 4);
        }
        local_10 = local_10 + 1;
        if (local_20 == (undefined4 *)0x0) break;
        FUN_00515830();
        if (*(int *)(in_ECX + 0x14) == 0) {
          local_60 = 0;
        }
        else {
          local_60 = *(int *)(in_ECX + 0x14) + 0x28 +
                     *(int *)(*(int *)(*(int *)(in_ECX + 0x14) + 0x28) + 0xc);
        }
        (**(code **)*local_20)(local_60,3,local_8,&DAT_0095c854);
        FUN_00515860();
      }
      local_8[0] = local_9 + 0xb0;
      local_8[1] = 0x79;
      local_8[2] = 0;
      local_18 = 0;
      while( true ) {
        local_3c = (undefined4 *)0x0;
        if (local_18 < *(ushort *)(in_ECX + 0x30)) {
          local_3c = *(undefined4 **)(*(int *)(in_ECX + 0x2c) + (uint)local_18 * 4);
        }
        local_18 = local_18 + 1;
        if (local_3c == (undefined4 *)0x0) break;
        FUN_00515830();
        if (*(int *)(in_ECX + 0x14) == 0) {
          local_68 = 0;
        }
        else {
          local_68 = *(int *)(in_ECX + 0x14) + 0x28 +
                     *(int *)(*(int *)(*(int *)(in_ECX + 0x14) + 0x28) + 0xc);
        }
        (**(code **)*local_3c)(local_68,3,local_8,&DAT_0095c854);
        FUN_00515860();
      }
    }
  }
  return;
}

