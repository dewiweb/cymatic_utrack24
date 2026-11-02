// rea decompile_all
// name: FUN_00082d00
// address: 0x82d00
// body: available
// range: 0x82d00-0x8302b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00082d00(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [84];
  undefined1 auStack_64 [4];
  undefined1 local_60;
  undefined1 auStack_5c [4];
  undefined1 local_58;
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_4f;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  local_30 = param_1;
  iStack_2c = param_2;
  uStack_28 = param_3;
  uVar1 = FUN_00084f7c(param_1,*(undefined4 *)(param_2 + 0x1c));
  uVar1 = uVar1 & 0xff;
  local_34 = 0;
  local_38 = 0x1a;
  local_3c = FUN_00003e14((uint)*(ushort *)(param_2 + 0x1a) * 0x300000,0x18);
  local_40 = *(undefined4 *)(param_2 + 0x1c);
  local_44 = 0x40;
  local_48 = 0;
  FUN_000f8ee0();
  local_4c = FUN_000f6910();
  FUN_00069a9c(local_4c);
  FUN_001282fc(&local_54,0xc1400000,0);
  FUN_001282fc(auStack_5c,0,0);
  FUN_001282fc(auStack_64,0,0);
  if (1 < *(ushort *)(param_2 + 0x1a)) {
    FUN_00069cc4(local_4c,auStack_5c,auStack_64);
  }
  FUN_00069ed4(local_4c,uVar1,&local_54);
  local_50 = local_58;
  local_4f = 0;
  pcVar2 = (char *)FUN_0023bdc8(param_2 + 0x74,0);
  if (*pcVar2 != '\0') {
    iVar3 = FUN_0023bdc8(param_2 + 0x74,0);
    local_54 = *(undefined4 *)(iVar3 + 4);
  }
  FUN_00083fac(local_30);
  uVar4 = FUN_00249f24();
  FUN_00069f60(local_4c,uVar1,&local_54,0);
  uVar5 = FUN_00178f04();
  iVar3 = FUN_00177c28(uVar5,uVar1 + 1,uVar4);
  if (iVar3 == 0) {
    uVar7 = FUN_00249b28(uVar4);
    uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_00002898(DAT_0008302c,uVar4,(int)uVar7,uVar4,uVar1 + 1);
  }
  FUN_00069ed4(local_4c,uVar1,&local_54);
  local_50 = local_60;
  local_4f = 0;
  pcVar2 = (char *)FUN_0023bdc8(param_2 + 0x74,1);
  if (*pcVar2 == '\0') {
    FUN_00083fac(local_30);
    uVar4 = FUN_00249f24();
  }
  else {
    iVar3 = FUN_0023bdc8(param_2 + 0x74,1);
    uVar5 = *(undefined4 *)(iVar3 + 4);
    FUN_00083fac(local_30);
    uVar4 = FUN_00249f24();
    uVar4 = FUN_00249b8c(uVar4,uVar5);
    iVar3 = FUN_0023bdc8(param_2 + 0x74,1);
    local_54 = *(undefined4 *)(iVar3 + 4);
  }
  FUN_00069f60(local_4c,uVar1 + 1 & 0xff,&local_54,0);
  uVar5 = FUN_00178f04();
  iVar3 = FUN_00177c28(uVar5,uVar1 + 2,uVar4);
  if (iVar3 == 0) {
    uVar7 = FUN_00249b28(uVar4);
    uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    FUN_00002898(DAT_0008302c,uVar4,(int)uVar7,uVar4,uVar1 + 2);
  }
  FUN_0014afac(auStack_b8,local_34,local_38,uVar1,5,3,local_3c,local_40,param_2,1,local_44,local_48,
               0,0,0,0,0);
  piVar6 = (int *)FUN_000f8ee0();
  iVar3 = (**(code **)(*piVar6 + 0x80))(piVar6,auStack_b8);
  if (iVar3 == 1) {
    FUN_0014b100(auStack_b8);
    uVar4 = 0;
  }
  else {
    FUN_00002898(DAT_00083030);
    FUN_00069a4c(local_4c);
    FUN_0014b100(auStack_b8);
    uVar4 = 0x18;
  }
  return uVar4;
}

