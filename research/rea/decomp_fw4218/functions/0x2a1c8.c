// rea decompile_all
// name: FUN_0002a1c8
// address: 0x2a1c8
// body: available
// range: 0x2a1c8-0x2a2a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0002a1c8(undefined1 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  iVar6 = (int)param_2[0x16] >> 2;
  puVar8 = param_2 + 6;
  uVar7 = param_2[0x16] & 3;
  if (uVar7 == 0) {
    uVar1 = (uint)*DAT_0002a2a8;
    pbVar5 = DAT_0002a2a8 + 1;
LAB_0002a1f8:
    uVar1 = uVar1 | (uint)*pbVar5 << 8;
    pbVar5 = pbVar5 + 1;
LAB_0002a200:
    uVar1 = uVar1 | (uint)*pbVar5 << 0x10;
    pbVar5 = pbVar5 + 1;
  }
  else {
    uVar1 = puVar8[iVar6];
    pbVar5 = DAT_0002a2a8;
    if (uVar7 == 1) goto LAB_0002a1f8;
    if (uVar7 == 2) goto LAB_0002a200;
    if (uVar7 != 3) goto LAB_0002a20e;
  }
  uVar1 = uVar1 | (uint)*pbVar5 << 0x18;
LAB_0002a20e:
  puVar8[iVar6] = uVar1;
  uVar7 = iVar6 + 1;
  if (0xe < (int)uVar7) {
    if ((int)uVar7 < 0x10) {
      puVar8[uVar7] = 0;
    }
    FUN_001ec278(param_2,puVar8,1);
    uVar7 = 0;
  }
  if (0 < (int)(0xe - uVar7)) {
    puVar2 = puVar8 + uVar7;
    puVar3 = puVar2 + -1;
    if ((uVar7 & 1) != 0) {
      *puVar2 = 0;
      puVar3 = puVar2;
    }
    for (iVar6 = (int)(0xe - uVar7) >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
      *puVar3 = 0;
    }
  }
  param_2[0x14] = param_2[4];
  param_2[0x15] = param_2[5];
  FUN_001ec278(param_2,puVar8,1);
  uVar4 = *param_2;
  *param_1 = (char)uVar4;
  param_1[1] = (char)((uint)uVar4 >> 8);
  param_1[2] = (char)((uint)uVar4 >> 0x10);
  param_1[3] = (char)((uint)uVar4 >> 0x18);
  uVar4 = param_2[1];
  param_1[4] = (char)uVar4;
  param_1[5] = (char)((uint)uVar4 >> 8);
  param_1[6] = (char)((uint)uVar4 >> 0x10);
  param_1[7] = (char)((uint)uVar4 >> 0x18);
  uVar4 = param_2[2];
  param_1[8] = (char)uVar4;
  param_1[9] = (char)((uint)uVar4 >> 8);
  param_1[10] = (char)((uint)uVar4 >> 0x10);
  param_1[0xb] = (char)((uint)uVar4 >> 0x18);
  uVar4 = param_2[3];
  param_1[0xc] = (char)uVar4;
  param_1[0xd] = (char)((uint)uVar4 >> 8);
  param_1[0xe] = (char)((uint)uVar4 >> 0x10);
  param_1[0xf] = (char)((uint)uVar4 >> 0x18);
  param_2[0x16] = 0;
  return 1;
}

