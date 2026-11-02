// rea decompile_all
// name: FUN_005510f0
// address: 0x5510f0
// body: available
// range: 0x5510f0-0x5514bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005511cc) */
/* WARNING: Removing unreachable block (ram,0x005511b7) */
/* WARNING: Removing unreachable block (ram,0x005511bf) */
/* WARNING: Removing unreachable block (ram,0x005511cf) */
/* WARNING: Removing unreachable block (ram,0x005511f9) */
/* WARNING: Removing unreachable block (ram,0x00551205) */
/* WARNING: Removing unreachable block (ram,0x0055120e) */
/* WARNING: Removing unreachable block (ram,0x00551217) */
/* WARNING: Removing unreachable block (ram,0x00551234) */
/* WARNING: Removing unreachable block (ram,0x00551230) */
/* WARNING: Removing unreachable block (ram,0x0055124b) */
/* WARNING: Removing unreachable block (ram,0x00551252) */
/* WARNING: Removing unreachable block (ram,0x00551262) */
/* WARNING: Removing unreachable block (ram,0x00551268) */
/* WARNING: Removing unreachable block (ram,0x00551301) */
/* WARNING: Removing unreachable block (ram,0x00551328) */
/* WARNING: Removing unreachable block (ram,0x0055133b) */
/* WARNING: Removing unreachable block (ram,0x00551270) */
/* WARNING: Removing unreachable block (ram,0x00551278) */
/* WARNING: Removing unreachable block (ram,0x005512b2) */
/* WARNING: Removing unreachable block (ram,0x005512b6) */
/* WARNING: Removing unreachable block (ram,0x005512c7) */
/* WARNING: Removing unreachable block (ram,0x005512cd) */
/* WARNING: Removing unreachable block (ram,0x005512d0) */
/* WARNING: Removing unreachable block (ram,0x005512e5) */
/* WARNING: Removing unreachable block (ram,0x00551354) */
/* WARNING: Removing unreachable block (ram,0x005512e9) */
/* WARNING: Removing unreachable block (ram,0x00551346) */
/* WARNING: Removing unreachable block (ram,0x005512f4) */
/* WARNING: Removing unreachable block (ram,0x00551366) */
/* WARNING: Removing unreachable block (ram,0x0055136c) */
/* WARNING: Removing unreachable block (ram,0x0055137f) */
/* WARNING: Removing unreachable block (ram,0x00551383) */
/* WARNING: Removing unreachable block (ram,0x005513b2) */
/* WARNING: Removing unreachable block (ram,0x0055138c) */
/* WARNING: Removing unreachable block (ram,0x0055139b) */
/* WARNING: Removing unreachable block (ram,0x005513aa) */
/* WARNING: Removing unreachable block (ram,0x005513b5) */
/* WARNING: Removing unreachable block (ram,0x005513c4) */
/* WARNING: Removing unreachable block (ram,0x005513cc) */
/* WARNING: Removing unreachable block (ram,0x005513dd) */
/* WARNING: Removing unreachable block (ram,0x00551422) */
/* WARNING: Removing unreachable block (ram,0x00551430) */
/* WARNING: Removing unreachable block (ram,0x0055143e) */
/* WARNING: Removing unreachable block (ram,0x0055144a) */
/* WARNING: Removing unreachable block (ram,0x00551453) */
/* WARNING: Removing unreachable block (ram,0x00551459) */

int * FUN_005510f0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00710934;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 4;
  uStack_7 = 0;
  FUN_00635720(param_2,&DAT_0073df50);
  iVar1 = *(int *)(in_ECX + 0x54);
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  _local_8 = CONCAT31(uStack_7,5);
  iVar2 = *(int *)(in_ECX + 0x58);
  *param_1 = iVar2;
  if (iVar2 != 0) {
    LOCK();
    *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
    UNLOCK();
  }
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FID_conflict__free((void *)0x0);
  piVar3 = (int *)(param_2 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(param_3 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

