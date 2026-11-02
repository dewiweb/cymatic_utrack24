// rea decompile_all
// name: FUN_001718e0
// address: 0x1718e0
// body: available
// range: 0x1718e0-0x17190f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001718e0(int *param_1,ushort *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  bool bVar8;
  
  uVar4 = 0;
  if (param_2 != (ushort *)0x0) {
    uVar4 = FUN_00022724(param_2);
  }
  *(undefined2 *)((int)param_1 + 6) = 0;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = 0;
  }
  if (param_2 != (ushort *)0x0) {
    uVar7 = uVar4 * 3 + 1;
    if (*(ushort *)(param_1 + 1) < uVar7) {
      if (*param_1 != 0) {
        FUN_001c6a64();
      }
      uVar2 = DAT_00171a7c;
      uVar7 = uVar7 & 0xfff8ffff;
      *(short *)(param_1 + 1) = (short)uVar7;
      iVar3 = FUN_001c6a94(uVar7,uVar2);
      *param_1 = iVar3;
      if (iVar3 != 0) {
        FUN_00003c18(iVar3,(short)param_1[1]);
      }
    }
    pbVar5 = (byte *)*param_1;
    while( true ) {
      uVar1 = *param_2;
      uVar7 = (uint)uVar1;
      if ((uVar7 == 0) || (bVar8 = uVar4 == 0, uVar4 = uVar4 - 1 & 0xffff, bVar8)) break;
      if (uVar7 < 0x80) {
        *pbVar5 = (byte)uVar1 & 0x7f;
        *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
        pbVar5 = pbVar5 + 1;
      }
      else if (uVar7 - 0x80 < 0x780) {
        pbVar6 = pbVar5 + 1;
        *pbVar5 = (byte)((uVar7 << 0x15) >> 0x1b) | 0xc0;
        *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
        pbVar5 = pbVar5 + 2;
        *pbVar6 = (byte)*param_2 & 0x3f | 0x80;
        *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
      }
      else if ((uVar7 - 0x800 < 0xd000) || (0xdfff < uVar7)) {
        *pbVar5 = (byte)(uVar1 >> 0xc) | 0xe0;
        *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
        pbVar6 = pbVar5 + 2;
        pbVar5[1] = (byte)(((uint)*param_2 << 0x14) >> 0x1a) | 0x80;
        *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
        pbVar5 = pbVar5 + 3;
        *pbVar6 = (byte)*param_2 & 0x3f | 0x80;
        *(short *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + 1;
      }
      param_2 = param_2 + 1;
    }
    *pbVar5 = 0;
    return;
  }
  return;
}

