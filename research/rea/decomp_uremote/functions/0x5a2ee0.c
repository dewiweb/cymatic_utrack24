// rea decompile_all
// name: FUN_005a2ee0
// address: 0x5a2ee0
// body: available
// range: 0x5a2ee0-0x5a3064 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005a2ee0(undefined2 param_1,ushort param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined1 local_2c [24];
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d74c2;
  local_10 = ExceptionList;
  uVar3 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((param_2 & 0x8000) != 0) {
    iVar4 = FUN_005790a0(uVar3);
    if (*(int *)(*(int *)(iVar4 + 0x88) + 0x38) != 0) {
      iVar4 = *(int *)(in_ECX + 0x50);
      local_14 = FUN_005790a0(uVar3);
      (**(code **)(*(int *)(in_ECX + 0x28 + *(int *)(*(int *)(in_ECX + 0x28) + 0xc)) + 0x18))
                (local_2c,param_1);
      local_8 = 0;
      uVar2 = *(undefined2 *)(in_ECX + 0x4c);
      uVar1 = *(undefined2 *)(in_ECX + 0x48);
      uVar5 = FUN_00503bf0(*(undefined2 *)(in_ECX + 0x62),0,0,0,0);
      uVar5 = FUN_00501d60(uVar5);
      uVar2 = (**(code **)(*(int *)(iVar4 + 0x28 + *(int *)(*(int *)(iVar4 + 0x28) + 0xc)) + 0x24))
                        (uVar1,uVar2,param_1,uVar5);
      (**(code **)(*(int *)(local_14 + 0x28 + *(int *)(*(int *)(local_14 + 0x28) + 0xc)) + 0x178))
                (0x2031,uVar2);
      local_8 = 0xffffffff;
      FUN_00501900();
    }
  }
  ExceptionList = local_10;
  return;
}

