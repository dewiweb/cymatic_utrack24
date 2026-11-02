// rea decompile_all
// name: FUN_0048119f
// address: 0x48119f
// body: available
// range: 0x48119f-0x4812a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0048119f(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28 [6];
  int local_10;
  int local_c;
  int *local_8;
  
  iVar3 = param_1;
  iVar7 = *(int *)(param_1 + 0xbc);
  local_30 = **(undefined4 **)(param_1 + 0x18);
  local_2c = (*(undefined4 **)(param_1 + 0x18))[1];
  iVar2 = *(int *)(param_1 + 0x15c);
  piVar8 = (int *)(iVar2 + 0xc);
  piVar9 = local_28;
  for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar9 = *piVar8;
    piVar8 = piVar8 + 1;
    piVar9 = piVar9 + 1;
  }
  local_c = iVar2;
  local_10 = param_1;
  if (((iVar7 == 0) || (*(int *)(iVar2 + 0x24) != 0)) ||
     (cVar4 = FUN_00481131(*(undefined4 *)(iVar2 + 0x28)), cVar4 != '\0')) {
    param_1 = 0;
    if (0 < *(int *)(iVar3 + 0x100)) {
      local_8 = (int *)(iVar3 + 0x104);
      do {
        iVar7 = *local_8;
        puVar1 = (undefined4 *)(param_2 + param_1 * 4);
        cVar4 = FUN_00480fcb(&local_30,*puVar1,local_28[iVar7 + 2],
                             *(undefined4 *)
                              (local_c + 0x3c +
                              *(int *)(*(int *)(iVar3 + 0xe8 + iVar7 * 4) + 0x18) * 4));
        if (cVar4 == '\0') goto LAB_004811ef;
        param_1 = param_1 + 1;
        local_8 = local_8 + 1;
        local_28[iVar7 + 2] = (int)*(short *)*puVar1;
      } while (param_1 < *(int *)(iVar3 + 0x100));
    }
    **(undefined4 **)(iVar3 + 0x18) = local_30;
    *(undefined4 *)(*(int *)(iVar3 + 0x18) + 4) = local_2c;
    piVar8 = local_28;
    piVar9 = (int *)(local_c + 0xc);
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *piVar9 = *piVar8;
      piVar8 = piVar8 + 1;
      piVar9 = piVar9 + 1;
    }
    if (*(int *)(iVar3 + 0xbc) != 0) {
      if (*(int *)(local_c + 0x24) == 0) {
        *(int *)(local_c + 0x24) = *(int *)(iVar3 + 0xbc);
        *(uint *)(local_c + 0x28) = *(int *)(local_c + 0x28) + 1U & 7;
      }
      *(int *)(local_c + 0x24) = *(int *)(local_c + 0x24) + -1;
    }
    uVar5 = 1;
  }
  else {
LAB_004811ef:
    uVar5 = 0;
  }
  return uVar5;
}

