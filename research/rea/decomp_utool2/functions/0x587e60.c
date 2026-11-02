// rea decompile_all
// name: FUN_00587e60
// address: 0x587e60
// body: available
// range: 0x587e60-0x587fec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00587e60(void)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 extraout_ECX;
  char *pcVar7;
  char *pcVar8;
  void **ppvVar9;
  void *local_2c;
  undefined4 local_28;
  int local_24;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_007135b0;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = (void *)0x0;
  local_28 = 0;
  local_24 = 0;
  local_8 = 0;
  FUN_00409cf0(8);
  puVar1 = (undefined4 *)((int)local_2c + local_24 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = PTR_DAT_00c7ebcc;
    piVar5 = (int *)(PTR_DAT_00c7ebcc + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
  }
  ppvVar9 = &local_2c;
  pcVar8 = "2.0.062";
  local_24 = local_24 + 1;
  FUN_0045c990("2.0.062",ppvVar9,uVar4);
  local_8._0_1_ = 1;
  pcVar7 = "Cymatic Audio uTool2";
  uVar6 = extraout_ECX;
  FUN_0045c990("Cymatic Audio uTool2",extraout_ECX);
  local_8._0_1_ = 2;
  FUN_00637690(&local_14);
  FUN_006377c0(pcVar7);
  FUN_00637730(uVar6);
  uVar6 = FUN_006377c0(pcVar8);
  local_8 = CONCAT31(local_8._1_3_,3);
  cVar3 = FUN_0062ff70(uVar6,ppvVar9);
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8 = local_8 & 0xffffff00;
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (cVar3 != '\0') {
    FUN_00635980();
  }
  FUN_0040f7f0();
  FID_conflict__free(local_2c);
  ExceptionList = local_10;
  return;
}

