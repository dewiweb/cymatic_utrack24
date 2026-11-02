// rea decompile_all
// name: FUN_001b3b5c
// address: 0x1b3b5c
// body: available
// range: 0x1b3b5c-0x1b3be1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001b3b5c(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  iVar3 = *(int *)(param_1 + 0x78);
  bVar1 = *(byte *)(iVar3 + 0xd);
  *(undefined4 *)(param_1 + 0x78) = 0;
  pcVar4 = *(code **)(param_1 + 0x80);
  if (pcVar4 == entry) {
    if (iVar3 != 0) {
      FUN_001b48c4(param_1,*(undefined2 *)(iVar3 + 8));
      FUN_001aa008(iVar3);
      goto LAB_001b3bb6;
    }
    if (*(char *)(param_1 + 0x18) != '\x01') {
      *(byte *)(param_1 + 0x1e) = *(byte *)(param_1 + 0x1e) | 0x10;
    }
    iVar2 = FUN_001b1b04(param_1,1);
  }
  else {
    iVar2 = (*pcVar4)(*(undefined4 *)(param_1 + 0x10),param_1,iVar3,0);
  }
  if (iVar2 != 0) {
    if (iVar2 != -0xb) {
      *(int *)(param_1 + 0x78) = iVar3;
      return 0;
    }
    return 0xfffffff5;
  }
LAB_001b3bb6:
  if ((int)((uint)bVar1 << 0x1a) < 0) {
    if (*(ushort *)(param_1 + 0x2c) != DAT_001b3be4) {
      *(ushort *)(param_1 + 0x2c) = *(ushort *)(param_1 + 0x2c) + 1;
    }
    pcVar4 = *(code **)(param_1 + 0x80);
    if ((pcVar4 != entry) &&
       (iVar3 = (*pcVar4)(*(undefined4 *)(param_1 + 0x10),param_1,0), iVar3 == -0xb)) {
      return 0xfffffff5;
    }
  }
  return 0;
}

