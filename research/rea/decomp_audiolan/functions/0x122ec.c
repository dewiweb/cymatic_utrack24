// rea decompile_all
// name: FUN_000122ec
// address: 0x122ec
// body: available
// range: 0x122ec-0x123d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_000122ec(int *param_1,short *param_2,int param_3,undefined4 param_4,int param_5,uint param_6,
            byte *param_7,uint param_8)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int extraout_r1;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iStack_30;
  
  iVar7 = *param_1;
  if (iVar7 == 0) {
    return 0;
  }
  iVar9 = param_1[2];
  FUN_00006158(param_4,iVar9);
  iVar10 = (int)param_2 + (ushort)param_2[-1] + 0x14;
  uVar6 = iVar9 * param_1[1];
  uVar5 = extraout_r1 * param_1[1];
  *param_2 = (short)param_5 * (short)param_3 * 4 + 0x10;
  pbVar3 = param_7;
  iStack_30 = param_3;
  while( true ) {
    while( true ) {
      bVar1 = *pbVar3;
      if ((char)bVar1 < 0) break;
      uVar4 = uVar5 + (int)(char)bVar1;
      if (uVar6 <= uVar4) {
        uVar4 = uVar4 - uVar6;
      }
      bVar2 = pbVar3[1];
      uVar8 = *(uint *)(iVar7 + uVar4 * 4);
      if ((param_8 & 1 << (uint)bVar1) != 0) {
        *(undefined4 *)(iVar7 + uVar4 * 4) = 0;
      }
      if (param_6 != 0) {
        uVar8 = param_6 | uVar8 >> 8;
      }
      *(uint *)(iVar10 + (char)bVar2 * 4) = uVar8;
      pbVar3 = pbVar3 + 2;
    }
    iStack_30 = iStack_30 + -1;
    if (iStack_30 == 0) break;
    uVar5 = uVar5 + param_1[1];
    iVar10 = iVar10 + param_5 * 4;
    pbVar3 = param_7;
    if (uVar6 < uVar5 || uVar6 - uVar5 == 0) {
      uVar5 = uVar5 - uVar6;
    }
  }
  return 1;
}

