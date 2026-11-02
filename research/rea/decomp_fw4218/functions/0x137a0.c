// rea decompile_all
// name: FUN_000137a0
// address: 0x137a0
// body: available
// range: 0x137a0-0x13833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x13830 to 0x1f06d4 FUN_001f06d4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00013824) */

void FUN_000137a0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint extraout_r1;
  undefined4 local_18;
  
  local_18 = param_4;
  FUN_001f00bc(param_1 + 4);
  uVar2 = param_1 & 0xffffff00;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x38);
    if (iVar1 != 0) {
      uVar2 = *(uint *)(iVar1 + 4);
    }
    if (iVar1 == 0 || uVar2 == 0) break;
    if (*(int *)(iVar1 + 4) != 0) {
      puVar3 = *(undefined1 **)(iVar1 + 0x10) + 1;
      local_18 = CONCAT31(local_18._1_3_,**(undefined1 **)(iVar1 + 0x10));
      if (*(undefined1 **)(iVar1 + 0xc) <= puVar3) {
        puVar3 = *(undefined1 **)(iVar1 + 8);
      }
      *(undefined1 **)(iVar1 + 0x10) = puVar3;
      FUN_00029894(iVar1 + 4);
    }
    FUN_00013374(*(undefined4 *)(param_1 + 0x34),&local_18,1);
    uVar2 = extraout_r1;
  }
  FUN_001f06d4(param_1 + 4);
  return;
}

