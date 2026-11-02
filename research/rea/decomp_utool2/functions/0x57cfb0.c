// rea decompile_all
// name: FUN_0057cfb0
// address: 0x57cfb0
// body: available
// range: 0x57cfb0-0x57d1e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0057cfb0(undefined4 param_1,float param_2,undefined4 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  char cVar9;
  uint uVar10;
  int iVar11;
  undefined4 unaff_EBX;
  uint uVar12;
  uint3 uVar14;
  int iVar13;
  undefined4 uVar15;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar2 = (int)param_2;
  local_8 = 0xffffffff;
  puStack_c = &LAB_007123af;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar15 = DAT_00c7ebb0;
  if ((char)param_5 == '\0') {
    if (((*(byte *)((int)param_2 + 0x69) & 0x10) == 0) && (*(int *)((int)param_2 + 0xc) != 0)) {
      FUN_006e6320(uVar5);
    }
    puVar6 = &param_5;
    FUN_006842b0(&param_2);
    puVar6 = (undefined4 *)FUN_00684d10(puVar6);
    uVar15 = *puVar6;
  }
  iVar13 = DAT_00c8a678;
  if ((char)param_4 != '\0') {
    puVar6 = (undefined4 *)FUN_00680c60(&param_4);
    uVar15 = *puVar6;
    iVar13 = DAT_00c8a678;
  }
  for (; iVar13 != iVar2; iVar13 = *(int *)(iVar13 + 0xc)) {
    if (iVar13 == 0) goto LAB_0057d09e;
  }
  puVar6 = (undefined4 *)FUN_00680c60(&param_5);
  uVar15 = *puVar6;
LAB_0057d09e:
  uVar1 = *(uint *)(iVar2 + 0xb8);
  uVar12 = CONCAT31((int3)((uint)unaff_EBX >> 8),*(undefined1 *)(iVar2 + 0xb8)) & 0xffffff01;
  uVar10 = CONCAT31((uint3)(uVar1 >> 9),(char)(uVar1 >> 1)) & 0xffffff01;
  uVar7 = uVar1 >> 3 & 0xffffff01;
  cVar4 = (char)uVar12;
  param_5 = CONCAT13(cVar4,(undefined3)param_5);
  param_2 = (float)*(int *)(iVar2 + 0x1c) - 1.0;
  if ((float)*(int *)(iVar2 + 0x18) - 1.0 <= 0.0) {
    ExceptionList = local_10;
    return;
  }
  if (param_2 <= 0.0) {
    ExceptionList = local_10;
    return;
  }
  local_8 = 0;
  cVar9 = (char)uVar10;
  cVar3 = (char)uVar7;
  if (cVar9 == '\0') {
    param_4 = CONCAT31(param_4._1_3_,1);
    if (cVar3 == '\0') goto LAB_0057d132;
  }
  param_4 = param_4 & 0xffffff00;
LAB_0057d132:
  uVar14 = (uint3)(uVar12 >> 8);
  if ((cVar4 == '\0') && (cVar3 == '\0')) {
    iVar13 = CONCAT31(uVar14,1);
  }
  else {
    iVar13 = (uint)uVar14 << 8;
  }
  uVar14 = (uint3)(uVar10 >> 8);
  if ((cVar9 == '\0') && ((uVar1 >> 2 & 1) == 0)) {
    iVar11 = CONCAT31(uVar14,1);
  }
  else {
    iVar11 = (uint)uVar14 << 8;
  }
  uVar14 = (uint3)(uVar7 >> 8);
  if ((cVar4 == '\0') && ((uVar1 >> 2 & 1) == 0)) {
    iVar8 = CONCAT31(uVar14,1);
  }
  else {
    iVar8 = (uint)uVar14 << 8;
  }
  FUN_00680ef0(param_2,0x40800000,0x40800000,iVar8,iVar11,iVar13,param_4);
  if (((*(byte *)(iVar2 + 0x69) & 0x10) == 0) &&
     ((*(int *)(iVar2 + 0xc) == 0 || (cVar4 = FUN_006e6320(uVar5), cVar4 != '\0')))) {
    param_5 = CONCAT31(param_5._1_3_,1);
  }
  else {
    param_5 = param_5 & 0xffffff00;
  }
  FUN_0057ce30(uVar15,param_5);
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

