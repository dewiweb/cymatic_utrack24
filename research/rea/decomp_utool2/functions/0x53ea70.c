// rea decompile_all
// name: FUN_0053ea70
// address: 0x53ea70
// body: available
// range: 0x53ea70-0x53ecc0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053ea70(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  int *piVar4;
  undefined4 uVar5;
  int in_ECX;
  uint uVar6;
  int local_28;
  int local_24;
  undefined *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0070e483;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  local_8 = 0;
  if (param_7 == (undefined4 *)0x0) {
    uVar6 = 4;
  }
  else {
    FUN_00410ea0();
    local_8 = CONCAT31(local_8._1_3_,2);
    local_14 = 3;
    FUN_00636970();
    uVar6 = 3;
    if (param_7 != (undefined4 *)0x0) {
      ppuVar3 = (undefined **)FUN_00410ea0();
      local_8 = 3;
      uVar6 = 0xb;
      goto LAB_0053eb35;
    }
  }
  local_18 = PTR_DAT_00c7ed54;
  piVar4 = (int *)(PTR_DAT_00c7ed54 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  ppuVar3 = &local_18;
  local_8 = 4;
  uVar6 = uVar6 | 0x10;
LAB_0053eb35:
  puVar2 = local_18;
  local_14 = uVar6;
  if (param_7 != (undefined4 *)0x0) {
    LOCK();
    param_7[1] = param_7[1] + 1;
    UNLOCK();
  }
  piVar4 = (int *)(*ppuVar3 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  piVar4 = (int *)(param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  uVar5 = FUN_0053b220(param_2,param_3,param_4,param_5,param_6);
  if (*(int *)(in_ECX + 0x58) < *(int *)(in_ECX + 0x5c) + 1) {
    FUN_00409cf0();
  }
  iVar1 = *(int *)(in_ECX + 0x5c);
  *(int *)(in_ECX + 0x5c) = iVar1 + 1;
  *(undefined4 *)(*(int *)(in_ECX + 0x54) + iVar1 * 4) = uVar5;
  if ((uVar6 & 0x10) != 0) {
    piVar4 = (int *)(puVar2 + -8);
    uVar6 = uVar6 & 0xffffffef;
    if (piVar4 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        FID_conflict__free(piVar4);
      }
    }
  }
  if ((uVar6 & 8) != 0) {
    uVar6 = uVar6 & 0xfffffff7;
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
  }
  if ((uVar6 & 4) != 0) {
    uVar6 = uVar6 & 0xfffffffb;
  }
  if ((uVar6 & 2) != 0) {
    uVar6 = uVar6 & 0xfffffffd;
  }
  if (((uVar6 & 1) != 0) && (piVar4 = (int *)(local_28 + -8), piVar4 != &DAT_00bfe124)) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  piVar4 = (int *)(param_2 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if (param_7 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = param_7 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*param_7)();
    }
  }
  ExceptionList = local_10;
  return;
}

