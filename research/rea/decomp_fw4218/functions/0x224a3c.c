// rea decompile_all
// name: FUN_00224a3c
// address: 0x224a3c
// body: available
// range: 0x224a3c-0x224b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00224a3c(ushort *param_1,int param_2,byte *param_3)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  ushort *puVar4;
  uint uVar5;
  
  puVar4 = param_1 + param_2;
  do {
    while( true ) {
      if (puVar4 <= param_1) {
        return;
      }
      uVar1 = *param_1;
      uVar3 = (uint)uVar1;
      bVar2 = (byte)uVar1;
      if ((uVar3 < 0xd800) || (uVar3 - 0xe000 < 0x2000)) break;
      if ((0x3ff < uVar3 - 0xd800) || (puVar4 <= param_1 + 1)) goto LAB_00224b02;
      uVar1 = param_1[1];
      if (0x3ff < uVar1 - 0xdc00) goto LAB_00224b02;
      uVar5 = (uVar3 & 0x3ff) * 0x400 + (uVar1 & 0x3ff);
      uVar3 = uVar5 + 0x10000;
      *param_3 = (byte)(uVar3 >> 0x12) | 0xf0;
      param_3[1] = (char)((uVar3 & 0x3ffff) >> 0xc) + 0x80;
      param_3[2] = (char)((uVar5 & 0xfff) >> 6) + 0x80;
      param_3[3] = ((byte)uVar1 & 0x3f) + 0x80;
      param_3 = param_3 + 4;
      param_1 = param_1 + 2;
    }
    if (uVar3 < 0x80) {
      *param_3 = bVar2;
      param_3 = param_3 + 1;
    }
    else if (uVar3 < 0x800) {
      *param_3 = (byte)(uVar1 >> 6) | 0xc0;
      param_3[1] = (bVar2 & 0x3f) + 0x80;
      param_3 = param_3 + 2;
    }
    else {
      *param_3 = (byte)(uVar1 >> 0xc) | 0xe0;
      param_3[1] = (char)((uVar3 & 0xfff) >> 6) + 0x80;
      param_3[2] = (bVar2 & 0x3f) + 0x80;
      param_3 = param_3 + 3;
    }
LAB_00224b02:
    param_1 = param_1 + 1;
  } while( true );
}

