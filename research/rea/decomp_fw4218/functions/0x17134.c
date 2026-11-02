// rea decompile_all
// name: FUN_00017134
// address: 0x17134
// body: available
// range: 0x17134-0x1721b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1719c to 0x12bfc FUN_00012bfc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00017134(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xac);
  }
  if (iVar1 != 0 && iVar2 != 0) {
    iVar2 = FUN_000789c4();
    if (*(int *)(iVar2 + *(int *)(param_1 + 0x2c) * 4 + 0x10) == 0) {
      if (*(char *)(param_3 + 0x26) != '\0') {
        FUN_001dad70(param_2,*(int *)(param_1 + 0x30) << 2);
      }
      *(int *)(iVar2 + *(int *)(param_1 + 0x2c) * 4 + 0x10) = param_2 + *(int *)(param_1 + 0x34) * 4
      ;
      if (*(int *)(param_1 + *(int *)(param_1 + 0x2c) * 4 + 0x20) != 0) {
        FUN_00012bfc();
      }
      *(int *)(param_1 + *(int *)(param_1 + 0x2c) * 4 + 0x20) = param_2;
      uVar3 = *(int *)(param_1 + 0x2c) + 1;
      *(uint *)(param_1 + 0x2c) = uVar3;
      if (2 < uVar3) {
        *(undefined4 *)(param_1 + 0x2c) = 0;
      }
      *(int *)(*(int *)(param_3 + 0x18) + 8) = *(int *)(*(int *)(param_3 + 0x18) + 8) + 1;
      return;
    }
    *(int *)(*(int *)(param_3 + 0x18) + 0x24) = *(int *)(*(int *)(param_3 + 0x18) + 0x24) + 1;
  }
  *(int *)(*(int *)(param_3 + 0x18) + 0x2c) = *(int *)(*(int *)(param_3 + 0x18) + 0x2c) + 1;
  FUN_00012bfc(param_2);
  return;
}

