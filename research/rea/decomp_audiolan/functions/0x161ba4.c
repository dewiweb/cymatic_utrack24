// rea decompile_all
// name: FUN_00161ba4
// address: 0x161ba4
// body: available
// range: 0x161ba4-0x161d87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00161ba4(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 auStack_3c [2];
  int iStack_34;
  undefined4 uStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  iVar7 = param_1 + -0xc;
  puVar6 = (undefined4 *)(*(int *)(param_1 + 0x60) + param_3 * 0x1c);
  uVar8 = *puVar6;
  uVar9 = puVar6[1];
  iStack_34 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  uVar1 = FUN_000b9aac();
  uVar1 = FUN_00159bac(uVar1,uVar8);
  iVar2 = FUN_00061694(uVar1,uVar9);
  if (iVar2 == 0) {
    return;
  }
  iVar3 = FUN_00070690(iVar2,uStack_28,param_5);
  pcVar5 = *(code **)(**(int **)(param_1 + 0x88) + 0x38);
  if (iVar3 == 0) {
    piVar4 = (int *)(*pcVar5)();
    FUN_00155144(auStack_3c,iVar2);
    (**(code **)(*piVar4 + 0x38))(piVar4,auStack_3c[0],puVar6 + 5);
    FUN_001da44c(auStack_3c);
    puVar6[6] = *(undefined4 *)(iVar2 + 8);
    FUN_000e66bc(iVar7,param_3,2,0);
    FUN_000e66bc(iVar7,param_3,2,0);
    FUN_000e66bc(iVar7,param_3,4,0);
    piVar4 = *(int **)(param_1 + 0x84);
    FUN_00155144(auStack_3c,iVar2);
    (**(code **)(*piVar4 + 0x264))(piVar4,param_3,auStack_3c[0],puVar6[6] & 0xffff);
    FUN_001da44c(auStack_3c);
    return;
  }
  piVar4 = (int *)(*pcVar5)();
  (**(code **)(*piVar4 + 0x38))(piVar4,uStack_28,puVar6 + 5);
  puVar6[6] = param_5;
  FUN_000e66bc(iVar7,param_3,2,0);
  FUN_000e66bc(iVar7,param_3,2,0);
  FUN_000e66bc(iVar7,param_3,4,0);
  piVar4 = *(int **)(param_1 + 0x84);
  FUN_00155144(auStack_3c,iVar2);
  (**(code **)(*piVar4 + 0x264))(piVar4,param_3,auStack_3c[0],puVar6[6] & 0xffff);
  FUN_001da44c(auStack_3c);
  return;
}

