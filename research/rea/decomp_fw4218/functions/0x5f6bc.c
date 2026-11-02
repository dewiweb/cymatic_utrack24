// rea decompile_all
// name: FUN_0005f6bc
// address: 0x5f6bc
// body: available
// range: 0x5f6bc-0x5f7cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0005f6bc(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_30 [5];
  int *local_1c;
  undefined4 local_14;
  
  FUN_00123418(local_30,param_1 + 0x34,*(undefined4 *)(param_1 + 0x30),param_2,param_4);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x24) + 8))
                    (*(int **)(param_1 + 0x24),local_30,0xffffffff);
  local_30[0] = DAT_0005f7d0;
  piVar2 = DAT_0005f7cc;
  piVar3 = DAT_0005f7cc + 3;
  if (iVar1 != 0) {
    if (local_1c != piVar3) {
      piVar2 = local_1c + -3;
      iVar1 = *piVar2;
      if ((iVar1 == -1) || ((piVar2 != DAT_0005f7cc && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
        FUN_00173a54(local_1c + -3,local_1c[-2] + 8,0);
      }
    }
    return 0;
  }
  *param_3 = local_14;
  if (local_1c != piVar3) {
    piVar3 = local_1c + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != piVar2 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      FUN_00173a54(local_1c + -3,local_1c[-2] + 8,0);
    }
  }
  return 1;
}

