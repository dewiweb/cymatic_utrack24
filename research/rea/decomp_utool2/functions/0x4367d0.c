// rea decompile_all
// name: FUN_004367d0
// address: 0x4367d0
// body: available
// range: 0x4367d0-0x4370f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004367d0(void)

{
  int iVar1;
  char *in_ECX;
  int *piVar2;
  int local_3c;
  int local_38 [8];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe330;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0045c990("MidiUnityNote",local_14);
  local_8 = 0;
  if (*in_ECX < '\0') {
    iVar1 = FUN_006104a0();
    *(undefined1 *)(iVar1 + -1) = 0x2d;
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = FUN_006104a0();
  }
  FUN_004557e0(&local_15 + -iVar1);
  FUN_00631980(&local_3c,local_38);
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
  local_8 = 0xffffffff;
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  FUN_0045c990("Detune");
  local_8 = 1;
  if (in_ECX[1] < '\0') {
    iVar1 = FUN_006104a0();
    *(undefined1 *)(iVar1 + -1) = 0x2d;
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = FUN_006104a0();
  }
  FUN_004557e0(&local_15 + -iVar1);
  FUN_00631980(local_38,&local_3c);
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  local_8 = 0xffffffff;
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
  FUN_0045c990("LowNote");
  local_8 = 2;
  if (in_ECX[2] < '\0') {
    iVar1 = FUN_006104a0();
    *(undefined1 *)(iVar1 + -1) = 0x2d;
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = FUN_006104a0();
  }
  FUN_004557e0(&local_15 + -iVar1);
  FUN_00631980(local_38,&local_3c);
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  local_8 = 0xffffffff;
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
  FUN_0045c990("HighNote");
  local_8 = 3;
  if (in_ECX[3] < '\0') {
    iVar1 = FUN_006104a0();
    *(undefined1 *)(iVar1 + -1) = 0x2d;
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = FUN_006104a0();
  }
  FUN_004557e0(&local_15 + -iVar1);
  FUN_00631980(local_38,&local_3c);
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  local_8 = 0xffffffff;
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
  FUN_0045c990("LowVelocity");
  local_8 = 4;
  if (in_ECX[4] < '\0') {
    iVar1 = FUN_006104a0();
    *(undefined1 *)(iVar1 + -1) = 0x2d;
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = FUN_006104a0();
  }
  FUN_004557e0(&local_15 + -iVar1);
  FUN_00631980(local_38,&local_3c);
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  local_8 = 0xffffffff;
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
  FUN_0045c990("HighVelocity");
  local_8 = 5;
  if (in_ECX[5] < '\0') {
    iVar1 = FUN_006104a0();
    *(undefined1 *)(iVar1 + -1) = 0x2d;
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = FUN_006104a0();
  }
  FUN_004557e0(&local_15 + -iVar1);
  FUN_00631980(local_38,&local_3c);
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  local_8 = 0xffffffff;
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
  FUN_0045c990(&DAT_00c14640);
  local_8 = 6;
  if ((short)(*(ushort *)(in_ECX + 6) << 8 | *(ushort *)(in_ECX + 6) >> 8) < 0) {
    iVar1 = FUN_006104a0();
    *(undefined1 *)(iVar1 + -1) = 0x2d;
    iVar1 = iVar1 + -1;
  }
  else {
    iVar1 = FUN_006104a0();
  }
  FUN_004557e0(&local_15 + -iVar1);
  FUN_00631980(local_38,&local_3c);
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  local_8 = 0xffffffff;
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
  FUN_0045c990("NumSampleLoops");
  local_8 = 7;
  iVar1 = FUN_006104a0();
  FUN_004557e0(&local_15 + -iVar1);
  FUN_00631980(local_38,&local_3c);
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  local_8 = 0xffffffff;
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
  FUN_0045c990("Loop0Type");
  local_8 = 8;
  iVar1 = FUN_006104a0();
  FUN_004557e0(&local_15 + -iVar1);
  FUN_00631980(local_38,&local_3c);
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  local_8 = 0xffffffff;
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
  FUN_0045c990("Loop0StartIdentifier");
  local_8 = 9;
  iVar1 = FUN_006104a0();
  FUN_004557e0(&local_15 + -iVar1);
  FUN_00631980(local_38,&local_3c);
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  local_8 = 0xffffffff;
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
  FUN_0045c990("Loop0EndIdentifier");
  local_8 = 10;
  iVar1 = FUN_006104a0();
  FUN_004557e0(&local_15 + -iVar1);
  FUN_00631980(local_38,&local_3c);
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  local_8 = 0xffffffff;
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
  FUN_0045c990("Loop1Type");
  local_8 = 0xb;
  iVar1 = FUN_006104a0();
  FUN_004557e0(&local_15 + -iVar1);
  FUN_00631980(local_38,&local_3c);
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  local_8 = 0xffffffff;
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
  FUN_0045c990("Loop1StartIdentifier");
  local_8 = 0xc;
  iVar1 = FUN_006104a0();
  FUN_004557e0(&local_15 + -iVar1);
  FUN_00631980(local_38,&local_3c);
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  local_8 = 0xffffffff;
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
  FUN_0045c990("Loop1EndIdentifier");
  local_8 = 0xd;
  iVar1 = FUN_006104a0();
  FUN_004557e0(&local_15 + -iVar1);
  FUN_00631980(local_38,&local_3c);
  piVar2 = (int *)(local_3c + -8);
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

