// rea decompile_all
// name: FUN_0060f900
// address: 0x60f900
// body: available
// range: 0x60f900-0x60fb1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0060f900(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int in_ECX;
  undefined4 extraout_ECX;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int iStack_1c;
  int local_18;
  undefined1 local_14 [8];
  undefined8 local_c;
  
  local_2c = 0xf;
  iVar3 = *(int *)(in_ECX + 0xa4);
  local_24 = 3000;
  local_c = (double)((float)*(int *)(in_ECX + 0x18) * 0.6) + 6755399441055744.0;
  local_20 = SUB84((double)((float)*(int *)(in_ECX + 0x18) * 0.35) + 6755399441055744.0,0);
  local_30 = local_20;
  local_28 = (undefined4)local_c;
  iVar5 = (int)((iVar3 >> 0x1f & 3U) + iVar3) >> 2;
  _local_20 = CONCAT44(iVar5,local_20);
  local_18 = in_ECX;
  if (*(int *)(in_ECX + 0x94) != 0) {
    puVar2 = (undefined4 *)FUN_0040dd60(local_14,iVar3);
    FUN_006e9790(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    FUN_0040dd60(local_14,iVar5 * 3);
  }
  if (*(int **)(in_ECX + 0x9c) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x9c) + 0x84))();
    uVar9 = *(undefined4 *)(in_ECX + 0x18);
    puVar8 = local_14;
    puVar6 = local_40;
    uVar7 = extraout_ECX;
    FUN_0040dd60(local_50,*(undefined4 *)(*(int *)(in_ECX + 0x9c) + 0x1c));
    FUN_0040de10(puVar6,uVar7);
    puVar2 = (undefined4 *)FUN_0040dde0(puVar8,uVar9);
    FUN_006e9790(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    FUN_0040dd60(local_50,iVar5);
  }
  iVar3 = *(int *)(in_ECX + 0xbc);
  local_c._4_4_ = iVar3;
  if (iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0x8c);
    iVar5 = ((*(int *)(in_ECX + 0x1c) - *(int *)(in_ECX + 0xa4)) - local_2c) - iVar5;
    iVar4 = *(int *)(in_ECX + 0xa4) * 8;
    if (iVar5 < iVar4) {
      iVar4 = iVar5;
    }
    iVar5 = *(int *)(iVar3 + 0x94) * 2;
    iVar3 = (**(code **)(*(int *)(iVar3 + 0xac) + 4))();
    iVar3 = iVar3 * iVar1 + iVar5;
    iVar5 = iVar5 + *(int *)(local_c._4_4_ + 0x8c) * 2;
    if (iVar4 < iVar3) {
      iVar3 = iVar4;
    }
    if (iVar5 < iVar3) {
      iVar5 = iVar3;
    }
    puVar2 = (undefined4 *)FUN_0040dd60(local_50,iVar5);
    FUN_006e9790(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    iVar5 = iStack_1c;
    FUN_0040dd60(local_50,iStack_1c);
    in_ECX = local_18;
  }
  if (*(int *)(in_ECX + 0xcc) != 0) {
    puVar2 = (undefined4 *)FUN_0040dd60(local_50,0x18);
    FUN_006e9790(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
    FUN_0040dd60(local_50,iVar5);
  }
  if (*(int *)(in_ECX + 0xc0) != 0) {
    puVar2 = (undefined4 *)FUN_0040dd60(local_50,*(undefined4 *)(in_ECX + 0xa4));
    FUN_006e9790(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
  }
  return;
}

