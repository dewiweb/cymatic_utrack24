// rea decompile_all
// name: FUN_00224b0c
// address: 0x224b0c
// body: available
// range: 0x224b0c-0x224c27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00224b0c(uint *param_1,uint param_2,ushort *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = DAT_00224c28;
joined_r0x00224b14:
  do {
    if (param_2 == 0) {
      return;
    }
    while( true ) {
      bVar2 = (byte)*param_1;
      uVar4 = (uint)bVar2;
      if (0x7f < uVar4) break;
      *param_3 = (ushort)bVar2;
      param_3 = param_3 + 1;
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = param_2 - 1;
      if (((uint)param_1 & 3) != 0) goto joined_r0x00224b14;
      while( true ) {
        if (param_2 < 4) goto joined_r0x00224b14;
        if ((*param_1 & uVar3) != 0) break;
        *param_3 = (ushort)(byte)*param_1;
        param_3[1] = (ushort)*(byte *)((int)param_1 + 1);
        param_3[2] = (ushort)*(byte *)((int)param_1 + 2);
        pbVar1 = (byte *)((int)param_1 + 3);
        param_1 = param_1 + 1;
        param_3[3] = (ushort)*pbVar1;
        param_3 = param_3 + 4;
        param_2 = param_2 - 4;
      }
    }
    if (((uVar4 - 0xc0 < 0x20) && (1 < param_2)) && (*(byte *)((int)param_1 + 1) >> 6 == 2)) {
      *param_3 = (ushort)((uVar4 & 0x3f) << 6) | *(byte *)((int)param_1 + 1) & 0x3f;
      param_3 = param_3 + 1;
      param_1 = (uint *)((int)param_1 + 2);
      param_2 = param_2 - 2;
    }
    else if (((uVar4 - 0xe0 < 0x10) && (2 < param_2)) &&
            ((*(byte *)((int)param_1 + 1) >> 6 == 2 && (*(byte *)((int)param_1 + 2) >> 6 == 2)))) {
      *param_3 = (ushort)bVar2 << 0xc | (*(byte *)((int)param_1 + 1) & 0x3f) << 6 |
                 *(byte *)((int)param_1 + 2) & 0x3f;
      param_3 = param_3 + 1;
      param_1 = (uint *)((int)param_1 + 3);
      param_2 = param_2 - 3;
    }
    else if (((uVar4 - 0xf0 < 8) && (3 < param_2)) &&
            ((*(byte *)((int)param_1 + 1) >> 6 == 2 &&
             ((*(byte *)((int)param_1 + 2) >> 6 == 2 && (*(byte *)((int)param_1 + 3) >> 6 == 2))))))
    {
      uVar4 = ((uVar4 & 0xf) << 0x12 | (*(byte *)((int)param_1 + 1) & 0x3f) << 0xc |
               (*(byte *)((int)param_1 + 2) & 0x3f) << 6 | *(byte *)((int)param_1 + 3) & 0x3f) -
              0x10000;
      *param_3 = (short)(uVar4 >> 10) + 0xd800;
      param_3[1] = ((ushort)uVar4 & 0x3ff) + 0xdc00;
      param_3 = param_3 + 2;
      param_1 = param_1 + 1;
      param_2 = param_2 - 4;
    }
    else {
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = param_2 - 1;
    }
  } while( true );
}

