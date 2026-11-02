// rea decompile_all
// name: FUN_00524130
// address: 0x524130
// body: available
// range: 0x524130-0x524340 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00524130(code *param_1,undefined2 param_2,uint param_3,uint param_4,uint *param_5,
                uint *param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  uint local_74;
  undefined1 *puStack_70;
  uint uStack_6c;
  int local_68;
  uint local_64;
  int *local_60;
  undefined1 *local_5c;
  uint local_58;
  undefined1 local_51;
  uint local_50;
  uint local_4c;
  int local_48;
  uint local_44;
  undefined1 *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  int local_20;
  undefined2 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d00ce;
  local_10 = ExceptionList;
  uStack_6c = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = param_2;
  local_20 = 0;
  puStack_70 = (undefined1 *)param_7;
  local_74 = 0x524173;
  FUN_00501870();
  local_8 = 0;
  puStack_70 = (undefined1 *)0x524182;
  cVar1 = FUN_00503020();
  if (cVar1 != '\0') {
    if (*(int *)(*local_60 + 0x170) == 4) {
      local_14 = *(undefined2 *)(*local_60 + 0x15c);
    }
    puStack_70 = (undefined1 *)0x0;
    local_74 = param_3;
    FUN_005033a0(*(undefined2 *)(*local_60 + 0x150),local_14);
    puStack_70 = local_2c;
    local_74 = param_4;
    cVar1 = FUN_00523fa0();
    if (cVar1 != '\0') {
      local_30 = *param_5;
      local_4c = *param_6;
      if (local_4c != 0) {
        local_50 = *param_6;
        local_64 = local_50 & 0xe000000;
        if (local_64 == 0) {
          local_34 = 0x20000;
          local_30 = local_30 | 0x20000;
        }
        else if (local_64 == 0x2000000) {
          local_38 = 0x10000;
          local_30 = local_30 | 0x10000;
        }
        else if (local_64 == 0x4000000) {
          local_3c = 0x8000;
          local_30 = local_30 | 0x8000;
        }
      }
      local_51 = *(int *)(*local_60 + 0x9bc) != 0;
      local_58 = *param_6;
      local_44 = -(uint)(byte)local_51 & 2 | local_58;
      puStack_70 = (undefined1 *)0x52428f;
      puStack_70 = (undefined1 *)FUN_00501d60();
      local_40 = (undefined1 *)&local_74;
      local_5c = (undefined1 *)&local_74;
      local_74 = local_44;
      puStack_70 = (undefined1 *)(*param_1)(local_60,local_14,local_28,0,param_4,local_30);
      local_68 = (int)puStack_70;
      local_20 = (int)puStack_70;
      if (puStack_70 != (undefined1 *)0x0) {
        local_74 = 0x5242dc;
        iVar2 = FUN_005272e0();
        if (iVar2 == 0) {
          puStack_70 = (undefined1 *)0x524305;
          (**(code **)(*(int *)(local_20 + 0x28 + *(int *)(*(int *)(local_20 + 0x28) + 8)) + 4))();
          local_20 = 0;
        }
        else {
          puStack_70 = (undefined1 *)0x0;
          local_74 = 0x524318;
          FUN_00565ec0();
        }
      }
    }
  }
  local_48 = local_20;
  local_8 = 0xffffffff;
  puStack_70 = (undefined1 *)0x52432d;
  FUN_00501900();
  ExceptionList = local_10;
  return local_48;
}

