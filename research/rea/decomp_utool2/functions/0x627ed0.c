// rea decompile_all
// name: FUN_00627ed0
// address: 0x627ed0
// body: available
// range: 0x627ed0-0x6280f8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00627fd7) */
/* WARNING: Removing unreachable block (ram,0x00627f7f) */
/* WARNING: Removing unreachable block (ram,0x00627f88) */
/* WARNING: Removing unreachable block (ram,0x0062805f) */
/* WARNING: Removing unreachable block (ram,0x0062806b) */
/* WARNING: Removing unreachable block (ram,0x0062806c) */
/* WARNING: Removing unreachable block (ram,0x00627f81) */
/* WARNING: Removing unreachable block (ram,0x00627f90) */
/* WARNING: Removing unreachable block (ram,0x00627f95) */
/* WARNING: Removing unreachable block (ram,0x00627fa4) */
/* WARNING: Removing unreachable block (ram,0x00627fbc) */
/* WARNING: Removing unreachable block (ram,0x00627fc7) */
/* WARNING: Removing unreachable block (ram,0x00627fcb) */
/* WARNING: Removing unreachable block (ram,0x00627fdf) */
/* WARNING: Removing unreachable block (ram,0x00627fe4) */
/* WARNING: Removing unreachable block (ram,0x0062801d) */
/* WARNING: Removing unreachable block (ram,0x00628030) */
/* WARNING: Removing unreachable block (ram,0x00628048) */
/* WARNING: Removing unreachable block (ram,0x00628053) */
/* WARNING: Removing unreachable block (ram,0x00628057) */
/* WARNING: Removing unreachable block (ram,0x00628000) */
/* WARNING: Removing unreachable block (ram,0x00628018) */
/* WARNING: Removing unreachable block (ram,0x0062801b) */
/* WARNING: Removing unreachable block (ram,0x00628075) */
/* WARNING: Removing unreachable block (ram,0x0062807c) */
/* WARNING: Removing unreachable block (ram,0x006280bb) */

int * FUN_00627ed0(void)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  int *in_EDX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d9b5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0045e080();
  if (-1 < iVar1) {
    local_8 = 0;
    FUN_00635720(*in_EDX);
    FUN_0040f7f0();
    FID_conflict__free((void *)0x0);
  }
  iVar1 = *in_EDX;
  *in_ECX = iVar1;
  piVar2 = (int *)(iVar1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  ExceptionList = local_10;
  return in_ECX;
}

