// rea decompile_all
// name: FUN_00025560
// address: 0x25560
// body: available
// range: 0x25560-0x255f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00025560(int *param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  iVar3 = FUN_00030b90(DAT_000255f8);
  if (iVar3 != 0) {
    FUN_00029e6c(DAT_000255f8);
    FUN_00029eac(6,DAT_000255fc);
  }
  *(undefined2 *)(iVar4 + 0x28) = 0;
  *(undefined4 *)(iVar4 + 0x30) = 0;
  *(undefined4 *)(iVar4 + 0x34) = 0;
  *(undefined4 *)(iVar4 + 0x38) = 0;
  *(undefined4 *)(iVar4 + 0x3c) = 0;
  FUN_0016d998(iVar4 + 0x60,iVar4 + 0x4b);
  FUN_0016d998(iVar4 + 0x7c,iVar4 + 0x4b);
  *(undefined1 *)(iVar4 + 0x68) = 0;
  *(undefined1 *)(iVar4 + 0x69) = 0;
  *(undefined1 *)(iVar4 + 0x78) = *(undefined1 *)(iVar4 + 0x46);
  *(undefined1 *)(iVar4 + 0x79) = *(undefined1 *)(iVar4 + 0x47);
  *(undefined2 *)(iVar4 + 0x7a) = *(undefined2 *)(iVar4 + 0x48);
  *(undefined1 *)(iVar4 + 0x74) = *(undefined1 *)(iVar4 + 0x44);
  *(undefined1 *)(iVar4 + 0x75) = *(undefined1 *)(iVar4 + 0x4a);
  uVar2 = FUN_00025964();
  *(undefined2 *)(iVar4 + 0x56) = uVar2;
  uVar1 = FUN_00025b18();
  *(undefined1 *)(iVar4 + 0x5a) = uVar1;
  uVar1 = FUN_00025970();
  *(undefined1 *)(iVar4 + 0x59) = uVar1;
  uVar1 = FUN_0002597c();
  *(undefined1 *)(iVar4 + 0x58) = uVar1;
  uVar1 = FUN_00025b00();
  *(undefined1 *)(iVar4 + 0x5c) = uVar1;
  uVar1 = FUN_00025ae8();
  *(undefined1 *)(iVar4 + 0x5d) = uVar1;
  uVar1 = FUN_00025af4();
  *(undefined1 *)(iVar4 + 0x5b) = uVar1;
  uVar1 = FUN_00025ac4();
  *(undefined1 *)(iVar4 + 0x5e) = uVar1;
  return;
}

