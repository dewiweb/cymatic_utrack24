// rea decompile_all
// name: FUN_006b8380
// address: 0x6b8380
// body: available
// range: 0x6b8380-0x6b8d8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x006b8412) */
/* WARNING: Removing unreachable block (ram,0x006b8418) */
/* WARNING: Removing unreachable block (ram,0x006b8428) */
/* WARNING: Removing unreachable block (ram,0x006b842e) */
/* WARNING: Removing unreachable block (ram,0x006b843b) */
/* WARNING: Removing unreachable block (ram,0x006b8441) */
/* WARNING: Removing unreachable block (ram,0x006b8444) */
/* WARNING: Removing unreachable block (ram,0x006b8453) */
/* WARNING: Removing unreachable block (ram,0x006b847e) */
/* WARNING: Removing unreachable block (ram,0x006b8457) */
/* WARNING: Removing unreachable block (ram,0x006b8471) */
/* WARNING: Removing unreachable block (ram,0x006b8465) */
/* WARNING: Removing unreachable block (ram,0x006b848e) */
/* WARNING: Removing unreachable block (ram,0x006b8494) */
/* WARNING: Removing unreachable block (ram,0x006b8497) */
/* WARNING: Removing unreachable block (ram,0x006b84a9) */
/* WARNING: Removing unreachable block (ram,0x006b84b8) */
/* WARNING: Removing unreachable block (ram,0x006b84bb) */
/* WARNING: Removing unreachable block (ram,0x006b864d) */
/* WARNING: Removing unreachable block (ram,0x006b8661) */
/* WARNING: Removing unreachable block (ram,0x006b8664) */
/* WARNING: Removing unreachable block (ram,0x006b8699) */
/* WARNING: Removing unreachable block (ram,0x006b86a6) */
/* WARNING: Removing unreachable block (ram,0x006b86af) */
/* WARNING: Removing unreachable block (ram,0x006b86b8) */
/* WARNING: Removing unreachable block (ram,0x006b86d4) */
/* WARNING: Removing unreachable block (ram,0x006b86db) */
/* WARNING: Removing unreachable block (ram,0x006b873a) */
/* WARNING: Removing unreachable block (ram,0x006b874b) */
/* WARNING: Removing unreachable block (ram,0x006b84cb) */
/* WARNING: Removing unreachable block (ram,0x006b84e3) */
/* WARNING: Removing unreachable block (ram,0x006b8507) */
/* WARNING: Removing unreachable block (ram,0x006b8513) */
/* WARNING: Removing unreachable block (ram,0x006b851c) */
/* WARNING: Removing unreachable block (ram,0x006b8524) */
/* WARNING: Removing unreachable block (ram,0x006b852b) */
/* WARNING: Removing unreachable block (ram,0x006b8575) */
/* WARNING: Removing unreachable block (ram,0x006b857c) */
/* WARNING: Removing unreachable block (ram,0x006b858f) */
/* WARNING: Removing unreachable block (ram,0x006b8596) */
/* WARNING: Removing unreachable block (ram,0x006b859d) */
/* WARNING: Removing unreachable block (ram,0x006b85d3) */
/* WARNING: Removing unreachable block (ram,0x006b85de) */
/* WARNING: Removing unreachable block (ram,0x006b85eb) */
/* WARNING: Removing unreachable block (ram,0x006b85f4) */
/* WARNING: Removing unreachable block (ram,0x006b85f7) */
/* WARNING: Removing unreachable block (ram,0x006b85fa) */
/* WARNING: Removing unreachable block (ram,0x006b8609) */
/* WARNING: Removing unreachable block (ram,0x006b860f) */
/* WARNING: Removing unreachable block (ram,0x006b8612) */
/* WARNING: Removing unreachable block (ram,0x006b8624) */
/* WARNING: Removing unreachable block (ram,0x006b8766) */
/* WARNING: Removing unreachable block (ram,0x006b862c) */
/* WARNING: Removing unreachable block (ram,0x006b8759) */
/* WARNING: Removing unreachable block (ram,0x006b863e) */
/* WARNING: Removing unreachable block (ram,0x006b8776) */
/* WARNING: Removing unreachable block (ram,0x006b8779) */
/* WARNING: Removing unreachable block (ram,0x006b878b) */
/* WARNING: Removing unreachable block (ram,0x006b879d) */
/* WARNING: Removing unreachable block (ram,0x006b87a0) */
/* WARNING: Removing unreachable block (ram,0x006b87b5) */
/* WARNING: Removing unreachable block (ram,0x006b87c0) */
/* WARNING: Removing unreachable block (ram,0x006b87c9) */

