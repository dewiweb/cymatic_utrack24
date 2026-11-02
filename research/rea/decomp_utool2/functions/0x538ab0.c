// rea decompile_all
// name: FUN_00538ab0
// address: 0x538ab0
// body: available
// range: 0x538ab0-0x538c92 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00538ab0(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int *piVar5;
  undefined1 auStack_4c [8];
  undefined4 uStack_44;
  undefined4 *puStack_40;
  undefined4 **local_3c;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070daf1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_3c = &local_14;
  puStack_40 = (undefined4 *)0x538aea;
  FUN_00410f30();
  local_8 = 0;
  if (local_14 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return;
  }
  if ((char)param_5 != '\0') {
    local_3c = (undefined4 **)0x538b16;
    FUN_00684a80();
  }
  local_3c = (undefined4 **)0x538b2e;
  FUN_00684c50();
  local_3c = (undefined4 **)0x538b3a;
  puVar3 = (undefined4 *)FUN_00411300();
  local_8 = CONCAT31(local_8._1_3_,1);
  if (*(char *)*puVar3 != '\0') {
    puVar3 = (undefined4 *)FUN_00458890();
    local_3c = (undefined4 **)0x538b57;
    DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
    if ((DVar4 & 0x10) == 0) {
      bVar2 = true;
      goto LAB_00538b64;
    }
  }
  bVar2 = false;
LAB_00538b64:
  local_8 = local_8 & 0xffffff00;
  param_5 = CONCAT13(!bVar2,(undefined3)param_5);
  piVar5 = (int *)(param_2 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      local_3c = (undefined4 **)0x538b90;
      FID_conflict__free(piVar5);
    }
  }
  if (param_5._3_1_ != '\0') {
    local_3c = (undefined4 **)0x538baa;
    FUN_0045c990();
    local_8 = CONCAT31(local_8._1_3_,2);
    local_1c = param_3;
    local_18 = param_4;
    puStack_40 = &local_24;
    local_3c = (undefined4 **)0x1;
    local_24 = 0;
    local_20 = 0;
    uStack_44 = 0x538bd8;
    param_3 = FUN_0057f1c0();
    piVar5 = (int *)(param_5 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar1 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar1 == 0) {
        local_3c = (undefined4 **)0x538bfe;
        FID_conflict__free(piVar5);
      }
    }
  }
  local_3c = (undefined4 **)0x538c0d;
  FUN_00410ea0();
  local_3c = (undefined4 **)(param_3 + -0x2c);
  local_8 = CONCAT31(local_8._1_3_,3);
  puStack_40 = (undefined4 *)0x0;
  uStack_44 = 0x538c2a;
  FUN_00472d90();
  local_3c = (undefined4 **)0x21;
  FUN_0040e4d0(auStack_4c);
  FUN_006830c0(&param_1);
  piVar5 = (int *)(param_1 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      local_3c = (undefined4 **)0x538c6c;
      FID_conflict__free(piVar5);
    }
  }
  LOCK();
  piVar5 = local_14 + 1;
  iVar1 = *piVar5;
  *piVar5 = *piVar5 + -1;
  UNLOCK();
  if (iVar1 == 1) {
    local_3c = (undefined4 **)0x538c7f;
    (**(code **)*local_14)();
  }
  ExceptionList = local_10;
  return;
}

