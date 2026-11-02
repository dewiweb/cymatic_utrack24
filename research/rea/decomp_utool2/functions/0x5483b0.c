// rea decompile_all
// name: FUN_005483b0
// address: 0x5483b0
// body: available
// range: 0x5483b0-0x5486f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00548457) */
/* WARNING: Removing unreachable block (ram,0x0054846f) */
/* WARNING: Removing unreachable block (ram,0x00548472) */
/* WARNING: Removing unreachable block (ram,0x005484d0) */
/* WARNING: Removing unreachable block (ram,0x005484dc) */
/* WARNING: Removing unreachable block (ram,0x005484e5) */
/* WARNING: Removing unreachable block (ram,0x005484f7) */
/* WARNING: Removing unreachable block (ram,0x00548503) */
/* WARNING: Removing unreachable block (ram,0x0054850c) */
/* WARNING: Removing unreachable block (ram,0x00548542) */
/* WARNING: Removing unreachable block (ram,0x0054854e) */
/* WARNING: Removing unreachable block (ram,0x00548557) */
/* WARNING: Removing unreachable block (ram,0x005485a1) */
/* WARNING: Removing unreachable block (ram,0x005485a4) */
/* WARNING: Removing unreachable block (ram,0x005485f3) */
/* WARNING: Removing unreachable block (ram,0x005485ff) */
/* WARNING: Removing unreachable block (ram,0x00548608) */
/* WARNING: Removing unreachable block (ram,0x00548616) */
/* WARNING: Removing unreachable block (ram,0x00548622) */
/* WARNING: Removing unreachable block (ram,0x0054862b) */
/* WARNING: Removing unreachable block (ram,0x00548639) */
/* WARNING: Removing unreachable block (ram,0x00548645) */
/* WARNING: Removing unreachable block (ram,0x0054864e) */
/* WARNING: Removing unreachable block (ram,0x0054865c) */
/* WARNING: Removing unreachable block (ram,0x00548668) */
/* WARNING: Removing unreachable block (ram,0x00548671) */
/* WARNING: Removing unreachable block (ram,0x00548677) */
/* WARNING: Removing unreachable block (ram,0x00548689) */
/* WARNING: Removing unreachable block (ram,0x00548693) */
/* WARNING: Removing unreachable block (ram,0x0054869c) */
/* WARNING: Removing unreachable block (ram,0x005486a0) */
/* WARNING: Removing unreachable block (ram,0x005486ad) */
/* WARNING: Removing unreachable block (ram,0x005486b7) */

undefined1 FUN_005483b0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 *puVar5;
  undefined4 *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070f696;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  lpCriticalSection = (LPCRITICAL_SECTION)(DAT_00c8a5c4 + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  local_8 = 1;
  puVar5 = (undefined4 *)FUN_005437e0();
  uVar3 = *param_1;
  *param_1 = *puVar5;
  *puVar5 = uVar3;
  if (local_20 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_20 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_20)(1,uVar4);
    }
  }
  FUN_0040f7f0();
  FID_conflict__free((void *)0x0);
  LeaveCriticalSection(lpCriticalSection);
  ExceptionList = local_10;
  return 1;
}

