// rea decompile_all
// name: FUN_006a27b0
// address: 0x6a27b0
// body: available
// range: 0x6a27b0-0x6a29a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a27b0(undefined4 param_1,int param_2,undefined4 param_3,char param_4,uint param_5)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint3 uVar9;
  int iVar8;
  byte bVar10;
  float fVar11;
  undefined1 local_18 [4];
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00722de8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar8 = DAT_00c8a678;
  if (((*(byte *)(param_2 + 0x69) & 0x10) == 0) && (*(int *)(param_2 + 0xc) != 0)) {
    FUN_006e6320(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    iVar8 = DAT_00c8a678;
  }
  for (; (iVar8 != param_2 && (iVar8 != 0)); iVar8 = *(int *)(iVar8 + 0xc)) {
  }
  puVar3 = &local_14;
  FUN_0067f460(local_18);
  FUN_00684d10(puVar3);
  if (((char)param_5 != '\0') || (param_4 != '\0')) {
    puVar3 = (undefined4 *)FUN_00680c60(&param_5);
    local_14 = *puVar3;
  }
  uVar1 = *(uint *)(param_2 + 0xb8);
  bVar10 = *(byte *)(param_2 + 0xb8) & 1;
  uVar7 = CONCAT31((uint3)(uVar1 >> 9),(char)(uVar1 >> 1)) & 0xffffff01;
  uVar4 = uVar1 >> 3 & 0xffffff01;
  fVar11 = (float)*(int *)(param_2 + 0x1c) - 1.0;
  if ((float)*(int *)(param_2 + 0x18) - 1.0 <= 0.0) {
    ExceptionList = local_10;
    return;
  }
  if (fVar11 <= 0.0) {
    ExceptionList = local_10;
    return;
  }
  local_8 = 0;
  cVar6 = (char)uVar7;
  cVar2 = (char)uVar4;
  if (cVar6 == '\0') {
    param_5 = CONCAT31(param_5._1_3_,1);
    if (cVar2 == '\0') goto LAB_006a2913;
  }
  param_5 = param_5 & 0xffffff00;
LAB_006a2913:
  if ((bVar10 != 0) || (_param_4 = 1, cVar2 != '\0')) {
    _param_4 = 0;
  }
  uVar9 = (uint3)(uVar7 >> 8);
  if ((cVar6 == '\0') && ((uVar1 >> 2 & 1) == 0)) {
    iVar8 = CONCAT31(uVar9,1);
  }
  else {
    iVar8 = (uint)uVar9 << 8;
  }
  uVar9 = (uint3)(uVar4 >> 8);
  if ((bVar10 == 0) && ((uVar1 >> 2 & 1) == 0)) {
    iVar5 = CONCAT31(uVar9,1);
  }
  else {
    iVar5 = (uint)uVar9 << 8;
  }
  FUN_00680ef0(fVar11,0x40800000,0x40800000,iVar5,iVar8,_param_4,param_5);
  FUN_006a29b0(local_14);
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

