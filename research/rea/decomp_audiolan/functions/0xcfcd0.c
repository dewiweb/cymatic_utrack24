// rea decompile_all
// name: FUN_000cfcd0
// address: 0xcfcd0
// body: available
// range: 0xcfcd0-0xcfeb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000cfcd0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  undefined1 auStack_60 [8];
  short local_58;
  ushort local_56;
  undefined4 local_54;
  ushort local_4a;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [4];
  
  local_6c = 0;
  local_70 = 0;
  local_68 = 0;
  if (param_4 == 0) {
    iVar2 = FUN_000c38fc(param_3,auStack_60,auStack_28,auStack_20,&local_64,auStack_2c);
  }
  else {
    iVar2 = FUN_000c3920(param_3,auStack_60,auStack_28,auStack_20,&local_64,auStack_2c,&local_70);
  }
  if (iVar2 == 0) {
    (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,4);
    FUN_0010fa20(local_70,local_68 - local_70 >> 2,0);
    return;
  }
  if (local_58 != 1) {
    FUN_000028a4(DAT_000cfeb4);
    (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,5);
    FUN_0010fa20(local_70,local_68 - local_70 >> 2,0);
    return;
  }
  if ((8 < local_4a) && (local_4a < 0x19)) {
    if (local_4a < 0x11) {
      iVar2 = 2;
    }
    else {
      iVar2 = 3;
    }
    uVar3 = FUN_00006158(local_64,(uint)local_56 * iVar2);
    uVar1 = local_6c - local_70 >> 2;
    if (uVar1 < param_4) {
      param_4 = uVar1 & 0xff;
    }
    (**(code **)(**(int **)(param_1 + 0x118) + 0x18))
              (*(int **)(param_1 + 0x118),param_2,local_54,local_4a & 0xff,local_56 & 0xff,uVar3,
               param_4,&local_70);
    FUN_0010fa20(local_70,local_68 - local_70 >> 2,0);
    return;
  }
  FUN_000028a4(DAT_000cfeb8,local_4a);
  (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,5);
  FUN_0010fa20(local_70,local_68 - local_70 >> 2,0);
  return;
}

