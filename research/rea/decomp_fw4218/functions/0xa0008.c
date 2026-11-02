// rea decompile_all
// name: FUN_000a0008
// address: 0xa0008
// body: available
// range: 0xa0008-0xa01af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000a0008(int param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  if (*DAT_000a01b4 < *(uint *)(DAT_000a01b0 + 0x58)) {
    if (param_2 == 0) {
      uVar2 = *DAT_000a01b4;
      *DAT_000a01b4 = uVar2 + 1;
      FUN_0013bbec(*DAT_000a01b8,uVar2 + 1);
    }
    else {
      uVar2 = *DAT_000a01b4;
      *DAT_000a01b4 = uVar2 + 1;
      FUN_00083c7c(param_1 + 0x14,uVar2 + 1);
    }
    if (*DAT_000a01b4 < *(uint *)(DAT_000a01b0 + 0x58)) {
      return *(uint *)(DAT_000a01b0 + 0x58);
    }
  }
  uVar2 = 0;
  if ((*DAT_000a01bc != '\0') && (uVar2 = (uint)*(byte *)(param_1 + 0xac), uVar2 == 0)) {
    iVar3 = FUN_001b5844(uVar1);
    if ((iVar3 == 0) && (*DAT_000a01c0 == -1)) {
      uVar2 = 0xffffffff;
    }
    else {
      if (param_2 == 0) {
        if (*(char *)(DAT_000a01c4 + 0x88) == '\0') {
          FUN_0013bbb8(*DAT_000a01b8);
        }
      }
      else {
        if (*(byte *)(DAT_000a01c4 + 0x88) != 0) {
          return (uint)*(byte *)(DAT_000a01c4 + 0x88);
        }
        iVar3 = FUN_0022d19c(DAT_000a01c4);
        if (iVar3 == 0) {
          return 0;
        }
        FUN_000bb774(param_1 + 0x14,DAT_000a01c8 + -0x10);
        if (((*(int *)(DAT_000a01b0 + 0x1c) == *(int *)(DAT_000a01c4 + 0x1c)) &&
            (*(short *)(DAT_000a01b0 + 0x26) == *(short *)(DAT_000a01c4 + 0x26))) &&
           ((*DAT_000a01c0 != '\x01' || (iVar3 = FUN_000bf310(param_1 + 0x14), iVar3 == 0)))) {
          FUN_00082258(param_1 + 0x14);
        }
      }
      uVar2 = 1;
      *(undefined1 *)(param_1 + 0xac) = 1;
    }
  }
  return uVar2;
}

