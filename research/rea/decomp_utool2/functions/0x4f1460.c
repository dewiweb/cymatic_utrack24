// rea decompile_all
// name: FUN_004f1460
// address: 0x4f1460
// body: available
// range: 0x4f1460-0x4f1dfa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x004f1555) */

undefined4 * FUN_004f1460(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *piVar5;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705d58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004f3db0();
  local_8 = 0;
  *in_ECX = AboutBox::Credits::vftable;
  in_ECX[0x1c] = AboutBox::Credits::vftable;
  in_ECX[0x2d] = 0x1000;
  uVar3 = FUN_004f3660();
  piVar5 = in_ECX + 0x23;
  if ((int)in_ECX[0x24] < in_ECX[0x25] + 1) {
    FUN_00409cf0();
  }
  iVar2 = in_ECX[0x25];
  in_ECX[0x25] = iVar2 + 1;
  *(undefined4 *)(*piVar5 + iVar2 * 4) = uVar3;
  local_8 = CONCAT31(local_8._1_3_,2);
  FUN_00683790();
  FUN_00409cf0();
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_18 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_18)();
    }
  }
  puVar4 = (undefined4 *)FUN_00683790();
  FUN_00409cf0();
  uRam00000004 = *puVar4;
  *puVar4 = 0;
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_14 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_14)();
    }
  }
  puVar4 = (undefined4 *)FUN_00683790();
  FUN_00409cf0();
  uRam00000008 = *puVar4;
  *puVar4 = 0;
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = local_14 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*local_14)();
    }
  }
  FUN_0045c990("Powered by");
  uVar3 = FUN_004f38c0(DAT_00c7ef94);
  if ((int)in_ECX[0x24] < in_ECX[0x25] + 1) {
    FUN_00409cf0();
  }
  iVar2 = in_ECX[0x25];
  in_ECX[0x25] = iVar2 + 1;
  *(undefined4 *)(*piVar5 + iVar2 * 4) = uVar3;
  uVar3 = FUN_004f37d0();
  if ((int)in_ECX[0x24] < in_ECX[0x25] + 1) {
    FUN_00409cf0();
  }
  iVar2 = in_ECX[0x25];
  in_ECX[0x25] = iVar2 + 1;
  *(undefined4 *)(*piVar5 + iVar2 * 4) = uVar3;
  uVar3 = FUN_004f3750();
  if ((int)in_ECX[0x24] < in_ECX[0x25] + 1) {
    FUN_00409cf0();
  }
  iVar2 = in_ECX[0x25];
  in_ECX[0x25] = iVar2 + 1;
  *(undefined4 *)(*piVar5 + iVar2 * 4) = uVar3;
  uVar3 = FUN_004f3660();
  if ((int)in_ECX[0x24] < in_ECX[0x25] + 1) {
    FUN_00409cf0();
  }
  iVar2 = in_ECX[0x25];
  in_ECX[0x25] = iVar2 + 1;
  *(undefined4 *)(*piVar5 + iVar2 * 4) = uVar3;
  uVar3 = FUN_004f3750();
  if ((int)in_ECX[0x24] < in_ECX[0x25] + 1) {
    FUN_00409cf0();
  }
  iVar2 = in_ECX[0x25];
  in_ECX[0x25] = iVar2 + 1;
  *(undefined4 *)(*piVar5 + iVar2 * 4) = uVar3;
  uVar3 = FUN_004f3660();
  if ((int)in_ECX[0x24] < in_ECX[0x25] + 1) {
    FUN_00409cf0();
  }
  iVar2 = in_ECX[0x25];
  in_ECX[0x25] = iVar2 + 1;
  *(undefined4 *)(*piVar5 + iVar2 * 4) = uVar3;
  uVar3 = FUN_004f36d0();
  if ((int)in_ECX[0x24] < in_ECX[0x25] + 1) {
    FUN_00409cf0();
  }
  iVar2 = in_ECX[0x25];
  in_ECX[0x25] = iVar2 + 1;
  *(undefined4 *)(*piVar5 + iVar2 * 4) = uVar3;
  uVar3 = FUN_004f36d0();
  if ((int)in_ECX[0x24] < in_ECX[0x25] + 1) {
    FUN_00409cf0();
  }
  iVar2 = in_ECX[0x25];
  in_ECX[0x25] = iVar2 + 1;
  *(undefined4 *)(*piVar5 + iVar2 * 4) = uVar3;
  uVar3 = FUN_004f3660();
  if ((int)in_ECX[0x24] < in_ECX[0x25] + 1) {
    FUN_00409cf0();
  }
  iVar2 = in_ECX[0x25];
  in_ECX[0x25] = iVar2 + 1;
  *(undefined4 *)(*piVar5 + iVar2 * 4) = uVar3;
  FUN_0045c990("Credits");
  uVar3 = FUN_004f38c0(DAT_00c7ef94);
  if ((int)in_ECX[0x24] < in_ECX[0x25] + 1) {
    FUN_00409cf0();
  }
  iVar2 = in_ECX[0x25];
  in_ECX[0x25] = iVar2 + 1;
  *(undefined4 *)(*piVar5 + iVar2 * 4) = uVar3;
  uVar3 = FUN_004f3750();
  if ((int)in_ECX[0x24] < in_ECX[0x25] + 1) {
    FUN_00409cf0();
  }
  iVar2 = in_ECX[0x25];
  in_ECX[0x25] = iVar2 + 1;
  *(undefined4 *)(*piVar5 + iVar2 * 4) = uVar3;
  uVar3 = FUN_004f3660();
  if ((int)in_ECX[0x24] < in_ECX[0x25] + 1) {
    FUN_00409cf0();
  }
  iVar2 = in_ECX[0x25];
  in_ECX[0x25] = iVar2 + 1;
  *(undefined4 *)(*piVar5 + iVar2 * 4) = uVar3;
  uVar3 = FUN_004f36d0();
  if ((int)in_ECX[0x24] < in_ECX[0x25] + 1) {
    FUN_00409cf0();
  }
  iVar2 = in_ECX[0x25];
  in_ECX[0x25] = iVar2 + 1;
  *(undefined4 *)(*piVar5 + iVar2 * 4) = uVar3;
  uVar3 = FUN_004f3660();
  if ((int)in_ECX[0x24] < in_ECX[0x25] + 1) {
    FUN_00409cf0();
  }
  iVar2 = in_ECX[0x25];
  in_ECX[0x25] = iVar2 + 1;
  *(undefined4 *)(*piVar5 + iVar2 * 4) = uVar3;
  FUN_0045c990();
  local_8._0_1_ = 3;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,4);
  FUN_004f11a0();
  piVar5 = local_14 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 2;
  piVar5 = puVar4 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990();
  local_8._0_1_ = 5;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_004f11a0();
  piVar5 = puVar4 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 2;
  piVar5 = local_14 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990();
  local_8._0_1_ = 7;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_004f11a0();
  piVar5 = puVar4 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 2;
  piVar5 = local_14 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990();
  local_8._0_1_ = 9;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,10);
  FUN_004f11a0();
  piVar5 = puVar4 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 2;
  piVar5 = local_14 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990();
  local_8._0_1_ = 0xb;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0xc);
  FUN_004f11a0();
  piVar5 = puVar4 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 2;
  piVar5 = local_14 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990();
  local_8._0_1_ = 0xd;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0xe);
  FUN_004f11a0();
  piVar5 = puVar4 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8._0_1_ = 2;
  piVar5 = local_14 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0045c990();
  local_8._0_1_ = 0xf;
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0x10);
  FUN_004f11a0();
  piVar5 = puVar4 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = local_14 + -2;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  FUN_0040ef10();
  FUN_0040ef10();
  ExceptionList = local_10;
  return in_ECX;
}

