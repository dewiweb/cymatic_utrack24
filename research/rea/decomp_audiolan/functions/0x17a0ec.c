// rea decompile_all
// name: FUN_0017a0ec
// address: 0x17a0ec
// body: available
// range: 0x17a0ec-0x17a1bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17a188 to 0x1a474 <EXTERNAL>::thunk_EXT_FUN_00400034 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0017a0ec(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x78);
  thunk_EXT_FUN_0040001c();
  if ((*(int *)(param_1 + 0x74) != 0 && piVar2 != (int *)0x0) && (*piVar2 == DAT_0017a1bc)) {
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (*(int *)(param_1 + 0x7c) == param_1) {
      piVar2[3] = 0;
    }
    else {
      piVar2[3] = *(int *)(param_1 + 0x7c);
      *(undefined4 *)(*(int *)(param_1 + 0x7c) + 0x80) = *(undefined4 *)(param_1 + 0x80);
      *(undefined4 *)(*(int *)(param_1 + 0x80) + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
    }
    piVar2[4] = piVar2[4] + -1;
    piVar2 = DAT_0017a1c0;
    if (*(int *)(param_1 + 0x3c) == 0xd) {
      *(undefined4 *)(param_1 + 0x90) = 0xd;
      *piVar2 = *piVar2 + 1;
      thunk_EXT_FUN_00400034();
      iVar1 = FUN_0017b780(param_1);
      if (iVar1 != 0) {
        FUN_0001181c();
      }
    }
    else {
      thunk_EXT_FUN_00400034();
    }
    if (*(int *)(param_1 + 0x70) == 0) {
      *(undefined4 *)(param_1 + 0x58) = 0;
    }
    else {
      FUN_0017c180(param_1 + 0x58);
    }
    thunk_EXT_FUN_0040001c();
  }
  thunk_EXT_FUN_00400034();
  return;
}

