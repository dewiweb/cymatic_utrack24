// rea decompile_all
// name: FUN_00563890
// address: 0x563890
// body: available
// range: 0x563890-0x5639c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00563890(undefined4 param_1,undefined2 param_2,short param_3,char param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  ushort local_24;
  undefined1 local_20 [11];
  undefined1 local_15;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d4284;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_15 = 0;
  local_14 = FUN_005119f0(param_2);
  if (local_14 != 0) {
    local_24 = param_3 - 1;
    FUN_005017d0(uVar1);
    local_8 = 0;
    for (; local_24 < *(ushort *)(local_14 + 0x48); local_24 = local_24 + 1) {
      (**(code **)(*(int *)(local_14 + 0x28 + *(int *)(*(int *)(local_14 + 0x28) + 0xc)) + 4))
                (local_24,local_20);
      local_15 = 1;
      bVar4 = (uint)local_24 == *(ushort *)(local_14 + 0x48) - 1;
      uVar1 = (uint)bVar4;
      uVar2 = FUN_00501d60(uVar1);
      iVar3 = FUN_0059e130(uVar2,uVar1);
      if (((iVar3 != 0) || (param_4 == '\0')) || (bVar4)) break;
    }
    local_8 = 0xffffffff;
    FUN_00501900();
  }
  ExceptionList = local_10;
  return local_15;
}

