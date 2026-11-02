// rea decompile_all
// name: FUN_0001721c
// address: 0x1721c
// body: available
// range: 0x1721c-0x172eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17264 to 0x12bfc FUN_00012bfc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x17270 to 0x17134 FUN_00017134 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0001721c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(int *)(param_1 + 0x14) == 0) {
      FUN_00017134(param_1);
      return;
    }
    iVar1 = *(int *)(param_1 + 0x14) + -1;
    *(int *)(param_1 + 0x14) = iVar1;
    if (iVar1 == 0) {
      FUN_00017134(param_1,*(undefined4 *)(param_1 + 0x1c));
      FUN_00017134(param_1,param_2,param_3);
      *(undefined4 *)(param_1 + 0x1c) = 0;
      return;
    }
    if (iVar1 == 1) {
      iVar1 = FUN_001eed14(param_2);
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0x34) = 0;
      }
      else {
        if (iVar1 == 8) {
          uVar2 = 0xf00000;
        }
        else {
          if (iVar1 != 9) {
            if (iVar1 == 10) {
              *(undefined4 *)(param_1 + 0x34) = 0x3c000000;
            }
            goto LAB_000172d8;
          }
          uVar2 = 0xec0000;
        }
        *(undefined4 *)(param_1 + 0x34) = uVar2;
      }
LAB_000172d8:
      if (*(int *)(param_1 + 0x1c) != 0) {
        FUN_00012bfc();
      }
      *(undefined4 *)(param_1 + 0x1c) = param_2;
      return;
    }
  }
  FUN_00012bfc(param_2);
  return;
}

