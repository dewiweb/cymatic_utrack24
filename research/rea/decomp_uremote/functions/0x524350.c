// rea decompile_all
// name: FUN_00524350
// address: 0x524350
// body: available
// range: 0x524350-0x524730 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00524350(code *param_1,int param_2,ushort param_3,uint *param_4,uint *param_5,int param_6)

{
  char cVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined1 *puStack_c8;
  undefined1 *puStack_c4;
  uint uStack_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  uint local_ac;
  int *local_a8;
  undefined1 *local_a4;
  uint local_a0;
  undefined1 local_99;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  undefined1 local_88 [12];
  undefined1 local_7c [12];
  undefined1 *local_70;
  undefined1 *local_6c;
  undefined1 local_68 [8];
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  uint local_30;
  char local_29;
  undefined1 local_28 [12];
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d0110;
  local_10 = ExceptionList;
  uStack_c0 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_90 = 0;
  local_1c = 0;
  puStack_c4 = (undefined1 *)0x524397;
  FUN_005662a0();
  puStack_c4 = (undefined1 *)param_6;
  puStack_c8 = (undefined1 *)0x5243a3;
  FUN_00501870();
  local_8 = 0;
  puStack_c4 = (undefined1 *)0x5243b2;
  cVar1 = FUN_00503020();
  if (cVar1 != '\0') {
    puStack_c4 = (undefined1 *)(uint)param_3;
    puStack_c8 = local_3c;
    iVar2 = (**(code **)(*(int *)(param_2 + 0x28 + *(int *)(*(int *)(param_2 + 0x28) + 0xc)) + 0x98)
            )();
    uVar4 = *(undefined4 *)(iVar2 + 4);
    iVar2 = (**(code **)(*(int *)(param_2 + 0x28 + *(int *)(*(int *)(param_2 + 0x28) + 0xc)) + 0x98)
            )(local_48,uVar4);
    puVar3 = (undefined2 *)
             (**(code **)(*(int *)(param_2 + 0x28 + *(int *)(*(int *)(param_2 + 0x28) + 0xc)) + 0x98
                         ))(local_54,*(undefined2 *)(iVar2 + 2));
    FUN_005033a0(*puVar3,uVar4);
    puStack_c4 = local_28;
    puStack_c8 = (undefined1 *)0x52446e;
    local_29 = FUN_00526ae0();
    if (local_29 == '\0') {
      local_30 = *param_4;
      local_94 = *param_5;
      if (local_94 != 0) {
        local_98 = *param_5;
        local_ac = local_98 & 0xe000000;
        if (local_ac == 0) {
          local_58 = 0x20000;
          local_30 = local_30 | 0x20000;
        }
        else if (local_ac == 0x2000000) {
          local_5c = 0x10000;
          local_30 = local_30 | 0x10000;
        }
        else if (local_ac == 0x4000000) {
          local_60 = 0x8000;
          local_30 = local_30 | 0x8000;
        }
      }
      if (param_6 == 0) {
        puStack_c4 = local_68;
        puStack_c8 = (undefined1 *)0x524549;
        local_b8 = (**(code **)(*(int *)(param_2 + 0x28 + *(int *)(*(int *)(param_2 + 0x28) + 0xc))
                               + 0xb0))();
        local_8 = CONCAT31(local_8._1_3_,1);
        local_90 = local_90 | 1;
        puStack_c4 = (undefined1 *)0x524579;
        local_b4 = local_b8;
        local_b0 = FUN_00501cb0();
      }
      else {
        puStack_c4 = (undefined1 *)0x524513;
        local_b0 = FUN_00501cb0();
      }
      local_99 = *(int *)(*local_a8 + 0x9bc) != 0;
      local_a0 = *param_5;
      puStack_c8 = (undefined1 *)(-(uint)(byte)local_99 & 2 | local_a0);
      puStack_c4 = (undefined1 *)local_b0;
      local_6c = (undefined1 *)&puStack_c8;
      local_a4 = (undefined1 *)&puStack_c8;
      local_70 = puStack_c8;
      uVar4 = (**(code **)(*(int *)(param_2 + 0x28 + *(int *)(*(int *)(param_2 + 0x28) + 0xc)) +
                          0xc4))(local_30);
      iVar2 = (**(code **)(*(int *)(param_2 + 0x28 + *(int *)(*(int *)(param_2 + 0x28) + 0xc)) +
                          0x98))(local_7c,param_3,uVar4);
      iVar2 = (**(code **)(*(int *)(param_2 + 0x28 + *(int *)(*(int *)(param_2 + 0x28) + 0xc)) +
                          0x98))(local_88,*(undefined4 *)(iVar2 + 4));
      local_bc = (*param_1)(local_a8,*(undefined2 *)(iVar2 + 2));
      local_8 = 0;
      local_1c = local_bc;
      if ((local_90 & 1) != 0) {
        local_90 = local_90 & 0xfffffffe;
        puStack_c4 = (undefined1 *)0x5246ac;
        FUN_00501900();
      }
      if (local_1c != 0) {
        puStack_c4 = (undefined1 *)local_1c;
        puStack_c8 = (undefined1 *)0x5246c4;
        iVar2 = FUN_005272e0();
        if (iVar2 == 0) {
          puStack_c4 = (undefined1 *)0x5246ed;
          (**(code **)(*(int *)(local_1c + 0x28 + *(int *)(*(int *)(local_1c + 0x28) + 8)) + 4))();
          local_1c = 0;
        }
        else {
          puStack_c4 = (undefined1 *)param_2;
          puStack_c8 = (undefined1 *)0x524702;
          FUN_00565ec0();
        }
      }
    }
  }
  local_8c = local_1c;
  local_8 = 0xffffffff;
  puStack_c4 = (undefined1 *)0x52471a;
  FUN_00501900();
  ExceptionList = local_10;
  return local_8c;
}

