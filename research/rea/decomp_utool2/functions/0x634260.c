// rea decompile_all
// name: FUN_00634260
// address: 0x634260
// body: available
// range: 0x634260-0x634430 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00634260(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  DWORD DVar4;
  undefined4 *in_ECX;
  int *piVar5;
  longlong lVar6;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071e9a1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_0062f700(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  lVar6 = __allmul(*puVar2,puVar2[1],0xdeece66d,5);
  *puVar2 = (int)(lVar6 + 0xb);
  puVar2[1] = (uint)((ulonglong)(lVar6 + 0xb) >> 0x20) & 0xffff;
  uVar3 = FUN_00631190();
  local_8 = 0;
  puVar2 = (undefined4 *)FUN_00637690(uVar3);
  local_8._0_1_ = 1;
  FUN_00634690();
  local_8._0_1_ = 2;
  FUN_00635a10(&local_18,*puVar2);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00632830(&local_14,param_1);
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_1c + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  piVar5 = (int *)(local_20 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,8);
  piVar5 = (int *)(local_24 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if (*local_14 != '\0') {
    puVar2 = (undefined4 *)FUN_00458890();
    DVar4 = GetFileAttributesW((LPCWSTR)*puVar2);
    if (DVar4 != 0xffffffff) {
      FUN_00634260(param_1);
      goto LAB_00634401;
    }
  }
  piVar5 = (int *)(local_14 + -8);
  *in_ECX = local_14;
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
LAB_00634401:
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  ExceptionList = local_10;
  return;
}

