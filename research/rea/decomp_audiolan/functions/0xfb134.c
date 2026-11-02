// rea decompile_all
// name: FUN_000fb134
// address: 0xfb134
// body: available
// range: 0xfb134-0xfb337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000fb134(uint param_1,byte *param_2,uint param_3)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  uVar17 = param_1 >> 0x10;
  param_1 = param_1 & 0xffff;
  if (param_2 == (byte *)0x0) {
    return 1;
  }
  while (param_3 != 0) {
    uVar2 = DAT_000fb338;
    if (param_3 < DAT_000fb338) {
      uVar2 = (uint)(short)param_3;
    }
    param_3 = param_3 - uVar2;
    iVar21 = uVar2 + ((uint)((int)uVar2 >> 0x1f) >> 0x1c);
    for (iVar3 = 1; iVar3 < (iVar21 >> 4) + 1; iVar3 = iVar3 + 1) {
      iVar18 = *param_2 + param_1;
      iVar16 = (uint)param_2[1] + iVar18;
      iVar19 = (uint)param_2[2] + iVar16;
      iVar20 = (uint)param_2[3] + iVar19;
      iVar5 = (uint)param_2[4] + iVar20;
      iVar6 = iVar5 + (uint)param_2[5];
      iVar7 = iVar6 + (uint)param_2[6];
      iVar8 = iVar7 + (uint)param_2[7];
      iVar9 = iVar8 + (uint)param_2[8];
      iVar10 = iVar9 + (uint)param_2[9];
      iVar11 = iVar10 + (uint)param_2[10];
      iVar12 = iVar11 + (uint)param_2[0xb];
      iVar13 = iVar12 + (uint)param_2[0xc];
      iVar14 = iVar13 + (uint)param_2[0xd];
      iVar15 = iVar14 + (uint)param_2[0xe];
      param_1 = iVar15 + (uint)param_2[0xf];
      uVar2 = (int)((uVar2 - 0x10) * 0x10000) >> 0x10;
      uVar17 = uVar17 + iVar18 + iVar16 + iVar19 + iVar20 + iVar5 + iVar6 + iVar7 + iVar8 + iVar9 +
               iVar10 + iVar11 + iVar12 + iVar13 + iVar14 + iVar15 + param_1;
      param_2 = param_2 + 0x10;
    }
    if (uVar2 != 0) {
      pbVar4 = param_2;
      if ((int)uVar2 < 1) {
        do {
          param_2 = pbVar4 + 1;
          param_1 = param_1 + *pbVar4;
          uVar2 = (int)((uVar2 - 1) * 0x10000) >> 0x10;
          uVar17 = uVar17 + param_1;
          pbVar4 = param_2;
        } while (uVar2 != 0);
      }
      else {
        if ((int)uVar2 < 2) {
          uVar2 = 1;
        }
        pbVar4 = param_2 + -1;
        if ((uVar2 & 1) != 0) {
          param_1 = param_1 + *param_2;
          uVar17 = uVar17 + param_1;
          pbVar4 = param_2;
        }
        iVar21 = 0;
        for (iVar3 = (int)uVar2 >> 1; iVar3 != 0; iVar3 = iVar3 + -1) {
          pbVar1 = pbVar4 + 1;
          pbVar4 = pbVar4 + 2;
          uVar17 = uVar17 + param_1 + *pbVar1;
          param_1 = param_1 + *pbVar1 + (uint)*pbVar4;
          iVar21 = iVar21 + param_1;
        }
        uVar17 = uVar17 + iVar21;
        param_2 = param_2 + uVar2;
      }
    }
    param_1 = param_1 + (uint)((ulonglong)param_1 * (ulonglong)DAT_000fb33c >> 0x2f) * -0xfff1;
    uVar17 = uVar17 + (uint)((ulonglong)uVar17 * (ulonglong)DAT_000fb33c >> 0x2f) * -0xfff1;
  }
  return param_1 | uVar17 << 0x10;
}

