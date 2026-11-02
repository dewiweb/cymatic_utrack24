// rea decompile_all
// name: FUN_00606430
// address: 0x606430
// body: available
// range: 0x606430-0x606569 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006064f4) */
/* WARNING: Removing unreachable block (ram,0x00606500) */
/* WARNING: Removing unreachable block (ram,0x00606511) */
/* WARNING: Removing unreachable block (ram,0x00606517) */
/* WARNING: Removing unreachable block (ram,0x00606524) */
/* WARNING: Removing unreachable block (ram,0x0060652c) */
/* WARNING: Removing unreachable block (ram,0x00606538) */
/* WARNING: Removing unreachable block (ram,0x00606507) */
/* WARNING: Removing unreachable block (ram,0x0060650f) */

void FUN_00606430(undefined4 param_1,undefined4 *param_2)

{
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c14e;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x50));
  FUN_00447fb0(in_ECX + 0x1c);
  local_18 = param_1;
  local_14 = (uint)((char)param_2 != '\0') * 2 + -1;
  local_8 = 0;
  param_2 = &local_18;
  FUN_00448770(&param_2);
  FUN_00447fb0(in_ECX + 0x1c,extraout_ECX);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x50));
  FID_conflict__free((void *)0x0);
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

