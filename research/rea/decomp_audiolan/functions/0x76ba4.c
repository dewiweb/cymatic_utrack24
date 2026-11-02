// rea decompile_all
// name: FUN_00076ba4
// address: 0x76ba4
// body: available
// range: 0x76ba4-0x76c77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_00076ba4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9,undefined1 param_10,undefined4 param_11)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_58;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined1 local_50;
  undefined1 local_4f;
  undefined1 local_4e;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined1 auStack_44 [12];
  undefined4 local_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  piStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  local_38 = (**(code **)(*param_1 + 0x5c))(param_1);
  uVar1 = DAT_00076c78;
  local_54 = 0;
  local_53 = (undefined1)param_2;
  local_50 = (undefined1)local_28;
  local_52 = (undefined1)local_38;
  local_4f = param_5;
  local_51 = (undefined1)local_2c;
  local_58 = DAT_00076c78;
  local_4e = param_6;
  local_4c = param_7;
  uStack_48 = param_8;
  iVar2 = FUN_001d9c54(auStack_44,param_9);
  *(undefined1 *)(iVar2 + 4) = param_10;
  *(undefined1 *)(iVar2 + 5) = 0;
  *(undefined4 *)(iVar2 + 8) = param_11;
  *(undefined1 *)(iVar2 + -0x10) = 1;
  uVar3 = (**(code **)(*param_1 + 0x6c))(param_1,&local_58);
  local_58 = uVar1;
  FUN_001d9cc8(auStack_44);
  return uVar3;
}

