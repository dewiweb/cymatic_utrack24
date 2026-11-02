// rea decompile_all
// name: FUN_00480fcb
// address: 0x480fcb
// body: available
// range: 0x480fcb-0x481130 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00480fcb(int param_1,short *param_2,int *param_3,undefined4 *param_4)

{
  int *piVar1;
  char cVar2;
  int in_EAX;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  iVar5 = (int)*param_2 - (int)param_3;
  iVar3 = iVar5;
  if (iVar5 < 0) {
    iVar3 = -iVar5;
    iVar5 = iVar5 + -1;
  }
  iVar6 = 0;
  if (iVar3 != 0) {
    do {
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 >> 1;
    } while (iVar3 != 0);
    if (0xb < iVar6) {
      piVar1 = *(int **)(param_1 + 0x20);
      *(undefined4 *)(*piVar1 + 0x14) = 6;
      (**(code **)*piVar1)(piVar1);
    }
  }
  cVar2 = FUN_00480f0a(*(undefined4 *)(in_EAX + iVar6 * 4),(int)*(char *)(iVar6 + 0x400 + in_EAX));
  if (cVar2 == '\0') {
LAB_00481023:
    uVar4 = 0;
  }
  else {
    if (iVar6 != 0) {
      cVar2 = FUN_00480f0a(iVar5,iVar6);
      if (cVar2 == '\0') goto LAB_00481023;
    }
    iVar3 = 0;
    param_3 = &DAT_005ff49c;
    do {
      local_8 = (int)param_2[*param_3];
      if (local_8 == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        for (; 0xf < iVar3; iVar3 = iVar3 + -0x10) {
          cVar2 = FUN_00480f0a(param_4[0xf0],(int)*(char *)(param_4 + 0x13c));
          if (cVar2 == '\0') goto LAB_00481023;
        }
        iVar5 = local_8;
        if (local_8 < 0) {
          iVar5 = -local_8;
          local_8 = local_8 + -1;
        }
        iVar6 = 1;
        iVar5 = iVar5 >> 1;
        if (iVar5 != 0) {
          do {
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 >> 1;
          } while (iVar5 != 0);
          if (10 < iVar6) {
            piVar1 = *(int **)(param_1 + 0x20);
            *(undefined4 *)(*piVar1 + 0x14) = 6;
            (**(code **)*piVar1)(piVar1);
          }
        }
        iVar3 = iVar3 * 0x10 + iVar6;
        cVar2 = FUN_00480f0a(param_4[iVar3],(int)*(char *)(iVar3 + 0x400 + (int)param_4));
        if (cVar2 == '\0') goto LAB_00481023;
        cVar2 = FUN_00480f0a(local_8,iVar6);
        if (cVar2 == '\0') goto LAB_00481023;
        iVar3 = 0;
      }
      param_3 = param_3 + 1;
    } while ((int)param_3 < 0x5ff598);
    if (0 < iVar3) {
      cVar2 = FUN_00480f0a(*param_4,(int)*(char *)(param_4 + 0x100));
      if (cVar2 == '\0') goto LAB_00481023;
    }
    uVar4 = 1;
  }
  return uVar4;
}

