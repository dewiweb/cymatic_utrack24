// rea decompile_all
// name: FUN_00503920
// address: 0x503920
// body: available
// range: 0x503920-0x503b1e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00503920(void)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [8];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00707768;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0xe8c) != 0) {
    *(undefined4 *)(in_ECX + 0xe8c) = 3;
    FUN_0045c990("Modified",local_14);
    local_8 = 1;
    FUN_006e4900(local_38,0);
    local_8 = 0xffffffff;
    FUN_00637c10();
    FUN_006e6170(0x1000280,DAT_00c7ebb0);
    FUN_006e6170(0x1000281,DAT_00c7ef94);
  }
  FUN_00503b80();
  if (*(int *)(in_ECX + 0xe68) < 0) {
    iVar1 = FUN_006104a0();
    *(undefined1 *)(iVar1 + -1) = 0x2d;
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = FUN_006104a0();
  }
  FUN_004557e0(&local_15 + -iVar1);
  local_8 = 3;
  uVar2 = FUN_00637690(local_38);
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_006e4900(uVar2,0);
  piVar3 = (int *)(local_3c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  local_8 = 0xffffffff;
  piVar3 = (int *)(local_38[0] + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  uVar2 = FUN_00501170(&local_44);
  local_8 = 5;
  uVar2 = FUN_00637690(uVar2);
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_006e4900(uVar2,0);
  piVar3 = (int *)(local_40 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  piVar3 = (int *)(local_44 + -8);
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
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

