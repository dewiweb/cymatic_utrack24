// rea decompile_all
// name: FUN_00481316
// address: 0x481316
// body: available
// range: 0x481316-0x4813e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481316(int *param_1,short *param_2,int param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_3 = *param_2 - param_3;
  if (param_3 < 0) {
    param_3 = -param_3;
  }
  iVar2 = 0;
  if (param_3 != 0) {
    do {
      iVar2 = iVar2 + 1;
      param_3 = param_3 >> 1;
    } while (param_3 != 0);
    if (0xb < iVar2) {
      *(undefined4 *)(*param_1 + 0x14) = 6;
      (**(code **)*param_1)(param_1);
    }
  }
  param_4 = (int *)((int)param_4 + iVar2 * 4);
  *param_4 = *param_4 + 1;
  iVar2 = 0;
  param_4 = &DAT_005ff49c;
  do {
    iVar3 = (int)param_2[*param_4];
    if (iVar3 == 0) {
      iVar2 = iVar2 + 1;
    }
    else {
      if (0xf < iVar2) {
        iVar1 = (iVar2 - 0x10U >> 4) + 1;
        iVar2 = iVar2 + iVar1 * -0x10;
        param_5[0xf0] = iVar1 + param_5[0xf0];
      }
      if (iVar3 < 0) {
        iVar3 = -iVar3;
      }
      iVar3 = iVar3 >> 1;
      param_3 = 1;
      if (iVar3 != 0) {
        do {
          param_3 = param_3 + 1;
          iVar3 = iVar3 >> 1;
        } while (iVar3 != 0);
        if (10 < param_3) {
          *(undefined4 *)(*param_1 + 0x14) = 6;
          (**(code **)*param_1)(param_1);
        }
      }
      param_5[iVar2 * 0x10 + param_3] = param_5[iVar2 * 0x10 + param_3] + 1;
      iVar2 = 0;
    }
    param_4 = param_4 + 1;
  } while ((int)param_4 < 0x5ff598);
  if (0 < iVar2) {
    *param_5 = *param_5 + 1;
  }
  return;
}

