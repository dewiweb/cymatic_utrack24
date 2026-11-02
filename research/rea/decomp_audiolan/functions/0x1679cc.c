// rea decompile_all
// name: FUN_001679cc
// address: 0x1679cc
// body: available
// range: 0x1679cc-0x167ad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001679cc(int param_1,undefined4 param_2,undefined1 param_3,undefined2 *param_4,
                 undefined1 *param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  piVar9 = (int *)(param_1 + -0x114);
  uVar1 = *param_5;
  uVar2 = param_5[1];
  uVar4 = *param_4;
  uVar5 = param_4[1];
  uVar3 = param_5[2];
  uVar10 = *DAT_00167ad8;
  uVar11 = DAT_00167ad8[1];
  puVar7 = (undefined4 *)FUN_001a0808(0x1c,1);
  uVar6 = DAT_00167adc;
  if (puVar7 != (undefined4 *)0x0) {
    *(undefined2 *)((int)puVar7 + 0x12) = uVar4;
    *puVar7 = uVar6;
    *(undefined1 *)((int)puVar7 + 0x16) = uVar1;
    *(undefined1 *)((int)puVar7 + 0x17) = uVar2;
    *(undefined1 *)(puVar7 + 6) = uVar3;
    puVar7[1] = piVar9;
    *(undefined2 *)(puVar7 + 5) = uVar5;
    puVar7[2] = uVar10;
    puVar7[3] = uVar11;
    *(char *)(puVar7 + 4) = (char)param_2;
    *(undefined1 *)((int)puVar7 + 0x11) = param_3;
  }
  iVar8 = (**(code **)(*piVar9 + 0x2c))(piVar9,puVar7,0);
  if (iVar8 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00167ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),param_2,2);
  return;
}

