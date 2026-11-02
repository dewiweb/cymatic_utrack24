// rea decompile_all
// name: FUN_00627890
// address: 0x627890
// body: available
// range: 0x627890-0x627a24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00627890(undefined4 *param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  undefined4 *extraout_ECX;
  int local_1c;
  char *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d957;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(char *)*in_ECX != '\0') {
    puVar1 = (undefined4 *)FUN_00458890();
    DVar2 = GetFileAttributesW((LPCWSTR)*puVar1);
    if (DVar2 != 0xffffffff) {
      FUN_0044eef0();
      ExceptionList = local_10;
      return extraout_ECX;
    }
  }
  FUN_00636040();
  local_8 = 0;
  if (local_14 != *in_ECX) {
    iVar3 = FUN_0045c1e0(local_14);
    if (iVar3 != 0) {
      FUN_00634890();
      local_8 = CONCAT31(local_8._1_3_,1);
      if (*local_18 == '\0') {
        FUN_0062aec0(in_ECX);
        FUN_00624200();
        FUN_0062ade0();
      }
      *param_1 = local_18;
      piVar4 = (int *)(local_14 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      ExceptionList = local_10;
      return param_1;
    }
  }
  FUN_0045c990();
  FUN_006240d0();
  piVar4 = (int *)(local_1c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_14 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

