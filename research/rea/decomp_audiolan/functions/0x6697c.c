// rea decompile_all
// name: FUN_0006697c
// address: 0x6697c
// body: available
// range: 0x6697c-0x66aa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0006697c(int param_1,int param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  uVar6 = 0;
  do {
    while( true ) {
      while( true ) {
        bVar3 = *(byte *)(param_1 + uVar6);
        uVar5 = (ushort)bVar3;
        uVar4 = uVar6 + 1;
        uVar6 = uVar4 & 0xfffeffff;
        if (uVar5 != 0) {
          uVar4 = uVar7 + 1;
        }
        if (uVar5 == 0 || param_3 <= uVar4) {
          *(undefined2 *)(param_2 + uVar7 * 2) = 0;
          return param_1 + uVar6;
        }
        if ((bVar3 & 0x80) != 0) break;
        iVar1 = uVar7 * 2;
        uVar7 = uVar4 & 0xfffeffff;
        *(ushort *)(param_2 + iVar1) = (ushort)bVar3;
      }
      if ((uVar5 & 0xe0) != 0xc0) break;
      bVar3 = *(byte *)(param_1 + uVar6);
      uVar6 = uVar6 + 1 & 0xfffeffff;
      uVar5 = (uVar5 & 0x1f) << 6;
      if ((bVar3 & 0xc0) != 0x80) goto LAB_000669e8;
LAB_00066a60:
      iVar1 = uVar7 * 2;
      uVar7 = uVar4 & 0xfffeffff;
      *(ushort *)(param_2 + iVar1) = bVar3 & 0x3f | uVar5;
    }
    if ((uVar5 & 0xe0) != 0xe0) {
LAB_000669e8:
      FUN_000028a4(s_ERROR__ARCInterface__convertUTF8_00066aa4);
      return 0;
    }
    if ((uVar5 & 0xf0) != 0xe0) {
      FUN_000028a4(DAT_00066ae4);
      return 0;
    }
    pbVar2 = (byte *)(param_1 + uVar6);
    uVar6 = uVar6 + 1 & 0xfffeffff;
    if ((*pbVar2 & 0xc0) == 0x80) {
      bVar3 = *(byte *)(param_1 + uVar6);
      uVar5 = uVar5 << 0xc | (*pbVar2 & 0x3f) << 6;
      uVar6 = uVar6 + 1 & 0xfffeffff;
      if ((bVar3 & 0xc0) == 0x80) goto LAB_00066a60;
    }
    FUN_000028a4(s_ERROR__ARCInterface__convertUTF8_00066aa4);
  } while( true );
}

