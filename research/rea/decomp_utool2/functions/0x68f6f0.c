// rea decompile_all
// name: FUN_0068f6f0
// address: 0x68f6f0
// body: available
// range: 0x68f6f0-0x68f989 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0068f6f0(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int *piVar4;
  int *piVar5;
  bool bVar6;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721866;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  (**(code **)(*in_ECX + 8))();
  local_8 = 0;
  FUN_0068f990();
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_00637690();
  piVar4 = (int *)(local_1c + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,4);
  piVar4 = (int *)(local_20 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = in_ECX;
  if ((local_18 == *param_1) || (iVar2 = FUN_00448730(local_18), iVar2 == 0)) goto LAB_0068f956;
  piVar4 = (int *)(local_18 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  piVar4 = (int *)FUN_006377c0();
  local_14 = *piVar4;
  FUN_0044ec90();
  iVar2 = FUN_0045e0d0(*param_1);
  piVar4 = (int *)(local_24 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if (iVar2 != 0) {
LAB_0068f954:
    piVar4 = (int *)0x0;
    goto LAB_0068f956;
  }
  FUN_0044ec90();
  FUN_00637a90(&local_14);
  local_8 = CONCAT31(local_8._1_3_,5);
  uVar3 = in_ECX[0xd] & 3;
  if (uVar3 == 0) {
    if ((in_ECX[1] == 0) || (*(char *)(in_ECX[1] + 0xac) == '\0')) {
      param_1._3_1_ = false;
    }
    else {
      param_1._3_1_ = true;
    }
  }
  else {
    param_1._3_1_ = uVar3 == 2;
  }
  if (uVar3 == 0) {
    if ((in_ECX[1] == 0) || (*(char *)(in_ECX[1] + 0xac) == '\0')) {
LAB_0068f897:
      FUN_006dffc0();
    }
  }
  else if (uVar3 != 2) goto LAB_0068f897;
  iVar2 = in_ECX[5];
  do {
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      if ((in_ECX[0xd] & 3U) == 0) {
        if ((in_ECX[1] == 0) || (*(char *)(in_ECX[1] + 0xac) == '\0')) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
      }
      else {
        bVar6 = (in_ECX[0xd] & 3U) == 2;
      }
      if (bVar6 != param_1._3_1_) {
        FUN_006dffc0();
      }
      piVar4 = (int *)(local_14 + -8);
      if (piVar4 != &DAT_00bfe124) {
        LOCK();
        iVar2 = *piVar4;
        *piVar4 = *piVar4 + -1;
        UNLOCK();
        if (iVar2 == 0) {
          FID_conflict__free(piVar4);
        }
      }
      goto LAB_0068f954;
    }
    piVar4 = (int *)FUN_0068f6f0();
  } while (piVar4 == (int *)0x0);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
LAB_0068f956:
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar2 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar2 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return piVar4;
}

