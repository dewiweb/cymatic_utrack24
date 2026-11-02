// rea decompile_all
// name: FUN_006b6530
// address: 0x6b6530
// body: available
// range: 0x6b6530-0x6b666c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006b6530(undefined4 *param_1)

{
  bool bVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 **ppuVar5;
  int in_ECX;
  int *piVar6;
  int local_1c;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00723fb3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = &DAT_00bfe12c;
  local_8 = 0;
  puVar3 = (undefined4 *)FUN_006b60b0();
  local_8 = CONCAT31(local_8._1_3_,1);
  if ((undefined1 *)*puVar3 != &DAT_00bfe12c) {
    iVar4 = FUN_0045c1e0(*puVar3);
    if (iVar4 != 0) {
      ppuVar5 = (undefined1 **)FUN_006b60b0();
      bVar2 = false;
      bVar1 = true;
      goto LAB_006b65d2;
    }
  }
  local_14 = *(undefined1 **)(in_ECX + 0x180);
  piVar6 = (int *)(*(undefined1 **)(in_ECX + 0x180) + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    *piVar6 = *piVar6 + 1;
    UNLOCK();
  }
  ppuVar5 = &local_14;
  bVar2 = true;
  bVar1 = false;
LAB_006b65d2:
  *param_1 = *ppuVar5;
  *ppuVar5 = &DAT_00bfe12c;
  if (bVar1) {
    piVar6 = (int *)(local_18 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        FID_conflict__free(piVar6);
      }
    }
  }
  if ((bVar2) && (piVar6 = (int *)(local_14 + -8), piVar6 != &DAT_00bfe124)) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  piVar6 = (int *)(local_1c + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

