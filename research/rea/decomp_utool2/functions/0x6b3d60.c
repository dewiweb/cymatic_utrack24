// rea decompile_all
// name: FUN_006b3d60
// address: 0x6b3d60
// body: available
// range: 0x6b3d60-0x6b418d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b3d60(int *param_1,int *param_2,int *param_3,char param_4,char param_5,char param_6,
                 char param_7)

{
  double dVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  int local_10;
  
  if (param_5 == '\0') {
    iVar5 = param_1[2];
    iVar3 = *(int *)(in_ECX + 8);
    if ((*(int *)(in_ECX + 8) <= iVar5) && (iVar3 = iVar5, *(int *)(in_ECX + 0xc) < iVar5)) {
      iVar3 = *(int *)(in_ECX + 0xc);
    }
  }
  else {
    iVar5 = *param_1;
    iVar3 = (*param_2 - *(int *)(in_ECX + 0xc)) + param_2[2];
    iVar4 = (*param_2 - *(int *)(in_ECX + 8)) + param_2[2];
    if ((iVar3 <= iVar5) && (iVar3 = iVar5, iVar4 < iVar5)) {
      iVar3 = iVar4;
    }
    iVar5 = (iVar5 - iVar3) + param_1[2];
    *param_1 = iVar3;
    iVar3 = 0;
    if (0 < iVar5) {
      iVar3 = iVar5;
    }
  }
  param_1[2] = iVar3;
  if (param_4 == '\0') {
    iVar5 = param_1[3];
    iVar3 = *(int *)(in_ECX + 0x10);
    if ((*(int *)(in_ECX + 0x10) <= iVar5) && (iVar3 = iVar5, *(int *)(in_ECX + 0x14) < iVar5)) {
      iVar3 = *(int *)(in_ECX + 0x14);
    }
  }
  else {
    iVar4 = (param_2[1] - *(int *)(in_ECX + 0x10)) + param_2[3];
    iVar3 = (param_2[1] - *(int *)(in_ECX + 0x14)) + param_2[3];
    iVar5 = param_1[1];
    if ((iVar3 <= iVar5) && (iVar3 = iVar5, iVar4 < iVar5)) {
      iVar3 = iVar4;
    }
    param_1[1] = iVar3;
    iVar5 = (iVar5 - iVar3) + param_1[3];
    iVar3 = 0;
    if (0 < iVar5) {
      iVar3 = iVar5;
    }
  }
  iVar5 = param_1[2];
  param_1[3] = iVar3;
  if (iVar5 < 1) {
    return;
  }
  if (iVar3 < 1) {
    return;
  }
  if (0 < *(int *)(in_ECX + 0x18)) {
    iVar3 = *(int *)(in_ECX + 0x18) - param_1[3];
    if (0 < iVar3) {
      iVar3 = 0;
    }
    iVar4 = param_3[1];
    if (param_1[1] < iVar3 + iVar4) {
      iVar3 = iVar3 + iVar4;
      if (param_4 != '\0') {
        iVar2 = (param_1[3] - iVar4) + param_1[1];
        iVar3 = 0;
        if (0 < iVar2) {
          iVar3 = iVar2;
        }
        param_1[3] = iVar3;
        iVar3 = iVar4;
      }
      param_1[1] = iVar3;
    }
  }
  if (0 < *(int *)(in_ECX + 0x1c)) {
    iVar3 = *(int *)(in_ECX + 0x1c) - iVar5;
    if (0 < iVar3) {
      iVar3 = 0;
    }
    iVar4 = *param_3;
    if (*param_1 < iVar3 + iVar4) {
      iVar3 = iVar3 + iVar4;
      if (param_5 != '\0') {
        iVar3 = (iVar5 - iVar4) + *param_1;
        iVar5 = 0;
        if (0 < iVar3) {
          iVar5 = iVar3;
        }
        param_1[2] = iVar5;
        iVar3 = iVar4;
      }
      *param_1 = iVar3;
    }
  }
  iVar5 = *(int *)(in_ECX + 0x20);
  if (0 < iVar5) {
    if (param_1[3] < iVar5) {
      iVar5 = param_1[3];
    }
    iVar5 = (param_3[3] - iVar5) + param_3[1];
    if (iVar5 < param_1[1]) {
      if (param_6 != '\0') {
        iVar3 = param_3[1] + param_3[3];
        iVar5 = param_1[1];
        if (iVar3 < param_1[1]) {
          iVar5 = iVar3;
        }
        param_1[3] = iVar3 - iVar5;
      }
      param_1[1] = iVar5;
    }
  }
  iVar5 = *(int *)(in_ECX + 0x24);
  if (0 < iVar5) {
    if (param_1[2] < iVar5) {
      iVar5 = param_1[2];
    }
    iVar5 = (param_3[2] - iVar5) + *param_3;
    if (iVar5 < *param_1) {
      if (param_7 == '\0') {
        *param_1 = iVar5;
      }
      else {
        iVar3 = *param_3 + param_3[2];
        iVar5 = *param_1;
        if (iVar3 < *param_1) {
          iVar5 = iVar3;
        }
        *param_1 = iVar5;
        param_1[2] = iVar3 - iVar5;
      }
    }
  }
  dVar1 = *(double *)(in_ECX + 0x28);
  dVar6 = 0.0;
  if (dVar1 <= 0.0) {
    return;
  }
  if ((param_4 == '\0') && (param_6 == '\0')) {
    if ((param_5 == '\0') && (param_7 == '\0')) {
LAB_006b406b:
      if (0 < param_2[3]) {
        dVar6 = ABS((double)param_2[2] / (double)param_2[3]);
      }
      if (ABS((double)param_1[2] / (double)param_1[3]) < dVar6) goto LAB_006b40ba;
    }
LAB_006b3fac:
    local_10 = SUB84((double)param_1[2] / dVar1 + 6755399441055744.0,0);
    param_1[3] = local_10;
    if ((*(int *)(in_ECX + 0x14) < local_10) || (local_10 < *(int *)(in_ECX + 0x10))) {
      iVar5 = *(int *)(in_ECX + 0x10);
      if ((*(int *)(in_ECX + 0x10) <= local_10) &&
         (iVar5 = local_10, *(int *)(in_ECX + 0x14) < local_10)) {
        iVar5 = *(int *)(in_ECX + 0x14);
      }
      param_1[3] = iVar5;
      local_10 = SUB84((double)iVar5 * *(double *)(in_ECX + 0x28) + 6755399441055744.0,0);
      param_1[2] = local_10;
    }
  }
  else {
    if ((param_5 != '\0') || (param_7 != '\0')) {
      if ((param_4 != '\0') || (param_6 != '\0')) goto LAB_006b406b;
      goto LAB_006b3fac;
    }
LAB_006b40ba:
    local_10 = SUB84((double)param_1[3] * dVar1 + 6755399441055744.0,0);
    param_1[2] = local_10;
    if ((*(int *)(in_ECX + 0xc) < local_10) || (local_10 < *(int *)(in_ECX + 8))) {
      iVar5 = *(int *)(in_ECX + 8);
      if ((*(int *)(in_ECX + 8) <= local_10) &&
         (iVar5 = local_10, *(int *)(in_ECX + 0xc) < local_10)) {
        iVar5 = *(int *)(in_ECX + 0xc);
      }
      param_1[2] = iVar5;
      local_10 = SUB84((double)iVar5 / *(double *)(in_ECX + 0x28) + 6755399441055744.0,0);
      param_1[3] = local_10;
    }
  }
  if ((param_4 == '\0') && (param_6 == '\0')) {
    if (param_5 != '\0') {
LAB_006b414f:
      param_1[1] = (param_2[3] - param_1[3]) / 2 + param_2[1];
      return;
    }
    if (param_7 != '\0') {
      param_1[1] = (param_2[3] - param_1[3]) / 2 + param_2[1];
      return;
    }
  }
  else {
    if ((param_5 == '\0') && (param_7 == '\0')) {
      *param_1 = (param_2[2] - param_1[2]) / 2 + *param_2;
      return;
    }
    if ((param_4 == '\0') && (param_6 == '\0')) goto LAB_006b414f;
    if (param_5 != '\0') {
      *param_1 = (param_2[2] - param_1[2]) + *param_2;
    }
    if (param_4 != '\0') {
      param_1[1] = (param_2[3] + param_2[1]) - param_1[3];
    }
  }
  return;
}

