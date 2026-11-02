// rea decompile_all
// name: FUN_0012eb90
// address: 0x12eb90
// body: available
// range: 0x12eb90-0x12ecb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0012eb90(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  short sVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 0x30) != '\0') {
    return;
  }
  FUN_001a0700(param_1 + 8);
  piVar4 = *(int **)(param_1 + 0x34);
  if (piVar4 != (int *)0x0) {
    *(short *)(piVar4 + 1) = (short)piVar4[1] + 1;
  }
  FUN_001a0d18(param_1 + 8);
  if (piVar4 != (int *)0x0) {
    iVar1 = piVar4[3];
    bVar5 = iVar1 == param_2;
    if (bVar5) {
      iVar1 = piVar4[4];
    }
    bVar6 = bVar5 && iVar1 == param_3;
    if (bVar5 && iVar1 == param_3) {
      bVar6 = (int *)piVar4[5] == param_4;
    }
    if (bVar6) goto LAB_0012ec88;
  }
  iVar1 = FUN_0017bfc0();
  puVar2 = (undefined4 *)FUN_0016d7a4(0x20,DAT_0012ecb4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = DAT_0012ecb8;
    *(undefined2 *)(puVar2 + 1) = 1;
    puVar2[2] = 0;
    puVar2[3] = param_2;
    puVar2[6] = iVar1 + param_5;
    puVar2[5] = param_4;
    puVar2[4] = param_3;
    *(undefined1 *)(puVar2 + 7) = 0;
    (**(code **)(*param_4 + 0x38))(param_4);
    FUN_001a0700(param_1 + 8);
    if (*(int *)(param_1 + 0x38) == 0) {
      *(undefined4 **)(param_1 + 0x34) = puVar2;
    }
    else {
      *(undefined4 **)(*(int *)(param_1 + 0x38) + 8) = puVar2;
    }
    *(undefined4 **)(param_1 + 0x38) = puVar2;
    FUN_001a0d18(param_1 + 8);
  }
  if (piVar4 == (int *)0x0) {
    return;
  }
LAB_0012ec88:
  sVar3 = (short)piVar4[1] + -1;
  *(short *)(piVar4 + 1) = sVar3;
  if (sVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0012ecb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar4 + 4))();
    return;
  }
  return;
}

