// rea decompile_all
// name: FUN_0069df90
// address: 0x69df90
// body: available
// range: 0x69df90-0x69e0ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069df90(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *in_ECX;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00722799;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006254f0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_006254f0();
  local_18 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,2);
  local_14 = *param_1;
  piVar3 = (int *)FUN_006251f0(&local_18);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  puVar2 = (undefined4 *)*in_ECX;
  *in_ECX = iVar1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = puVar2 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    piVar3 = param_1 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  FUN_00499e30();
  piVar3 = (int *)FUN_006251f0(&local_18);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  puVar2 = (undefined4 *)in_ECX[1];
  in_ECX[1] = iVar1;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = puVar2 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*puVar2)(1);
    }
  }
  if (param_1 != (undefined4 *)0x0) {
    piVar3 = param_1 + 1;
    *piVar3 = *piVar3 + -1;
    if (*piVar3 == 0) {
      (**(code **)*param_1)(1);
    }
  }
  piVar3 = (int *)(local_18 + -8);
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
  return;
}

