// rea decompile_all
// name: FUN_004951c0
// address: 0x4951c0
// body: available
// range: 0x4951c0-0x4953d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004951c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *in_ECX;
  int iVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702505;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_006ea2c0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
  puVar2 = param_1;
  *in_ECX = (int)juce::ComponentAnimator::AnimationTask::ProxyComponent::vftable;
  in_ECX[0x1c] = 0;
  local_8 = 1;
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) & 0xdf;
  FUN_006e9790(param_1[4],param_1[5],param_1[6],param_1[7]);
  puVar1 = (undefined4 *)puVar2[9];
  if (puVar1 == (undefined4 *)0x0) {
    local_38 = 0x3f800000;
    uStack_34 = 0;
    uStack_30 = 0;
    uStack_2c = 0;
    local_28 = 0x3f800000;
    local_24 = 0;
  }
  else {
    local_38 = *puVar1;
    uStack_34 = puVar1[1];
    uStack_30 = puVar1[2];
    uStack_2c = puVar1[3];
    local_28 = puVar1[4];
    local_24 = puVar1[5];
  }
  local_50 = local_38;
  uStack_4c = uStack_34;
  uStack_48 = uStack_30;
  uStack_44 = uStack_2c;
  local_40 = local_28;
  local_3c = local_24;
  FUN_006cf510(&local_50);
  FUN_006e62c0();
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) & 0xef | 8;
  if (puVar2[3] == 0) {
    if ((*(byte *)(puVar2 + 0x1a) & 1) != 0) {
      iVar4 = FUN_006d1d80();
      if (iVar4 != 0) {
        iVar4 = FUN_006d1d80();
        FUN_006e9aa0(*(uint *)(iVar4 + 8) | 0x400,0);
      }
    }
  }
  else {
    (**(code **)(*in_ECX + 0x28))(1);
    FUN_006e5050(in_ECX,0xffffffff);
  }
  piVar3 = (int *)FUN_006d2360(&uStack_30);
  iVar6 = piVar3[3] / 2 + piVar3[1];
  iVar4 = piVar3[2] / 2 + *piVar3;
  if (DAT_00c8a67c == 0) {
    local_20 = operator_new(0xd0);
    local_8._0_1_ = 2;
    DAT_00c8a67c = FUN_006cb960();
    local_8 = CONCAT31(local_8._1_3_,1);
  }
  iVar4 = FUN_006cac60(iVar4,iVar6);
  puVar1 = param_1;
  fVar7 = (float)*(double *)(iVar4 + 0x20);
  uVar8 = 0;
  uVar5 = FUN_006e6400(&uStack_30);
  piVar3 = (int *)FUN_006ce130(&param_1,uVar5,uVar8,fVar7);
  iVar4 = in_ECX[0x1c];
  in_ECX[0x1c] = *piVar3;
  *piVar3 = iVar4;
  if (param_1 != (undefined4 *)0x0) {
    LOCK();
    piVar3 = param_1 + 1;
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*param_1)(1);
    }
  }
  FUN_006e9e70(1);
  FUN_006cfc30(puVar1);
  ExceptionList = local_10;
  return;
}

