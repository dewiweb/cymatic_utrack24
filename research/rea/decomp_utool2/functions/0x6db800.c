// rea decompile_all
// name: FUN_006db800
// address: 0x6db800
// body: available
// range: 0x6db800-0x6dbbef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006db800(void)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar2;
  uint extraout_EDX_01;
  undefined4 uVar3;
  int in_stack_00000024;
  int in_stack_00000028;
  undefined4 uStack_34;
  uint local_30;
  uint local_2c;
  uint local_14;
  
  local_2c = 0x6db844;
  cVar1 = FUN_006e2bd0();
  local_2c = extraout_ECX;
  if ((cVar1 == '\0') || ((*(byte *)(in_stack_00000028 + 0x69) & 0x10) != 0)) {
LAB_006db865:
    local_14 = local_14 & 0xffffff00;
  }
  else {
    local_2c = 0;
    if (*(int *)(in_stack_00000028 + 0xc) != 0) {
      local_2c = 0x6db85a;
      cVar1 = FUN_006e6320();
      local_2c = extraout_ECX_00;
      if (cVar1 == '\0') goto LAB_006db865;
    }
    local_14 = CONCAT31(local_14._1_3_,1);
  }
  local_30 = 0x6db872;
  cVar1 = FUN_006cbfa0();
  uStack_34 = extraout_ECX_01;
  uVar2 = extraout_EDX;
  if ((cVar1 == '\0') || ((*(byte *)(in_stack_00000028 + 0x69) & 0x10) != 0)) {
LAB_006db890:
    uVar2 = uVar2 & 0xffffff00;
  }
  else {
    uStack_34 = 0;
    if (*(int *)(in_stack_00000028 + 0xc) != 0) {
      local_2c = 0x6db888;
      cVar1 = FUN_006e6320();
      uStack_34 = extraout_ECX_02;
      uVar2 = extraout_EDX_00;
      if (cVar1 == '\0') goto LAB_006db890;
    }
    uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
  }
  if (((DAT_00c8a678 == in_stack_00000028) && ((*(byte *)(in_stack_00000028 + 0x69) & 0x10) == 0))
     && (uStack_34 = 0, *(int *)(in_stack_00000028 + 0xc) != 0)) {
    local_2c = 0x6db8ac;
    FUN_006e6320();
    uStack_34 = extraout_ECX_03;
    uVar2 = extraout_EDX_01;
  }
  local_2c = local_14;
  local_30 = uVar2;
  FUN_006e8e70(&uStack_34,0x1001300,0);
  FUN_006ab370();
  if ((*(byte *)(in_stack_00000028 + 0x69) & 0x10) == 0) {
    if (*(int *)(in_stack_00000028 + 0xc) != 0) {
      local_2c = 0x6db8ed;
      cVar1 = FUN_006e6320();
      if (cVar1 == '\0') goto LAB_006db8fb;
    }
    uVar3 = 0x3f4ccccd;
  }
  else {
LAB_006db8fb:
    uVar3 = 0x3e99999a;
  }
  local_2c = uVar3;
  if ((in_stack_00000024 == 0) || (in_stack_00000024 == 1)) {
    local_30 = 0x6dbbe4;
    FUN_006a64a0();
    return;
  }
  if (in_stack_00000024 != 0xc) {
    if (in_stack_00000024 == 0xb) {
      local_30 = 0x6dba91;
      FUN_006a64a0();
    }
    else {
      if (in_stack_00000024 == 10) goto LAB_006db97b;
      if (in_stack_00000024 != 9) {
        return;
      }
    }
    local_2c = 2;
    uStack_34 = 0x6dbb28;
    local_30 = uVar3;
    FUN_006a5fe0();
    local_2c = 4;
    uStack_34 = 0x6dbb6d;
    local_30 = uVar3;
    FUN_006a5fe0();
    return;
  }
  local_30 = 0x6db978;
  FUN_006a64a0();
LAB_006db97b:
  local_2c = 1;
  uStack_34 = 0x6db9e0;
  local_30 = uVar3;
  FUN_006a5fe0();
  local_2c = 3;
  uStack_34 = 0x6dba39;
  local_30 = uVar3;
  FUN_006a5fe0();
  return;
}

