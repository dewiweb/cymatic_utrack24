// rea decompile_all
// name: FUN_000057a8
// address: 0x57a8
// body: available
// range: 0x57a8-0x5875 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000057a8(undefined8 *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 extraout_r2_02;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined8 local_3c;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  uint local_24;
  undefined8 *local_20;
  int iStack_1c;
  int iStack_18;
  
  local_48._0_4_ = *(undefined4 *)(DAT_00005878 + 0x5830);
  local_48._4_4_ = *(undefined4 *)(DAT_00005878 + 0x5834);
  uStack_40 = *(undefined4 *)(DAT_00005878 + 0x5838);
  local_3c._0_4_ = *(undefined4 *)(DAT_00005878 + 0x583c);
  local_3c._4_4_ = *(undefined4 *)(DAT_00005878 + 0x5840);
  uStack_34 = *(undefined4 *)(DAT_00005878 + 0x5844);
  local_20 = param_1;
  iStack_1c = param_2;
  iStack_18 = param_3;
  uVar8 = FUN_00003a1c(param_2 + 0x1b9b,0x37);
  uVar9 = CONCAT44(local_48._4_4_,(undefined4)local_48);
  uVar4 = (int)uVar8 - 0x80;
  uVar3 = (int)((ulonglong)uVar8 >> 0x20) - 0x1b;
  bVar7 = (int)uVar3 < 0;
  if (bVar7) {
    uVar3 = -uVar3;
  }
  local_24 = (uint)bVar7;
  iVar5 = 0;
  for (; uVar8 = CONCAT44(local_3c._4_4_,(undefined4)local_3c), uVar3 != 0; uVar3 = (int)uVar3 >> 1)
  {
    if ((uVar3 & 1) != 0) {
      local_48 = uVar9;
      uVar9 = FUN_0000675c(&local_48,iVar5 * 0xc + DAT_00005878 + 0x57b4,param_3);
      uStack_40 = extraout_r2;
    }
    iVar5 = iVar5 + 1;
  }
  iVar6 = DAT_00005878 + 0x57f0;
  iVar5 = 0;
  for (; local_48 = uVar9, local_3c = uVar8, uVar4 != 0; uVar4 = (int)uVar4 >> 1) {
    if ((uVar4 & 1) != 0) {
      puVar1 = (undefined4 *)(iVar5 * 0x10 + iVar6);
      local_30 = *puVar1;
      local_2c = puVar1[1];
      local_28 = puVar1[2];
      if (puVar1[3] + param_3 == 0) {
        local_28 = local_28 + param_3;
      }
      uVar8 = FUN_0000675c(&local_3c,&local_30,param_3);
      uStack_34 = extraout_r2_00;
      uVar9 = local_48;
    }
    iVar5 = iVar5 + 1;
  }
  if (local_24 == 0) {
    uVar9 = FUN_0000675c(&local_3c,&local_48,param_3);
    uVar2 = extraout_r2_02;
  }
  else {
    uVar9 = FUN_000066fc(&local_3c,&local_48,param_3);
    uVar2 = extraout_r2_01;
  }
  *local_20 = uVar9;
  *(undefined4 *)(local_20 + 1) = uVar2;
  return;
}

