// rea decompile_all
// name: FUN_00120ba0
// address: 0x120ba0
// body: available
// range: 0x120ba0-0x120ca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_00120ba0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_b8 [56];
  undefined1 auStack_80 [56];
  int iStack_48;
  int iStack_44;
  
  FUN_00002898(s_DEBUG__USBDFUDownloadHandler__is_00120ca4);
  uVar1 = DAT_00120ce0;
  if (*(char *)(param_1 + 0x1c) == '\0') {
    return (uint)(*(char *)(*(int *)(param_1 + 0x14) + 0x114) == '\x02');
  }
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_00002898(uVar1);
  iVar2 = FUN_000ce0b8(auStack_b8);
  iVar2 = FUN_000ce0b8(iVar2 + 0x38);
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0;
  *(undefined4 *)(iVar2 + 0x40) = 0;
  *(undefined4 *)(iVar2 + 0x44) = 0;
  *(undefined4 *)(iVar2 + 0x48) = 0;
  *(undefined4 *)(iVar2 + 0x4c) = 0;
  *(undefined1 *)(iVar2 + 0x50) = 0;
  *(undefined4 *)(iVar2 + 0x54) = 0;
  *(undefined4 *)(iVar2 + 0x58) = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined4 *)(iVar2 + 100) = 0;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  iVar2 = FUN_00117484(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x28),auStack_b8,1)
  ;
  if (iVar2 == 1) {
    if (iStack_48 != 0) {
      FUN_001b7a60(auStack_b8);
    }
    if (iStack_44 != 0) {
      FUN_001b7a60(auStack_80);
    }
    uVar3 = FUN_00116d0c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x20),
                         *(undefined4 *)(param_1 + 0x28),auStack_b8);
    return uVar3;
  }
  return 0;
}

