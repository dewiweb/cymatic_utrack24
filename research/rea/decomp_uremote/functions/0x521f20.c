// rea decompile_all
// name: FUN_00521f20
// address: 0x521f20
// body: available
// range: 0x521f20-0x52201c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00521f20(undefined4 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  int local_34;
  undefined1 local_24 [15];
  undefined1 local_15;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cfde3;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)(in_ECX + 0x10) == '\0') {
    uVar2 = FUN_00503b30(local_24);
    local_14 = FUN_00522bb0(uVar2);
    if (local_14 == 0) {
      iVar3 = FUN_005af82d(0x24,uVar1);
      local_8 = 0;
      if (iVar3 == 0) {
        local_34 = 0;
      }
      else {
        local_34 = FUN_005228a0(param_1);
      }
      local_8 = 0xffffffff;
      local_14 = local_34;
      if (local_34 == 0) {
        ExceptionList = local_10;
        return 0;
      }
      FUN_00522c40(local_34);
    }
    local_15 = *(uint *)(local_14 + 0x10) < (uint)*(ushort *)(local_14 + 0xc);
    if (((bool)local_15) && (*(int *)(local_14 + 0x14) == 0)) {
      uVar2 = FUN_0052e6e0();
      *(undefined4 *)(local_14 + 0x14) = uVar2;
    }
  }
  else {
    local_15 = 1;
  }
  ExceptionList = local_10;
  return local_15;
}

