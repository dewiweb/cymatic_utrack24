// rea decompile_all
// name: FUN_004ed710
// address: 0x4ed710
// body: available
// range: 0x4ed710-0x4ed832 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ed710(int param_1)

{
  void *_Memory;
  int iVar1;
  int in_ECX;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705318;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = 0x14;
  if (0x13 < param_1) {
    iVar2 = param_1;
  }
  FUN_00471a50(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  _Memory = *(void **)(in_ECX + 0xa8);
  *(undefined4 *)(in_ECX + 0xa8) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  *(undefined4 *)(in_ECX + 0xb8) = 0;
  *(undefined4 *)(in_ECX + 0xbc) = 9;
  FUN_00471a50();
  FID_conflict__free(_Memory);
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x70));
  local_8 = 0;
  FUN_00684960(in_ECX + 0x88);
  local_8 = 0xffffffff;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x70));
  iVar1 = 0x28;
  if (0x28 < (int)*(float *)(in_ECX + 0xb8)) {
    iVar1 = (int)*(float *)(in_ECX + 0xb8);
  }
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x10),*(undefined4 *)(in_ECX + 0x14),iVar2,iVar1);
  ExceptionList = local_10;
  return;
}

