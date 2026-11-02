// rea decompile_all
// name: FUN_006dd350
// address: 0x6dd350
// body: available
// range: 0x6dd350-0x6dd584 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006dd350(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00727d3c;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = &DAT_00bfe12c;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  local_1c = 1;
  param_1[2] = 0x24;
  FUN_006ab460(&local_20,0x1000850);
  local_24 = local_20;
  local_8 = 1;
  puVar3 = operator_new(0x28);
  local_8._0_1_ = 2;
  *puVar3 = juce::ReferenceCountedObject::vftable;
  puVar3[1] = 0;
  *puVar3 = juce::Font::SharedFontInternal::vftable;
  puVar3[2] = 0;
  piVar4 = (int *)FUN_00643f40(uVar2);
  iVar1 = *piVar4;
  puVar3[3] = iVar1;
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  FUN_0045c990(&DAT_00c187f4);
  puVar3[5] = 0x41880000;
  puVar3[6] = 0x3f800000;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined1 *)(puVar3 + 9) = 0;
  LOCK();
  puVar3[1] = puVar3[1] + 1;
  UNLOCK();
  local_8._0_1_ = 3;
  iVar1 = *param_2;
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  local_14 = puVar3;
  uVar5 = FUN_006377c0(iVar1);
  local_8 = CONCAT31(local_8._1_3_,6);
  FUN_00636ec0(uVar5);
  FUN_0044ec90();
  FUN_00644f50(&local_14,&local_24);
  piVar4 = (int *)(local_28 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      FID_conflict__free(piVar4);
    }
  }
  if (local_14 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_14 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_14)(1);
    }
  }
  local_2c = local_20;
  local_8 = 7;
  operator_new(0x28);
  local_18 = (undefined4 *)FUN_00468a40(0);
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    local_18[1] = local_18[1] + 1;
    UNLOCK();
  }
  local_8 = CONCAT31(local_8._1_3_,9);
  FUN_00636ec0(param_3);
  FUN_0044ec90(&local_18,&local_2c);
  FUN_00644f50();
  if (local_18 != (undefined4 *)0x0) {
    LOCK();
    piVar4 = local_18 + 1;
    iVar1 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      (**(code **)*local_18)(1);
    }
  }
  ExceptionList = local_10;
  return param_1;
}

