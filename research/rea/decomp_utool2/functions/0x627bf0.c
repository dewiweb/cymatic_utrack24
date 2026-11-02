// rea decompile_all
// name: FUN_00627bf0
// address: 0x627bf0
// body: available
// range: 0x627bf0-0x627ec0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00627bf0(void)

{
  byte *pbVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  int *piVar6;
  char *pcVar7;
  undefined4 *in_EDX;
  char *local_24;
  char *local_20;
  int local_1c;
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071d992;
  local_10 = ExceptionList;
  if (*(char *)*in_EDX == '\0') {
    *in_ECX = (int)&DAT_00bfe12c;
    return;
  }
  ExceptionList = &local_10;
  FUN_00629d10(&local_1c,0x2f);
  local_8 = 0;
  FUN_00627ed0();
  local_8._0_1_ = 2;
  piVar6 = (int *)(local_1c + -8);
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  iVar3 = FUN_00426f70();
  pcVar7 = local_14;
  if (iVar3 != 0x5c) {
    iVar3 = FUN_0045c230();
    pcVar7 = local_14;
    if (-1 < iVar3) goto LAB_00627d40;
    FUN_006120a0();
    local_8 = CONCAT31(local_8._1_3_,4);
    piVar6 = (int *)FUN_00635a10(&local_20);
    iVar3 = *piVar6;
    *in_ECX = iVar3;
    piVar6 = (int *)(iVar3 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      *piVar6 = *piVar6 + 1;
      UNLOCK();
    }
    piVar6 = (int *)(local_20 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    piVar6 = (int *)(local_18 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    piVar6 = (int *)(local_14 + -8);
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
      }
    }
    ExceptionList = local_10;
    return;
  }
  local_18 = local_14;
  FUN_0044ebd0();
  iVar3 = FUN_00426f70();
  if (iVar3 == 0x5c) goto LAB_00627d40;
  FUN_006120a0();
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_006379a0(&stack0xffffffbc,0,2);
  puVar4 = (undefined4 *)FUN_00637730();
  pcVar7 = (char *)*puVar4;
  *puVar4 = local_14;
  piVar6 = (int *)(local_18 + -8);
  local_14 = pcVar7;
  if (piVar6 != &DAT_00bfe124) {
    LOCK();
    iVar3 = *piVar6;
    *piVar6 = *piVar6 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(piVar6);
    }
  }
  local_8._0_1_ = 2;
  pcVar7 = local_20;
  while( true ) {
    piVar6 = (int *)(pcVar7 + -8);
    pcVar7 = local_14;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar6);
        pcVar7 = local_14;
      }
    }
LAB_00627d40:
    pcVar2 = pcVar7;
    if (*pcVar7 == '\0') break;
    do {
      local_20 = pcVar2;
      pcVar2 = local_20 + 1;
    } while (*local_20 != '\0');
    iVar3 = 0;
    do {
      pbVar1 = (byte *)(local_20 + -1);
      local_20 = local_20 + -1;
      if ((*pbVar1 & 0xc0) != 0x80) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    iVar3 = FUN_00426f70();
    if ((iVar3 != 0x5c) || (pcVar7 == DAT_00c8a8e8)) break;
    local_18 = DAT_00c8a8e8;
    local_20 = pcVar7;
    while( true ) {
      iVar3 = FUN_00443260();
      iVar5 = FUN_00443260();
      if ((iVar3 - iVar5 != 0) && ((iVar3 - iVar5 >> 0x1f & 0xfffffffeU) != 0xffffffff)) break;
      if (iVar3 == 0) goto LAB_00627dc1;
    }
    puVar4 = (undefined4 *)FUN_00637960(&local_24);
    pcVar2 = (char *)*puVar4;
    *puVar4 = local_14;
    pcVar7 = local_24;
    local_14 = pcVar2;
  }
LAB_00627dc1:
  *in_ECX = (int)pcVar7;
  ExceptionList = local_10;
  return;
}

