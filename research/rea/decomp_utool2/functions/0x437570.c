// rea decompile_all
// name: FUN_00437570
// address: 0x437570
// body: available
// range: 0x437570-0x4378ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00437570(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int *piVar4;
  char *pcVar5;
  int local_40;
  int local_3c;
  int local_38 [8];
  undefined1 local_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe388;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  sVar1 = *(short *)(in_ECX + 8);
  local_3c = param_1;
  local_38[0] = CONCAT31(local_38[0]._1_3_,sVar1 != 0);
  local_14 = uVar2;
  FUN_00437900(param_1,"apple one shot",*(short *)(in_ECX + 0x10) == 2);
  FUN_00437900(param_1,"apple root set",local_38[0]);
  if (sVar1 != 0) {
    FUN_0045c990("apple root note",uVar2);
    local_8 = 0;
    iVar3 = FUN_006104a0();
    FUN_004557e0(&local_15 + -iVar3);
    FUN_00631980(local_38,&local_40);
    piVar4 = (int *)(local_40 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_38[0] + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  FUN_0045c990("apple beats",uVar2);
  local_8 = 1;
  iVar3 = FUN_006104a0();
  FUN_004557e0(&local_15 + -iVar3);
  FUN_00631980(local_38,&local_3c);
  piVar4 = (int *)(local_3c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8 = 0xffffffff;
  piVar4 = (int *)(local_38[0] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0045c990("apple denominator");
  local_8 = 2;
  iVar3 = FUN_006104a0();
  FUN_004557e0(&local_15 + -iVar3);
  FUN_00631980(local_38,&local_3c);
  piVar4 = (int *)(local_3c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8 = 0xffffffff;
  piVar4 = (int *)(local_38[0] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  FUN_0045c990("apple numerator");
  local_8 = 3;
  iVar3 = FUN_006104a0();
  FUN_004557e0(&local_15 + -iVar3);
  FUN_00631980(local_38,&local_3c);
  piVar4 = (int *)(local_3c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8 = 0xffffffff;
  piVar4 = (int *)(local_38[0] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  switch(*(undefined2 *)(in_ECX + 10)) {
  case 1:
  case 2:
    pcVar5 = "major";
    break;
  case 3:
    pcVar5 = "neither";
    break;
  case 4:
    pcVar5 = "both";
    break;
  default:
    goto switchD_0043783f_default;
  }
  FUN_0045c990(pcVar5);
  local_8 = 4;
  FUN_0045c990("apple key");
  FUN_00631980(&local_3c,local_38);
  piVar4 = (int *)(local_3c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(local_38[0] + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
switchD_0043783f_default:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

