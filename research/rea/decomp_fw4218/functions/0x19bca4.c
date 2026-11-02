// rea decompile_all
// name: FUN_0019bca4
// address: 0x19bca4
// body: available
// range: 0x19bca4-0x19bf03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0019bca4(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  bool bVar5;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined1 auStack_a4 [8];
  undefined1 auStack_9c [60];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [16];
  
  if ((*(ushort *)(param_1 + 0x1a) & 0x8000) == 0) {
    return;
  }
  iVar1 = FUN_001beecc(param_1 + 0x3c);
  if ((iVar1 == 0) && (iVar1 = FUN_001bef5c(param_2,param_1 + 0x3c), iVar1 != 0)) {
    (**(code **)(*(int *)param_1[0x18] + 0xd4))(auStack_48);
    FUN_0017274c(auStack_30,auStack_48,(short)param_1[0x24]);
    FUN_001512cc(&uStack_b0);
    FUN_0017f6d4(auStack_3c,param_1[9] + 0x1e0);
    (**(code **)(*param_1 + 0x74))(auStack_58,param_1);
    puStack_b4 = auStack_3c;
    uStack_b8 = DAT_0019bf04;
    FUN_0014fef0(&uStack_b0,*(undefined4 *)(param_1[9] + 0x188),param_1 + 0x3c,DAT_0019bf08);
    FUN_001a2410(param_1[9] + 0x4a0,&uStack_b0,0);
    FUN_0015111c(&uStack_b0);
    FUN_0014ca10(auStack_9c);
    FUN_0014ca10(auStack_a4);
    uStack_ac = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
  }
  uVar2 = FUN_001bef5c(param_2,param_1 + 0x3c);
  bVar5 = uVar2 == 0;
  puVar4 = (ushort *)(param_1 + 0x40);
  if (bVar5) {
    uVar2 = (uint)*puVar4;
  }
  if ((bVar5 && uVar2 == param_3) && (*(byte *)((int)param_1 + 0x102) == param_4)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  FUN_00172810(param_1 + 0x3c,param_2);
  *puVar4 = (ushort)param_3;
  if (bVar5) {
    puVar4 = (ushort *)0x0;
  }
  *(char *)((int)param_1 + 0x102) = (char)param_4;
  if (bVar5) {
    while ((puVar4 < (ushort *)(uint)*(ushort *)(param_1 + 0x15) &&
           (puVar3 = *(undefined4 **)(param_1[0x14] + (int)puVar4 * 4), puVar3 != (undefined4 *)0x0)
           )) {
      (**(code **)*puVar3)(puVar3,*(int *)(*param_1 + -0x14) + (int)param_1,param_2,param_3);
      puVar4 = (ushort *)((int)puVar4 + 1U & 0xfffeffff);
    }
  }
  if ((*(ushort *)(param_1 + 0x1a) & 0x8000) != 0) {
    iVar1 = FUN_001beecc(param_1 + 0x3c);
    if (iVar1 == 0) {
      FUN_001512cc(&uStack_b8);
      iVar1 = param_1[9];
      (**(code **)(*param_1 + 0x74))(auStack_60,param_1);
      iVar1 = FUN_00196554(&uStack_b8,auStack_60,param_1 + 0x3c,iVar1);
      if (iVar1 != 0) {
        FUN_001a2410(param_1[9] + 0x4a0,&uStack_b8,0);
      }
      FUN_0015111c(&uStack_b8);
      FUN_0014ca10(auStack_a4);
      FUN_0014ca10(&uStack_ac);
      return;
    }
    return;
  }
  return;
}

