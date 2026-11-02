// rea decompile_all
// name: FUN_0055b560
// address: 0x55b560
// body: available
// range: 0x55b560-0x55b829 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0055b560(ushort param_1)

{
  int *in_ECX;
  void *local_5c;
  void *local_58;
  uint local_50;
  void *local_4c;
  uint local_48;
  void *local_44;
  ushort local_1c;
  ushort local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d3e2d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(ushort *)(in_ECX + 1) != param_1) {
    if (*(ushort *)(in_ECX + 1) < param_1) {
      local_48 = (uint)param_1;
      local_58 = (void *)FUN_005b04d6(local_48 * 0x18,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
      local_8 = 0;
      local_44 = local_58;
      if (local_58 == (void *)0x0) {
        local_58 = (void *)0x0;
      }
      else {
        while (local_48 = local_48 - 1, -1 < (int)local_48) {
          FUN_00503380();
          *(undefined2 *)((int)local_44 + 0xc) = 0;
          *(undefined4 *)((int)local_44 + 0x10) = 1;
          *(undefined1 *)((int)local_44 + 0x14) = 0;
          local_44 = (void *)((int)local_44 + 0x18);
        }
      }
      local_8 = 0xffffffff;
      if (local_58 != (void *)0x0) {
        _memset((void *)((uint)*(ushort *)(in_ECX + 1) * 0x18 + (int)local_58),0,
                ((uint)param_1 - (uint)*(ushort *)(in_ECX + 1)) * 0x18);
        if (*in_ECX != 0) {
          _memcpy(local_58,(void *)*in_ECX,(uint)*(ushort *)(in_ECX + 1) * 0x18);
          FUN_005b13e8(*in_ECX);
        }
        *in_ECX = (int)local_58;
        *(ushort *)(in_ECX + 1) = param_1;
      }
    }
    else {
      local_18 = param_1;
      for (local_1c = param_1; local_1c < *(ushort *)(in_ECX + 1); local_1c = local_1c + 1) {
        if ((*(short *)(*in_ECX + 0xc + (uint)local_1c * 0x18) != 0) &&
           ((uint)local_18 < local_1c + 1)) {
          local_18 = local_1c + 1;
        }
      }
      if (local_18 < *(ushort *)(in_ECX + 1)) {
        local_50 = (uint)local_18;
        local_5c = (void *)FUN_005b04d6(local_50 * 0x18,DAT_00955fd4 ^ (uint)&stack0xfffffffc);
        local_8 = 1;
        local_4c = local_5c;
        if (local_5c == (void *)0x0) {
          local_5c = (void *)0x0;
        }
        else {
          while (local_50 = local_50 - 1, -1 < (int)local_50) {
            FUN_00503380();
            *(undefined2 *)((int)local_4c + 0xc) = 0;
            *(undefined4 *)((int)local_4c + 0x10) = 1;
            *(undefined1 *)((int)local_4c + 0x14) = 0;
            local_4c = (void *)((int)local_4c + 0x18);
          }
        }
        local_8 = 0xffffffff;
        if (local_5c != (void *)0x0) {
          _memcpy(local_5c,(void *)*in_ECX,(uint)local_18 * 0x18);
          FUN_005b13e8(*in_ECX);
          *in_ECX = (int)local_5c;
          *(ushort *)(in_ECX + 1) = local_18;
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

