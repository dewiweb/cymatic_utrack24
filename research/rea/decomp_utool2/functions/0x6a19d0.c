// rea decompile_all
// name: FUN_006a19d0
// address: 0x6a19d0
// body: available
// range: 0x6a19d0-0x6a1bc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a19d0(undefined4 *param_1)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int in_ECX;
  char extraout_DL;
  undefined **ppuVar7;
  undefined1 local_34 [16];
  undefined4 *local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00722d08;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if ((*(int *)(in_ECX + 0xb0) < 0) && (*(int *)(in_ECX + 0xac) < 0)) {
    cVar2 = FUN_006cc060(0);
    local_14 = local_14 & 0xffffff00;
    if (cVar2 == '\0') goto LAB_006a1a1f;
  }
  local_14 = CONCAT31(local_14._1_3_,1);
LAB_006a1a1f:
  iVar4 = FUN_006e9580(uVar3);
  (**(code **)(*(int *)(iVar4 + 0x20) + 0x20))
            (param_1,*(undefined4 *)(in_ECX + 0x18),*(undefined4 *)(in_ECX + 0x1c),local_14);
  if ((*(int *)(in_ECX + 0x88) != 0) && (0 < *(int *)(in_ECX + 0x94))) {
    local_24 = param_1;
    uVar3 = 0;
    do {
      if (*(char *)(param_1 + 2) != '\0') {
        *(undefined1 *)(param_1 + 2) = 0;
        (**(code **)(*(int *)*param_1 + 0x34))();
      }
      *(undefined1 *)(param_1 + 2) = 1;
      local_8 = 0;
      if (uVar3 < *(uint *)(in_ECX + 0xa0)) {
        uVar5 = *(undefined4 *)(*(int *)(in_ECX + 0x98) + uVar3 * 4);
      }
      else {
        uVar5 = 0;
      }
      FUN_006773f0(uVar5,0);
      if (uVar3 < *(uint *)(in_ECX + 0xa0)) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0x98) + uVar3 * 4);
      }
      else {
        iVar4 = 0;
      }
      uVar1 = uVar3 + 1;
      if (uVar1 < *(uint *)(in_ECX + 0xa0)) {
        iVar6 = *(int *)(*(int *)(in_ECX + 0x98) + 4 + uVar3 * 4);
      }
      else {
        iVar6 = 0;
      }
      FUN_00472d90(0,iVar6 - iVar4,*(undefined4 *)(in_ECX + 0x1c));
      if (*(char *)(param_1 + 2) != extraout_DL) {
        *(char *)(param_1 + 2) = extraout_DL;
        (**(code **)(*(int *)*param_1 + 0x34))();
      }
      (**(code **)(*(int *)*param_1 + 0x14))(local_34);
      iVar4 = FUN_006e9580();
      local_20 = (int *)(iVar4 + 0x20);
      local_18 = CONCAT31(local_18._1_3_,uVar3 == *(uint *)(in_ECX + 0xb0));
      local_1c = CONCAT31(local_1c._1_3_,uVar3 == *(uint *)(in_ECX + 0xac));
      if (uVar3 < *(uint *)(in_ECX + 0x94)) {
        ppuVar7 = (undefined **)(*(int *)(in_ECX + 0x8c) + uVar3 * 4);
      }
      else {
        ppuVar7 = &PTR_DAT_00c7ed68;
      }
      if (uVar3 < *(uint *)(in_ECX + 0xa0)) {
        iVar4 = *(int *)(*(int *)(in_ECX + 0x98) + uVar3 * 4);
      }
      else {
        iVar4 = 0;
      }
      if (uVar1 < *(uint *)(in_ECX + 0xa0)) {
        iVar6 = *(int *)(*(int *)(in_ECX + 0x98) + 4 + uVar3 * 4);
      }
      else {
        iVar6 = 0;
      }
      (**(code **)(*local_20 + 0x30))
                (param_1,iVar6 - iVar4,*(undefined4 *)(in_ECX + 0x1c),uVar3,ppuVar7,local_1c,
                 local_18,local_14);
      local_8 = 1;
      if (*(char *)(param_1 + 2) == '\0') {
        (**(code **)(*(int *)*param_1 + 0x38))();
      }
      else {
        *(undefined1 *)(param_1 + 2) = 0;
      }
      local_8 = 0xffffffff;
      uVar3 = uVar1;
    } while ((int)uVar1 < *(int *)(in_ECX + 0x94));
  }
  ExceptionList = local_10;
  return;
}

