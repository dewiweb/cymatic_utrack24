// rea decompile_all
// name: FUN_000b69a4
// address: 0xb69a4
// body: available
// range: 0xb69a4-0xb6cab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000b69a4(int *param_1,undefined1 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  int *piVar16;
  int iVar17;
  byte *pbVar18;
  code *pcVar19;
  uint uVar20;
  undefined4 local_120;
  int *local_11c;
  code *local_118;
  uint uStack_114;
  undefined1 local_110;
  undefined1 local_10f;
  undefined1 local_10e;
  undefined1 local_10d;
  undefined1 local_10c;
  undefined1 local_10b;
  undefined1 local_10a;
  undefined1 local_109;
  undefined1 local_108;
  undefined1 local_107;
  undefined1 local_106;
  undefined4 local_104;
  undefined1 local_100;
  undefined1 auStack_fc [40];
  undefined4 local_d4;
  undefined1 auStack_d0 [28];
  byte local_b4 [8];
  undefined4 local_ac;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_9e;
  undefined4 local_9c;
  undefined1 local_98;
  undefined1 auStack_88 [36];
  undefined1 auStack_64 [36];
  uint local_40;
  undefined4 local_3c;
  int *local_38;
  code *local_34;
  
  pcVar19 = (code *)*DAT_000b6cac;
  uVar20 = DAT_000b6cac[1];
  local_a8 = *param_2;
  local_a7 = param_2[1];
  local_a6 = param_2[2];
  local_a5 = param_2[3];
  local_a4 = param_2[4];
  local_a3 = param_2[5];
  local_a2 = param_2[6];
  local_a1 = param_2[7];
  local_a0 = param_2[8];
  local_9f = param_2[9];
  local_9e = param_2[10];
  local_9c = *(undefined4 *)(param_2 + 0xc);
  local_98 = param_2[0x10];
  local_3c = FUN_00084308(auStack_88,param_3);
  local_ac = param_4;
  piVar16 = (int *)FUN_0017b3e4();
  uVar15 = local_98;
  uVar2 = local_9c;
  uVar14 = local_9e;
  uVar13 = local_9f;
  uVar12 = local_a0;
  uVar11 = local_a1;
  uVar10 = local_a2;
  uVar9 = local_a3;
  uVar8 = local_a4;
  uVar7 = local_a5;
  uVar6 = local_a6;
  uVar5 = local_a7;
  uVar4 = local_a8;
  if (piVar16 == param_1 + 1) {
    param_1 = (int *)((int)param_1 + ((int)uVar20 >> 1));
    if ((uVar20 & 1) != 0) {
      pcVar19 = *(code **)(pcVar19 + *param_1);
    }
    uVar20 = (*pcVar19)(param_1,&local_a8,local_3c,local_ac);
  }
  else {
    local_40 = uVar20;
    local_38 = param_1;
    local_34 = pcVar19;
    local_3c = FUN_00084308(auStack_64,local_3c);
    uVar3 = local_ac;
    uVar1 = DAT_000b6cb0;
    local_11c = local_38;
    local_118 = local_34;
    uStack_114 = local_40;
    local_110 = uVar4;
    local_10f = uVar5;
    local_120 = DAT_000b6cb0;
    local_10e = uVar6;
    local_10c = uVar8;
    local_10d = uVar7;
    local_10b = uVar9;
    local_10a = uVar10;
    local_109 = uVar11;
    local_108 = uVar12;
    local_107 = uVar13;
    local_104 = uVar2;
    local_106 = uVar14;
    local_100 = uVar15;
    iVar17 = FUN_00084308(auStack_fc,local_3c);
    uVar2 = DAT_000b6cb4;
    *(char *)(iVar17 + 0x24) = (char)uVar3;
    *(undefined4 *)(iVar17 + 0x2c) = 0;
    *(undefined4 *)(iVar17 + 0x28) = uVar2;
    FUN_0017a1c4(iVar17 + 0x2c,DAT_000b6cb8,0,0);
    thunk_EXT_FUN_00400100(iVar17 + 0x2c);
    FUN_00084514(auStack_64);
    (**(code **)(*param_1 + 0x2c))(param_1,&local_120,0xffffffff);
    iVar17 = thunk_EXT_FUN_004001ec(auStack_d0,0xffffffff);
    if (iVar17 == 0) {
      pbVar18 = local_b4;
    }
    else {
      pbVar18 = (byte *)0x0;
    }
    uVar20 = (uint)*pbVar18;
    local_120 = uVar1;
    local_d4 = uVar2;
    FUN_0017a254(auStack_d0);
    FUN_00084514(auStack_fc);
  }
  FUN_00084514(auStack_88);
  return uVar20;
}

