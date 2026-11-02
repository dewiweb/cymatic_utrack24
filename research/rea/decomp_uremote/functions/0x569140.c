// rea decompile_all
// name: FUN_00569140
// address: 0x569140
// body: available
// range: 0x569140-0x56938c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00569140(undefined4 param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4,
                undefined2 param_5,undefined2 param_6,int *param_7)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_38;
  ushort local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  int local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d45c1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = FUN_00568ee0(DAT_00955fd4 ^ (uint)&stack0xfffffffc);
  if (uVar2 < 0x3fff) {
    local_1c = 0;
    FUN_00501870(param_2);
    local_8 = 0;
    cVar1 = FUN_00503020();
    if (cVar1 != '\0') {
      local_30 = *param_7;
      local_2c = param_7[1];
      local_28 = param_7[2];
      local_24 = param_7[3];
      if (local_30 == 0 && local_2c == 0) {
        local_30 = -1;
        local_2c = 0x4fffffff;
        local_28._2_2_ = (undefined2)((uint)local_28 >> 0x10);
        local_28 = CONCAT22(local_28._2_2_,0xffff);
      }
      if ((short)local_28 == -1) {
        local_38 = FUN_0056a330();
        local_34 = 0;
        for (; local_38 != 0; local_38 = FUN_0056a3e0(local_38)) {
          if (((*(int *)(local_38 + 0xe8) == local_30) && (*(int *)(local_38 + 0xec) == local_2c))
             && (local_34 <= *(ushort *)(local_38 + 0xf0))) {
            local_34 = *(short *)(local_38 + 0xf0) + 1;
          }
        }
        local_28 = CONCAT22(local_28._2_2_,local_34);
      }
      uVar4 = FUN_00568ee0(&local_30);
      uVar5 = FUN_00501d60(param_3,param_4,param_5,param_6,(uVar4 & 0xffff) + 0x4000);
      local_1c = FUN_0059f230(param_1,uVar5);
      if ((local_1c != 0) && (iVar3 = FUN_0056a620(local_1c), iVar3 == 0)) {
        (**(code **)(*(int *)(local_1c + 0x28 + *(int *)(*(int *)(local_1c + 0x28) + 8)) + 4))();
        local_1c = 0;
      }
    }
    iVar3 = local_1c;
    local_8 = 0xffffffff;
    FUN_00501900();
  }
  else {
    iVar3 = 0;
  }
  ExceptionList = local_10;
  return iVar3;
}

