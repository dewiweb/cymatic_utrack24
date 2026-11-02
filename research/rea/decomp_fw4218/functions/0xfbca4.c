// rea decompile_all
// name: FUN_000fbca4
// address: 0xfbca4
// body: available
// range: 0xfbca4-0xfbfd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fbca4(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_8c [20];
  undefined1 auStack_78 [20];
  undefined1 auStack_64 [20];
  undefined1 auStack_50 [20];
  undefined1 auStack_3c [24];
  
  FUN_001b8b80(auStack_3c,param_1);
  if ((char)param_1[7] == '\0') {
    (**(code **)(*param_1 + 4))(param_1);
    piVar1 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar1 + 0x38))(piVar1,auStack_3c,1,0,1);
  }
  else {
    FUN_001b8b80(auStack_50,param_1);
    FUN_001b8b80(auStack_64,param_1);
    FUN_001b8b80(auStack_78,param_1);
    FUN_001b8b80(auStack_8c,param_1);
    uVar6 = FUN_00249204(param_1[5]);
    uVar6 = FUN_00248dc0(0,DAT_000fbfd8,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar7 = FUN_00249204(param_1[6]);
    uVar7 = FUN_00249444((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,uVar5);
    iVar2 = FUN_00249194();
    uVar8 = FUN_00249204(param_1[6] + -1);
    FUN_00249444((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar6,uVar5,uVar7);
    iVar3 = FUN_00249194();
    iVar4 = FUN_001b23b0(auStack_78);
    FUN_000649c4(auStack_78,iVar4 + iVar3);
    iVar4 = FUN_001b23b0(auStack_78);
    FUN_000649cc(auStack_78,iVar4 + 8);
    iVar4 = FUN_001b2390(auStack_78);
    FUN_000649bc(auStack_78,iVar4 + -2);
    iVar4 = FUN_001b2390(auStack_78);
    FUN_000649d4(auStack_78,iVar4 + 2);
    iVar4 = FUN_001b23b0(auStack_8c);
    FUN_000649c4(auStack_8c,iVar4 + iVar3);
    iVar3 = FUN_001b23b0(auStack_8c);
    FUN_000649cc(auStack_8c,iVar3 + 8);
    iVar3 = FUN_001b23c8(auStack_64);
    FUN_000649d4(auStack_8c,iVar3 + 2);
    iVar3 = FUN_001b23c8(auStack_64);
    FUN_000649bc(auStack_8c,iVar3 + -2);
    iVar3 = FUN_001b23b0(auStack_64);
    FUN_000649c4(auStack_64,iVar3 + iVar2);
    iVar2 = FUN_001b23b0(auStack_64);
    FUN_000649cc(auStack_64,iVar2 + 8);
    iVar2 = FUN_001b2390(auStack_64);
    FUN_000649bc(auStack_64,iVar2 + -2);
    iVar2 = FUN_001b23c8(auStack_64);
    FUN_000649d4(auStack_64,iVar2 + 2);
    if (0 < param_1[6]) {
      piVar1 = (int *)FUN_0022bc90(param_1 + 1);
      (**(code **)(*piVar1 + 0x38))(piVar1,auStack_78,1,1,1);
      piVar1 = (int *)FUN_0022bc90(param_1 + 1);
      (**(code **)(*piVar1 + 0x38))(piVar1,auStack_8c,1,1,1);
    }
    piVar1 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar1 + 0x38))(piVar1,auStack_50,1,0,1);
    piVar1 = (int *)FUN_0022bc90(param_1 + 1);
    (**(code **)(*piVar1 + 0x38))(piVar1,auStack_64,1,0,1);
    FUN_00064a58(auStack_8c);
    FUN_00064a58(auStack_78);
    FUN_00064a58(auStack_64);
    FUN_00064a58(auStack_50);
  }
  FUN_00064a58(auStack_3c);
  return;
}

