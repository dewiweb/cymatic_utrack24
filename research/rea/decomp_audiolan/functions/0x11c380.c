// rea decompile_all
// name: FUN_0011c380
// address: 0x11c380
// body: available
// range: 0x11c380-0x11c593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0011c380(int param_1,int param_2,uint param_3,code *param_4,undefined4 param_5,ushort param_6)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  ushort *puVar6;
  uint uVar7;
  undefined1 auStack_40 [12];
  int iStack_34;
  int local_30;
  uint uStack_2c;
  code *local_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  piVar2 = (int *)FUN_0012ac8c(*(int *)(param_1 + 0x24) + 0x90);
  while( true ) {
    if (piVar2 == (int *)0x0) {
      return 0;
    }
    iVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2);
    if (iVar3 == param_2) break;
    piVar2 = (int *)FUN_0012ab60(*(int *)(param_1 + 0x24) + 0x90,piVar2);
  }
  if (piVar2 == (int *)0x0) {
    return 0;
  }
  iVar3 = (**(code **)(*piVar2 + 0x24))(piVar2);
  uVar4 = FUN_00142754(piVar2);
  piVar5 = (int *)FUN_00130ef0(uVar4,4,local_28,0);
  if (piVar5 == (int *)0x0) {
    return 0;
  }
  puVar6 = (ushort *)(**(code **)(*piVar5 + 0x24))(piVar5);
  if ((*(int *)(puVar6 + 6) == 0 || param_3 == 0) || (puVar6[8] < param_3)) {
    *puVar6 = param_6;
  }
  else {
    *(ushort *)(*(int *)(puVar6 + 6) + param_3 * 0xc + -0xc) = param_6;
  }
  uVar4 = FUN_0010e728(auStack_40,param_5);
  if ((*(int *)(puVar6 + 6) == 0 || param_3 == 0) || (puVar6[8] < param_3)) {
    puVar6 = puVar6 + 2;
  }
  else {
    puVar6 = (ushort *)(*(int *)(puVar6 + 6) + param_3 * 0xc + -8);
  }
  FUN_0010e820(puVar6,uVar4);
  FUN_0010e7f4(auStack_40);
  if (((local_28 == FUN_00001010) &&
      (uVar7 = (uint)*(ushort *)(iVar3 + 8), uVar7 != 0 && param_3 != 0)) && (param_3 <= uVar7)) {
    uVar1 = param_3 - 1 & 0xffff;
    if (*(int *)(iVar3 + 0x10) != 0 && uVar1 < uVar7) {
      FUN_0010e240(*(int *)(iVar3 + 0x10) + uVar1 * 8,param_5);
    }
    if (*(int **)(iVar3 + 0xc) != (int *)0x0) {
      (**(code **)(**(int **)(iVar3 + 0xc) + 0x38))();
    }
    FUN_0012f6e4(*(undefined4 *)(param_1 + 0x20),local_30,uVar1);
  }
  (**(code **)(*piVar5 + 0x70))(piVar5,param_3,0);
  if (local_28 == FUN_00001010 && (param_6 & 0x80) == 0) {
    (**(code **)(*piVar2 + 0xa4))(piVar2,param_5);
    piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 0x30))();
    (**(code **)(*piVar2 + 0xb0))();
  }
  return 1;
}

