// rea decompile_all
// name: FUN_00517370
// address: 0x517370
// body: available
// range: 0x517370-0x517877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00517370(void)

{
  int iVar1;
  LPCWSTR lpParameters;
  undefined4 uVar2;
  undefined4 *puVar3;
  DWORD DVar4;
  int in_ECX;
  int *piVar5;
  int *extraout_ECX;
  uint uVar6;
  undefined1 *puVar7;
  bool bVar8;
  char *local_40;
  undefined1 *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00709698;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00634260(&DAT_0073ab24,DAT_00c76070 ^ (uint)&stack0xfffffffc);
  local_8 = 0;
  FUN_0045c990("<html>");
  local_8._0_1_ = 1;
  FUN_0062aec0(&local_14,0x4000);
  local_8._0_1_ = 2;
  if (*local_40 == '\0') {
    FUN_006202e0(&local_18,0,0);
  }
  FUN_0062ade0();
  local_8._0_1_ = 0;
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
  FUN_0045c990("<head>");
  local_8._0_1_ = 3;
  FUN_0062aec0(&local_14,0x4000);
  local_8._0_1_ = 4;
  if (*local_40 == '\0') {
    FUN_006202e0(&local_18,0,0);
  }
  FUN_0062ade0();
  local_8._0_1_ = 0;
  piVar5 = (int *)(local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
      piVar5 = extraout_ECX;
    }
  }
  FUN_00637690(in_ECX + 4);
  uVar2 = FUN_006377c0(piVar5);
  local_8._0_1_ = 5;
  FUN_0062aec0(&local_14,0x4000);
  local_8._0_1_ = 6;
  if (*local_40 == '\0') {
    FUN_006202e0(uVar2,0,0);
  }
  FUN_0062ade0();
  local_8._0_1_ = 0;
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
  FUN_0045c990("</head>");
  local_8._0_1_ = 7;
  FUN_0062aec0(&local_14,0x4000);
  local_8._0_1_ = 8;
  if (*local_40 == '\0') {
    FUN_006202e0(&local_18,0,0);
  }
  FUN_0062ade0();
  local_8._0_1_ = 0;
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
  FUN_0045c990("<body>");
  local_8._0_1_ = 9;
  FUN_0062aec0(&local_14,0x4000);
  local_8._0_1_ = 10;
  if (*local_40 == '\0') {
    FUN_006202e0(&local_18,0,0);
  }
  FUN_0062ade0();
  local_8 = (uint)local_8._1_3_ << 8;
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
  uVar6 = 0;
  if (0 < *(int *)(in_ECX + 0x10)) {
    bVar8 = *(int *)(in_ECX + 0x10) != 0;
    do {
      if (bVar8) {
        uVar2 = *(undefined4 *)(*(int *)(in_ECX + 8) + uVar6 * 4);
      }
      else {
        uVar2 = 0;
      }
      FUN_00516e10(&local_14,uVar2);
      uVar6 = uVar6 + 1;
      bVar8 = uVar6 < *(uint *)(in_ECX + 0x10);
    } while ((int)uVar6 < (int)*(uint *)(in_ECX + 0x10));
  }
  FUN_0045c990("</body>");
  local_8._0_1_ = 0xb;
  FUN_0045c990(&DAT_00c129a8);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  FUN_0044eef0();
  FUN_004c554b(0x4000);
  local_8._0_1_ = 0xf;
  FUN_00612640();
  local_8._0_1_ = 0x10;
  if (*local_40 == '\0') {
    FUN_006202e0(&local_18,0,0);
  }
  FUN_0062ade0();
  local_8._0_1_ = 0;
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
  FUN_0045c990("</html>");
  local_8._0_1_ = 0x11;
  FUN_0045c990(&DAT_00c129a8);
  piVar5 = (int *)(local_14 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  FUN_0044eef0();
  FUN_004c554b(0x4000);
  local_8._0_1_ = 0x15;
  FUN_00612640();
  local_8 = CONCAT31(local_8._1_3_,0x16);
  if (*local_40 == '\0') {
    FUN_006202e0(&local_18,0,0);
  }
  FUN_0062ade0();
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
  local_18 = &DAT_00bfe12c;
  local_8 = CONCAT31(local_8._1_3_,0x17);
  puVar7 = &DAT_00bfe12c;
  if (*local_14 != '\0') {
    puVar3 = (undefined4 *)FUN_00458890();
    DVar4 = GetFileAttributesW((LPCWSTR)*puVar3);
    if (DVar4 != 0xffffffff) {
      puVar3 = (undefined4 *)FUN_00458890();
      lpParameters = (LPCWSTR)*puVar3;
      puVar3 = (undefined4 *)FUN_00458890();
      ShellExecuteW((HWND)0x0,(LPCWSTR)0x0,(LPCWSTR)*puVar3,lpParameters,(LPCWSTR)0x0,10);
      puVar7 = local_18;
    }
  }
  piVar5 = (int *)(puVar7 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar5);
    }
  }
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

