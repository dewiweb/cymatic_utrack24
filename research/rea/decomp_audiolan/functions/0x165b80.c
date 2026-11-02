// rea decompile_all
// name: FUN_00165b80
// address: 0x165b80
// body: available
// range: 0x165b80-0x165d33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00165b80(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 undefined4 *param_6,int param_7,undefined4 *param_8,int param_9,
                 undefined4 *param_10,int param_11,undefined4 *param_12,undefined4 *param_13,
                 int param_14,undefined4 param_15)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 local_8b;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_64;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined4 local_5c;
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  int iStack_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  uVar1 = DAT_00165d34;
  local_8b = 0;
  local_64 = DAT_00165d34;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_6c = 0;
  if (param_3 != 0) {
    local_8b = (undefined1)param_4;
  }
  if (param_5 != 0) {
    local_88 = *param_6;
  }
  if (param_7 != 0) {
    local_80 = *param_8;
  }
  if (param_9 != 0) {
    local_78 = *param_10;
  }
  if (param_11 != 0) {
    local_70 = *param_12;
    local_6c = *param_13;
  }
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (param_14 != 0) {
    FUN_001da4a8(&local_64,param_15);
  }
  local_5f = local_8b;
  local_38 = uVar1;
  local_5c = local_88;
  local_54 = local_80;
  local_4c = local_78;
  local_44 = local_70;
  local_40 = local_6c;
  local_60 = param_3 != 0;
  local_5e = param_5 != 0;
  local_58 = param_7 != 0;
  local_50 = param_9 != 0;
  local_48 = param_11 != 0;
  local_3c = param_14 != 0;
  iVar2 = FUN_001d7328(param_1 + -0x114,param_1 + -0x114,*DAT_00165d38,DAT_00165d38[1],local_30,
                       &local_60,0);
  FUN_001da44c(&local_38);
  if (iVar2 != 1) {
    (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),local_30,2);
  }
  FUN_001da44c(&local_64);
  return;
}

