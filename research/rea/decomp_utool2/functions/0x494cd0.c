// rea decompile_all
// name: FUN_00494cd0
// address: 0x494cd0
// body: available
// range: 0x494cd0-0x494efe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00494cd0(int *param_1,int param_2,char param_3,double param_4,double param_5)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 *puVar5;
  int *piVar6;
  float in_XMM2_Da;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007024bf;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar8 = 0;
  uVar9 = 0;
  in_ECX[8] = 0;
  iVar3 = 1;
  if (1 < param_2) {
    iVar3 = param_2;
  }
  in_ECX[9] = iVar3;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[2] = *param_1;
  in_ECX[3] = param_1[1];
  in_ECX[4] = param_1[2];
  in_ECX[5] = param_1[3];
  *(double *)(in_ECX + 6) = (double)in_XMM2_Da;
  if (*in_ECX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*in_ECX + 8);
  }
  uVar1 = FUN_004af950(iVar3 + 0x10);
  *(undefined1 *)(in_ECX + 0x1c) = uVar1;
  if (*in_ECX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*in_ECX + 8);
  }
  *(bool *)((int)in_ECX + 0x71) =
       in_XMM2_Da != (float)(int)(0xff - (uint)*(byte *)(iVar3 + 0x6c)) / 255.0;
  if (*in_ECX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*in_ECX + 8);
  }
  *(double *)(in_ECX + 0x12) = (double)*(int *)(iVar3 + 0x10);
  if (*in_ECX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*in_ECX + 8);
  }
  *(double *)(in_ECX + 0x14) = (double)*(int *)(iVar3 + 0x14);
  if (*in_ECX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*in_ECX + 8);
  }
  *(double *)(in_ECX + 0x16) = (double)(*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0x10));
  if (*in_ECX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*in_ECX + 8);
  }
  *(double *)(in_ECX + 0x18) = (double)(*(int *)(iVar3 + 0x1c) + *(int *)(iVar3 + 0x14));
  if (*in_ECX == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(*in_ECX + 8);
  }
  *(double *)(in_ECX + 0x1a) = (double)((float)(int)(0xff - (uint)*(byte *)(iVar3 + 0x6c)) / 255.0);
  dVar7 = 4.0 / (param_4 + param_5 + 2.0);
  *(double *)(in_ECX + 0xc) = dVar7;
  param_4 = dVar7 * param_4;
  dVar7 = dVar7 * param_5;
  if (param_4 <= (double)CONCAT44(uVar9,uVar8)) {
    param_4 = (double)CONCAT44(uVar9,uVar8);
  }
  if (dVar7 <= (double)CONCAT44(uVar9,uVar8)) {
    dVar7 = (double)CONCAT44(uVar9,uVar8);
  }
  *(double *)(in_ECX + 10) = param_4;
  *(double *)(in_ECX + 0xe) = dVar7;
  if (param_3 == '\0') {
    puVar5 = (undefined4 *)in_ECX[1];
    if (puVar5 == (undefined4 *)0x0) goto LAB_00494ed1;
    in_ECX[1] = 0;
  }
  else {
    operator_new(0x74);
    local_8 = 0;
    if (*in_ECX == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(*in_ECX + 8);
    }
    puVar4 = (undefined4 *)FUN_004951c0(uVar8);
    local_8 = 0xffffffff;
    puVar5 = (undefined4 *)in_ECX[1];
    if (puVar5 == puVar4) goto LAB_00494ed1;
    in_ECX[1] = (int)puVar4;
  }
  if (puVar5 != (undefined4 *)0x0) {
    (**(code **)*puVar5)(1,uVar2);
  }
LAB_00494ed1:
  if (*in_ECX == 0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = *(int **)(*in_ECX + 8);
  }
  (**(code **)(*piVar6 + 0x28))(param_3 == '\0');
  ExceptionList = local_10;
  return;
}

