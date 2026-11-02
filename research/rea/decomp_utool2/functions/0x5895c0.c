// rea decompile_all
// name: FUN_005895c0
// address: 0x5895c0
// body: available
// range: 0x5895c0-0x5899d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005895c0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  undefined4 uVar5;
  undefined **ppuVar6;
  undefined4 uVar7;
  undefined *puStack_80;
  TypeDescriptor *pTStack_7c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007138d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0045c990();
  pTStack_7c = &juce::JUCEApplicationBase::RTTI_Type_Descriptor;
  local_8 = 1;
  puStack_80 = (undefined *)0x0;
  piVar2 = (int *)FUN_006f6dd6(DAT_00c8a660);
  local_8 = local_8 & 0xffffff00;
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 4))();
  pTStack_7c = (TypeDescriptor *)0x1;
  puStack_80 = (undefined *)0x1;
  uVar7 = 1;
  uVar5 = 0;
  piVar2 = &local_34;
  FUN_00633420(piVar2,0,1);
  puStack_80 = (undefined *)FUN_00636ad0(piVar2,uVar5,uVar7);
  local_8._0_1_ = 2;
  FUN_00637690();
  puStack_80 = (undefined *)0x589675;
  pTStack_7c = (TypeDescriptor *)FUN_006377c0();
  ppuVar6 = &puStack_80;
  local_8._0_1_ = 3;
  piVar2 = &local_14;
  FUN_00633420(&puStack_80,piVar2);
  FUN_0062f7d0(ppuVar6,piVar2);
  puVar4 = (undefined4 *)FUN_006377c0();
  local_8._0_1_ = 5;
  puStack_80 = (undefined *)0x5896b1;
  FUN_00634690();
  local_8._0_1_ = 6;
  puStack_80 = (undefined *)*puVar3;
  FUN_00635a10(&local_20);
  local_8._0_1_ = 7;
  puStack_80 = &DAT_00746200;
  FUN_00635a10(&local_1c);
  local_8._0_1_ = 8;
  puStack_80 = (undefined *)*puVar4;
  puStack_80 = (undefined *)FUN_00635a10(&local_18);
  local_8 = CONCAT31(local_8._1_3_,9);
  FUN_0062fd60();
  piVar2 = (int *)(local_18 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_1c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_20 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_24 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_28 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_2c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_30 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_34 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_14 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar2);
    }
  }
  *in_ECX = NSLogger::vftable;
  *(undefined1 *)(in_ECX + 8) = 0;
  in_ECX[9] = &DAT_00bfe12c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(in_ECX + 10));
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  pTStack_7c = &juce::JUCEApplicationBase::RTTI_Type_Descriptor;
  local_8._0_1_ = 0x17;
  puStack_80 = (undefined *)0x0;
  DAT_00c8a5d8 = in_ECX;
  DAT_00c8a648 = in_ECX;
  piVar2 = (int *)FUN_006f6dd6(DAT_00c8a660);
  local_8._0_1_ = 0x16;
  (**(code **)(*piVar2 + 4))();
  local_8._0_1_ = 0x18;
  FUN_0062fcf0();
  local_8._0_1_ = 0x19;
  pTStack_7c = (TypeDescriptor *)&local_40;
  puStack_80 = (undefined *)0x5898cf;
  FUN_00635a10();
  local_8._0_1_ = 0x1a;
  pTStack_7c = (TypeDescriptor *)&local_3c;
  puStack_80 = (undefined *)0x5898e7;
  FUN_00635a10();
  local_8 = CONCAT31(local_8._1_3_,0x1b);
  pTStack_7c = (TypeDescriptor *)&local_38;
  puStack_80 = (undefined *)0x5898ff;
  puVar3 = (undefined4 *)FUN_00635a10();
  uVar5 = in_ECX[9];
  in_ECX[9] = *puVar3;
  *puVar3 = uVar5;
  piVar2 = (int *)(local_38 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      pTStack_7c = (TypeDescriptor *)0x589929;
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_3c + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      pTStack_7c = (TypeDescriptor *)0x58994c;
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_40 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      pTStack_7c = (TypeDescriptor *)0x58996f;
      FID_conflict__free(piVar2);
    }
  }
  piVar2 = (int *)(local_44 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      pTStack_7c = (TypeDescriptor *)0x589992;
      FID_conflict__free(piVar2);
    }
  }
  local_8 = CONCAT31(local_8._1_3_,0x16);
  piVar2 = (int *)(local_48 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      pTStack_7c = (TypeDescriptor *)0x5899b6;
      FID_conflict__free(piVar2);
    }
  }
  FUN_00635980();
  ExceptionList = local_10;
  return;
}

