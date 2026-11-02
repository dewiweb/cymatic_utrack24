// rea decompile_all
// name: FUN_00164534
// address: 0x164534
// body: available
// range: 0x164534-0x1645b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00164534(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  piVar3 = (int *)(param_1 + -0x114);
  uVar4 = *DAT_001645b8;
  uVar5 = DAT_001645b8[1];
  puVar1 = (undefined4 *)FUN_001a0808(0x1c,1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = DAT_001645bc;
    puVar1[1] = piVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    *(char *)(puVar1 + 4) = (char)param_2;
    puVar1[5] = param_3;
    *(undefined1 *)(puVar1 + 6) = param_4;
  }
  iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,puVar1,0);
  if (iVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001645b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),param_2,2);
  return;
}

