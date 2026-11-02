// rea decompile_all
// name: FUN_00537740
// address: 0x537740
// body: available
// range: 0x537740-0x53783d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00537740(uint param_1)

{
  undefined4 uVar1;
  int *in_ECX;
  int local_2c;
  uint local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d1593;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_005376f0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    local_2c = FUN_005b04d6(-(uint)((int)((ulonglong)param_1 * 0x10 >> 0x20) != 0) |
                            (uint)((ulonglong)param_1 * 0x10));
    local_8 = 0;
    if (local_2c == 0) {
      local_2c = 0;
    }
    else {
      local_24 = param_1;
      while (local_24 = local_24 - 1, -1 < (int)local_24) {
        FUN_00503bc0();
      }
    }
    local_8 = 0xffffffff;
    *in_ECX = local_2c;
    if (*in_ECX == 0) {
      uVar1 = 0;
    }
    else {
      *(undefined2 *)(in_ECX + 1) = (undefined2)param_1;
      _memset((void *)*in_ECX,0,param_1 << 4);
      uVar1 = 1;
    }
  }
  ExceptionList = local_10;
  return uVar1;
}

