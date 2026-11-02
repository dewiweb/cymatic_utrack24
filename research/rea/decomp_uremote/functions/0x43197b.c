// rea decompile_all
// name: FUN_0043197b
// address: 0x43197b
// body: available
// range: 0x43197b-0x431a76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043197b(int param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  undefined8 uVar4;
  int local_18 [3];
  int local_c;
  int *local_8;
  
  iVar3 = *(int *)(unaff_EBX + 4);
  local_8 = *(int **)(*(int *)(iVar3 + 0x80) + 0x34);
  *(undefined4 *)(unaff_EBX + 0x560) = *(undefined4 *)(iVar3 + 0x1b4);
  *(undefined4 *)(unaff_EBX + 0x564) = *(undefined4 *)(iVar3 + 0x1b8);
  *(undefined4 *)(unaff_EBX + 0x568) = *(undefined4 *)(iVar3 + 0x1bc);
  *(undefined4 *)(unaff_EBX + 0x56c) = *(undefined4 *)(iVar3 + 0x1c0);
  *(undefined4 *)(unaff_EBX + 0x570) = *(undefined4 *)(iVar3 + 0x1c4);
  iVar2 = 0;
  *(undefined4 *)(unaff_EBX + 0x574) = *(undefined4 *)(iVar3 + 0x1c8);
  if (local_8 == (int *)0x0) {
    *param_2 = *(undefined4 *)(param_1 * 4 + *(int *)(iVar3 + 0x1a8));
    param_2[1] = *(undefined4 *)(param_1 * 4 + *(int *)(iVar3 + 0x1ac));
  }
  else {
    iVar2 = (**(code **)*local_8)(local_8[1],param_1,param_2);
  }
  if (iVar2 == 0) {
    iVar3 = (**(code **)(unaff_EBX + 0x5cc))();
    piVar1 = local_8;
    if (((iVar3 == 0) && (local_8 != (int *)0x0)) && (*(int *)(*local_8 + 8) != 0)) {
      local_18[0] = FUN_0040d211();
      local_18[0] = local_18[0] >> 0x10;
      local_18[1] = 0;
      local_18[2] = FUN_0040d211();
      local_18[2] = local_18[2] >> 0x10;
      uVar4 = FUN_0040d211();
      local_c = (int)uVar4 >> 0x10;
      (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 8))(piVar1[1],param_1,0,local_18);
      *(int *)(unaff_EBX + 0x20) = local_18[0] << 0x10;
      *(int *)(unaff_EBX + 0x28) = local_18[2] << 0x10;
      *(int *)(unaff_EBX + 0x2c) = local_c << 0x10;
    }
  }
  return;
}

