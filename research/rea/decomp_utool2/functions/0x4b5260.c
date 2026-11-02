// rea decompile_all
// name: FUN_004b5260
// address: 0x4b5260
// body: available
// range: 0x4b5260-0x4b540a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b5260(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined1 *puVar6;
  undefined1 local_54 [38];
  undefined1 local_2e;
  void *local_2c;
  undefined4 uStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  int *local_1c;
  undefined4 *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_00703f37;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = (void *)0x0;
  uStack_28 = 0;
  iStack_24 = 0;
  puStack_20 = (undefined4 *)0x0;
  local_8 = 0;
  uVar2 = FUN_00637250(uVar1);
  local_8._0_1_ = 1;
  FUN_006d13b0(1,uVar2,1,0);
  local_8._0_1_ = 0;
  piVar5 = (int *)((int)local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  if ((0 < iStack_24) && (*(char *)(*(int *)((int)local_2c + iStack_24 * 4 + -4) + 0x26) == '\0')) {
    FUN_006a0850();
    local_8._0_1_ = 2;
    local_2e = 1;
    FUN_006a06e0(extraout_ECX);
    local_8._0_1_ = 0;
    FUN_004abe20();
  }
  uVar2 = FUN_00637250(uVar1);
  local_8._0_1_ = 3;
  FUN_006d13b0(2,uVar2,1,0);
  local_8._0_1_ = 0;
  piVar5 = (int *)((int)local_18 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  puVar3 = operator_new(0xc);
  piVar5 = puVar3 + 2;
  local_8._0_1_ = 5;
  *puVar3 = juce::ModalCallbackFunction::ComponentCaller1<juce::ColourSelector::SwatchComponent>::
            vftable;
  puVar3[1] = FUN_004b5410;
  local_1c = piVar5;
  local_18 = puVar3;
  if (local_14 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_0040de70(local_14);
  }
  *piVar5 = iVar4;
  if (iVar4 != 0) {
    LOCK();
    *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    UNLOCK();
  }
  puVar6 = local_54;
  local_8 = (uint)local_8._1_3_ << 8;
  FUN_006d1110(puVar6,local_14);
  uVar2 = FUN_006d1070(puVar6,local_14);
  FUN_006a0120(uVar2,puVar3,0);
  if (puStack_20 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = puStack_20 + 1;
    iVar4 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*puStack_20)(1);
    }
  }
  FUN_004b00e0();
  FID_conflict__free(local_2c);
  ExceptionList = local_10;
  return;
}

