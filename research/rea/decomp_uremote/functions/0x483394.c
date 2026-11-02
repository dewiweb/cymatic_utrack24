// rea decompile_all
// name: FUN_00483394
// address: 0x483394
// body: available
// range: 0x483394-0x4834bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00483394(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  byte local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  piVar4 = param_1;
  iVar2 = param_1[0x4e];
  iVar3 = param_1[0x57];
  *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)param_1[6];
  *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(param_1[6] + 4);
  if ((param_1[0x2f] != 0) && (*(int *)(iVar3 + 0x44) == 0)) {
    FUN_0048331c(*(undefined4 *)(iVar3 + 0x48));
  }
  local_8 = 0;
  if (0 < param_1[0x40]) {
    local_10 = param_1 + 0x41;
    do {
      local_14 = (byte)iVar2;
      iVar5 = (int)**(short **)(param_2 + local_8 * 4) >> (local_14 & 0x1f);
      piVar1 = (int *)(iVar3 + 0x24 + *local_10 * 4);
      local_c = iVar5 - *piVar1;
      *piVar1 = iVar5;
      iVar5 = local_c;
      if (local_c < 0) {
        iVar5 = -local_c;
        local_c = local_c + -1;
      }
      param_1 = (int *)0x0;
      if (iVar5 != 0) {
        do {
          param_1 = (int *)((int)param_1 + 1);
          iVar5 = iVar5 >> 1;
        } while (iVar5 != 0);
        if (0xb < (int)param_1) {
          *(undefined4 *)(*piVar4 + 0x14) = 6;
          (**(code **)*piVar4)(piVar4);
        }
      }
      FUN_00483263();
      if (param_1 != (int *)0x0) {
        FUN_004831a5(local_c,param_1);
      }
      local_8 = local_8 + 1;
      local_10 = local_10 + 1;
    } while (local_8 < piVar4[0x40]);
  }
  *(undefined4 *)piVar4[6] = *(undefined4 *)(iVar3 + 0x10);
  uVar6 = piVar4[6];
  *(undefined4 *)(uVar6 + 4) = *(undefined4 *)(iVar3 + 0x14);
  if (piVar4[0x2f] != 0) {
    if (*(int *)(iVar3 + 0x44) == 0) {
      uVar6 = *(int *)(iVar3 + 0x48) + 1U & 7;
      *(int *)(iVar3 + 0x44) = piVar4[0x2f];
      *(uint *)(iVar3 + 0x48) = uVar6;
    }
    *(int *)(iVar3 + 0x44) = *(int *)(iVar3 + 0x44) + -1;
  }
  return CONCAT31((int3)(uVar6 >> 8),1);
}

