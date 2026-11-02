// rea decompile_all
// name: FUN_000fb6f8
// address: 0xfb6f8
// body: available
// range: 0xfb6f8-0xfbaa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fb6f8(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [4];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [60];
  undefined8 local_50;
  undefined1 auStack_44 [20];
  undefined8 local_30;
  
  FUN_000fb670(param_1);
  uVar6 = FUN_00249204(param_3);
  local_30 = FUN_00248dc0(0,DAT_000fbaa8,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  local_50 = FUN_00249204(param_4);
  FUN_00249444((int)local_50,(int)((ulonglong)local_50 >> 0x20),(undefined4)local_30,local_30._4_4_)
  ;
  iVar1 = FUN_00249124();
  FUN_001b8b34(auStack_44,param_1);
  if (param_5 == 0) {
    piVar2 = (int *)FUN_0022bc90(param_1 + 4);
    uVar3 = FUN_001b2390(auStack_44);
    iVar4 = FUN_001b23b0(auStack_44);
    (**(code **)(*piVar2 + 0x34))(piVar2,iVar4 + iVar1,uVar3,0x5b,0,0xffffffff);
  }
  else {
    piVar2 = (int *)FUN_0022bc90(param_1 + 4);
    uVar3 = FUN_001b2390(auStack_44);
    iVar4 = FUN_001b23b0(auStack_44);
    (**(code **)(*piVar2 + 0x34))(piVar2,iVar4 + iVar1,uVar3,0x5c,0,0xffffffff);
  }
  if (param_2 == 1) {
    piVar2 = (int *)FUN_0022bc90(param_1 + 4);
    uVar3 = FUN_001b2390(auStack_44);
    iVar4 = FUN_001b23b0(auStack_44);
    (**(code **)(*piVar2 + 0x34))(piVar2,iVar4 + *(int *)(param_1 + 0x20),uVar3,0x5c,0,0xffffffff);
    if (param_5 != 0) {
      FUN_000fbacc(param_1,iVar1);
    }
  }
  else {
    *(int *)(param_1 + 0x20) = iVar1;
  }
  if (param_6 != 0) {
    iVar4 = FUN_00003e14(param_4,0xe10);
    param_4 = param_4 + iVar4 * -0xe10;
    iVar5 = FUN_00003e14(param_4,0x3c);
    FUN_000028cc(auStack_8c,s__02d__02d__02d_000fbaac,iVar4,iVar5,param_4 + iVar5 * -0x3c);
    uVar3 = FUN_00201f28((int)&local_50 + 4,0);
    FUN_001aaf10(auStack_9c,auStack_8c,uVar3);
    FUN_00201f54((int)&local_50 + 4);
    iVar4 = FUN_001b2390(auStack_44);
    FUN_000649bc(auStack_44,iVar4 + -1);
    iVar4 = FUN_001b2390(auStack_44);
    FUN_000649d4(auStack_44,iVar4 + 8);
    iVar4 = FUN_001b23b0(auStack_44);
    FUN_000649c4(auStack_44,iVar4 + iVar1);
    FUN_000d7ae4(auStack_a0,0,0,0,0);
    if (iVar1 + 0x2f < 0xd8) {
      iVar1 = FUN_001b23b0(auStack_44);
      FUN_000649c4(auStack_44,iVar1 + 9);
      piVar2 = (int *)FUN_0022bc90(param_1 + 4);
      (**(code **)(*piVar2 + 0x28))(piVar2,auStack_44,0,0,auStack_9c,auStack_a0,0,0,0,0xffffffff);
    }
    else {
      iVar1 = FUN_001b23b0(auStack_44);
      FUN_000649cc(auStack_44,iVar1 + -2);
      iVar1 = FUN_001b23bc(auStack_44);
      FUN_000649c4(auStack_44,iVar1 + -0x28);
      piVar2 = (int *)FUN_0022bc90(param_1 + 4);
      (**(code **)(*piVar2 + 0x28))(piVar2,auStack_44,0,0,auStack_9c,auStack_a0,0,0,0,0xffffffff);
    }
    FUN_000d7afc(auStack_a0);
    FUN_001aafac(auStack_9c);
  }
  FUN_00064a58(auStack_44);
  return;
}

