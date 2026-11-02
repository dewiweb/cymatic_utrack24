// rea decompile_all
// name: FUN_006a77a0
// address: 0x6a77a0
// body: available
// range: 0x6a77a0-0x6a7907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a77a0(undefined4 param_1,int param_2,int param_3,undefined4 param_4,char param_5,
                 char param_6)

{
  int iVar1;
  float fVar2;
  undefined1 *local_4c;
  undefined1 auStack_48 [4];
  float local_44;
  float local_40;
  void *local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723242;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if ((param_5 != '\0') || (param_6 != '\0')) {
    local_40 = 9.777588e-39;
    FUN_00684a80();
  }
  iVar1 = param_2;
  if (param_3 < param_2) {
    iVar1 = param_3;
  }
  local_4c = auStack_48;
  fVar2 = (float)iVar1 * 0.4;
  local_44 = (float)param_2 * 0.5;
  local_40 = (float)param_3 * 0.5 - fVar2 * 4.0;
  FUN_006842b0();
  FUN_006842b0(&local_4c);
  FUN_006840c0();
  local_8 = 0;
  local_40 = 9.777856e-39;
  FUN_00683ff0();
  local_8 = 0xffffffff;
  local_40 = 9.777877e-39;
  FID_conflict__free(local_1c);
  local_4c = (undefined1 *)(fVar2 + fVar2);
  FUN_00472db0();
  local_4c = (undefined1 *)0x6a78f6;
  FUN_00677060();
  ExceptionList = local_10;
  return;
}

