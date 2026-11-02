// rea decompile_all
// name: FUN_006c8b00
// address: 0x6c8b00
// body: available
// range: 0x6c8b00-0x6c8ca2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006c8b00(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 *puVar3;
  void *local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007260ce;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_3c = *(undefined4 *)(in_ECX + 0xf0);
  uStack_38 = *(undefined4 *)(in_ECX + 0xf4);
  uStack_34 = *(undefined4 *)(in_ECX + 0xf8);
  uStack_30 = *(undefined4 *)(in_ECX + 0xfc);
  local_40 = *(int *)(in_ECX + 0xec);
  local_2c = *(undefined1 *)(in_ECX + 0x100);
  local_48 = (void *)0x0;
  local_44 = 0;
  if (local_40 != 0) {
    FUN_00409cf0(local_40);
    FUN_004c2c30(local_48,*(undefined4 *)(in_ECX + 0xe4),local_40 << 2);
  }
  local_8 = 0;
  cVar1 = (char)param_3;
  uVar2 = FUN_0067fe30(&local_28,(float)*(int *)(in_ECX + 0x18) - 3.0,
                       (float)*(int *)(in_ECX + 0x1c) - 3.0,0,0x24);
  FUN_00680060(uVar2);
  puVar3 = param_1;
  uVar2 = extraout_ECX;
  FUN_006842b0(&param_3);
  uStack_20 = param_3;
  local_18 = 0;
  local_14 = 0;
  iStack_1c = (uint)(cVar1 == '\0') * 2 + 2;
  FUN_006411a0(puVar3,uVar2);
  FUN_00684c50(*(undefined4 *)(in_ECX + 0xe0));
  cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar1 == '\0') && (cVar1 = FUN_00682580(), cVar1 == '\0')) {
    local_28 = 0x3f800000;
    uStack_24 = 0;
    uStack_20 = 0;
    iStack_1c = 0;
    local_18 = 0x3f800000;
    local_14 = 0;
    (**(code **)(*(int *)*param_1 + 0x5c))(&local_48,&local_28);
  }
  FID_conflict__free(local_48);
  ExceptionList = local_10;
  return;
}

