// rea decompile_all
// name: FUN_0001d824
// address: 0x1d824
// body: available
// range: 0x1d824-0x1d971 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001d824(byte *param_1,uint param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  uVar7 = DAT_0001d974;
  iVar8 = 2;
  uVar11 = 1;
  if (param_3 != 0) {
    iVar8 = 4;
    for (bVar2 = param_1[*param_1]; bVar2 == 0x20; bVar2 = param_1[(byte)(bVar2 - 1)]) {
      bVar2 = *param_1;
      *param_1 = bVar2 - 1;
    }
  }
  do {
    uVar6 = uVar11 * 10;
    if (param_2 <= uVar6 && uVar6 - param_2 != 0) break;
    iVar8 = iVar8 + 1;
    uVar11 = uVar6;
  } while (uVar6 < uVar7);
  uVar7 = (uint)*param_1;
  iVar8 = -iVar8;
  uVar6 = iVar8 + 0x3f;
  if (uVar6 < uVar7) {
    uVar9 = iVar8 + 0x40;
    if (uVar9 < uVar7) {
      uVar12 = (uint)param_1[iVar8 + 0x41];
    }
    else {
      uVar12 = 0xb0;
    }
    uVar7 = uVar6;
    uVar4 = (uint)param_1[iVar8 + 0x40];
    if (DAT_0001d978 < uVar6) {
      for (; uVar6 = uVar4, uVar7 != 0; uVar7 = uVar7 - 1) {
        if ((uVar6 == 0xed) && (uVar12 >> 4 == 0xb)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (uVar6 >> 6 != 2 && !bVar3) goto LAB_0001d8f2;
        pbVar1 = param_1 + uVar7;
        uVar4 = (uint)*pbVar1;
        uVar12 = uVar6;
      }
    }
    else {
      uVar13 = 1;
      if (1 < uVar9) {
        do {
          uVar10 = uVar4;
          if ((uVar10 == 0xed) && (uVar12 >> 4 == 0xb)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          uVar7 = uVar6;
          if (uVar10 >> 6 != 2 && !bVar3) break;
          uVar7 = uVar6 - 1;
          pbVar1 = param_1 + uVar6;
          uVar13 = uVar13 + 1;
          uVar6 = uVar7;
          uVar4 = (uint)*pbVar1;
          uVar12 = uVar10;
        } while (uVar13 < uVar9);
      }
LAB_0001d8f2:
      for (; (uVar7 != 0 && (param_1[uVar7] < 0x21)); uVar7 = uVar7 - 1) {
      }
    }
  }
  *param_1 = (byte)uVar7;
  if (param_3 == 0) {
    uVar7 = (uVar7 & 0xff) + 1;
    *param_1 = (byte)uVar7;
    param_1[uVar7 & 0xff] = 0x2d;
  }
  else {
    uVar7 = (uVar7 & 0xff) + 1;
    *param_1 = (byte)uVar7;
    param_1[uVar7 & 0xff] = 0x20;
    bVar2 = *param_1;
    *param_1 = bVar2 + 1;
    param_1[(byte)(bVar2 + 1)] = 0x28;
  }
  while (uVar11 != 0) {
    cVar5 = FUN_00006604(param_2,uVar11);
    bVar2 = *param_1;
    *param_1 = bVar2 + 1;
    param_1[(byte)(bVar2 + 1)] = cVar5 + 0x30;
    FUN_001c6f4c(uVar11);
    uVar11 = extraout_r1_00;
    param_2 = extraout_r1;
  }
  if (param_3 != 0) {
    bVar2 = *param_1;
    *param_1 = bVar2 + 1;
    param_1[(byte)(bVar2 + 1)] = 0x29;
  }
  return;
}

