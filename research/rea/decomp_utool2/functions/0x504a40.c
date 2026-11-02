// rea decompile_all
// name: FUN_00504a40
// address: 0x504a40
// body: available
// range: 0x504a40-0x504d20 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00504a40(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00707936;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined1 *)(in_ECX + 0xf18) = 0;
  if (*(int *)(in_ECX + 0x8c) != 0) {
    uVar2 = FUN_0054bad0(&local_14);
    local_8 = 0;
    FUN_006e4900(uVar2,0);
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_14 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    puVar3 = (undefined4 *)FUN_00410ea0(&local_14);
    uVar2 = *(undefined4 *)(in_ECX + 0xf14);
    *(undefined4 *)(in_ECX + 0xf14) = *puVar3;
    *puVar3 = uVar2;
    piVar4 = (int *)(local_14 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    *(byte *)(in_ECX + 0x660) = *(byte *)(in_ECX + 0x660) | 0x60;
    *(undefined2 *)(in_ECX + 0x6c4) = 0x101;
    *(undefined1 *)(in_ECX + 0x6c6) = 0;
  }
  if (*(int *)(in_ECX + 0x90) != 0) {
    FUN_00410ea0(&local_18);
    local_8 = 1;
    uVar2 = FUN_00636040(&local_14);
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_006e4900(uVar2,0);
    piVar4 = (int *)(local_14 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_18 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    puVar3 = (undefined4 *)FUN_0040eb90(&local_18);
    uVar2 = *(undefined4 *)(in_ECX + 0xf14);
    *(undefined4 *)(in_ECX + 0xf14) = *puVar3;
    *puVar3 = uVar2;
    piVar4 = (int *)(local_18 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    *(byte *)(in_ECX + 0x660) = *(byte *)(in_ECX + 0x660) | 0x60;
    *(undefined2 *)(in_ECX + 0x6c4) = 0x101;
    *(undefined1 *)(in_ECX + 0x6c6) = 0;
  }
  FUN_006e4900(in_ECX + 0xf14,0);
  if (*(int *)(in_ECX + 0x8c) != 0) {
    FUN_00501d40(*(int *)(in_ECX + 0x8c));
  }
  if (*(int *)(in_ECX + 0x90) != 0) {
    FUN_005019c0(*(int *)(in_ECX + 0x90));
  }
  local_14 = 3;
  if (*(int *)(in_ECX + 0x94) == 3) {
    local_14 = 2;
  }
  else if (*(int *)(in_ECX + 0x94) == 4) {
    local_14 = 1;
  }
  if (*(int *)(in_ECX + 0xab4) != 0) {
    FUN_00411300(&local_18);
    local_8 = 3;
    iVar1 = *(int *)(in_ECX + 0xab4);
    uVar2 = FUN_005b48e0();
    *(undefined4 *)(iVar1 + 0x154) = uVar2;
    *(int *)(iVar1 + 0x158) = local_14;
    *(undefined4 *)(iVar1 + 0x15c) = 4;
    FUN_00518eb0();
    local_8 = 0xffffffff;
    piVar4 = (int *)(local_18 + -8);
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
    FUN_00548700();
  }
  iVar1 = *(int *)(in_ECX + 0xab8);
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(*(int *)(in_ECX + 0x90) + 0x40);
    *(int *)(iVar1 + 0xd4) = local_14;
    *(undefined4 *)(iVar1 + 0xd8) = 2;
    *(undefined4 *)(iVar1 + 0xdc) = uVar2;
    FUN_0052ddf0();
  }
  ExceptionList = local_10;
  return;
}

