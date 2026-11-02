// rea decompile_all
// name: FUN_00165e6c
// address: 0x165e6c
// body: available
// range: 0x165e6c-0x165f23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00165e6c(int param_1,undefined4 param_2,undefined4 *param_3,undefined2 param_4,
                 undefined2 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar5 = (int *)(param_1 + -0x114);
  uVar7 = *(undefined4 *)(DAT_00165f24 + 0x298);
  uVar2 = *(undefined4 *)(DAT_00165f24 + 0x29c);
  uVar6 = *param_3;
  puVar3 = (undefined4 *)FUN_001a0808(0x20,1);
  uVar1 = DAT_00165f28;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[3] = uVar2;
    *puVar3 = uVar1;
    puVar3[1] = piVar5;
    puVar3[2] = uVar7;
    *(char *)(puVar3 + 4) = (char)param_2;
    puVar3[5] = uVar6;
    *(undefined2 *)(puVar3 + 6) = param_4;
    *(undefined2 *)((int)puVar3 + 0x1a) = param_5;
    *(undefined1 *)(puVar3 + 7) = param_6;
    *(undefined1 *)((int)puVar3 + 0x1d) = param_7;
  }
  iVar4 = (**(code **)(*piVar5 + 0x2c))(piVar5,puVar3,0);
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00165f20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),param_2,2);
    return;
  }
  return;
}

