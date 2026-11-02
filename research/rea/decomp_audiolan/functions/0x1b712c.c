// rea decompile_all
// name: FUN_001b712c
// address: 0x1b712c
// body: available
// range: 0xa3cd4-0xa407b inclusive
// range: 0xa417c-0xa432b inclusive
// range: 0x1b712c-0x1b7143 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b712c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  char local_2c;
  undefined3 uStack_2b;
  
  piVar9 = (int *)FUN_000117f0(*param_1,param_1[1]);
  uVar2 = DAT_000a4088;
  iVar10 = *piVar9;
  FUN_00003296(&local_38,iVar10,DAT_000a4088);
  iVar3 = DAT_000a408c;
  iVar4 = (int)((ulonglong)((longlong)DAT_000a408c * (longlong)(int)local_34) >> 0x20);
  FUN_000028a4(_DAT_000a4090,s_Xtali_input_000a407c,iVar10,local_38,(iVar4 >> 6) - (iVar4 >> 0x1f));
  FUN_000028a4(s___31s_000a40a8,s_M__System_clock_PLL_000a4091 + 3);
  uVar5 = FUN_00011804();
  uVar6 = FUN_000117fc();
  iVar4 = FUN_000117f0(uVar5,uVar6);
  iVar11 = 0;
  if ((*(byte *)(iVar4 + 8) & 1) == 0) {
    iVar1 = 1 << (*(byte *)(iVar4 + 7) & 3);
    local_38 = (uint)*(byte *)(iVar4 + 5);
    local_34 = *(byte *)(iVar4 + 6) & 0x1f;
    uVar13 = FUN_001e3634(iVar1);
    uVar14 = FUN_001e3634(local_34);
    uVar15 = FUN_001e3634(local_38);
    uVar14 = FUN_001e3108((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,
                          (int)((ulonglong)uVar14 >> 0x20));
    uVar15 = FUN_001e3634(iVar10);
    uVar14 = FUN_001e378c((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,
                          (int)((ulonglong)uVar14 >> 0x20));
    FUN_001e3108((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,
                 (int)((ulonglong)uVar13 >> 0x20));
    iVar11 = FUN_001e34dc();
    FUN_000028a4(s__u_Hz_x___u____u_____u____u_Hz_000a40b8,iVar10,local_38,local_34,iVar1,iVar11);
  }
  else {
    FUN_000028a4(&DAT_000a40b0);
  }
  iVar4 = DAT_000a40dc;
  uVar7 = *(uint *)(DAT_000a40dc + 4) & 7;
  if (((uVar7 != 0) && (iVar10 = iVar11, uVar7 != 1)) && (iVar10 = DAT_000a40f8, uVar7 != 3)) {
    iVar10 = iVar11;
  }
  FUN_000028a4(s___31s__s_000a4120,s_Clock_source_selection_000a4108);
  uVar7 = *(uint *)(iVar4 + 0x14);
  uVar12 = *(uint *)(iVar4 + 0x10) & 0x3f;
  uVar5 = FUN_00006158(iVar10,uVar12);
  FUN_00003296(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_000028a4(_DAT_000a4090,s_AHB_clock_000a412c,uVar5,local_38,(iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar8 = uVar7 & 0xf;
  if (uVar8 == 0) {
    uVar8 = 4;
  }
  uVar5 = FUN_00006158(iVar10 * uVar8,uVar12);
  FUN_00003296(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_000028a4(_DAT_000a4090,s_ARM_clock_000a4138,uVar5,local_38,(iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar8 = (uVar7 & 0xff) >> 4;
  if (uVar8 == 0) {
    uVar8 = 4;
  }
  uVar5 = FUN_00006158(iVar10 * uVar8,uVar12);
  FUN_00003296(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_000028a4(_DAT_000a4090,s_Warp0_clock_000a4144,uVar5,local_38,(iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar8 = (uVar7 & 0xfff) >> 8;
  if (uVar8 == 0) {
    uVar8 = 4;
  }
  uVar5 = FUN_00006158(iVar10 * uVar8,uVar12);
  FUN_00003296(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_000028a4(_DAT_000a4090,s_SDRAM_clock_000a4150,uVar5,local_38,(iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar8 = (uVar7 & 0xffff) >> 0xc;
  if (uVar8 == 0) {
    uVar8 = 4;
  }
  uVar5 = FUN_00006158(iVar10 * uVar8,uVar12);
  FUN_00003296(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_000028a4(_DAT_000a4090,s_AV_system_clock_000a415c,uVar5,local_38,
               (iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar8 = (uVar7 & 0xfffff) >> 0x10;
  if (uVar8 == 0) {
    uVar8 = 4;
  }
  uVar5 = FUN_00006158(iVar10 * uVar8,uVar12);
  FUN_00003296(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_000028a4(_DAT_000a4090,s_HV_system_clock_000a416c,uVar5,local_38,
               (iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar8 = (uVar7 & 0xffffff) >> 0x14;
  if (uVar8 == 0) {
    uVar8 = 4;
  }
  uVar5 = FUN_00006158(iVar10 * uVar8,uVar12);
  FUN_00003296(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_000028a4(_DAT_000a4090,s_AV_oversampling_clock_000a432c,uVar5,local_38,
               (iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar8 = (uVar7 & 0xfffffff) >> 0x18;
  if (uVar8 == 0) {
    uVar8 = 4;
  }
  uVar5 = FUN_00006158(iVar10 * uVar8,uVar12);
  FUN_00003296(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_000028a4(_DAT_000a4090,s_Warp1_clock_000a4344,uVar5,local_38,(iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar7 = uVar7 >> 0x1c;
  if (uVar7 == 0) {
    uVar7 = 4;
  }
  uVar5 = FUN_00006158(iVar10 * uVar7,uVar12);
  FUN_00003296(&local_38,uVar5,uVar2);
  iVar10 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_000028a4(_DAT_000a4090,s_Sol_clock_000a4350,uVar5,local_38,(iVar10 >> 6) - (iVar10 >> 0x1f));
  FUN_000028a4(&DAT_000a40b4);
  local_30 = DAT_000a435c;
  iVar10 = 0;
  uStack_2b = (undefined3)((uint)DAT_000a4360 >> 8);
  local_2c = '0';
  do {
    uVar5 = FUN_000a4650();
    uVar5 = FUN_00158b2c(uVar5,iVar10);
    FUN_00003296(&local_38,uVar5,uVar2);
    iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
    FUN_000028a4(_DAT_000a4090,&local_30,uVar5,local_38,(iVar4 >> 6) - (iVar4 >> 0x1f));
    iVar10 = iVar10 + 1;
    local_2c = local_2c + '\x01';
  } while (iVar10 < 5);
  return;
}

