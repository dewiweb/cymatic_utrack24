// rea decompile_all
// name: FUN_0042f5a0
// address: 0x42f5a0
// body: available
// range: 0x42f5a0-0x42f686 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042f5a0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_d0 [48];
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  puVar1 = param_2;
  local_8 = 0;
  piVar5 = *(int **)(param_1 + 0x214);
  (*(code *)param_2[0xf])(param_2,local_d0,0x10,&param_2);
  if ((int)param_2 < 0) {
    local_8 = 0xa2;
    goto LAB_0042f5fc;
  }
  if ((param_2 == (undefined4 *)0x0) || (0x10 < (int)param_2)) {
LAB_0042f5f5:
    local_8 = 3;
  }
  else {
    if ((piVar5 == (int *)0x0) || ((undefined4 *)*piVar5 == (undefined4 *)0x0)) {
      local_8 = FUN_0042e9fc(param_1,0);
      if (local_8 != 0) goto LAB_0042f5fc;
      piVar5 = *(int **)(param_1 + 0x214);
    }
    else if ((undefined4 *)*piVar5 != param_2) goto LAB_0042f5f5;
    local_c = *puVar1;
    iVar4 = 0;
    local_10 = puVar1[2];
    if (0 < (int)param_2) {
      puVar2 = local_d0;
      do {
        uVar3 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[2] = uVar3;
        uVar3 = (*(code *)puVar1[10])(puVar1,0);
        puVar2 = puVar2 + 3;
        *(undefined4 *)(piVar5[0x22] + iVar4 * 4) = uVar3;
        *(undefined4 *)(piVar5[0x23] + iVar4 * 4) = *(undefined4 *)(piVar5[0x22] + iVar4 * 4);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)param_2);
    }
    *puVar1 = local_c;
    puVar1[2] = local_10;
  }
LAB_0042f5fc:
  puVar1[3] = local_8;
  return;
}

