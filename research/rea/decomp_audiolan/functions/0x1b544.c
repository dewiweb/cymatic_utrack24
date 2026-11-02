// rea decompile_all
// name: FUN_0001b544
// address: 0x1b544
// body: available
// range: 0x1b544-0x1b605 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte * FUN_0001b544(byte *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  
  for (pbVar3 = param_1; (pbVar3 < param_1 + 0x100 && (uVar4 = (uint)*pbVar3, uVar4 < 0x40));
      pbVar3 = pbVar3 + uVar4 + 1) {
    if (uVar4 == 0) {
      uVar4 = (uint)(pbVar3 + (1 - (int)param_1)) & 0xffff;
      goto LAB_0001b568;
    }
  }
  uVar4 = 0x101;
LAB_0001b568:
  pbVar3 = param_2;
  pbVar6 = param_1 + (uVar4 - 1);
  do {
    if ((*pbVar3 == 0) || (param_1 + 0xff <= pbVar6)) {
      *pbVar6 = 0;
      if (*pbVar3 == 0) {
        return pbVar6 + 1;
      }
      return (byte *)0x0;
    }
    pbVar5 = pbVar6;
    if (*pbVar3 == 0x2e) {
      FUN_00024642(0,DAT_0001b608,param_2,pbVar3,param_4);
      return (byte *)0x0;
    }
    while( true ) {
      pbVar5 = pbVar5 + 1;
      bVar7 = *pbVar3;
      if (bVar7 == 0) break;
      if ((bVar7 == 0x2e) || (param_1 + 0xff <= pbVar5)) {
        pbVar3 = pbVar3 + 1;
        break;
      }
      pbVar2 = pbVar3 + 1;
      if (bVar7 == 0x5c) {
        bVar7 = *pbVar2;
        pbVar2 = pbVar3 + 2;
        if ((((pbVar3[1] - 0x30 < 10) && (*pbVar2 - 0x30 < 10)) && (pbVar3[3] - 0x30 < 10)) &&
           (iVar1 = (pbVar3[1] - 0x30) * 100 + (*pbVar2 - 0x30) * 10 + (pbVar3[3] - 0x30),
           iVar1 < 0x100)) {
          bVar7 = (byte)iVar1;
          pbVar2 = pbVar3 + 4;
        }
      }
      *pbVar5 = bVar7;
      pbVar3 = pbVar2;
    }
    if (0x3f < (int)(pbVar5 + (-1 - (int)pbVar6))) {
      return (byte *)0x0;
    }
    *pbVar6 = (byte)(pbVar5 + (-1 - (int)pbVar6));
    pbVar6 = pbVar5;
  } while( true );
}

