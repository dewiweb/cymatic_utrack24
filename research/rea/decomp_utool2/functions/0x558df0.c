// rea decompile_all
// name: FUN_00558df0
// address: 0x558df0
// body: available
// range: 0x558df0-0x558f01 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00558df0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *in_ECX;
  int local_38 [8];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00711653;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  in_ECX[2] = (int)&DAT_00bfe12c;
  local_8 = 0;
  *in_ECX = param_1;
  in_ECX[1] = 0;
  in_ECX[3] = -0x3ec00000;
  *(undefined1 *)(in_ECX + 4) = 0;
  in_ECX[5] = 0;
  if (param_1 < 0) {
    iVar1 = FUN_006104a0(local_14);
    *(undefined1 *)(iVar1 + -1) = 0x2d;
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = FUN_006104a0(local_14);
  }
  FUN_004557e0(&local_15 + -iVar1);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar2 = (int *)FUN_00637690(local_38);
  iVar1 = in_ECX[2];
  in_ECX[2] = *piVar2;
  *piVar2 = iVar1;
  piVar2 = in_ECX + -2;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_38[0] + -8);
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
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

