// rea decompile_all
// name: FUN_006405d0
// address: 0x6405d0
// body: available
// range: 0x6405d0-0x6407c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006405d0(int *param_1,undefined4 *param_2,float param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 uVar5;
  int in_ECX;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 *puStack_54;
  uint uStack_50;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28 [4];
  undefined8 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  puStack_c = &LAB_0071fbec;
  local_10 = ExceptionList;
  uStack_50 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar2 = *param_1;
  if (iVar2 == 0) {
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(iVar2 + 0x10);
    uVar6 = *(undefined4 *)(iVar2 + 0xc);
    uVar5 = *(undefined4 *)(iVar2 + 8);
  }
  local_18 = (double)CONCAT44(juce::NativeImageType::vftable,(void *)local_18);
  puStack_54 = (undefined4 *)0x1;
  local_8 = 0;
  FUN_00673a00(&param_1,uVar5,uVar6,uVar7);
  local_8 = 1;
  fVar8 = *(float *)(in_ECX + 4) * param_3;
  local_18 = (double)(fVar8 + fVar8) + 6755399441055744.0;
  iVar2 = (int)(void *)local_18;
  puStack_54 = (undefined4 *)((int)(void *)local_18 * (int)(void *)local_18 * 4);
  uVar7 = FUN_004c554b();
  local_18 = (double)CONCAT44(iVar2,uVar7);
  puStack_54 = (undefined4 *)0x640682;
  FUN_00672950();
  local_8 = CONCAT31(local_8._1_3_,2);
  puStack_54 = (undefined4 *)0x640690;
  FUN_006725b0();
  puStack_54 = (undefined4 *)0x64069d;
  FUN_006727a0();
  puStack_54 = local_28;
  puStack_54 = (undefined4 *)FUN_00673860();
  FUN_00671f60(&param_1,piVar1);
  FUN_00684d10(&puStack_54);
  puVar3 = param_2;
  FUN_00684c50();
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  local_2c = 0;
  if (param_1 != (int *)0x0) {
    puStack_54 = (undefined4 *)0x6406f7;
    cVar4 = (**(code **)(*(int *)*puVar3 + 0x30))();
    if (cVar4 == '\0') {
      puStack_54 = (undefined4 *)0x640702;
      (**(code **)(*(int *)*puVar3 + 0x34))();
      puStack_54 = &local_40;
      (**(code **)(*(int *)*puVar3 + 0x24))(&param_1);
      (**(code **)(*(int *)*puVar3 + 0x2c))(local_28);
      (**(code **)(*(int *)*puVar3 + 0x54))(local_28,0);
      (**(code **)(*(int *)*puVar3 + 0x38))();
    }
  }
  if (*(char *)(puVar3 + 2) != '\0') {
    *(undefined1 *)(puVar3 + 2) = 0;
    puStack_54 = (undefined4 *)0x640741;
    (**(code **)(*(int *)*puVar3 + 0x34))();
  }
  puStack_54 = param_4;
  (**(code **)(*(int *)*puVar3 + 0x48))();
  local_40 = 0x3f800000;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  local_30 = 0x3f800000;
  local_2c = 0;
  if ((*piVar1 != 0) && (cVar4 = (**(code **)(*(int *)*puVar3 + 0x30))(), cVar4 == '\0')) {
    (**(code **)(*(int *)*puVar3 + 0x60))(piVar1,&local_40);
  }
  FID_conflict__free((void *)local_18);
  if (param_1 != (int *)0x0) {
    LOCK();
    piVar1 = param_1 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  ExceptionList = local_10;
  return;
}

