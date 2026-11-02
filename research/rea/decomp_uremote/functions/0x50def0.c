// rea decompile_all
// name: FUN_0050def0
// address: 0x50def0
// body: available
// range: 0x50def0-0x50e39e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050def0(ushort param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 ushort param_9,ushort param_10,ushort param_11,ushort param_12,int *param_13,
                 undefined4 param_14)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  undefined ***local_120;
  undefined ***local_11c;
  int local_118;
  int local_114;
  undefined1 local_108 [12];
  undefined1 local_fc [12];
  int local_f0;
  int local_ec;
  undefined1 local_e8 [92];
  uint local_8c;
  undefined **local_88;
  undefined **local_28;
  undefined4 local_24;
  char local_19;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005cee0e;
  local_10 = ExceptionList;
  local_8c = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_13 != (int *)0x0) {
    local_14 = 0;
    (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x28))
              (local_8c);
    if (*(int *)(in_ECX + -0xa44) == 3) {
      iVar1 = in_ECX + -0xb5c;
      uVar7 = (uint)param_12;
      uVar2 = (uint)param_11;
      uVar5 = (uint)param_10;
      uVar8 = (uint)param_9;
      uVar6 = (uint)param_1;
      uVar4 = param_3;
      uVar9 = param_4;
      uVar10 = param_5;
      uVar11 = param_6;
      uVar12 = param_7;
      uVar13 = param_8;
      piVar14 = param_13;
      uVar15 = param_14;
      uVar3 = FUN_0052dce0(local_fc);
      local_14 = FUN_00545420(uVar3,uVar6,param_2,uVar4,uVar9,uVar10,uVar11,uVar12,uVar13,uVar8,
                              uVar5,uVar2,uVar7,piVar14,iVar1,uVar15);
    }
    else {
      FUN_00543ff0(0,0);
      local_88 = CPCHAI::CFakeIAsync::vftable;
      local_28 = CPCHAI::CFakeIAsync::vftable;
      local_24 = param_14;
      local_8 = 0;
      FUN_005067b0();
      local_8 = CONCAT31(local_8._1_3_,1);
      local_18 = FUN_00525af0(param_1,param_2,&param_3,&param_4,&param_5,&param_6,&param_7,&param_8,
                              local_e8);
      local_19 = '\0';
      if ((local_18 != 0) && (local_ec = FUN_00544c30(in_ECX + -0xb5c,local_e8), local_ec != 0)) {
        uVar4 = (**(code **)(*(int *)(local_18 + 0x28 + *(int *)(*(int *)(local_18 + 0x28) + 0xc)) +
                            0x98))(local_108);
        local_f0 = FUN_0051f960(uVar4);
        if (local_f0 == 0) {
          local_f0 = FUN_0051ade0(local_18);
        }
        if (local_f0 != 0) {
          FUN_00515830();
          if (local_ec == 0) {
            local_114 = 0;
          }
          else {
            local_114 = local_ec + 0x28 + *(int *)(*(int *)(local_ec + 0x28) + 0xc);
          }
          if (local_f0 == 0) {
            local_118 = 0;
          }
          else {
            local_118 = local_f0 + 0x28 + *(int *)(*(int *)(local_f0 + 0x28) + 0xc);
          }
          if (&stack0x00000000 == (undefined1 *)0x88) {
            local_11c = (undefined ***)0x0;
          }
          else {
            local_11c = &local_28;
          }
          (**(code **)(*param_13 + 4))(local_11c,0x81,local_118,local_114);
          FUN_00515860();
          (**(code **)(*(int *)(local_f0 + 0x28 + *(int *)(*(int *)(local_f0 + 0x28) + 8)) + 4))();
          local_19 = '\x01';
        }
        if (local_ec != 0) {
          (**(code **)(*(int *)(local_ec + 0x28 + *(int *)(*(int *)(local_ec + 0x28) + 8)) + 4))();
        }
      }
      if (local_19 == '\0') {
        FUN_00515830();
        if (&stack0x00000000 == (undefined1 *)0x88) {
          local_120 = (undefined ***)0x0;
        }
        else {
          local_120 = &local_28;
        }
        (**(code **)(*param_13 + 4))(local_120,0x80,0,0);
        FUN_00515860();
      }
      local_8 = local_8 & 0xffffff00;
      FUN_00506c20();
      local_8 = 0xffffffff;
      local_28 = CPNS::IAsync::vftable;
      FUN_00544100();
    }
    if (local_14 != 0) {
      FUN_00544360();
    }
    (**(code **)(*(int *)(in_ECX + -0xb50 + *(int *)(*(int *)(in_ECX + -0xb50) + 4)) + 0x2c))();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_8c ^ (uint)&stack0xfffffffc);
  return;
}

