// rea decompile_all
// name: FUN_00175d2c
// address: 0x175d2c
// body: available
// range: 0x175d2c-0x175ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x175e38 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00175d2c(uint *param_1,int param_2,int param_3,char *param_4,int param_5,uint param_6,
                 undefined4 param_7,undefined4 param_8,int param_9,undefined4 *param_10)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint extraout_r2;
  uint extraout_r2_00;
  uint uVar7;
  uint *puVar8;
  undefined8 uVar9;
  uint local_60;
  uint local_5c;
  uint local_58;
  byte local_54;
  uint *local_50;
  uint local_48;
  uint local_44;
  int local_40;
  char *local_38;
  uint local_34 [2];
  int local_2c;
  uint *local_24;
  int local_20;
  int local_1c;
  char *pcStack_18;
  
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  pcStack_18 = param_4;
  if ((param_4 == (char *)0x0) && (param_5 != 0)) {
LAB_00175e38:
                    /* WARNING: Subroutine does not return */
    FUN_00003538();
  }
  local_44 = FUN_00176050(param_7,param_4,param_5);
  local_38 = (char *)0x0;
  local_34[0] = 0;
  uVar9 = FUN_0017554c(&local_38,local_34,local_44,param_4,param_5,param_8);
  if ((int)uVar9 == 0) {
    local_24[1] = 0;
    local_24[2] = extraout_r2 & 0xffffff00;
    *local_24 = (uint)((ulonglong)uVar9 >> 0x20) & 0xffffff00 | 3;
    return;
  }
  uVar7 = extraout_r2;
  if (((param_9 != 0) && (local_38 != param_4)) && (param_4 != (char *)0x0)) {
    (**(code **)(DAT_00175ecc + 4))(param_4);
    uVar7 = extraout_r2_00;
  }
  uVar3 = local_34[0];
  pcVar2 = local_38;
  *(char **)(local_20 + 0x28) = local_38;
  local_40 = local_1c;
  local_50 = (uint *)(local_20 + 0x20);
  local_48 = param_6;
  if (local_34[0] == 0) {
    uVar7 = uVar7 & 0xffffff00;
    uVar6 = param_6 & 0xffffff00 | (~(param_6 << 0x13) >> 0x1f) << 4;
    uVar4 = 0;
  }
  else {
    local_2c = 0;
    if (*(int *)(local_1c + 0x10) != 0) {
      local_2c = *(int *)(*(int *)(local_1c + 0x10) + 0x14);
    }
    local_60 = *local_50;
    local_5c = *(uint *)(local_20 + 0x24);
    local_58 = 0;
    local_54 = 0;
    cVar1 = local_38[local_34[0] - 1];
    local_38[local_34[0] - 1] = '\0';
    pcVar5 = local_38;
    if (((*local_38 == -0x11) && (local_38[1] == -0x45)) && (local_38[2] == -0x41)) {
      pcVar5 = local_38 + 3;
    }
    FUN_00173e78(&local_60,pcVar5,local_1c,param_6,cVar1);
    *local_50 = local_60;
    local_50[1] = local_5c;
    uVar4 = local_58;
    if (local_58 != 0) {
      uVar4 = local_58 - (int)pcVar2;
    }
    uVar7 = local_5c & 0xffffff00;
    uVar6 = local_60 & 0xffffff00 | (uint)local_54;
    if (((int)uVar4 < 0) || (uVar3 < uVar4)) goto LAB_00175e38;
    if (local_54 == 0) {
      if (cVar1 == '<') {
        uVar7 = local_5c & 0xffffff00;
        uVar4 = uVar3 - 1;
        uVar6 = 5;
      }
      else {
        if (local_2c == 0) {
          puVar8 = *(uint **)(local_40 + 0x10);
        }
        else {
          puVar8 = *(uint **)(local_2c + 0x18);
        }
        local_48 = local_48 << 0x13;
        if (-1 < (int)local_48) {
          for (; puVar8 != (uint *)0x0; puVar8 = (uint *)puVar8[6]) {
            local_48 = (*puVar8 & 7) + 1;
            if (local_48 == 2) goto LAB_00175ea6;
          }
          uVar7 = local_5c & 0xffffff00;
          uVar4 = uVar3 - 1;
          uVar6 = local_48 & 0xffffff00 | 0x10;
        }
      }
    }
    else if (((0 < (int)uVar4) && (uVar4 == uVar3 - 1)) && (cVar1 == '\0')) {
      uVar4 = uVar4 - 1;
    }
  }
LAB_00175ea6:
  if ((param_9 != 0) || (local_38 != param_4)) {
    *param_10 = local_38;
  }
  local_24[2] = uVar7 | local_44;
  *local_24 = uVar6;
  local_24[1] = uVar4;
  return;
}

