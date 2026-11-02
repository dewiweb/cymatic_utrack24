// rea decompile_all
// name: FUN_0013bae0
// address: 0x13bae0
// body: available
// range: 0x13bae0-0x13bba7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_0013bae0(int param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  char local_10;
  undefined1 local_f;
  
  uVar1 = *param_2;
  local_10 = (char)uVar1;
  if (local_10 == '\0') {
    local_f = (undefined1)(uVar1 >> 8);
    FUN_00083c7c(param_1 + 0x114,local_f);
  }
  uVar2 = uVar1 & 0xff;
  if (uVar2 == 1) {
    iVar3 = FUN_0022d19c(DAT_0013bba8);
    uVar2 = 0;
    if (iVar3 != 0) {
      FUN_000bb774(param_1 + 0x114,DAT_0013bbac + -0x10);
      uVar2 = *(uint *)(DAT_0013bbb0 + 0x1c);
      if (((uVar2 == *(uint *)(DAT_0013bba8 + 0x1c)) &&
          (uVar2 = (uint)*(ushort *)(DAT_0013bbb0 + 0x26), uVar2 == *(ushort *)(DAT_0013bba8 + 0x26)
          )) && ((*DAT_0013bbb4 != '\x01' || (uVar2 = FUN_000bf310(param_1 + 0x114), uVar2 == 0))))
      {
        uVar2 = FUN_00082258(param_1 + 0x114);
      }
    }
  }
  return uVar2;
}

