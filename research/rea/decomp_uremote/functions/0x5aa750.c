// rea decompile_all
// name: FUN_005aa750
// address: 0x5aa750
// body: available
// range: 0x5aa750-0x5aaa09 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_005aa750(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 local_34 [16];
  undefined2 local_24;
  uint local_20;
  uint local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_c;
  undefined1 *local_8;
  
  FUN_00503bc0();
  local_8 = (undefined1 *)*param_1;
  if ((*(byte *)(in_ECX + 0xfe) >> 4 & 1) == 0) {
    local_1c = (uint)*(ushort *)(in_ECX + 0x58);
    if (*param_2 < local_1c * 0x13) {
      *param_2 = 0;
      uVar1 = 0;
    }
    else {
      for (local_20 = 0; local_20 < local_1c; local_20 = local_20 + 1) {
        *local_8 = 0x80;
        local_24 = 0x10;
        local_8[1] = 0x10;
        local_8[2] = 0;
        local_8[3] = 1;
        local_8[4] = (char)*(undefined2 *)(in_ECX + 0xfa);
        local_8[5] = (char)((ushort)*(undefined2 *)(in_ECX + 0xfa) >> 8);
        local_8[6] = 0;
        local_8 = local_8 + 7;
        uVar1 = (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0x10)) +
                            0x60))(local_34,local_20 & 0xffff);
        FUN_00503de0(uVar1);
        *local_8 = (char)local_18;
        local_8[1] = (char)((ushort)local_18 >> 8);
        local_8[2] = (char)local_16;
        local_8[3] = (char)((ushort)local_16 >> 8);
        local_8[4] = (char)local_14;
        local_8[5] = (char)((uint)local_14 >> 8);
        local_8[6] = (char)((uint)local_14 >> 0x10);
        local_8[7] = (char)((uint)local_14 >> 0x18);
        local_8[8] = (char)local_10;
        local_8[9] = (char)((ushort)local_10 >> 8);
        local_8[10] = (char)local_c;
        local_8[0xb] = (char)((ushort)local_c >> 8);
        local_8 = local_8 + 0xc;
        *param_1 = local_8;
        *param_2 = *param_2 - 0x13;
      }
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

