// rea decompile_all
// name: FUN_00557c20
// address: 0x557c20
// body: available
// range: 0x557c20-0x557d0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00557c20(byte param_1,undefined4 param_2)

{
  int in_ECX;
  undefined1 auStack_44 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  int *piStack_38;
  uint uStack_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  undefined1 *local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d3b03;
  local_10 = ExceptionList;
  uStack_34 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = in_ECX;
  for (local_14 = 0; local_14 < (int)(uint)*(ushort *)(local_2c + 0x14); local_14 = local_14 + 1) {
    local_28 = 0;
    piStack_38 = &local_28;
    uStack_3c = local_14;
    uStack_40 = 0x557c84;
    FUN_00512900();
    local_18 = local_28;
    if (local_28 != 0) {
      piStack_38 = (int *)0x20;
      uStack_3c = 0x557c97;
      local_20 = FUN_005af82d();
      local_8 = 0;
      if (local_20 == 0) {
        local_30 = 0;
      }
      else {
        local_24 = auStack_44;
        FUN_00503c60(&stack0x0000000c);
        local_30 = FUN_00558540(local_18,param_2);
      }
      local_1c = local_30;
      local_8 = 0xffffffff;
      piStack_38 = (int *)local_30;
      uStack_3c = (uint)param_1;
      uStack_40 = 0x557cf8;
      FUN_00508280();
    }
  }
  ExceptionList = local_10;
  return;
}

