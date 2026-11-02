// rea decompile_all
// name: FUN_00496170
// address: 0x496170
// body: available
// range: 0x496170-0x496403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00496170(undefined4 *param_1,char param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_ECX;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 local_2c [8];
  int *local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702566;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = FUN_004b1ba0();
  if (iVar2 != 0) {
    FUN_0068b4a0();
  }
  fVar5 = (float)*(int *)(in_ECX + 0x18) * 0.5;
  fVar6 = (float)*(int *)(in_ECX + 0x1c) * 0.5;
  if (param_3 == '\0') {
    fVar4 = 0.65;
  }
  else {
    fVar4 = 0.6;
  }
  if (fVar5 <= fVar6) {
    fVar6 = fVar5;
  }
  FUN_00684c50();
  fVar6 = fVar4 * fVar6 + fVar4 * fVar6;
  FUN_00472db0(fVar6);
  FUN_00677060();
  FUN_0067f230();
  if (((*(byte *)(in_ECX + 0x69) & 0x10) == 0) &&
     ((*(int *)(in_ECX + 0xc) == 0 || (cVar1 = FUN_006e6320(), cVar1 != '\0')))) {
    if (param_2 != '\0') {
      FUN_00684210();
    }
  }
  else {
    FUN_006842b0();
  }
  FUN_00684c50();
  FUN_00472db0(fVar6);
  FUN_00676e90();
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_0063bf80();
  (**(code **)(*(int *)*puVar3 + 0x14))();
  (**(code **)(*local_24 + 0x54))();
  local_8 = 0xffffffff;
  FUN_0067fe30(local_2c,fVar6 * 0.55,fVar6 * 0.55);
  cVar1 = (**(code **)(*(int *)*param_1 + 0x30))();
  if ((cVar1 == '\0') && (cVar1 = FUN_00682580(), cVar1 == '\0')) {
    (**(code **)(*(int *)*param_1 + 0x5c))();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

