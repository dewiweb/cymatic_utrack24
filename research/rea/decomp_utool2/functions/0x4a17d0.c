// rea decompile_all
// name: FUN_004a17d0
// address: 0x4a17d0
// body: available
// range: 0x4a17d0-0x4a191c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a17d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  float in_XMM0_Da;
  float fVar1;
  float fVar2;
  float fVar3;
  int local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007032ee;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004a1b60();
  fVar1 = SUB84((double)in_XMM0_Da + 6755399441055744.0,0);
  FUN_004a1b60();
  fVar2 = SUB84((double)fVar1 + 6755399441055744.0,0);
  fVar3 = fVar2;
  FUN_006823f0();
  fVar1 = *(float *)(in_ECX + 4);
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    (**(code **)(*(int *)*param_1 + 0x34))();
  }
  local_8 = 0;
  local_20 = SUB84((double)(fVar3 + fVar1 + 0.5) + 6755399441055744.0,0);
  *(undefined1 *)(param_1 + 2) = 0;
  (**(code **)(*(int *)*param_1 + 0x34))();
  (**(code **)(*(int *)*param_1 + 0x14))();
  FUN_00676c40(0,0,fVar2,local_20 + 1,3,1,param_4);
  local_8 = 1;
  if (*(char *)(param_1 + 2) != '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    ExceptionList = local_10;
    return;
  }
  (**(code **)(*(int *)*param_1 + 0x38))();
  ExceptionList = local_10;
  return;
}

