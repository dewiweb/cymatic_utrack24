// rea decompile_all
// name: FUN_00449890
// address: 0x449890
// body: available
// range: 0x449890-0x449d49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00449890(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  int iVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28 [8];
  undefined4 local_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  int local_8;
  
  iVar1 = FUN_0044ddc0();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = *(int *)(iVar1 + 0xa4);
  local_34 = 0;
  local_2c = 3000;
  local_10 = (double)((float)*(int *)(in_ECX + 0x18) * 0.6) + 6755399441055744.0;
  local_20 = SUB84((double)((float)*(int *)(in_ECX + 0x18) * 0.35) + 6755399441055744.0,0);
  local_38 = local_20;
  local_30 = (uint)local_10;
  iVar5 = (int)((iVar1 >> 0x1f & 3U) + iVar1) >> 2;
  _local_20 = CONCAT44(iVar5,local_20);
  uVar2 = extraout_ECX;
  local_8 = iVar1;
  if (*(int *)(in_ECX + 0x98) != 0) {
    FUN_0040dd60(&local_48,iVar1);
    local_10 = (double)CONCAT44(*(int *)(in_ECX + 0xc0),(uint)local_10);
    if (*(int *)(in_ECX + 0xc0) != 0) {
      uVar2 = FUN_006c65e0(iVar1);
      FUN_006e9790(*(undefined4 *)(local_10._4_4_ + 0x10),*(undefined4 *)(local_10._4_4_ + 0x14),
                   uVar2,iVar1);
      puVar3 = (undefined4 *)FUN_0040dcd0(&local_18,*(undefined4 *)(*(int *)(in_ECX + 0xc0) + 0x18))
      ;
      FUN_006e9790(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
      FUN_0040dcd0(&local_18,iVar5);
      iVar1 = local_8;
    }
    FUN_006e9790(local_48,local_44,local_40,local_3c);
    FUN_0040dd60(&local_48,iVar5);
    uVar2 = extraout_ECX_00;
  }
  if (*(int *)(in_ECX + 0x9c) != 0) {
    FUN_0040dd60(&local_18,iVar1);
    if (*(int *)(in_ECX + 0xc0) == 0) {
      iVar1 = (int)(uint)local_10 / 6;
    }
    else {
      iVar1 = *(int *)(*(int *)(in_ECX + 0xc0) + 0x18);
    }
    puVar3 = (undefined4 *)FUN_0040dcd0(&local_48,iVar1);
    FUN_006e9790(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    FUN_0040dcd0(&local_48,iVar5);
    FUN_006e9790(local_18,local_14,(uint)local_10,local_10._4_4_);
    FUN_0040dd60(&local_48,iVar5);
    uVar2 = extraout_ECX_01;
  }
  iVar1 = local_8;
  if (*(int *)(in_ECX + 0xd8) != 0) {
    uVar2 = FUN_0044c350(uVar2);
    puVar3 = (undefined4 *)FUN_0040dd60(&local_48,uVar2);
    FUN_006e9790(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    iVar1 = local_8;
    FUN_006e9790(0,(*(int *)(*(int *)(in_ECX + 0xd8) + 0x1c) / 2 +
                   *(int *)(*(int *)(in_ECX + 0xd8) + 0x14)) - local_8 / 2,local_38,local_8);
    FUN_0040dd60(&local_48,iVar5);
    uVar2 = extraout_ECX_02;
  }
  local_10 = (double)CONCAT44(*(int *)(in_ECX + 0xd4),(uint)local_10);
  if (*(int *)(in_ECX + 0xd4) != 0) {
    uVar2 = FUN_0044c350(uVar2);
    puVar3 = (undefined4 *)FUN_0040dd60(&local_48,uVar2);
    FUN_006e9790(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    iVar1 = local_8;
    FUN_006e9790(0,(*(int *)(*(int *)(in_ECX + 0xd4) + 0x1c) / 2 +
                   *(int *)(*(int *)(in_ECX + 0xd4) + 0x14)) - local_8 / 2,local_38,local_8);
    FUN_0040dd60(&local_48,iVar5);
  }
  FUN_0040dd60(&local_48,iVar5 * 2);
  local_10 = (double)CONCAT44(*(int *)(in_ECX + 0xcc),(uint)local_10);
  if (*(int *)(in_ECX + 0xcc) != 0) {
    puVar3 = (undefined4 *)FUN_0040ddb0(&local_48,iVar1);
    FUN_006e9790(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    iVar1 = *(int *)(in_ECX + 0xcc);
    uVar2 = *(undefined4 *)(iVar1 + 0x1c);
    uVar4 = FUN_006c65e0(uVar2);
    FUN_006e9790(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14),uVar4,uVar2);
    iVar5 = iStack_1c;
  }
  if (*(int *)(in_ECX + 0xcc) != 0) {
    local_10._0_5_ = (uint5)(uint)local_10;
    if ((*(byte *)(*(int *)(in_ECX + 0xcc) + 0x68) & 2) != 0) goto LAB_00449ba2;
  }
  local_10._0_5_ = CONCAT14(1,(uint)local_10);
LAB_00449ba2:
  if (*(int **)(in_ECX + 0xa0) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xa0) + 0x28))(local_10._4_4_);
    puVar3 = (undefined4 *)FUN_0040dd60(&local_48,local_8);
    FUN_006e9790(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    FUN_0040dd60(&local_48,iVar5);
  }
  if (*(int **)(in_ECX + 0xa4) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0xa4) + 0x28))(local_10._4_4_);
    puVar3 = (undefined4 *)FUN_0040dd60(&local_48,local_8);
    FUN_006e9790(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    FUN_0040dd60(&local_48,iVar5);
  }
  FUN_0040dd60(&local_48,iVar5);
  if ((*(int *)(in_ECX + 200) != 0) || (*(int *)(in_ECX + 0xd0) != 0)) {
    FUN_0040dd60(&local_48,local_8);
    if (*(int **)(in_ECX + 200) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 200) + 0x28))(local_10._4_4_);
      iVar1 = *(int *)(in_ECX + 200);
      uVar2 = FUN_006c65e0(local_8);
      FUN_006e9790(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14),uVar2,local_8);
      puVar3 = (undefined4 *)FUN_0040dd10(local_28,*(undefined4 *)(*(int *)(in_ECX + 200) + 0x18));
      FUN_006e9790(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
      FUN_0040dd10(local_28,iVar5);
    }
    if (*(int **)(in_ECX + 0xd0) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0xd0) + 0x28))(local_10._4_4_);
      iVar1 = *(int *)(in_ECX + 0xd0);
      uVar2 = FUN_006c65e0(local_8);
      FUN_006e9790(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(iVar1 + 0x14),uVar2,local_8);
      puVar3 = (undefined4 *)FUN_0040dd10(local_28,*(undefined4 *)(*(int *)(in_ECX + 0xd0) + 0x18));
      FUN_006e9790(*puVar3,puVar3[1],puVar3[2],puVar3[3]);
    }
    FUN_0040dd60(&local_48,iVar5);
  }
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14),
               *(undefined4 *)(in_ECX + 0x18),local_34);
  return;
}

