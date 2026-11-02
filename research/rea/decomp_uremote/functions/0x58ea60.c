// rea decompile_all
// name: FUN_0058ea60
// address: 0x58ea60
// body: available
// range: 0x58ea60-0x58eabc inclusive
// range: 0x58eac2-0x58ecdf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0058ea60(int param_1)

{
  short sVar1;
  int iVar2;
  int *in_ECX;
  short local_2c;
  ushort local_28;
  short local_20;
  ushort local_1c;
  int local_18;
  char local_11;
  int local_10;
  short local_c;
  ushort local_8;
  
  if (*(short *)((int)in_ECX + 6) == 0) {
    iVar2 = FUN_005b04d6(4);
    *in_ECX = iVar2;
    *(int *)*in_ECX = param_1;
    *(undefined2 *)(in_ECX + 1) = 1;
    *(undefined2 *)((int)in_ECX + 6) = 1;
    *(undefined2 *)(param_1 + 0x20) = 0;
  }
  else {
    local_20 = 0;
    local_c = *(short *)((int)in_ECX + 6) + -1;
    local_1c = 0;
    local_11 = '\0';
    while (local_20 <= local_c) {
      local_1c = local_20 + (short)(((int)local_c - (int)local_20) / 2);
      local_11 = FUN_0058ece0(param_1,*(undefined4 *)(*in_ECX + (uint)local_1c * 4));
      if (local_11 == '\0') {
        return 0;
      }
      if (local_11 < '\0') {
        local_c = local_1c - 1;
      }
      else {
        local_20 = local_1c + 1;
      }
    }
    if (local_11 < '\0') {
      local_8 = local_1c;
    }
    else {
      local_8 = local_1c + 1;
    }
    local_10 = *in_ECX;
    local_18 = 0;
    if ((uint)*(ushort *)(in_ECX + 1) < *(ushort *)((int)in_ECX + 6) + 1) {
      local_18 = FUN_005b04d6((*(ushort *)(in_ECX + 1) + 1) * 4);
      if (local_18 == 0) {
        return 0;
      }
      *(short *)(in_ECX + 1) = (short)in_ECX[1] + 1;
      for (local_28 = 0; local_10 = local_18, local_28 < local_8; local_28 = local_28 + 1) {
        *(undefined4 *)(local_18 + (uint)local_28 * 4) =
             *(undefined4 *)(*in_ECX + (uint)local_28 * 4);
      }
    }
    sVar1 = *(short *)((int)in_ECX + 6);
    while (local_2c = sVar1 + -1, (int)(uint)local_8 <= (int)local_2c) {
      *(undefined4 *)(local_10 + 4 + local_2c * 4) = *(undefined4 *)(*in_ECX + local_2c * 4);
      *(short *)(*(int *)(local_10 + 4 + local_2c * 4) + 0x20) = sVar1;
      sVar1 = local_2c;
    }
    *(int *)(local_10 + (uint)local_8 * 4) = param_1;
    *(ushort *)(*(int *)(local_10 + (uint)local_8 * 4) + 0x20) = local_8;
    *(short *)((int)in_ECX + 6) = *(short *)((int)in_ECX + 6) + 1;
    if (local_18 != 0) {
      FUN_005af7b6(*in_ECX);
      *in_ECX = local_18;
    }
  }
  return param_1;
}

