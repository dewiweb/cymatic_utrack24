// rea decompile_all
// name: FUN_00642b60
// address: 0x642b60
// body: available
// range: 0x642b60-0x642c8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00642b60(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
                 float param_5,uint param_6)

{
  undefined4 in_ECX;
  undefined4 uVar1;
  undefined1 local_34 [4];
  float local_30;
  float local_28;
  void *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071fd90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_24 = (void *)0x0;
  local_20 = 0;
  local_1c = 0;
  FUN_00419e50(200,in_ECX);
  local_20 = 200;
  local_8 = 0;
  FUN_00682950(param_2,param_1,param_3,param_4,param_6);
  FUN_00682660(local_34,0,0xffffffff,0);
  param_3 = param_3 - local_30;
  if ((param_6 >> 5 & 1) == 0) {
    if ((param_6 >> 4 & 1) == 0) goto LAB_00642c43;
    param_5 = param_5 - local_28;
  }
  else {
    param_5 = (param_5 - local_28) * 0.5;
  }
  param_3 = param_3 + param_5;
LAB_00642c43:
  uVar1 = 0xffffffff;
  FUN_00642c90(0,0xffffffff,param_3);
  FUN_00472fd0(&local_24,uVar1,param_3);
  FUN_00471b00();
  FID_conflict__free(local_24);
  ExceptionList = local_10;
  return;
}

