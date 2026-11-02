// rea decompile_all
// name: FUN_006411a0
// address: 0x6411a0
// body: available
// range: 0x6411a0-0x6413f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006411a0(int *param_1,undefined4 param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  int *piVar10;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [20];
  undefined4 local_64;
  undefined4 local_60;
  float local_5c;
  undefined4 local_58;
  undefined4 local_54;
  float local_50;
  undefined4 local_4c;
  undefined4 local_48;
  float local_44 [4];
  undefined1 local_34 [4];
  int *local_30;
  int *local_2c;
  undefined1 local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  undefined **local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071fc7d;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar3 = in_ECX[1] + 1;
  puVar9 = local_34;
  FUN_0067faa0(local_78);
  uVar4 = FUN_00410df0(puVar9,iVar3);
  piVar10 = &local_24;
  iVar3 = in_ECX[1] + 1;
  puVar9 = local_88;
  uVar7 = in_ECX[2];
  uVar8 = in_ECX[3];
  puVar6 = local_98;
  puVar5 = local_a8;
  FUN_00683770(local_44);
  FUN_0046f710(puVar5);
  FUN_0046fc10(puVar6,uVar7,uVar8);
  FUN_00410df0(puVar9,iVar3);
  FUN_0044db90(piVar10,uVar4);
  if ((2 < local_1c) && (2 < local_18)) {
    local_14 = juce::NativeImageType::vftable;
    local_8 = 0;
    FUN_00673a00(&param_1,3,local_1c,local_18,1);
    local_14 = juce::ImageType::vftable;
    local_8 = 1;
    if (param_1 == (int *)0x0) {
      local_30 = (int *)0x0;
    }
    else {
      local_30 = (int *)(**(code **)(*param_1 + 4))();
    }
    local_28 = 0;
    local_8 = CONCAT31(local_8._1_3_,2);
    local_2c = local_30;
    FUN_00684c50(DAT_00c7ef94);
    piVar10 = local_30;
    local_4c = 0x3f800000;
    local_48 = 0;
    local_44[3] = (float)(in_ECX[3] - local_20);
    local_44[1] = 0.0;
    local_44[2] = 1.0;
    local_44[0] = (float)(in_ECX[2] - local_24);
    cVar2 = (**(code **)(*local_30 + 0x30))();
    if (cVar2 == '\0') {
      cVar2 = FUN_00682580();
      if (cVar2 == '\0') {
        (**(code **)(*piVar10 + 0x5c))(param_2,&local_4c);
      }
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    if (local_2c != (int *)0x0) {
      (**(code **)*local_2c)(1);
    }
    FUN_00641590();
    FUN_00684c50(*in_ECX);
    local_64 = 0x3f800000;
    local_60 = 0;
    local_58 = 0;
    local_54 = 0x3f800000;
    local_5c = (float)local_24;
    local_50 = (float)local_20;
    if (param_1 != (int *)0x0) {
      cVar2 = (**(code **)(*(int *)*piVar1 + 0x30))();
      if (cVar2 == '\0') {
        (**(code **)(*(int *)*piVar1 + 0x34))();
        (**(code **)(*(int *)*piVar1 + 0x24))(&param_1,&local_64);
        (**(code **)(*(int *)*piVar1 + 0x2c))(&local_24);
        (**(code **)(*(int *)*piVar1 + 0x54))(&local_24,0);
        (**(code **)(*(int *)*piVar1 + 0x38))();
      }
      if (param_1 != (int *)0x0) {
        LOCK();
        piVar10 = param_1 + 1;
        iVar3 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*param_1)(1);
        }
      }
    }
  }
  ExceptionList = local_10;
  return;
}

