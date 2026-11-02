// rea decompile_all
// name: FUN_00635500
// address: 0x635500
// body: available
// range: 0x635500-0x635611 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 FUN_00635500(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071eb8b;
  local_10 = ExceptionList;
  if (*(char *)*param_1 == '\0') {
    return 0;
  }
  ExceptionList = &local_10;
  FUN_00627a90();
  local_8 = 0;
  if (*param_1 != local_14) {
    iVar1 = FUN_0045c1e0(*param_1);
    if (iVar1 != 0) {
      iVar1 = FUN_0044ec90();
      iVar2 = FUN_0044ec90();
      if (iVar1 < iVar2) {
        FUN_00636040();
        local_8 = CONCAT31(local_8._1_3_,1);
        param_1._3_1_ = FUN_00635500();
        piVar3 = (int *)(local_1c + -8);
        if (piVar3 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar3;
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar3);
          }
        }
      }
      else {
        param_1._3_1_ = 0;
      }
      goto LAB_006355db;
    }
  }
  param_1._3_1_ = 1;
LAB_006355db:
  piVar3 = (int *)(local_14 + -8);
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
  return param_1._3_1_;
}