void FUN_006b8380(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *in_ECX;
  int iVar5;
  int *in_EDX;
  uint uVar6;
  int local_50;
  int local_4c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_007243a2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0062da40(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  FUN_0040f7f0();
  if (in_EDX[1] != 0) {
    FID_conflict__free((void *)*in_EDX);
    *in_EDX = 0;
    in_EDX[1] = 0;
  }
  in_EDX[2] = 0;
  iVar5 = in_EDX[2] + 1;
  if ((in_EDX[1] < iVar5) && (uVar6 = in_EDX[2] + 9 + iVar5 / 2 & 0xfffffff8, in_EDX[1] != uVar6)) {
    if ((int)uVar6 < 1) {
      FID_conflict__free((void *)*in_EDX);
      *in_EDX = 0;
    }
    else if (*in_EDX == 0) {
      iVar5 = FUN_004c554b();
      *in_EDX = iVar5;
    }
    else {
      iVar5 = FUN_004c553b(*in_EDX,uVar6 * 4);
      *in_EDX = iVar5;
    }
    in_EDX[1] = uVar6;
  }
  iVar5 = in_EDX[2];
  in_EDX[2] = iVar5 + 1;
  puVar3 = (undefined4 *)(*in_EDX + iVar5 * 4);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &DAT_00bfe12c;
  }
  iVar5 = in_ECX[2] + 1;
  if ((in_ECX[1] < iVar5) && (uVar6 = in_ECX[2] + 9 + iVar5 / 2 & 0xfffffff8, in_ECX[1] != uVar6)) {
    if ((int)uVar6 < 1) {
      FID_conflict__free((void *)*in_ECX);
      *in_ECX = 0;
    }
    else if (*in_ECX == 0) {
      iVar5 = FUN_004c554b();
      *in_ECX = iVar5;
    }
    else {
      iVar5 = FUN_004c553b(*in_ECX,uVar6 * 4);
      *in_ECX = iVar5;
    }
    in_ECX[1] = uVar6;
  }
  iVar5 = in_ECX[2];
  in_ECX[2] = iVar5 + 1;
  puVar3 = (undefined4 *)(*in_ECX + iVar5 * 4);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &DAT_00bfe12c;
  }
  piVar2 = (int *)FUN_00634690();
  iVar5 = in_EDX[2] + 1;
  if ((in_EDX[1] < iVar5) && (uVar6 = in_EDX[2] + 9 + iVar5 / 2 & 0xfffffff8, in_EDX[1] != uVar6)) {
    if ((int)uVar6 < 1) {
      FID_conflict__free((void *)*in_EDX);
      *in_EDX = 0;
    }
    else if (*in_EDX == 0) {
      iVar5 = FUN_004c554b();
      *in_EDX = iVar5;
    }
    else {
      iVar5 = FUN_004c553b(*in_EDX,uVar6 * 4);
      *in_EDX = iVar5;
    }
    in_EDX[1] = uVar6;
  }
  iVar5 = in_EDX[2];
  in_EDX[2] = iVar5 + 1;
  piVar4 = (int *)(*in_EDX + iVar5 * 4);
  if (piVar4 != (int *)0x0) {
    iVar5 = *piVar2;
    *piVar4 = iVar5;
    piVar2 = (int *)(iVar5 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  piVar2 = (int *)(local_50 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  puVar3 = (undefined4 *)FUN_00637250();
  iVar5 = in_ECX[2] + 1;
  if ((in_ECX[1] < iVar5) && (uVar6 = in_ECX[2] + 9 + iVar5 / 2 & 0xfffffff8, in_ECX[1] != uVar6)) {
    if ((int)uVar6 < 1) {
      FID_conflict__free((void *)*in_ECX);
      *in_ECX = 0;
    }
    else if (*in_ECX == 0) {
      iVar5 = FUN_004c554b();
      *in_ECX = iVar5;
    }
    else {
      iVar5 = FUN_004c553b(*in_ECX,uVar6 * 4);
      *in_ECX = iVar5;
    }
    in_ECX[1] = uVar6;
  }
  iVar5 = in_ECX[2];
  in_ECX[2] = iVar5 + 1;
  puVar1 = (undefined4 *)(*in_ECX + iVar5 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *puVar3;
    *puVar3 = &DAT_00bfe12c;
  }
  piVar2 = (int *)(local_50 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)FUN_00634690();
  iVar5 = in_EDX[2] + 1;
  if ((in_EDX[1] < iVar5) && (uVar6 = in_EDX[2] + 9 + iVar5 / 2 & 0xfffffff8, in_EDX[1] != uVar6)) {
    if ((int)uVar6 < 1) {
      FID_conflict__free((void *)*in_EDX);
      *in_EDX = 0;
    }
    else if (*in_EDX == 0) {
      iVar5 = FUN_004c554b();
      *in_EDX = iVar5;
    }
    else {
      iVar5 = FUN_004c553b(*in_EDX,uVar6 * 4);
      *in_EDX = iVar5;
    }
    in_EDX[1] = uVar6;
  }
  iVar5 = in_EDX[2];
  in_EDX[2] = iVar5 + 1;
  piVar4 = (int *)(*in_EDX + iVar5 * 4);
  if (piVar4 != (int *)0x0) {
    iVar5 = *piVar2;
    *piVar4 = iVar5;
    piVar2 = (int *)(iVar5 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  piVar2 = (int *)(local_50 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  puVar3 = (undefined4 *)FUN_00637250();
  iVar5 = in_ECX[2] + 1;
  if ((in_ECX[1] < iVar5) && (uVar6 = in_ECX[2] + 9 + iVar5 / 2 & 0xfffffff8, in_ECX[1] != uVar6)) {
    if ((int)uVar6 < 1) {
      FID_conflict__free((void *)*in_ECX);
      *in_ECX = 0;
    }
    else if (*in_ECX == 0) {
      iVar5 = FUN_004c554b();
      *in_ECX = iVar5;
    }
    else {
      iVar5 = FUN_004c553b(*in_ECX,uVar6 * 4);
      *in_ECX = iVar5;
    }
    in_ECX[1] = uVar6;
  }
  iVar5 = in_ECX[2];
  in_ECX[2] = iVar5 + 1;
  puVar1 = (undefined4 *)(*in_ECX + iVar5 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *puVar3;
    *puVar3 = &DAT_00bfe12c;
  }
  piVar2 = (int *)(local_50 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)FUN_00634690();
  iVar5 = in_EDX[2] + 1;
  if (in_EDX[1] < iVar5) {
    FUN_00409cf0(iVar5 / 2 + in_EDX[2] + 9 & 0xfffffff8);
  }
  iVar5 = in_EDX[2];
  in_EDX[2] = iVar5 + 1;
  piVar4 = (int *)(*in_EDX + iVar5 * 4);
  if (piVar4 != (int *)0x0) {
    iVar5 = *piVar2;
    *piVar4 = iVar5;
    piVar2 = (int *)(iVar5 + -8);
    if (piVar2 != &DAT_00bfe124) {
      LOCK();
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
  }
  piVar2 = (int *)(local_4c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  puVar3 = (undefined4 *)FUN_00637250();
  iVar5 = in_ECX[2] + 1;
  if (in_ECX[1] < iVar5) {
    FUN_00409cf0(iVar5 / 2 + in_ECX[2] + 9 & 0xfffffff8);
  }
  iVar5 = in_ECX[2];
  in_ECX[2] = iVar5 + 1;
  puVar1 = (undefined4 *)(*in_ECX + iVar5 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *puVar3;
    *puVar3 = &DAT_00bfe12c;
  }
  piVar2 = (int *)(local_4c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)FUN_00634690();
  iVar5 = in_EDX[2] + 1;
  if (in_EDX[1] < iVar5) {
    FUN_00409cf0(iVar5 / 2 + in_EDX[2] + 9 & 0xfffffff8);
  }
  iVar5 = in_EDX[2];
  in_EDX[2] = iVar5 + 1;
  piVar4 = (int *)(*in_EDX + iVar5 * 4);
  if (piVar4 != (int *)0x0) {
    iVar5 = *piVar2;
    *piVar4 = iVar5;
    piVar4 = (int *)(iVar5 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      *piVar4 = *piVar4 + 1;
      UNLOCK();
    }
  }
  piVar4 = (int *)(local_4c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  puVar3 = (undefined4 *)FUN_00637250();
  iVar5 = in_ECX[2] + 1;
  if (in_ECX[1] < iVar5) {
    FUN_00409cf0(iVar5 / 2 + in_ECX[2] + 9 & 0xfffffff8);
  }
  iVar5 = in_ECX[2];
  in_ECX[2] = iVar5 + 1;
  puVar1 = (undefined4 *)(*in_ECX + iVar5 * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *puVar3;
    *puVar3 = &DAT_00bfe12c;
  }
  piVar2 = piVar2 + -2;
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0040f7f0();
  FID_conflict__free((void *)0x0);
  ExceptionList = local_10;
  return;
}

