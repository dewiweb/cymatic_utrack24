// rea decompile_all
// name: FUN_000d2068
// address: 0xd2068
// body: available
// range: 0xd2068-0xd22b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d2068(int param_1,undefined4 param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined1 auStack_50 [20];
  undefined4 local_3c [2];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24 [2];
  
  iVar2 = FUN_000b9aac();
  uVar4 = DAT_000d22b8;
  cVar1 = param_3[1];
  if (*param_3 == '\0') {
    cVar1 = *(char *)(iVar2 + 0x22e);
  }
  local_54 = DAT_000d22b8;
  local_3c[0] = *(undefined4 *)(param_3 + 4);
  if (param_3[2] == '\0') {
    FUN_00159a7c(&uStack_5c,iVar2);
    FUN_001da4a8(&local_54,&uStack_5c);
    FUN_001da44c(&uStack_5c);
  }
  else {
    uVar3 = FUN_0018e4b4(local_3c,auStack_50,0x10);
    FUN_001da458(&local_54,uVar3);
  }
  local_34 = uVar4;
  local_3c[0] = *(undefined4 *)(param_3 + 0xc);
  if (param_3[8] == '\0') {
    FUN_0015a278(&uStack_5c,iVar2);
    FUN_001da4a8(&local_34,&uStack_5c);
    FUN_001da44c(&uStack_5c);
  }
  else {
    uVar3 = FUN_0018e4b4(local_3c,auStack_50,0x10);
    FUN_001da458(&local_34,uVar3);
  }
  local_30 = uVar4;
  local_3c[0] = *(undefined4 *)(param_3 + 0x14);
  if (param_3[0x10] == '\0') {
    FUN_00159ac8(&uStack_5c,iVar2);
    FUN_001da4a8(&local_30,&uStack_5c);
    FUN_001da44c(&uStack_5c);
  }
  else {
    uVar3 = FUN_0018e4b4(local_3c,auStack_50,0x10);
    FUN_001da458(&local_30,uVar3);
  }
  local_2c = uVar4;
  local_28 = uVar4;
  local_3c[0] = *(undefined4 *)(param_3 + 0x1c);
  local_24[0] = *(undefined4 *)(param_3 + 0x20);
  if (param_3[0x18] == '\0') {
    FUN_0015a1e0(&local_60,iVar2);
    FUN_001da4a8(&local_2c,&local_60);
    FUN_001da44c(&local_60);
    FUN_0015a22c(&local_60,iVar2);
    FUN_001da4a8(&local_28,&local_60);
    FUN_001da44c(&local_60);
  }
  else {
    uVar4 = FUN_0018e4b4(local_3c,auStack_50,0x10);
    FUN_001da458(&local_2c,uVar4);
    uVar4 = FUN_0018e4b4(local_24,auStack_50,0x10);
    FUN_001da458(&local_28,uVar4);
  }
  local_60 = local_30;
  uStack_5c = local_2c;
  uStack_58 = local_28;
  uVar5 = FUN_000bb42c(iVar2,cVar1,local_54,local_34);
  (**(code **)(**(int **)(param_1 + 0x118) + 8))(*(int **)(param_1 + 0x118),param_2,uVar5 ^ 1);
  FUN_001da44c(&local_28);
  FUN_001da44c(&local_2c);
  FUN_001da44c(&local_30);
  FUN_001da44c(&local_34);
  FUN_001da44c(&local_54);
  return;
}

