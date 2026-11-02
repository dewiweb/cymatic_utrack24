// rea decompile_all
// name: FUN_001620c0
// address: 0x1620c0
// body: available
// range: 0x1620c0-0x16220f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x16220c to 0x1b7d8 <EXTERNAL>::thunk_EXT_FUN_0040010c (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001620c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x241) == '\0') {
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x230) + 0xc04) != '\x01') {
    return;
  }
  iVar3 = 0;
  while( true ) {
    FUN_001f00bc(param_1 + 0x1dc);
    if (*(int *)(param_1 + 0x1d4) == 0) {
      FUN_001f06d4(param_1 + 0x1dc);
      goto LAB_001621dc;
    }
    iVar1 = *(int *)(param_1 + 0x1cc);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 8);
      *(int *)(param_1 + 0x1cc) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x1d0) = 0;
      }
      else {
        *(undefined4 *)(iVar2 + 4) = 0;
      }
      *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + -1;
      *(undefined4 *)(iVar1 + 4) = 0;
      *(undefined4 *)(iVar1 + 8) = 0;
      iVar2 = iVar1;
    }
    FUN_001f06d4(param_1 + 0x1dc);
    if (iVar2 == 0) goto LAB_001621dc;
    iVar1 = FUN_00154a30(*(int *)(param_1 + 0x230) + 0x20,iVar2);
    if (iVar1 == 0) break;
    FUN_0015223c(iVar2);
    iVar3 = iVar3 + 1;
    *(int *)(param_1 + 0x238) = *(int *)(param_1 + 0x238) + 1;
    if (3 < iVar3) {
LAB_001621dc:
      FUN_001f00bc(param_1 + 0x1dc);
      iVar3 = *(int *)(param_1 + 0x1d4);
      FUN_001f06d4(param_1 + 0x1dc);
      if (iVar3 != 0) {
        thunk_EXT_FUN_0040010c(param_1 + 0x208);
        return;
      }
      return;
    }
  }
  FUN_001f00bc(param_1 + 0x1dc);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  if (*(int *)(param_1 + 0x1cc) == 0) {
    *(int *)(param_1 + 0x1cc) = iVar2;
    *(int *)(param_1 + 0x1d0) = iVar2;
  }
  else {
    *(int *)(iVar2 + 8) = *(int *)(param_1 + 0x1cc);
    *(int *)(*(int *)(param_1 + 0x1cc) + 4) = iVar2;
    *(int *)(param_1 + 0x1cc) = iVar2;
  }
  *(int *)(param_1 + 0x1d4) = *(int *)(param_1 + 0x1d4) + 1;
  FUN_001f06d4(param_1 + 0x1dc);
  goto LAB_001621dc;
}

