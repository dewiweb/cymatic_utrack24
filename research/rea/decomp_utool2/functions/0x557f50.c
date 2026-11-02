// rea decompile_all
// name: FUN_00557f50
// address: 0x557f50
// body: available
// range: 0x557f50-0x5581d1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00557f50(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *in_ECX;
  int iVar7;
  int in_EDX;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071151b;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  operator_new(0x58);
  local_8 = 1;
  iVar3 = FUN_005569f0(uVar2);
  *in_ECX = iVar3;
  if (iVar3 != 0) {
    LOCK();
    *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
    UNLOCK();
  }
  local_8 = 0;
  iVar3 = *in_ECX;
  piVar4 = (int *)(*(int *)(in_EDX + 8) + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(iVar3 + 8);
  *(int *)(iVar3 + 8) = *(int *)(in_EDX + 8);
  UNLOCK();
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  iVar3 = *in_ECX;
  piVar4 = (int *)(*(int *)(in_EDX + 0xc) + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(iVar3 + 0xc);
  *(int *)(iVar3 + 0xc) = *(int *)(in_EDX + 0xc);
  UNLOCK();
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  iVar3 = *in_ECX;
  piVar4 = (int *)(*(int *)(in_EDX + 0x10) + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(iVar3 + 0x10);
  *(int *)(iVar3 + 0x10) = *(int *)(in_EDX + 0x10);
  UNLOCK();
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  iVar3 = *in_ECX;
  piVar4 = (int *)(*(int *)(in_EDX + 0x14) + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(iVar3 + 0x14);
  *(int *)(iVar3 + 0x14) = *(int *)(in_EDX + 0x14);
  UNLOCK();
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  iVar3 = *in_ECX;
  piVar4 = (int *)(*(int *)(in_EDX + 0x18) + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  LOCK();
  iVar1 = *(int *)(iVar3 + 0x18);
  *(int *)(iVar3 + 0x18) = *(int *)(in_EDX + 0x18);
  UNLOCK();
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  iVar3 = *in_ECX;
  *(undefined4 *)(iVar3 + 0x20) = *(undefined4 *)(in_EDX + 0x20);
  *(undefined4 *)(iVar3 + 0x24) = *(undefined4 *)(in_EDX + 0x24);
  iVar3 = *in_ECX;
  *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(in_EDX + 0x38);
  *(undefined4 *)(iVar3 + 0x3c) = *(undefined4 *)(in_EDX + 0x3c);
  *(undefined4 *)(*in_ECX + 0x40) = *(undefined4 *)(in_EDX + 0x40);
  *(undefined4 *)(*in_ECX + 0x44) = *(undefined4 *)(in_EDX + 0x44);
  local_18 = 0;
  if (0 < *(int *)(in_EDX + 0x30)) {
    do {
      iVar3 = *in_ECX;
      uVar5 = FUN_00555510();
      iVar1 = *(int *)(iVar3 + 0x30);
      iVar7 = iVar1 + 1;
      if ((int)*(uint *)(iVar3 + 0x2c) < iVar7) {
        if (iVar7 < 0) {
          iVar7 = iVar1 + 2;
        }
        uVar2 = iVar1 + 9 + (iVar7 >> 1) & 0xfffffff8;
        if (*(uint *)(iVar3 + 0x2c) != uVar2) {
          if ((int)uVar2 < 1) {
            FID_conflict__free(*(void **)(iVar3 + 0x28));
            *(undefined4 *)(iVar3 + 0x28) = 0;
          }
          else if (*(int *)(iVar3 + 0x28) == 0) {
            uVar6 = FUN_004c554b();
            *(undefined4 *)(iVar3 + 0x28) = uVar6;
          }
          else {
            uVar6 = FUN_004c553b(*(int *)(iVar3 + 0x28),uVar2 * 4);
            *(undefined4 *)(iVar3 + 0x28) = uVar6;
          }
          *(uint *)(iVar3 + 0x2c) = uVar2;
        }
      }
      iVar1 = *(int *)(iVar3 + 0x30);
      *(int *)(iVar3 + 0x30) = iVar1 + 1;
      *(undefined4 *)(*(int *)(iVar3 + 0x28) + iVar1 * 4) = uVar5;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(in_EDX + 0x30));
  }
  ExceptionList = local_10;
  return in_ECX;
}

