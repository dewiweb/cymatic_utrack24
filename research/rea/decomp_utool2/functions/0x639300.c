// rea decompile_all
// name: FUN_00639300
// address: 0x639300
// body: available
// range: 0x639300-0x639489 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00639300(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  undefined4 *puVar3;
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071f1b7;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00634690(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  if ((local_14 != &DAT_00bfe12c) && (iVar1 = FUN_0045c1e0(local_14,&DAT_00bfe12c), iVar1 != 0)) {
    puVar3 = in_ECX + 2;
    if (*(char *)in_ECX[2] == '\0') {
      puVar3 = in_ECX;
    }
    piVar2 = (int *)FUN_00635a10(&local_18,*puVar3);
    iVar1 = *piVar2;
    *piVar2 = (int)local_14;
    piVar2 = (int *)(local_18 + -8);
    local_14 = (undefined1 *)iVar1;
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    FUN_00635a10(&local_18,*in_ECX);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_00632830(param_1,in_ECX[1]);
    piVar2 = (int *)(local_18 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    piVar2 = (int *)((int)local_14 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar2);
      }
    }
    ExceptionList = local_10;
    return param_1;
  }
  piVar2 = (int *)(local_14 + -8);
  *param_1 = &DAT_00bfe12c;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

