// rea decompile_all
// name: FUN_004fb0e0
// address: 0x4fb0e0
// body: available
// range: 0x4fb0e0-0x4fb51a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fb0e0(void)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int local_3c;
  int local_38 [8];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00706a00;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  FUN_006e86d0(0);
  switch(*(undefined4 *)(in_ECX + 0x9c)) {
  case 1:
  case 2:
    FUN_0045c990("44.1 kHz",uVar1);
    local_8 = 0;
    FUN_006e8760(local_38,1);
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_38[0] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    FUN_0045c990("48 kHz",uVar1);
    local_8 = 1;
    break;
  case 3:
    uVar6 = 1;
    if (*(int *)(in_ECX + 0xdfc) < 0) {
      iVar2 = FUN_006104a0(1);
      *(undefined1 *)(iVar2 + -1) = 0x2d;
      iVar2 = iVar2 + -1;
    }
    else {
      iVar2 = FUN_006104a0(1);
    }
    puVar5 = &local_15 + -iVar2;
    FUN_004557e0(puVar5);
    local_8 = 2;
    FUN_00637690(local_38);
    uVar3 = FUN_006377c0(puVar5);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_006e8760(uVar3,uVar6);
    piVar4 = (int *)(local_3c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_38[0] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    uVar6 = 2;
    if (*(int *)(in_ECX + 0xdfc) < 0) {
      iVar2 = FUN_006104a0(2);
      *(undefined1 *)(iVar2 + -1) = 0x2d;
      iVar2 = iVar2 + -1;
    }
    else {
      iVar2 = FUN_006104a0(2);
    }
    puVar5 = &local_15 + -iVar2;
    FUN_004557e0(puVar5);
    local_8 = 4;
    FUN_00637690(local_38);
    uVar3 = FUN_006377c0(puVar5);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_006e8760(uVar3,uVar6);
    piVar4 = (int *)(local_3c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_38[0] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    uVar6 = 3;
    if (*(int *)(in_ECX + 0xdfc) < 0) {
      iVar2 = FUN_006104a0(3);
      *(undefined1 *)(iVar2 + -1) = 0x2d;
      iVar2 = iVar2 + -1;
    }
    else {
      iVar2 = FUN_006104a0(3);
    }
    puVar5 = &local_15 + -iVar2;
    FUN_004557e0(puVar5);
    local_8 = 6;
    FUN_00637690(local_38);
    uVar3 = FUN_006377c0(puVar5);
    local_8 = CONCAT31(local_8._1_3_,7);
    FUN_006e8760(uVar3,uVar6);
    piVar4 = (int *)(local_3c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_38[0] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    uVar6 = 4;
    if (*(int *)(in_ECX + 0xdfc) < 0) {
      iVar2 = FUN_006104a0(4);
      *(undefined1 *)(iVar2 + -1) = 0x2d;
      iVar2 = iVar2 + -1;
    }
    else {
      iVar2 = FUN_006104a0(4);
    }
    puVar5 = &local_15 + -iVar2;
    FUN_004557e0(puVar5);
    local_8 = 8;
    FUN_00637690(local_38);
    uVar3 = FUN_006377c0(puVar5);
    local_8 = CONCAT31(local_8._1_3_,9);
    FUN_006e8760(uVar3,uVar6);
    piVar4 = (int *)(local_3c + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    goto LAB_004fb4c9;
  case 4:
    FUN_0045c990("44.1 kHz",uVar1);
    local_8 = 10;
    FUN_006e8760(local_38,1);
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_38[0] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar2 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar2 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    FUN_0045c990("48 kHz",uVar1);
    local_8 = 0xb;
    break;
  default:
    goto switchD_004fb12c_default;
  }
  FUN_006e8760(local_38,2);
LAB_004fb4c9:
  local_8 = 0xffffffff;
  piVar4 = (int *)(local_38[0] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
switchD_004fb12c_default:
  FUN_006e83a0(*(undefined4 *)(in_ECX + 0xe00),0);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

