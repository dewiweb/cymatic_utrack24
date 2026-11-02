// rea decompile_all
// name: FUN_0018ab00
// address: 0x18ab00
// body: available
// range: 0x18ab00-0x18aceb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0018ab00(undefined4 param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  
  if (param_3 == (int *)0x0) {
    return;
  }
  uVar1 = (uint)*(ushort *)(param_2 + 0x16);
  if (uVar1 == 0x307) {
    FUN_0017277c(auStack_20,param_2 + 0x1c);
    FUN_0017e61c(param_3,auStack_20);
    FUN_0017277c(auStack_20,param_2 + 0x1c);
    (**(code **)(*param_3 + 0x90))(param_3,auStack_20);
    return;
  }
  if ((param_3[0x1a] & 0x1000000U) != 0) {
    return;
  }
  iVar2 = uVar1 - DAT_0018acec;
  if (uVar1 == DAT_0018acec) {
    FUN_0017277c(auStack_60,param_2 + 0x1c);
    (**(code **)(*param_3 + 0x8c))(param_3,auStack_60);
    return;
  }
  if ((int)DAT_0018acec <= (int)uVar1) {
    if (iVar2 == 2) {
      FUN_0017277c(auStack_30,param_2 + 0x1c);
      (**(code **)(*param_3 + 0x90))(param_3,auStack_30);
      return;
    }
    if (iVar2 == 0x381) {
      FUN_0017277c(auStack_80,param_2 + 0x2c);
      FUN_0017277c(auStack_90,param_2 + 0x1c);
      FUN_0017e490(param_3,auStack_90,auStack_80);
      return;
    }
    if (iVar2 == 0x401) {
      FUN_0017277c(auStack_40,param_2 + 0x2c);
      FUN_0017277c(auStack_50,param_2 + 0x1c);
      FUN_0017e920(param_3,auStack_50,auStack_40);
      return;
    }
    return;
  }
  if (uVar1 == 0x104) {
    FUN_0017e598(param_3);
    return;
  }
  if (uVar1 != 0x184) {
    if (uVar1 == 0x301) {
      FUN_0017277c(auStack_a0,param_2 + 0x1c);
      FUN_0017e304(param_3,auStack_a0);
      return;
    }
    if (uVar1 == 0x303) {
      FUN_0017277c(auStack_70,param_2 + 0x1c);
      FUN_0017e61c(param_3,auStack_70);
      return;
    }
    return;
  }
  (**(code **)(*param_3 + 0x88))(param_3);
  return;
}

