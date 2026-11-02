// rea decompile_all
// name: FUN_004bc380
// address: 0x4bc380
// body: available
// range: 0x4bc380-0x4bc436 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bc380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  void *local_50 [8];
  undefined1 local_30 [8];
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701728;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_20 = *(undefined4 *)(in_ECX + 0xc);
  local_1c = *(undefined4 *)(in_ECX + 0x10);
  local_18 = *(undefined4 *)(in_ECX + 0x14);
  local_14 = *(undefined4 *)(in_ECX + 0x18);
  FUN_0044db90(local_30,param_2);
  if ((0 < local_28) && (0 < local_24)) {
    FUN_0067d950(local_30);
    local_8 = 0;
    FUN_0067c730(in_ECX + 8);
    FUN_004be070(local_50,param_3,param_4);
    FID_conflict__free(local_50[0]);
  }
  ExceptionList = local_10;
  return;
}

