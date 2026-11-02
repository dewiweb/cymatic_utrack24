// rea decompile_all
// name: FUN_00636ec0
// address: 0x636ec0
// body: available
// range: 0x636ec0-0x636fc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00636ec0(int *param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071edef;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pcVar2 = (char *)*in_ECX;
  if (*pcVar2 == '\0') {
    piVar3 = (int *)(*param_1 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    LOCK();
    iVar1 = *in_ECX;
    *in_ECX = *param_1;
    UNLOCK();
    piVar3 = (int *)(iVar1 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
        ExceptionList = local_10;
        return in_ECX;
      }
    }
  }
  else if (in_ECX == param_1) {
    piVar3 = (int *)(pcVar2 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      *piVar3 = *piVar3 + 1;
      UNLOCK();
    }
    local_8 = 0;
    param_1 = (int *)pcVar2;
    in_ECX = (int *)FUN_00636ec0(&param_1);
    piVar3 = (int *)((int)param_1 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
        ExceptionList = local_10;
        return in_ECX;
      }
    }
  }
  else {
    FUN_00621830(*param_1);
  }
  ExceptionList = local_10;
  return in_ECX;
}

