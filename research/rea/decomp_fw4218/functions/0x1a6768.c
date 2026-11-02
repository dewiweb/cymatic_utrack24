// rea decompile_all
// name: FUN_001a6768
// address: 0x1a6768
// body: available
// range: 0x1a6768-0x1a68af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001a6768(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  FUN_0011a234(&local_68);
  FUN_00003b88(&local_68,*(int *)(param_1 + 0xe4) + 0x20,0x60);
  if (*(int *)(param_1 + 0x1b4) == param_1 + 0xf4) {
    *(undefined4 *)(param_1 + 0x154) = local_68;
    *(undefined4 *)(param_1 + 0x158) = uStack_64;
    *(undefined4 *)(param_1 + 0x15c) = uStack_60;
    *(undefined4 *)(param_1 + 0x160) = uStack_5c;
    *(undefined4 *)(param_1 + 0x164) = local_58;
    *(undefined4 *)(param_1 + 0x168) = uStack_54;
    *(undefined4 *)(param_1 + 0x16c) = local_50;
    *(undefined4 *)(param_1 + 0x170) = uStack_4c;
    *(undefined4 *)(param_1 + 0x174) = uStack_48;
    *(undefined4 *)(param_1 + 0x178) = uStack_44;
    *(undefined4 *)(param_1 + 0x17c) = local_40;
    *(undefined4 *)(param_1 + 0x180) = uStack_3c;
    *(undefined4 *)(param_1 + 0x184) = local_38;
    *(undefined4 *)(param_1 + 0x188) = uStack_34;
    *(undefined4 *)(param_1 + 0x18c) = uStack_30;
    *(undefined4 *)(param_1 + 400) = uStack_2c;
    *(undefined4 *)(param_1 + 0x194) = local_28;
    *(undefined4 *)(param_1 + 0x198) = uStack_24;
    *(undefined4 *)(param_1 + 0x19c) = local_20;
    *(undefined4 *)(param_1 + 0x1a0) = uStack_1c;
    *(undefined4 *)(param_1 + 0x1a4) = uStack_18;
    *(undefined4 *)(param_1 + 0x1a8) = uStack_14;
    *(int *)(param_1 + 0x1b4) = param_1 + 0x154;
    puVar1 = (undefined4 *)(param_1 + 0x1ac);
  }
  else {
    *(undefined4 *)(param_1 + 0xf4) = local_68;
    *(undefined4 *)(param_1 + 0xf8) = uStack_64;
    *(undefined4 *)(param_1 + 0xfc) = uStack_60;
    *(undefined4 *)(param_1 + 0x100) = uStack_5c;
    *(undefined4 *)(param_1 + 0x104) = local_58;
    *(undefined4 *)(param_1 + 0x108) = uStack_54;
    *(undefined4 *)(param_1 + 0x10c) = local_50;
    *(undefined4 *)(param_1 + 0x110) = uStack_4c;
    *(undefined4 *)(param_1 + 0x114) = uStack_48;
    *(undefined4 *)(param_1 + 0x118) = uStack_44;
    *(undefined4 *)(param_1 + 0x11c) = local_40;
    *(undefined4 *)(param_1 + 0x120) = uStack_3c;
    *(undefined4 *)(param_1 + 0x124) = local_38;
    *(undefined4 *)(param_1 + 0x128) = uStack_34;
    *(undefined4 *)(param_1 + 300) = uStack_30;
    *(undefined4 *)(param_1 + 0x130) = uStack_2c;
    *(undefined4 *)(param_1 + 0x134) = local_28;
    *(undefined4 *)(param_1 + 0x138) = uStack_24;
    *(undefined4 *)(param_1 + 0x13c) = local_20;
    *(undefined4 *)(param_1 + 0x140) = uStack_1c;
    *(undefined4 *)(param_1 + 0x144) = uStack_18;
    *(undefined4 *)(param_1 + 0x148) = uStack_14;
    *(int *)(param_1 + 0x1b4) = param_1 + 0xf4;
    puVar1 = (undefined4 *)(param_1 + 0x14c);
  }
  *puVar1 = local_10;
  puVar1[1] = uStack_c;
  return;
}

