// rea decompile_all
// name: FUN_001fe1c4
// address: 0x1fe1c4
// body: available
// range: 0xcf9b4-0xcfd5b inclusive
// range: 0xcfe5c-0xd000b inclusive
// range: 0x1fe1c4-0x1fe1db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001fe1c4(undefined4 *param_1)

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
  
  piVar9 = (int *)FUN_00011c80(*param_1,param_1[1]);
  uVar2 = DAT_000cfd68;
  iVar10 = *piVar9;
  FUN_000034d8(&local_38,iVar10,DAT_000cfd68);
  iVar3 = DAT_000cfd6c;
  iVar4 = (int)((ulonglong)((longlong)DAT_000cfd6c * (longlong)(int)local_34) >> 0x20);
  FUN_00002898(_DAT_000cfd70,s_Xtali_input_000cfd5c,iVar10,local_38,(iVar4 >> 6) - (iVar4 >> 0x1f));
  FUN_00002898(s___31s_000cfd88,s___System_clock_PLL_000cfd72 + 2);
  uVar5 = FUN_00011c94();
  uVar6 = FUN_00011c8c();
  iVar4 = FUN_00011c80(uVar5,uVar6);
  iVar11 = 0;
  if ((*(byte *)(iVar4 + 8) & 1) == 0) {
    iVar1 = 1 << (*(byte *)(iVar4 + 7) & 3);
    local_38 = (uint)*(byte *)(iVar4 + 5);
    local_34 = *(byte *)(iVar4 + 6) & 0x1f;
    uVar13 = FUN_002492ec(iVar1);
    uVar14 = FUN_002492ec(local_34);
    uVar15 = FUN_002492ec(local_38);
    uVar14 = FUN_00248dc0((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,
                          (int)((ulonglong)uVar14 >> 0x20));
    uVar15 = FUN_002492ec(iVar10);
    uVar14 = FUN_00249444((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),(int)uVar14,
                          (int)((ulonglong)uVar14 >> 0x20));
    FUN_00248dc0((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),(int)uVar13,
                 (int)((ulonglong)uVar13 >> 0x20));
    iVar11 = FUN_00249194();
    FUN_00002898(s__u_Hz_x___u____u_____u____u_Hz_000cfd98,iVar10,local_38,local_34,iVar1,iVar11);
  }
  else {
    FUN_00002898(&DAT_000cfd90);
  }
  iVar4 = DAT_000cfdbc;
  uVar7 = *(uint *)(DAT_000cfdbc + 4) & 7;
  if (((uVar7 != 0) && (iVar10 = iVar11, uVar7 != 1)) && (iVar10 = DAT_000cfdd8, uVar7 != 3)) {
    iVar10 = iVar11;
  }
  FUN_00002898(s___31s__s_000cfe00,s_Clock_source_selection_000cfde8);
  uVar7 = *(uint *)(iVar4 + 0x14);
  uVar12 = *(uint *)(iVar4 + 0x10) & 0x3f;
  uVar5 = FUN_00006604(iVar10,uVar12);
  FUN_000034d8(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_00002898(_DAT_000cfd70,s_AHB_clock_000cfe0c,uVar5,local_38,(iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar8 = uVar7 & 0xf;
  if (uVar8 == 0) {
    uVar8 = 4;
  }
  uVar5 = FUN_00006604(iVar10 * uVar8,uVar12);
  FUN_000034d8(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_00002898(_DAT_000cfd70,s_ARM_clock_000cfe18,uVar5,local_38,(iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar8 = (uVar7 & 0xff) >> 4;
  if (uVar8 == 0) {
    uVar8 = 4;
  }
  uVar5 = FUN_00006604(iVar10 * uVar8,uVar12);
  FUN_000034d8(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_00002898(_DAT_000cfd70,s_Warp0_clock_000cfe24,uVar5,local_38,(iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar8 = (uVar7 & 0xfff) >> 8;
  if (uVar8 == 0) {
    uVar8 = 4;
  }
  uVar5 = FUN_00006604(iVar10 * uVar8,uVar12);
  FUN_000034d8(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_00002898(_DAT_000cfd70,s_SDRAM_clock_000cfe30,uVar5,local_38,(iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar8 = (uVar7 & 0xffff) >> 0xc;
  if (uVar8 == 0) {
    uVar8 = 4;
  }
  uVar5 = FUN_00006604(iVar10 * uVar8,uVar12);
  FUN_000034d8(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_00002898(_DAT_000cfd70,s_AV_system_clock_000cfe3c,uVar5,local_38,
               (iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar8 = (uVar7 & 0xfffff) >> 0x10;
  if (uVar8 == 0) {
    uVar8 = 4;
  }
  uVar5 = FUN_00006604(iVar10 * uVar8,uVar12);
  FUN_000034d8(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_00002898(_DAT_000cfd70,s_HV_system_clock_000cfe4c,uVar5,local_38,
               (iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar8 = (uVar7 & 0xffffff) >> 0x14;
  if (uVar8 == 0) {
    uVar8 = 4;
  }
  uVar5 = FUN_00006604(iVar10 * uVar8,uVar12);
  FUN_000034d8(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_00002898(_DAT_000cfd70,s_AV_oversampling_clock_000d000c,uVar5,local_38,
               (iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar8 = (uVar7 & 0xfffffff) >> 0x18;
  if (uVar8 == 0) {
    uVar8 = 4;
  }
  uVar5 = FUN_00006604(iVar10 * uVar8,uVar12);
  FUN_000034d8(&local_38,uVar5,uVar2);
  iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_00002898(_DAT_000cfd70,s_Warp1_clock_000d0024,uVar5,local_38,(iVar4 >> 6) - (iVar4 >> 0x1f));
  uVar7 = uVar7 >> 0x1c;
  if (uVar7 == 0) {
    uVar7 = 4;
  }
  uVar5 = FUN_00006604(iVar10 * uVar7,uVar12);
  FUN_000034d8(&local_38,uVar5,uVar2);
  iVar10 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
  FUN_00002898(_DAT_000cfd70,s_Sol_clock_000d0030,uVar5,local_38,(iVar10 >> 6) - (iVar10 >> 0x1f));
  FUN_00002898(&DAT_000cfd94);
  local_30 = DAT_000d003c;
  iVar10 = 0;
  uStack_2b = (undefined3)((uint)DAT_000d0040 >> 8);
  local_2c = '0';
  do {
    uVar5 = FUN_000d0330();
    uVar5 = FUN_001b8144(uVar5,iVar10);
    FUN_000034d8(&local_38,uVar5,uVar2);
    iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(int)local_34) >> 0x20);
    FUN_00002898(_DAT_000cfd70,&local_30,uVar5,local_38,(iVar4 >> 6) - (iVar4 >> 0x1f));
    iVar10 = iVar10 + 1;
    local_2c = local_2c + '\x01';
  } while (iVar10 < 5);
  return;
}

