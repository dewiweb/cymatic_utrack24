// rea decompile_all
// name: FUN_0014e450
// address: 0x14e450
// body: available
// range: 0x14e450-0x14e517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x14e514 to 0x155bc FUN_000155bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0014e450(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_000034d0(*(undefined4 *)(param_1 + 0x10c));
  if (*(char *)(param_1 + 0x111) == '\0') {
    if (iVar2 <= *(int *)(param_1 + 0x11c)) {
      *(undefined1 *)(*(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0x11c) + 1) = 0;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x10c) + iVar2 + 1) = 0;
    if (*(int *)(param_1 + 0x11c) < iVar2) {
      do {
        *(undefined1 *)(*(int *)(param_1 + 0x10c) + iVar2) =
             *(undefined1 *)(*(int *)(param_1 + 0x10c) + iVar2 + -1);
        iVar2 = iVar2 + -1;
      } while (*(int *)(param_1 + 0x11c) < iVar2);
    }
  }
  *(char *)(*(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0x11c)) = (char)param_2;
  uVar1 = DAT_0014e518;
  if (*(char *)(param_1 + 0x111) == '\0') {
    if (*(char *)(param_1 + 0x112) != '\0') {
      return;
    }
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + 1;
    FUN_000155bc(param_2,uVar1);
    return;
  }
  iVar3 = *(int *)(param_1 + 0x11c) + 1;
  iVar2 = 1;
  if (1 < iVar3) {
    do {
      if (*(char *)(param_1 + 0x112) == '\0') {
        thunk_FUN_000028a4(&DAT_0014de60);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar3);
  }
  if (*(char *)(param_1 + 0x112) == '\0') {
    FUN_000028a4(&DAT_0014de64,*(undefined4 *)(param_1 + 0x10c));
    FUN_000028a4(&DAT_0014de68);
  }
  iVar3 = FUN_000034d0(*(undefined4 *)(param_1 + 0x10c));
  iVar2 = *(int *)(param_1 + 0x11c) + 1;
  *(int *)(param_1 + 0x11c) = iVar2;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  *(int *)(param_1 + 0x11c) = iVar2;
  if (iVar3 < iVar2) {
    iVar2 = iVar3;
  }
  *(int *)(param_1 + 0x11c) = iVar2;
  if (iVar3 < iVar2) {
    return;
  }
  do {
    iVar3 = iVar3 + -1;
    if (*(char *)(param_1 + 0x112) == '\0') {
      thunk_FUN_000028a4(&DAT_0014de60);
    }
  } while (*(int *)(param_1 + 0x11c) <= iVar3);
  return;
}

