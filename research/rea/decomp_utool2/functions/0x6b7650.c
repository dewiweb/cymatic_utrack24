// rea decompile_all
// name: FUN_006b7650
// address: 0x6b7650
// body: available
// range: 0x6b7650-0x6b7934 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b7650(void)

{
  undefined4 *puVar1;
  DWORD DVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  bool bVar6;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 **ppuStack_50;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  int local_18;
  char local_11;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0072420a;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar6 = false;
  local_18 = 0;
  if ((*(char *)(in_ECX + 0xec) != '\0') &&
     ((*(uint *)(*(int *)(*(int *)(in_ECX + 0xe8) + 0x70) + 0xa4) >> 1 & 1) != 0)) {
    ppuStack_50 = &local_1c;
    uStack_54 = 0x6b76a6;
    puVar1 = (undefined4 *)FUN_006ba3c0();
    local_8 = 0;
    bVar6 = true;
    local_18 = 1;
    if (*(char *)*puVar1 != '\0') {
      puVar1 = (undefined4 *)FUN_00458890();
      ppuStack_50 = (undefined4 **)0x6b76ca;
      DVar2 = GetFileAttributesW((LPCWSTR)*puVar1);
      local_11 = '\x01';
      if (DVar2 != 0xffffffff) goto LAB_006b76d6;
    }
  }
  local_11 = '\0';
LAB_006b76d6:
  local_8 = 0xffffffff;
  if ((bVar6) && (piVar5 = local_1c + -2, piVar5 != &DAT_00bfe124)) {
    LOCK();
    iVar3 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      ppuStack_50 = (undefined4 **)0x6b7703;
      FID_conflict__free(piVar5);
    }
  }
  if (local_11 == '\0') {
    ppuStack_50 = (undefined4 **)0x6b7923;
    FUN_006e8fd0();
  }
  else {
    ppuStack_50 = (undefined4 **)0x6b7717;
    local_1c = operator_new(0xc);
    local_8 = 2;
    piVar5 = local_1c + 2;
    *local_1c = juce::ModalCallbackFunction::ComponentCaller1<juce::FileChooserDialogBox>::vftable;
    local_1c[1] = FUN_006b7940;
    ppuStack_50 = (undefined4 **)0x6b7742;
    iVar3 = FUN_0040de70();
    *piVar5 = iVar3;
    if (iVar3 != 0) {
      LOCK();
      *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + 1;
      UNLOCK();
    }
    local_8 = 0xffffffff;
    uStack_54 = 0x6b7762;
    uStack_54 = FUN_00637250();
    local_8 = 3;
    uStack_58 = 0x6b7777;
    uStack_58 = FUN_00637250();
    local_8._0_1_ = 4;
    uStack_5c = 0x6b7789;
    local_1c = (undefined4 *)FUN_00637250();
    uStack_60 = 0;
    FUN_006ba3c0();
    local_8._0_1_ = 6;
    uStack_60 = 0x6b77b6;
    FUN_00637250();
    local_8._0_1_ = 7;
    FUN_00633060(&uStack_60,&DAT_00c05430);
    FUN_006377c0();
    uStack_60 = 0x6b77f0;
    uVar4 = FUN_00637730();
    local_8._0_1_ = 8;
    uStack_5c = 0x6b7803;
    FUN_00637250();
    local_8 = CONCAT31(local_8._1_3_,9);
    uStack_60 = 0x6b7814;
    uStack_5c = uVar4;
    FUN_006d3250();
    piVar5 = (int *)(local_18 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        ppuStack_50 = (undefined4 **)0x6b7836;
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_20 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        ppuStack_50 = (undefined4 **)0x6b7859;
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_24 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        ppuStack_50 = (undefined4 **)0x6b787c;
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_28 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        ppuStack_50 = (undefined4 **)0x6b789f;
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_2c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        ppuStack_50 = (undefined4 **)0x6b78c2;
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_30 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        ppuStack_50 = (undefined4 **)0x6b78e5;
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_34 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        ppuStack_50 = (undefined4 **)0x6b7905;
        FID_conflict__free(piVar5);
        ExceptionList = local_10;
        return;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

