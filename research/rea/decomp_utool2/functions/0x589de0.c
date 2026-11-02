// rea decompile_all
// name: FUN_00589de0
// address: 0x589de0
// body: available
// range: 0x589de0-0x589ec4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00589de0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  int iVar3;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007139c9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  iVar3 = in_ECX[2] + 1;
  local_14 = in_ECX;
  if (in_ECX[1] < iVar3) {
    FUN_00409cf0(iVar3 / 2 + in_ECX[2] + 9 & 0xfffffff8);
  }
  iVar3 = in_ECX[2];
  in_ECX[2] = iVar3 + 1;
  piVar1 = (int *)(*in_ECX + iVar3 * 4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_1;
    piVar1 = (int *)(param_1 + -8);
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
  }
  uVar2 = FUN_00589a80(&local_14,&param_1);
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_006331e0(uVar2);
  local_14 = local_14 + -2;
  if (local_14 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *local_14;
    *local_14 = *local_14 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(local_14);
    }
  }
  piVar1 = (int *)(param_1 + -8);
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar1);
    }
  }
  ExceptionList = local_10;
  return;
}

