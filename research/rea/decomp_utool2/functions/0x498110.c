// rea decompile_all
// name: FUN_00498110
// address: 0x498110
// body: available
// range: 0x498110-0x49841f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00498110(char param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  local_20 = 0;
  local_14 = in_ECX;
  FUN_00498000(&local_30,param_4 / 2 + param_2,param_5 / 2 + param_3);
  if (*(int *)(in_ECX + 0xb0) != 0) {
    piVar3 = &local_30;
    puVar8 = local_40;
    FUN_006d37f0(local_50,0,&param_2);
    piVar3 = (int *)FUN_0044db90(puVar8,piVar3);
    param_2 = *piVar3;
    param_3 = piVar3[1];
    param_4 = piVar3[2];
    param_5 = piVar3[3];
  }
  local_20 = local_24 + -0x18;
  FUN_00498420(local_28 + -0x18,local_20,local_c,&local_10);
  iVar5 = local_14;
  iVar6 = local_20;
  if (param_1 == '\0') {
    bVar1 = param_4 / 2 + param_2 < local_28 / 2 + local_30;
    local_18 = *(int *)(local_14 + 0x70);
    if (local_18 != 0) {
      local_1c = *(int *)(local_18 + 0x70);
      if (local_1c == 0) {
        bVar1 = param_4 + param_2 + local_c[0] < local_28 + -0x20 + local_30 || bVar1;
      }
      else if (*(int *)(local_1c + 0x18) / 2 + *(int *)(local_1c + 0x10) <
               *(int *)(local_18 + 0x18) / 2 + *(int *)(local_18 + 0x10)) {
        if (param_4 + param_2 + local_c[0] < local_28 + -4 + local_30) {
          bVar1 = true;
        }
      }
      else if (local_c[0] + 4 < param_2) {
        bVar1 = false;
      }
    }
    iVar7 = ((local_30 - param_2) - param_4) + local_28;
    if (iVar7 < param_2 - local_30) {
      iVar7 = param_2 - local_30;
    }
    if (iVar7 + -0x20 < local_c[0]) {
      FUN_00498420(param_4 / 3 + iVar7 + -0x20,local_20,local_c,&local_10);
      if (1 < *(int *)(iVar5 + 0xcc)) {
        FUN_00498420(iVar7 + -0x24,iVar6,local_c,&local_10);
      }
      bVar1 = param_2 - local_30 <= ((local_30 - param_2) - param_4) + local_28;
    }
    if (bVar1) {
      iVar6 = (local_30 - local_c[0]) + -4 + local_28;
      if (param_2 + param_4 < iVar6) {
        iVar6 = param_2 + param_4;
      }
    }
    else {
      iVar6 = local_30 + 4;
      if (local_30 + 4 < param_2 - local_c[0]) {
        iVar6 = param_2 - local_c[0];
      }
    }
    iVar5 = param_3;
    if ((local_24 / 2 + local_2c < param_5 / 2 + param_3) &&
       (iVar7 = (param_3 - local_10) + param_5, iVar5 = local_2c, local_2c < iVar7)) {
      iVar5 = iVar7;
    }
  }
  else {
    iVar5 = ((local_2c - param_3) - param_5) + local_24;
    iVar6 = param_2;
    if ((local_10 < iVar5 + -0x1e) || (param_3 - local_2c <= iVar5)) {
      iVar5 = param_3 + param_5;
    }
    else {
      iVar5 = param_3 - local_10;
    }
  }
  iVar7 = local_28 + -6 + (local_30 - local_c[0]);
  if (iVar6 < iVar7) {
    iVar7 = iVar6;
  }
  iVar6 = local_24 + -6 + (local_2c - local_10);
  if (iVar5 < iVar6) {
    iVar6 = iVar5;
  }
  iVar5 = local_30 + 1;
  if (local_30 + 1 < iVar7) {
    iVar5 = iVar7;
  }
  *(int *)(local_14 + 0xb4) = iVar5;
  iVar5 = local_2c + 1;
  if (local_2c + 1 < iVar6) {
    iVar5 = iVar6;
  }
  *(int *)(local_14 + 0xb8) = iVar5;
  *(int *)(local_14 + 0xbc) = local_c[0];
  *(int *)(local_14 + 0xc0) = local_10;
  if (*(int *)(local_14 + 0x70) != 0) {
    uVar4 = FUN_0040e510(local_50,0xfffffffc,0xfffffffc);
    cVar2 = FUN_00471e70(uVar4);
    if (cVar2 != '\0') {
      *(undefined1 *)(local_14 + 199) = 1;
      return;
    }
  }
  *(undefined1 *)(local_14 + 199) = 0;
  return;
}

