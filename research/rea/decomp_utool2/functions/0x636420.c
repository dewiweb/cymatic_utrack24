// rea decompile_all
// name: FUN_00636420
// address: 0x636420
// body: available
// range: 0x636420-0x636562 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0063651a) */
/* WARNING: Removing unreachable block (ram,0x00636526) */

bool FUN_00636420(void)

{
  LPCWSTR lpParameters;
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  HINSTANCE pHVar5;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ecb3;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00631e00(&local_14,1);
  local_8 = 0;
  iVar2 = FUN_0045c230(local_14,uVar1);
  if ((-1 < iVar2) && (iVar2 = FUN_0045c230(local_14,uVar1), iVar2 < 0)) {
    piVar3 = (int *)FUN_00637690(&local_14);
    iVar2 = *piVar3;
    *piVar3 = local_14;
    piVar3 = (int *)(local_18 + -8);
    local_14 = iVar2;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  puVar4 = (undefined4 *)FUN_00458890();
  lpParameters = (LPCWSTR)*puVar4;
  puVar4 = (undefined4 *)FUN_00458890();
  pHVar5 = ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,(LPCWSTR)*puVar4,lpParameters,(LPCWSTR)0x0,10);
  piVar3 = (int *)(local_14 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  ExceptionList = local_10;
  return (HINSTANCE)0x20 < pHVar5;
}

