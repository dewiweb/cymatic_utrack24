// rea decompile_all
// name: FUN_001468d8
// address: 0x1468d8
// body: available
// range: 0x1468d8-0x146a23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001468d8(int param_1,int param_2)

{
  uint uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  if (1999 < (uint)(param_2 - *(int *)(param_1 + 0x80))) {
    *(int *)(param_1 + 0x80) = param_2;
    uVar3 = FUN_000fbc64(*(int *)(param_1 + 0x6c) + 0x548);
    FUN_000e9464(*(int *)(param_1 + 0x6c) + 0x484);
    if (*(uint *)(param_1 + 0x74) < uVar3) {
      sVar2 = *(short *)(param_1 + 0x70) + 1;
      *(short *)(param_1 + 0x70) = sVar2;
      if (sVar2 == 0xc) {
        FUN_0012bf50(*(int *)(param_1 + 0x6c) + 0x584,uVar3);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x70) = 0;
    }
    *(uint *)(param_1 + 0x74) = uVar3;
    uVar3 = FUN_000e9464(*(int *)(param_1 + 0x6c) + 0x484);
    if (*(uint *)(param_1 + 0x7c) < uVar3) {
      sVar2 = *(short *)(param_1 + 0x78) + 1;
      *(short *)(param_1 + 0x78) = sVar2;
      if (sVar2 == 0xc) {
        FUN_0012c024(*(int *)(param_1 + 0x6c) + 0x584);
      }
    }
    else {
      *(undefined2 *)(param_1 + 0x78) = 0;
    }
    uVar1 = DAT_00146a24;
    *(uint *)(param_1 + 0x7c) = uVar3;
    uVar3 = 0;
    while (iVar4 = FUN_000e98bc(*(int *)(param_1 + 0x6c) + 0x484,uVar3), iVar4 != 0) {
      if (((*(char *)(iVar4 + 0x4c) != '\0') && (*(char *)(iVar4 + 0x4d) == '\0')) &&
         (uVar1 < (uint)(param_2 - *(int *)(iVar4 + 0xc)))) {
        FUN_0012be04(*(int *)(param_1 + 0x6c) + 0x584,iVar4);
      }
      FUN_000fbaac(iVar4);
      uVar3 = uVar3 + 1 & 0xfffeffff;
    }
    return;
  }
  return;
}

