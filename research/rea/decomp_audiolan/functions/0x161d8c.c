// rea decompile_all
// name: FUN_00161d8c
// address: 0x161d8c
// body: available
// range: 0x161d8c-0x161e8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00161d8c(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_1c;
  
  puVar4 = (undefined4 *)(*(int *)(param_1 + 0x60) + param_3 * 0x1c);
  uVar6 = *puVar4;
  uVar7 = puVar4[1];
  uVar1 = FUN_000b9aac();
  uVar1 = FUN_00159bac(uVar1,uVar6);
  iVar2 = FUN_00061694(uVar1,uVar7);
  if (iVar2 == 0) {
    return;
  }
  *(undefined2 *)(puVar4 + 5) = 0;
  puVar4[6] = 0;
  iVar3 = FUN_00070690(iVar2,DAT_00161e90,0);
  if (iVar3 == 0) {
    FUN_000e66bc(param_1 + -0xc,param_3,2,0);
    FUN_000e66bc(param_1 + -0xc,param_3,2,0);
    piVar5 = *(int **)(param_1 + 0x84);
    FUN_00155144(&uStack_1c,iVar2);
    (**(code **)(*piVar5 + 0x264))(piVar5,param_3,uStack_1c,puVar4[6] & 0xffff);
    FUN_001da44c(&uStack_1c);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00161e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x84) + 0x264))(*(int **)(param_1 + 0x84),param_3,0);
  return;
}

