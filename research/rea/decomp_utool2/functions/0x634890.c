// rea decompile_all
// name: FUN_00634890
// address: 0x634890
// body: available
// range: 0x634890-0x634a4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00634890(undefined4 *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  DWORD DVar3;
  int iVar4;
  int *in_ECX;
  undefined4 *extraout_ECX;
  int *piVar5;
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071ea71;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_00458890();
  DVar3 = GetFileAttributesW((LPCWSTR)*puVar2);
  if (((DVar3 & 0x10) != 0) && (DVar3 != 0xffffffff)) {
    FUN_0044eef0();
    ExceptionList = local_10;
    return extraout_ECX;
  }
  FUN_00636040();
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  if (local_18 != *in_ECX) {
    iVar4 = FUN_0045c1e0(local_18);
    if (iVar4 != 0) {
      FUN_00634890();
      local_8._0_1_ = 1;
      if (*local_14 == '\0') {
        FUN_00620c20(&local_20);
        local_8._0_1_ = 2;
        puVar2 = (undefined4 *)FUN_00612880(&local_1c);
        pcVar1 = (char *)*puVar2;
        *puVar2 = local_14;
        piVar5 = (int *)(local_1c + -8);
        local_14 = pcVar1;
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        piVar5 = (int *)(local_20 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar4 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar4 == 0) {
            FID_conflict__free(piVar5);
          }
        }
      }
      pcVar1 = local_14;
      local_14 = "";
      *param_1 = pcVar1;
      goto LAB_00634a16;
    }
  }
  FUN_0045c990();
  FUN_006240d0();
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
LAB_00634a16:
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

