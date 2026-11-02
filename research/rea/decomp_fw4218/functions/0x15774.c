// rea decompile_all
// name: FUN_00015774
// address: 0x15774
// body: available
// range: 0x15774-0x15857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00015774(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_00015894;
  iVar3 = *(int *)(param_1 + 0x10);
  if (((*(uint *)(iVar3 + 8) & 4) != 0) &&
     (iVar2 = DAT_00015894[1], *(int *)(param_1 + 0x3c) != iVar2)) {
    *(int *)(param_1 + 0x3c) = iVar2;
    *piVar1 = iVar2;
  }
  iVar2 = DAT_00015898;
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(int *)(DAT_00015898 + 8) = *(int *)(DAT_00015898 + 8) + 1;
    iVar3 = (**(code **)**(undefined4 **)(param_1 + 4))
                      (*(undefined4 **)(param_1 + 4),iVar3,*(undefined4 *)(param_1 + 0x2c));
    if (iVar3 != 0) goto LAB_000157f0;
    *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
  }
  FUN_00012bfc(*(undefined4 *)(param_1 + 0x10));
LAB_000157f0:
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(byte *)(*(int *)(param_1 + 0x34) + 0x16) = *(byte *)(*(int *)(param_1 + 0x34) + 0x16) & 0xfe;
  if (*(char *)(param_1 + 0x30) != '\0') {
    iVar3 = *(int *)(param_1 + 0x34);
    if ((*(byte *)(iVar3 + 0x16) & 0x20) == 0) {
      *(byte *)(iVar3 + 0x16) = *(byte *)(iVar3 + 0x16) | 0x20;
    }
    DAT_b000000e = DAT_b000000e;
    return;
  }
  return;
}

