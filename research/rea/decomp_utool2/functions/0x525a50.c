// rea decompile_all
// name: FUN_00525a50
// address: 0x525a50
// body: available
// range: 0x525a50-0x525cc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00525a50(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int local_48;
  int local_40;
  int local_3c;
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070b275;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x514) == 0) {
    operator_new(0xac);
    local_8 = 0;
    FUN_00637690(param_1);
    FUN_006377c0();
    local_8 = CONCAT31(local_8._1_3_,1);
    piVar1 = (int *)FUN_00537fb0(&PTR_DAT_00c7ed68);
    local_8 = 2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x28))();
      FUN_006e5050();
    }
    piVar1 = (int *)(local_3c + -8);
    if (piVar1 == &DAT_00bfe124) goto LAB_00525ca6;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  else {
    operator_new(0xac);
    local_8 = 3;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,4);
    if (*(int *)(in_ECX + 0x514) < 0) {
      iVar2 = FUN_006104a0();
      *(undefined1 *)(iVar2 + -1) = 0x2d;
      iVar2 = iVar2 + -1;
    }
    else {
      iVar2 = FUN_006104a0();
    }
    puVar5 = &local_15 + -iVar2;
    FUN_004557e0(puVar5);
    local_8 = 5;
    uVar3 = extraout_ECX;
    uVar4 = extraout_ECX;
    FUN_00637690(param_1);
    FUN_006377c0(uVar3);
    FUN_00637730(uVar4);
    FUN_006377c0(puVar5);
    FUN_00637730();
    local_8 = 6;
    piVar1 = (int *)FUN_00537fb0(&PTR_DAT_00c7ed68);
    local_8 = 9;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x28))();
      FUN_006e5050();
    }
    piVar1 = (int *)(local_48 + -8);
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar1);
      }
    }
    piVar1 = (int *)(local_40 + -8);
    if (piVar1 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar1);
      }
    }
    piVar1 = (int *)(local_3c + -8);
    if (piVar1 == &DAT_00bfe124) goto LAB_00525ca6;
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
  }
  if (iVar2 == 0) {
    FID_conflict__free((void *)(local_3c + -8));
  }
LAB_00525ca6:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

