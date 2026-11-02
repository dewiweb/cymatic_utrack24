// rea decompile_all
// name: FUN_0005d4ec
// address: 0x5d4ec
// body: available
// range: 0x5d4ec-0x5d72f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0005d4ec(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 uVar9;
  ushort local_5c [2];
  uint local_58;
  undefined2 local_54 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48 [6];
  undefined4 local_3c [2];
  int *local_34;
  undefined4 local_30;
  int iStack_2c;
  uint uStack_28;
  
  local_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  if (param_4 < 4) goto LAB_0005d670;
  local_5c[0] = 0;
  FUN_000777e0(local_48,param_3,local_5c);
  uVar6 = 0;
  bVar2 = *(byte *)(param_3 + (uint)local_5c[0]);
  uVar5 = (uint)bVar2;
  uVar3 = local_5c[0] + 1 & 0xfffeffff;
  local_58 = uVar5 & 1;
  local_5c[0] = (ushort)uVar3;
  if ((bVar2 & 1) != 0) {
    if (param_4 <= uVar3) goto LAB_0005d670;
    local_5c[0] = local_5c[0] + 1;
    if (*(char *)(param_3 + uVar3) == '\0') {
      uVar6 = 0;
    }
    else {
      uVar6 = 1;
    }
  }
  uVar3 = (uVar5 & 2) >> 1;
  uVar7 = 0;
  if (uVar3 != 0) {
    uVar4 = (uint)local_5c[0];
    if (param_4 <= uVar4) goto LAB_0005d670;
    local_5c[0] = local_5c[0] + 1;
    if (*(char *)(param_3 + uVar4) == '\0') {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
  }
  uVar4 = (uVar5 & 4) >> 2;
  local_4c = 0;
  if (uVar4 != 0) {
    if (param_4 <= local_5c[0]) goto LAB_0005d670;
    FUN_000779bc(&local_4c,param_3,local_5c);
  }
  uVar1 = (uVar5 & 8) >> 3;
  local_54[0] = 0;
  if (uVar1 != 0) {
    if (param_4 <= local_5c[0]) goto LAB_0005d670;
    FUN_000777e0(local_54,param_3,local_5c);
  }
  local_50 = DAT_0005d730;
  uVar8 = (uVar5 & 0x10) >> 4;
  uVar9 = DAT_0005d730;
  if (uVar8 != 0) {
    if (param_4 <= local_5c[0]) {
      FUN_001da44c(&local_50);
      goto LAB_0005d670;
    }
    FUN_00077c0c(&local_50,param_3,local_5c,param_4 - local_5c[0] & 0xffff);
  }
  uVar5 = (uVar5 & 0x20) >> 5;
  local_3c[0] = uVar9;
  if (uVar5 == 0) {
LAB_0005d6b0:
    if (local_5c[0] <= param_4) {
      (**(code **)(*(int *)local_34[1] + 0xe8))
                ((int *)local_34[1],local_30,local_48[0],local_58,uVar6,uVar3,uVar7,uVar4,&local_4c,
                 uVar1,local_54[0],uVar8,&local_50,uVar5,local_3c);
      FUN_001da44c(local_3c);
      FUN_001da44c(&local_50);
      return;
    }
  }
  else if (local_5c[0] < param_4) {
    FUN_00077c0c(local_3c,param_3,local_5c,param_4 - local_5c[0] & 0xffff);
    goto LAB_0005d6b0;
  }
  FUN_001da44c(local_3c);
  FUN_001da44c(&local_50);
LAB_0005d670:
                    /* WARNING: Could not recover jumptable at 0x0005d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*local_34 + 8))(local_34,local_30,6);
  return;
}

