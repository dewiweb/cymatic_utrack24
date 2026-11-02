// rea decompile_all
// name: FUN_00407d50
// address: 0x407d50
// body: available
// range: 0x407d50-0x407e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00407d50(int param_1,int *param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 local_2c [2];
  ushort local_22;
  uint local_20;
  short local_1c;
  short local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_8;
  
  local_8 = *param_2;
  sVar1 = *(short *)(*(int *)(local_8 + 0x8c) + 0x44086);
  param_2 = (int *)0x0;
  if (param_3 < *(uint *)(local_8 + 0x10)) {
    if (param_3 == 0) {
      iVar2 = *(int *)(local_8 + 0xa4);
    }
    else {
      iVar2 = param_3 - 1;
    }
    puVar4 = (undefined4 *)(*(int *)(*(int *)(local_8 + 0x8c) + 0x38) + iVar2 * 0x24);
    puVar5 = local_2c;
    for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(uint *)(param_1 + 0x4c) = local_20 >> 0x10;
    *(uint *)(param_1 + 0x50) = local_20 & 0xffff;
    *(undefined4 *)(param_1 + 0x54) = local_10;
    FUN_0040db46(local_14);
    if (sVar1 == 1) {
      *(undefined1 *)(param_1 + 0x5e) = 1;
    }
    else if (sVar1 == 2) {
      *(undefined1 *)(param_1 + 0x5e) = 3;
    }
    else if (sVar1 == 4) {
      *(undefined1 *)(param_1 + 0x5e) = 4;
    }
    else if (sVar1 == 8) {
      *(undefined1 *)(param_1 + 0x5e) = 2;
      *(undefined2 *)(param_1 + 0x5c) = 0x100;
    }
    *(int *)(param_1 + 100) = (int)local_1c;
    *(int *)(param_1 + 0x68) = (int)local_18;
    *(int *)(param_1 + 0x20) = (int)local_1c << 6;
    *(undefined4 *)(param_1 + 0x48) = 0x62697473;
    *(int *)(param_1 + 0x24) = (int)local_18 << 6;
    *(uint *)(param_1 + 0x28) = (uint)local_22 << 6;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x50) << 6;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x4c) << 6;
    FUN_0040f2e7();
  }
  else {
    param_2 = (int *)0x6;
  }
  return param_2;
}

