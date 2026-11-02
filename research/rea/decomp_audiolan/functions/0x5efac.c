// rea decompile_all
// name: FUN_0005efac
// address: 0x5efac
// body: available
// range: 0x5efac-0x5f21f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0005efac(int *param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  ushort local_60 [2];
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48 [3];
  undefined4 local_3c [2];
  int *local_34;
  undefined4 local_30;
  byte *pbStack_2c;
  uint uStack_28;
  
  local_34 = param_1;
  local_30 = param_2;
  pbStack_2c = param_3;
  uStack_28 = param_4;
  if (param_4 < 2) goto LAB_0005f150;
  local_5c = 0;
  bVar4 = *param_3;
  uVar6 = (uint)bVar4;
  local_60[0] = 1;
  local_58 = uVar6 & 1;
  if ((bVar4 & 1) != 0) {
    local_60[0] = 2;
    local_5c = (uint)(param_3[1] != 0);
  }
  uVar1 = (uVar6 & 2) >> 1;
  uVar7 = 0;
  if (uVar1 != 0) {
    uVar5 = (uint)local_60[0];
    if (param_4 <= uVar5) goto LAB_0005f150;
    local_60[0] = local_60[0] + 1;
    if (param_3[uVar5] == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
  }
  uVar5 = (uVar6 & 4) >> 2;
  local_54 = 0;
  if (uVar5 != 0) {
    if (param_4 <= local_60[0]) goto LAB_0005f150;
    FUN_000779bc(&local_54,param_3,local_60);
  }
  uVar2 = (uVar6 & 8) >> 3;
  local_50 = 0;
  if (uVar2 != 0) {
    if (param_4 <= local_60[0]) goto LAB_0005f150;
    FUN_000779bc(&local_50,param_3,local_60);
  }
  uVar3 = (uVar6 & 0x10) >> 4;
  local_4c = 0;
  if (uVar3 != 0) {
    if (param_4 <= local_60[0]) goto LAB_0005f150;
    FUN_000779bc(&local_4c,param_3,local_60);
  }
  uVar8 = 0;
  uVar9 = (uVar6 & 0x20) >> 5;
  if (uVar9 != 0) {
    uVar8 = (uint)local_60[0];
    if (param_4 <= uVar8) goto LAB_0005f150;
    local_60[0] = local_60[0] + 1;
    uVar8 = (uint)param_3[uVar8];
  }
  local_48[0] = 0;
  uVar6 = (uVar6 & 0x40) >> 6;
  if (uVar6 != 0) {
    if (param_4 <= local_60[0]) goto LAB_0005f150;
    FUN_00077824(local_48,param_3,local_60);
  }
  local_3c[0] = DAT_0005f220;
  if ((char)-((char)bVar4 >> 7) == '\0') {
LAB_0005f190:
    if (local_60[0] <= param_4) {
      (**(code **)(*(int *)local_34[1] + 0xe0))
                ((int *)local_34[1],local_30,local_58,local_5c,uVar1,uVar7,uVar5,&local_54,uVar2,
                 &local_50,uVar3,&local_4c,uVar9,uVar8,uVar6,local_48[0],-((char)bVar4 >> 7),
                 local_3c);
      FUN_001da44c(local_3c);
      return;
    }
  }
  else if (local_60[0] < param_4) {
    FUN_00077c0c(local_3c,param_3,local_60,param_4 - local_60[0] & 0xffff);
    goto LAB_0005f190;
  }
  FUN_001da44c(local_3c);
LAB_0005f150:
                    /* WARNING: Could not recover jumptable at 0x0005f170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*local_34 + 8))(local_34,local_30,6);
  return;
}

