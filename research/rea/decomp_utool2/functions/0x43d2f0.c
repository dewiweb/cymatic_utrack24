// rea decompile_all
// name: FUN_0043d2f0
// address: 0x43d2f0
// body: available
// range: 0x43d2f0-0x43d653 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043d2f0(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  byte *in_ECX;
  int *piVar3;
  int local_44;
  int local_40;
  int local_3c [8];
  undefined1 local_19;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe8f8;
  local_10 = ExceptionList;
  local_18 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0043d660(param_1,"acid one shot",1);
  FUN_0043d660(param_1,"acid root set",2);
  FUN_0043d660(param_1,"acid stretch",4);
  FUN_0043d660(param_1,"acid disk based",8);
  FUN_0043d660(param_1,"acidizer flag",0x10);
  if ((*in_ECX & 2) != 0) {
    FUN_0045c990("acid root note");
    local_8 = 0;
    iVar1 = FUN_006104a0();
    FUN_004557e0(&local_19 + -iVar1);
    FUN_00631980(local_3c,&local_40);
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
    local_8 = 0xffffffff;
    piVar3 = (int *)(local_3c[0] + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
  FUN_0045c990("acid beats");
  local_8 = 1;
  iVar1 = FUN_006104a0();
  FUN_004557e0(&local_19 + -iVar1);
  FUN_00631980(&local_40,local_3c);
  piVar3 = (int *)(local_3c[0] + -8);
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
  FUN_0045c990("acid denominator");
  local_8 = 2;
  iVar1 = FUN_006104a0();
  FUN_004557e0(&local_19 + -iVar1);
  FUN_00631980(&local_40,local_3c);
  piVar3 = (int *)(local_3c[0] + -8);
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
  FUN_0045c990("acid numerator");
  local_8 = 3;
  iVar1 = FUN_006104a0();
  FUN_004557e0(&local_19 + -iVar1);
  FUN_00631980(&local_40,local_3c);
  piVar3 = (int *)(local_3c[0] + -8);
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
  FUN_0045c990("acid tempo");
  local_8 = 4;
  uVar2 = FUN_0062b4d0();
  FUN_00631980(local_3c,uVar2);
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
  piVar3 = (int *)(local_3c[0] + -8);
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
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}

