// rea decompile_all
// name: FUN_004fc110
// address: 0x4fc110
// body: available
// range: 0x4fc110-0x4fc215 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fc110(void)

{
  char cVar1;
  int in_ECX;
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706ba0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  cVar1 = FUN_004fbec0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  if (cVar1 == '\0') {
    if (*(int *)(in_ECX + 0xd5c) == 0) goto LAB_004fc1fc;
    *(undefined4 *)(in_ECX + 0xd5c) = 2;
    FUN_0045c990("Modified");
    local_8 = 4;
  }
  else {
    if (*(int *)(in_ECX + 0xd5c) == 0) goto LAB_004fc1fc;
    *(undefined4 *)(in_ECX + 0xd5c) = 3;
    FUN_0045c990("Modified");
    local_8 = 1;
  }
  FUN_006e4900(local_14,0);
  local_8 = 0xffffffff;
  FUN_00637c10();
  FUN_006e6170(0x1000280,DAT_00c7ebb0);
  FUN_006e6170(0x1000281,DAT_00c7ef94);
LAB_004fc1fc:
  FUN_004fbe50();
  ExceptionList = local_10;
  return;
}

