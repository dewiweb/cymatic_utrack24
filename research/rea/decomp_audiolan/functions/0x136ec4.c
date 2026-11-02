// rea decompile_all
// name: FUN_00136ec4
// address: 0x136ec4
// body: available
// range: 0x136ec4-0x136f8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x136f74 to 0x132544 FUN_00132544 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00136ec4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int unaff_r4;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *(uint *)(param_1 + 8);
  if ((int)uVar2 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar2 & 1;
    if (uVar3 != 0) {
      unaff_r4 = *(int *)(param_1 + 0xc);
    }
    uVar1 = 0;
    if (uVar3 != 0) {
      do {
        if (*(int *)(unaff_r4 + uVar1 * 0x1c) == param_2) goto LAB_00136f48;
        uVar1 = uVar1 + 1;
      } while ((int)uVar1 < (int)uVar3);
    }
  }
  uVar1 = uVar3;
  if ((int)uVar2 <= (int)uVar1) {
    return;
  }
  do {
    if (*(int *)(*(int *)(param_1 + 0xc) + uVar1 * 0x1c) == param_2) {
LAB_00136f48:
      if (-1 < (int)uVar1) {
        FUN_00132544(*(int *)(param_1 + 0xc) + uVar1 * 0x1c + 0x10,param_3,param_4);
        return;
      }
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0xc) + uVar1 * 0x1c + 0x1c) == param_2) {
      uVar1 = uVar1 + 1;
      goto LAB_00136f48;
    }
    uVar1 = uVar1 + 2;
    if ((int)uVar2 <= (int)uVar1) {
      return;
    }
  } while( true );
}

