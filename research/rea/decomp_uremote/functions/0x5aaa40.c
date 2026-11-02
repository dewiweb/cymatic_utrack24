// rea decompile_all
// name: FUN_005aaa40
// address: 0x5aaa40
// body: available
// range: 0x5aaa40-0x5aacbc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005aaa40(int *param_1,uint *param_2)

{
  char *pcVar1;
  int in_ECX;
  short local_2c;
  short local_2a;
  int local_28;
  short local_24;
  short local_20;
  char local_19;
  ushort local_18;
  byte *local_14;
  char local_d;
  byte *local_c;
  int local_8;
  
  local_8 = 0;
  if ((*(byte *)(in_ECX + 0xfe) >> 4 & 1) == 0) {
    if (*param_2 < 0x13) {
      local_8 = 5;
    }
    else {
      pcVar1 = (char *)*param_1;
      local_d = *pcVar1;
      local_18 = *(ushort *)(pcVar1 + 1);
      local_c = (byte *)(pcVar1 + 3);
      local_14 = local_c + local_18;
      if (local_d == -0x80) {
        if (*local_c == 1) {
          local_19 = pcVar1[6];
          local_c = (byte *)(pcVar1 + 7);
          FUN_00503bc0();
          local_2c = (ushort)*local_c + (ushort)local_c[1] * 0x100;
          local_2a = (ushort)local_c[2] + (ushort)local_c[3] * 0x100;
          local_28 = (uint)local_c[7] * 0x1000000 +
                     (uint)local_c[6] * 0x10000 + (uint)local_c[5] * 0x100 + (uint)local_c[4];
          local_24 = (ushort)local_c[8] + (ushort)local_c[9] * 0x100;
          local_20 = (ushort)local_c[10] + (ushort)local_c[0xb] * 0x100;
          local_c = local_c + 0xc;
          if (local_19 == '\0') {
            (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0x10)) + 0x54))
                      (&local_2c);
          }
          else if (local_19 == '\x01') {
            (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x2c))
                      (&local_2c);
          }
          else {
            local_8 = 0x11;
          }
        }
        else {
          local_8 = 0xf;
        }
      }
      if (local_8 != 0) {
        local_c = local_14;
      }
      *param_2 = *param_2 - ((int)local_c - *param_1);
      *param_1 = (int)local_c;
    }
  }
  return local_8;
}

