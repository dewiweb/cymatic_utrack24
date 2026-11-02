// rea decompile_all
// name: FUN_006d4a80
// address: 0x6d4a80
// body: available
// range: 0x6d4a80-0x6d4c9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d4a80(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007272b7;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0068b540(param_1);
  FUN_0068bf30(&local_28);
  local_38 = local_28;
  uStack_34 = uStack_24;
  uStack_30 = uStack_20;
  uStack_2c = uStack_1c;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))(uVar1);
  }
  (**(code **)(*(int *)*param_1 + 0x14))(&local_38);
  FUN_00677430(local_28,uStack_24);
  iVar3 = *(int *)(in_ECX + 0xf0);
  local_14 = 6;
  if ((iVar3 != 0) && (*(char *)(in_ECX + 0xec) != '\0')) {
    iVar2 = *(int *)(in_ECX + 0x18) - (*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0x10));
    iVar3 = ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) +
            *(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0x10);
    local_14 = 6;
    if (6 < iVar3) {
      local_14 = iVar3;
    }
  }
  iVar3 = *(int *)(in_ECX + 0xf4);
  if (((iVar3 != 0) && (*(char *)(in_ECX + 0xec) != '\0')) &&
     (iVar2 = *(int *)(in_ECX + 0x18) - (*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0x10)),
     iVar3 = ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) +
             *(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0x10), local_14 < iVar3)) {
    local_14 = iVar3;
  }
  iVar3 = *(int *)(in_ECX + 0xf8);
  if (((iVar3 != 0) && (*(char *)(in_ECX + 0xec) != '\0')) &&
     (iVar2 = *(int *)(in_ECX + 0x18) - (*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0x10)),
     iVar3 = ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) +
             *(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0x10), local_14 < iVar3)) {
    local_14 = iVar3;
  }
  do {
    if (*(int *)(in_ECX + 0x34) != 0) {
      iVar3 = *(int *)(in_ECX + 0x34);
      goto LAB_006d4c58;
    }
    in_ECX = *(int *)(in_ECX + 0xc);
  } while (in_ECX != 0);
  local_8 = in_ECX;
  if (DAT_00c8a67c == 0) {
    local_18 = operator_new(0xd0);
    DAT_00c8a67c = FUN_006cb960();
  }
  iVar3 = FUN_006cb680();
  local_8 = 0xffffffff;
LAB_006d4c58:
  (**(code **)(*(int *)(iVar3 + 0x34) + 4))();
  ExceptionList = local_10;
  return;
}

