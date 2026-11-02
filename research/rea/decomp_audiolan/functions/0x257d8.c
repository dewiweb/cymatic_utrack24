// rea decompile_all
// name: FUN_000257d8
// address: 0x257d8
// body: available
// range: 0x257d8-0x2590f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000257d8(int *param_1,undefined4 param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  uint *puVar11;
  
  uVar10 = FUN_000032a6(*param_3,param_3[1],param_3 + 2);
  piVar3 = DAT_00025914;
  puVar2 = DAT_00025910;
  uVar8 = (uint)uVar10 >> 0x10 | (int)((ulonglong)uVar10 >> 0x20) << 0x10;
  uVar4 = *DAT_00025910;
  iVar7 = uVar8 - uVar4;
  uVar6 = DAT_00025914[1];
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  puVar11 = DAT_00025910 + 0x18;
  uVar5 = DAT_00025910[0xc];
  if (DAT_00025914[4] >> (uVar6 & 0xff) < iVar7) {
    if (uVar5 == 0) {
      if (uVar6 == 0) goto LAB_0002585e;
      DAT_00025914[1] = uVar6 - 1;
      iVar7 = piVar3[2];
    }
    else {
      iVar7 = uVar5 - 1;
    }
    *piVar3 = iVar7;
    if (piVar3[1] != 0) {
      if ((char)puVar2[0x1f] != '\0') {
        FUN_000028a4(DAT_0002591c,uVar4,uVar8,*(undefined4 *)(DAT_00025918 + 8),DAT_00025910[0xc],
                     piVar3[1],param_1,param_2,param_3);
      }
      return 0;
    }
  }
  else if (uVar5 < (uint)DAT_00025914[2]) {
    *DAT_00025914 = uVar5 + 1;
  }
  else if (uVar6 < (uint)DAT_00025914[3]) {
    *DAT_00025914 = 0;
    piVar3[1] = uVar6 + 1;
  }
LAB_0002585e:
  puVar2 = DAT_00025920;
  uVar4 = DAT_00025920[2];
  if ((int)DAT_00025920[4] < (int)DAT_00025920[5]) {
    uVar6 = *DAT_00025920;
    puVar1 = DAT_00025920 + 1;
    *DAT_00025920 = uVar6 + uVar8;
    puVar2[1] = *puVar1 + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar6,uVar8);
    *(uint *)(puVar2[7] + uVar4 * 4) = uVar8;
    puVar2[2] = puVar2[5] - 1 & uVar4 + 1;
    uVar4 = puVar2[4] + 1;
    puVar2[4] = uVar4;
    uVar4 = FUN_0000276c(*puVar2,puVar2[1],uVar4,(int)uVar4 >> 0x1f);
  }
  else {
    uVar6 = *(uint *)(DAT_00025920[7] + uVar4 * 4);
    uVar9 = *DAT_00025920;
    puVar1 = DAT_00025920 + 1;
    uVar5 = uVar9 - uVar6;
    *DAT_00025920 = uVar5 + uVar8;
    puVar2[1] = ((*puVar1 - ((int)uVar6 >> 0x1f)) - (uint)(uVar9 < uVar6)) + ((int)uVar8 >> 0x1f) +
                (uint)CARRY4(uVar5,uVar8);
    *(uint *)(puVar2[7] + uVar4 * 4) = uVar8;
    puVar2[2] = puVar2[5] - 1 & uVar4 + 1;
    uVar4 = FUN_0000272c(*puVar2,puVar2[1],puVar2[6]);
  }
  puVar2[3] = uVar4;
  puVar2 = DAT_00025910;
  DAT_00025910[1] = (int)uVar4 >> 0x1f;
  *puVar2 = uVar4;
  *param_1 = uVar4 << 0x10;
  param_1[1] = ((int)uVar4 >> 0x1f) << 0x10 | uVar4 >> 0x10;
  if ((char)puVar11[7] != '\0') {
    FUN_000028a4(DAT_00025924,uVar4,uVar8,*(undefined4 *)(DAT_00025918 + 8),puVar2[0xc],puVar2[0xd],
                 param_1,param_2,param_3);
  }
  return 1;
}

