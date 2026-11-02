// rea decompile_all
// name: FUN_00692770
// address: 0x692770
// body: available
// range: 0x692770-0x69292c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00692770(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721b0e;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(char *)((int)in_ECX + 0xfa) != '\0') {
    iVar2 = FUN_006e9580(uVar1);
    (**(code **)(*(int *)(iVar2 + 0x54) + 0xc))(param_1,in_ECX[6],in_ECX[7],param_2,param_3);
  }
  if (in_ECX[0x3a] != 0) {
    local_1c = in_ECX[0x3f];
    local_18 = local_1c * 2;
    local_14 = in_ECX[7] + local_1c * -2;
    iVar2 = local_1c;
    if (in_ECX[0x3a] == 1) {
      iVar2 = local_1c / 2 + in_ECX[0x42] + in_ECX[0x40];
      local_14 = local_14 - in_ECX[0x42];
    }
    iVar3 = FUN_006e9580(uVar1);
    (**(code **)(*(int *)(iVar3 + 0x54) + 0x10))
              (param_1,local_1c,iVar2,in_ECX[6] - local_18,local_14,in_ECX + 0x22);
  }
  if ((0 < in_ECX[0x41]) && (0 < in_ECX[0x42])) {
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    *(undefined1 *)(param_1 + 2) = 1;
    local_8 = 0;
    local_2c = in_ECX[0x3f];
    local_28 = in_ECX[0x40];
    local_24 = in_ECX[0x41];
    local_20 = in_ECX[0x42];
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
    (**(code **)(*(int *)*param_1 + 0x14))(&local_2c);
    FUN_00677430(in_ECX[0x3f],in_ECX[0x40]);
    if (*(code **)(*in_ECX + 0xd0) != FUN_00427490) {
      (**(code **)(*in_ECX + 0xd0))(param_1,in_ECX[0x41],in_ECX[0x42],param_2,param_3);
    }
    local_8 = 1;
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      ExceptionList = local_10;
      return;
    }
    (**(code **)(*(int *)*param_1 + 0x38))();
  }
  ExceptionList = local_10;
  return;
}

