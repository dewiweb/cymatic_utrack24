// rea decompile_all
// name: FUN_000604c0
// address: 0x604c0
// body: available
// range: 0x604c0-0x6082b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000604c0(int param_1,uint param_2,undefined1 *param_3,uint param_4)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint extraout_r1;
  uint extraout_r1_00;
  int extraout_r1_01;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int local_50;
  undefined1 auStack_3c [8];
  int local_34;
  uint uStack_30;
  undefined1 *local_2c;
  uint uStack_28;
  
  local_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  FUN_001a2920(auStack_3c,param_1 + 0x1c);
  FUN_00006604(param_2,*DAT_0006082c);
  uVar8 = (*DAT_0006082c - 1) + param_4 + extraout_r1 & ~(*DAT_0006082c - 1);
  uVar4 = FUN_000507b8(param_2 & ~(*DAT_0006082c - 1));
  uVar5 = FUN_00006604(uVar4,*DAT_0006082c);
  FUN_00006604(uVar4,*DAT_0006082c);
  puVar2 = DAT_00060830;
  DAT_00060830[0x60] = 0;
  *puVar2 = 0x1000001;
  puVar2[1] = 0x10000;
  puVar2[0x3c0] = 0xff;
  uVar12 = 0;
  uVar14 = 0;
  uVar9 = uVar5;
  uVar10 = *DAT_0006082c - extraout_r1_00;
  puVar11 = local_2c;
  if (uVar8 < *DAT_0006082c - extraout_r1_00) {
    uVar10 = uVar8;
  }
  while (uVar8 != 0) {
    uVar6 = extraout_r1;
    uVar13 = extraout_r1;
    if (uVar9 == *DAT_00060834) {
      for (; (((int)uVar6 < (int)uVar10 && (extraout_r1 <= uVar13)) && (uVar14 < param_4));
          uVar14 = uVar14 + 1) {
        *puVar11 = *(undefined1 *)(DAT_00060838 + uVar6);
        puVar11 = puVar11 + 1;
        uVar6 = uVar6 + 1;
        uVar13 = uVar13 + 1;
      }
    }
    else {
      *DAT_00060834 = 0xffffffff;
      puVar2 = DAT_00060830;
      DAT_00060830[0x80] = 0;
      puVar3 = DAT_00060830;
      if (uVar9 == uVar5) {
        puVar2[0x84] = extraout_r1_00 & 0xff;
        puVar2[0x85] = (extraout_r1_00 & 0xffff) >> 8;
      }
      else {
        DAT_00060830[0x84] = 0;
        puVar3[0x85] = 0;
      }
      puVar2 = DAT_00060830;
      DAT_00060830[0x86] = uVar9 & 0xff;
      puVar2[0x87] = (uVar9 & 0xffff) >> 8;
      puVar2[0x88] = (uVar9 & 0xffffff) >> 0x10;
      puVar2[0x80] = 0x30;
      *(uint *)(((uint)puVar2 & 0xffffffcf) + 0x254) = uVar10;
      for (iVar7 = 0; iVar7 < (int)uVar10; iVar7 = iVar7 + 1) {
        do {
        } while (*DAT_0006083c == 0);
        uVar1 = *DAT_00060840;
        *(undefined1 *)(DAT_00060838 + iVar7) = uVar1;
        if ((extraout_r1 <= uVar12) && (uVar14 < param_4)) {
          *puVar11 = uVar1;
          puVar11 = puVar11 + 1;
          uVar14 = uVar14 + 1;
        }
        uVar12 = uVar12 + 1;
      }
      *DAT_00060834 = uVar9;
      uVar13 = uVar12;
    }
    uVar8 = uVar8 - uVar10;
    uVar10 = uVar8;
    if (*DAT_0006082c < uVar8) {
      uVar10 = *DAT_0006082c;
    }
    uVar9 = uVar9 + 1;
    uVar12 = uVar13;
    if (uVar8 != 0) {
      uVar4 = FUN_00003e14(*DAT_00060844 << 10,*DAT_0006082c);
      FUN_00003e14(uVar9,uVar4);
      if (extraout_r1_01 == 0) {
        uVar4 = FUN_00003e14(*DAT_00060844 << 10,*DAT_0006082c);
        local_50 = FUN_00003e14(uVar9,uVar4);
        local_50 = local_50 + -1;
        do {
          local_50 = local_50 + 1;
          iVar7 = FUN_00046734(local_50);
        } while (iVar7 != 0);
        iVar7 = FUN_00003e14(*DAT_00060844 << 10,*DAT_0006082c);
        uVar9 = iVar7 * local_50;
      }
    }
  }
  *DAT_00060830 = 0x10000;
  FUN_001a2938(auStack_3c);
  return 0;
}

