// rea decompile_all
// name: FUN_0049db50
// address: 0x49db50
// body: available
// range: 0x49db50-0x49ded0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049db50(undefined4 *param_1)

{
  double dVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_ECX;
  int extraout_EDX;
  undefined1 *puVar7;
  undefined4 uVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int *local_54 [2];
  undefined1 local_4c [8];
  int *local_44 [2];
  undefined1 local_3c [8];
  int *local_34 [2];
  undefined1 local_2c [8];
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702e60;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((*(char *)(in_ECX + 0x13c) == '\0') ||
      (*(double *)(in_ECX + 0x78) < *(double *)(in_ECX + 0x70) ||
       *(double *)(in_ECX + 0x78) == *(double *)(in_ECX + 0x70))) ||
     (((iVar4 = *(int *)(in_ECX + 0x18), iVar4 == 2 || (iVar4 == 3)) &&
      (((*(char *)((int)param_1 + 0x3d) == '\0' && (*(int *)(in_ECX + 0x140) != 0)) &&
       (cVar3 = FUN_0048ca20(local_14), iVar4 = extraout_EDX, cVar3 != '\0')))))) goto LAB_0049deb3;
  uVar8 = 0;
  if (iVar4 == 4) {
    FUN_0049d0a0(param_1);
  }
  else {
    if ((iVar4 == 8) && (*(char *)(in_ECX + 0x13d) == '\0')) {
      iVar4 = FUN_006c9af0();
      if ((iVar4 < 10) || (*(char *)((int)param_1 + 0x3d) == '\0')) goto LAB_0049deb3;
      *(undefined1 *)(in_ECX + 0x13d) = 1;
      *(undefined4 *)(in_ECX + 0xe0) = *param_1;
      *(undefined4 *)(in_ECX + 0xe4) = param_1[1];
    }
    cVar3 = FUN_0049e450(param_1[4]);
    if ((cVar3 != '\0') ||
       ((*(double *)(in_ECX + 0x78) - *(double *)(in_ECX + 0x70)) / (double)*(int *)(in_ECX + 0xf4)
        < *(double *)(in_ECX + 0x80))) {
      uVar8 = 1;
      FUN_0049d340(param_1);
    }
    else {
      uVar8 = 2;
      FUN_0049d590(param_1);
    }
  }
  dVar1 = *(double *)(in_ECX + 0x90);
  dVar11 = *(double *)(in_ECX + 0x70);
  if ((*(double *)(in_ECX + 0x70) <= dVar1) &&
     (dVar11 = *(double *)(in_ECX + 0x78), dVar1 <= *(double *)(in_ECX + 0x78))) {
    dVar11 = dVar1;
  }
  iVar4 = *(int *)(in_ECX + 0xf8);
  *(double *)(in_ECX + 0x90) = dVar11;
  if (iVar4 == 0) {
    pcVar2 = *(code **)(**(int **)(in_ECX + 0x14) + 0xcc);
    if (pcVar2 != FUN_006e12e0) {
      (*pcVar2)(dVar11,uVar8);
    }
    uVar8 = 2;
    if (*(char *)(in_ECX + 0x139) != '\0') {
      uVar8 = 0;
    }
    FUN_0049b400(uVar8);
  }
  else if (iVar4 == 1) {
    pcVar2 = *(code **)(**(int **)(in_ECX + 0x14) + 0xcc);
    if (pcVar2 != FUN_006e12e0) {
      (*pcVar2)(dVar11,uVar8);
    }
    FUN_0049b650();
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      puVar5 = (undefined4 *)FUN_0063bf80(local_34);
      local_8 = 0;
      puVar6 = (undefined4 *)FUN_0063bf80(local_24);
      fVar9 = (float10)(**(code **)(*(int *)*puVar5 + 0xc))(puVar5 + 2);
      fVar10 = (float10)(**(code **)(*(int *)*puVar6 + 0xc))();
      *(double *)(in_ECX + 200) = (double)((float10)(double)fVar9 - fVar10);
      (**(code **)(*local_24[0] + 0x54))(local_1c);
      puVar7 = local_2c;
LAB_0049de99:
      (**(code **)(*local_34[0] + 0x54))(puVar7);
    }
    else {
      FUN_0049bac0();
      FUN_0049b870();
    }
  }
  else if (iVar4 == 2) {
    pcVar2 = *(code **)(**(int **)(in_ECX + 0x14) + 0xcc);
    if (pcVar2 != FUN_006e12e0) {
      (*pcVar2)(dVar11,uVar8);
    }
    FUN_0049b870();
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      puVar5 = (undefined4 *)FUN_0063bf80(local_54);
      local_8 = 1;
      puVar6 = (undefined4 *)FUN_0063bf80(local_44);
      fVar9 = (float10)(**(code **)(*(int *)*puVar5 + 0xc))(puVar5 + 2);
      fVar10 = (float10)(**(code **)(*(int *)*puVar6 + 0xc))();
      *(double *)(in_ECX + 200) = (double)((float10)(double)fVar9 - fVar10);
      (**(code **)(*local_44[0] + 0x54))(local_3c);
      puVar7 = local_4c;
      local_34[0] = local_54[0];
      goto LAB_0049de99;
    }
    FUN_0049bb10();
    FUN_0049b650();
  }
  *(undefined4 *)(in_ECX + 0xe8) = *param_1;
  *(undefined4 *)(in_ECX + 0xec) = param_1[1];
LAB_0049deb3:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

