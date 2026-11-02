// rea decompile_all
// name: FUN_005791c0
// address: 0x5791c0
// body: available
// range: 0x5791c0-0x579568 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005791c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  ushort uVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined1 local_90 [16];
  undefined1 local_80 [20];
  int local_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  ushort local_20;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d50b5;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_00579bd0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  if (uVar2 < 0x7fff) {
    local_1c = 0;
    FUN_00501870(param_2);
    local_8 = 0;
    cVar1 = FUN_00503020();
    if (cVar1 != '\0') {
      local_30 = *param_4;
      local_2c = param_4[1];
      local_28 = param_4[2];
      local_24 = param_4[3];
      if (local_30 == 0 && local_2c == 0) {
        local_48 = 0;
        local_44 = 0x48000000;
        local_40 = 0xffff;
        local_30 = 0;
        local_2c = 0x48000000;
        local_28._2_2_ = (undefined2)((uint)local_28 >> 0x10);
        local_28 = CONCAT22(local_28._2_2_,0xffff);
      }
      local_34 = FUN_0057a110();
      local_20 = 0;
      for (; local_34 != 0; local_34 = FUN_0057a1c0(local_34)) {
        piVar5 = (int *)(**(code **)(*(int *)(local_34 + 0x28 +
                                             *(int *)(*(int *)(local_34 + 0x28) + 0xc)) + 0x40))
                                  (local_58);
        if ((*piVar5 == local_30) && (piVar5[1] == local_2c)) {
          iVar4 = (**(code **)(*(int *)(local_34 + 0x28 + *(int *)(*(int *)(local_34 + 0x28) + 0xc))
                              + 0x40))(local_68);
          if (*(short *)(iVar4 + 8) == (short)local_28) {
            local_6c = 0;
            local_8 = 0xffffffff;
            FUN_00501900();
            ExceptionList = local_10;
            return local_6c;
          }
          iVar4 = (**(code **)(*(int *)(local_34 + 0x28 + *(int *)(*(int *)(local_34 + 0x28) + 0xc))
                              + 0x40))(local_80);
          if (local_20 <= *(ushort *)(iVar4 + 8)) {
            iVar4 = (**(code **)(*(int *)(local_34 + 0x28 +
                                         *(int *)(*(int *)(local_34 + 0x28) + 0xc)) + 0x40))
                              (local_90);
            local_20 = *(short *)(iVar4 + 8) + 1;
          }
        }
      }
      if ((short)local_28 == -1) {
        local_28 = CONCAT22(local_28._2_2_,local_20);
      }
      uVar3 = FUN_00579bd0(&local_30);
      uVar6 = FUN_00501d60(param_3,uVar3);
      local_1c = FUN_00574e60(param_1,uVar6);
      if ((local_1c != 0) && (iVar4 = FUN_0057a400(local_1c), iVar4 == 0)) {
        (**(code **)(*(int *)(local_1c + 0x28 + *(int *)(*(int *)(local_1c + 0x28) + 8)) + 4))();
        local_1c = 0;
      }
    }
    iVar4 = local_1c;
    local_8 = 0xffffffff;
    FUN_00501900();
  }
  else {
    iVar4 = 0;
  }
  ExceptionList = local_10;
  return iVar4;
}

