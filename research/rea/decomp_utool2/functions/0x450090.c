// rea decompile_all
// name: FUN_00450090
// address: 0x450090
// body: available
// range: 0x450090-0x450273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00450090(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  int local_34;
  undefined4 *local_30;
  uint local_2c;
  int local_28;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006ffbc5;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar8 = (undefined4 *)0x0;
  uVar7 = 0;
  iVar9 = 0;
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_28 = 0;
  local_8 = 1;
  iVar3 = FUN_006f6dd6(*(undefined4 *)(param_2 + 8),0,
                       &juce::ReferenceCountedObject::RTTI_Type_Descriptor,
                       &juce::var::VariantType_Array::RefCountedArray::RTTI_Type_Descriptor,0,
                       local_14);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar3 + 8;
  }
  local_8 = local_8 & 0xffffff00;
  uVar10 = local_2c;
  if ((iVar3 != 0) && (local_34 = 0, 0 < *(int *)(iVar3 + 8))) {
    do {
      puVar4 = (undefined4 *)FUN_00628c70(local_24);
      iVar1 = iVar9 + 1;
      if ((int)uVar7 < iVar1) {
        iVar5 = iVar1;
        if (iVar1 < 0) {
          iVar5 = iVar9 + 2;
        }
        uVar10 = iVar9 + 9 + (iVar5 >> 1) & 0xfffffff8;
        iVar9 = local_28;
        if (uVar7 != uVar10) {
          uVar7 = uVar10;
          if ((int)uVar10 < 1) {
            FID_conflict__free(puVar8);
            puVar8 = (undefined4 *)0x0;
            iVar9 = local_28;
            local_30 = puVar8;
          }
          else if (puVar8 == (undefined4 *)0x0) {
            puVar8 = (undefined4 *)FUN_004c554b();
            iVar9 = local_28;
            local_30 = puVar8;
          }
          else {
            puVar8 = (undefined4 *)FUN_004c553b(puVar8,uVar10 << 4);
            iVar9 = local_28;
            local_30 = puVar8;
          }
        }
      }
      puVar6 = puVar8 + iVar9 * 4;
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar4;
        puVar6[2] = puVar4[2];
        puVar6[3] = puVar4[3];
        *puVar4 = &PTR_vftable_00c7ed38;
      }
      local_28 = iVar1;
      (**(code **)(*local_24[0] + 0x54))(local_1c);
      local_34 = local_34 + 1;
      iVar9 = iVar1;
      uVar10 = uVar7;
    } while (local_34 < *(int *)(iVar3 + 8));
  }
  local_2c = uVar10;
  *param_1 = &PTR_vftable_00c7ebe8;
  puVar4 = operator_new(0x14);
  piVar2 = puVar4 + 1;
  *puVar4 = juce::ReferenceCountedObject::vftable;
  *piVar2 = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  *puVar4 = juce::var::VariantType_Array::RefCountedArray::vftable;
  FUN_00458ee0(&local_30);
  puVar8 = local_30;
  LOCK();
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  param_1[2] = puVar4;
  puVar4 = local_30;
  iVar9 = local_28;
  if (0 < local_28) {
    do {
      (**(code **)(*(int *)*puVar4 + 0x54))(puVar4 + 2);
      iVar9 = iVar9 + -1;
      puVar4 = puVar4 + 4;
    } while (iVar9 != 0);
  }
  FID_conflict__free(puVar8);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

