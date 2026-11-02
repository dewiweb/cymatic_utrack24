// rea decompile_all
// name: FUN_006b5700
// address: 0x6b5700
// body: available
// range: 0x6b5700-0x6b5887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b5700(uint param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  undefined4 uStack_5c;
  int *piStack_58;
  int *piStack_54;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723e17;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piStack_54 = (int *)0x6b573e;
  FUN_0045c990();
  local_8 = 0;
  piStack_54 = &local_1c;
  piStack_58 = (int *)0x6b575a;
  uVar3 = FUN_0062a1b0();
  local_8._0_1_ = 1;
  uVar4 = FUN_00637250();
  piStack_54 = (int *)0x1;
  piStack_58 = &local_14;
  local_8 = CONCAT31(local_8._1_3_,2);
  uStack_5c = uVar3;
  FUN_006e1bb0(uVar4);
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      piStack_54 = (int *)0x6b57a5;
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      piStack_54 = (int *)0x6b57c8;
      FID_conflict__free(piVar5);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,6);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      piStack_54 = (int *)0x6b57ef;
      FID_conflict__free(piVar5);
    }
  }
  piStack_54 = (int *)0x9;
  piStack_58 = (int *)0x6b57fd;
  cVar2 = FUN_006b7db0();
  if (cVar2 != '\0') {
    if (param_1 < *(uint *)(in_ECX + 0xc)) {
      piStack_54 = (int *)0x6b580e;
      FUN_004179e0();
    }
    piStack_54 = (int *)0x6b581a;
    FUN_006e19a0();
    piStack_54 = (int *)param_1;
    piStack_58 = (int *)0x6b5823;
    FUN_00459120();
    piVar5 = (int *)(param_1 - 8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        piStack_54 = (int *)0x6b5840;
        FID_conflict__free(piVar5);
      }
    }
    FUN_006e7e60();
    FUN_006e6400(&uStack_5c);
    FUN_006ce9f0(1);
    FUN_006b5ac0();
  }
  FUN_006e1b20();
  ExceptionList = local_10;
  return;
}

