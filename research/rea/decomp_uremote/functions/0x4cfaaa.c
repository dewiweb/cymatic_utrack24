// rea decompile_all
// name: FUN_004cfaaa
// address: 0x4cfaaa
// body: available
// range: 0x4cfaaa-0x4cfe5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004cfaaa(int *param_1,int *param_2,int *param_3,char param_4,char param_5,char param_6,
                 char param_7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  int *piVar5;
  double dVar6;
  double dVar7;
  
  if (param_5 == '\0') {
    iVar2 = FUN_00470645(*(undefined4 *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0xc));
    param_1[2] = iVar2;
  }
  else {
    iVar2 = FUN_00470645((*param_2 - *(int *)(in_ECX + 0xc)) + param_2[2],
                         (*param_2 - *(int *)(in_ECX + 8)) + param_2[2]);
    iVar3 = FUN_00439b5a(0);
    param_1[2] = iVar3;
    *param_1 = iVar2;
  }
  if (param_4 == '\0') {
    iVar2 = FUN_00470645(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14));
    param_1[3] = iVar2;
  }
  else {
    iVar2 = FUN_00470645((param_2[1] - *(int *)(in_ECX + 0x14)) + param_2[3],
                         (param_2[1] - *(int *)(in_ECX + 0x10)) + param_2[3]);
    iVar3 = FUN_00439b5a(0);
    param_1[3] = iVar3;
    param_1[1] = iVar2;
  }
  piVar5 = param_1 + 3;
  cVar1 = FUN_004a4bf9();
  if (cVar1 != '\0') {
    return;
  }
  if (0 < *(int *)(in_ECX + 0x18)) {
    iVar2 = param_3[1];
    iVar3 = FUN_00440367();
    iVar3 = iVar3 + iVar2;
    if (param_1[1] < iVar3) {
      if (param_4 != '\0') {
        iVar3 = FUN_00439b5a();
        *piVar5 = iVar3;
        iVar3 = iVar2;
      }
      param_1[1] = iVar3;
    }
  }
  if (0 < *(int *)(in_ECX + 0x1c)) {
    iVar2 = *param_3;
    iVar3 = FUN_00440367();
    iVar3 = iVar3 + iVar2;
    if (*param_1 < iVar3) {
      if (param_5 != '\0') {
        iVar3 = FUN_00439b5a();
        param_1[2] = iVar3;
        iVar3 = iVar2;
      }
      *param_1 = iVar3;
    }
  }
  if (0 < *(int *)(in_ECX + 0x20)) {
    iVar2 = param_3[3];
    iVar3 = param_3[1];
    iVar4 = FUN_00440367();
    iVar4 = (iVar2 + iVar3) - iVar4;
    if (iVar4 < param_1[1]) {
      if (param_6 == '\0') {
        param_1[1] = iVar4;
      }
      else {
        iVar4 = FUN_00440367();
        param_1[1] = iVar4;
        *piVar5 = (iVar2 + iVar3) - iVar4;
      }
    }
  }
  if (0 < *(int *)(in_ECX + 0x24)) {
    iVar2 = param_3[2];
    iVar3 = *param_3;
    iVar4 = FUN_00440367();
    iVar4 = (iVar2 + iVar3) - iVar4;
    if (iVar4 < *param_1) {
      if (param_7 == '\0') {
        *param_1 = iVar4;
      }
      else {
        iVar4 = FUN_00440367();
        *param_1 = iVar4;
        param_1[2] = (iVar2 + iVar3) - iVar4;
      }
    }
  }
  dVar6 = 0.0;
  if (*(double *)(in_ECX + 0x28) <= 0.0) {
    return;
  }
  if ((param_4 == '\0') && (param_6 == '\0')) {
    if (param_5 == '\0') {
      if (param_7 != '\0') goto LAB_004cfce3;
LAB_004cfcf3:
      if (0 < param_2[3]) {
        dVar6 = _fabs((double)param_2[2] / (double)param_2[3]);
      }
      dVar7 = _fabs((double)param_1[2] / (double)*piVar5);
      if (dVar7 < dVar6) goto LAB_004cfd4e;
    }
LAB_004cfd93:
    iVar2 = FUN_00470221((double)param_1[2] / *(double *)(in_ECX + 0x28));
    *piVar5 = iVar2;
    if ((*(int *)(in_ECX + 0x14) < iVar2) || (iVar2 < *(int *)(in_ECX + 0x10))) {
      iVar2 = FUN_00470645(*(undefined4 *)(in_ECX + 0x10),*(int *)(in_ECX + 0x14));
      *piVar5 = iVar2;
      iVar2 = FUN_00470221((double)iVar2 * *(double *)(in_ECX + 0x28));
      param_1[2] = iVar2;
    }
  }
  else {
    if ((param_5 != '\0') || (param_7 != '\0')) {
LAB_004cfce3:
      if ((param_4 != '\0') || (param_6 != '\0')) goto LAB_004cfcf3;
      goto LAB_004cfd93;
    }
LAB_004cfd4e:
    iVar2 = FUN_00470221((double)*piVar5 * *(double *)(in_ECX + 0x28));
    param_1[2] = iVar2;
    if ((*(int *)(in_ECX + 0xc) < iVar2) || (iVar2 < *(int *)(in_ECX + 8))) {
      iVar2 = FUN_00470645(*(undefined4 *)(in_ECX + 8),*(int *)(in_ECX + 0xc));
      param_1[2] = iVar2;
      iVar2 = FUN_00470221((double)iVar2 / *(double *)(in_ECX + 0x28));
      *piVar5 = iVar2;
    }
  }
  if ((param_4 == '\0') && (param_6 == '\0')) {
    if (param_5 != '\0') goto LAB_004cfe1a;
    if (param_7 == '\0') {
      return;
    }
  }
  else if ((param_5 == '\0') && (param_7 == '\0')) {
    *param_1 = (param_2[2] - param_1[2]) / 2 + *param_2;
    return;
  }
  if ((param_4 != '\0') || (param_6 != '\0')) {
    if (param_5 != '\0') {
      *param_1 = (param_2[2] - param_1[2]) + *param_2;
    }
    if (param_4 == '\0') {
      return;
    }
    param_1[1] = (param_2[3] + param_2[1]) - *piVar5;
    return;
  }
LAB_004cfe1a:
  param_1[1] = (param_2[3] - *piVar5) / 2 + param_2[1];
  return;
}

