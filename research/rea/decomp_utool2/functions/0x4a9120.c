// rea decompile_all
// name: FUN_004a9120
// address: 0x4a9120
// body: available
// range: 0x4a9120-0x4a92f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004a9120(int param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *in_ECX;
  float10 fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 local_4c [16];
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  float local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  if ((((in_ECX[7] == 0) || (((byte)in_ECX[2] & 0x18) != 0x18)) ||
      (cVar2 = (**(code **)(*in_ECX + 0x40))(), cVar2 != '\0')) ||
     ((((byte)*(undefined4 *)(param_1 + 0x18) & 3) == 3 || (((byte)DAT_00c8a9c8 & 0x70) != 0))))
  goto LAB_004a92b8;
  fVar6 = (float10)(**(code **)(*(int *)in_ECX[1] + 0x3c))();
  local_1c = (float)fVar6;
  FUN_0048d3f0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  FUN_004a8ef0(&local_3c);
  if (local_2c == local_3c) {
    local_c = CONCAT31(local_c._1_3_,1);
    if (local_24 + local_2c == local_34 + local_3c) goto LAB_004a91d7;
  }
  else {
LAB_004a91d7:
    local_c = local_c & 0xffffff00;
  }
  if (local_28 == local_38) {
    local_10 = CONCAT31(local_10._1_3_,1);
    if (local_20 + local_28 == local_30 + local_38) goto LAB_004a91f7;
  }
  else {
LAB_004a91f7:
    local_10 = local_10 & 0xffffff00;
  }
  if (local_2c == local_3c) {
LAB_004a9214:
    local_14 = local_14 & 0xffffff00;
  }
  else {
    local_14 = CONCAT31(local_14._1_3_,1);
    if (local_24 + local_2c != local_34 + local_3c) goto LAB_004a9214;
  }
  if (local_28 == local_38) {
LAB_004a922e:
    local_18 = local_18 & 0xffffff00;
  }
  else {
    local_18 = CONCAT31(local_18._1_3_,1);
    if (local_20 + local_28 != local_30 + local_38) goto LAB_004a922e;
  }
  iVar3 = FUN_006e5f70();
  iVar1 = *(int *)in_ECX[7];
  uVar7 = local_18;
  uVar8 = local_14;
  uVar9 = local_10;
  uVar10 = local_c;
  uVar4 = FUN_006cab30(local_4c,*(undefined4 *)(iVar3 + 0x54));
  (**(code **)(iVar1 + 4))(&local_2c,&local_3c,uVar4,uVar7,uVar8,uVar9,uVar10);
  piVar5 = (int *)FUN_0048d4d0(local_2c,local_28,local_24,local_20);
  local_2c = *piVar5;
  local_28 = piVar5[1];
  local_24 = piVar5[2];
  iVar1 = piVar5[3];
  *(int *)(param_1 + 8) = local_2c;
  *(int *)(param_1 + 0xc) = local_28;
  *(int *)(param_1 + 0x10) = local_24;
  *(int *)(param_1 + 0x14) = iVar1;
LAB_004a92b8:
  if (((*(uint *)(param_1 + 0x18) & 0x40) != 0) && ((*(byte *)((int *)in_ECX[1] + 0x1a) & 2) == 0))
  {
    (**(code **)(*(int *)in_ECX[1] + 0x28))(1);
    return 0;
  }
  if (((char)*(uint *)(param_1 + 0x18) < '\0') && ((*(byte *)((int *)in_ECX[1] + 0x1a) & 2) != 0)) {
    (**(code **)(*(int *)in_ECX[1] + 0x28))(0);
  }
  return 0;
}

