// rea decompile_all
// name: FUN_001766f8
// address: 0x1766f8
// body: available
// range: 0x1766f8-0x176751 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x176742 to 0x3538 FUN_00003538 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001766f8(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  undefined4 local_10;
  
  puVar1 = (uint *)*param_1;
  if (puVar1 != (uint *)0x0) {
    uVar2 = *puVar1 & 7;
    if (((((uVar2 == 0) || (uVar2 == 1)) && (param_2 != 1)) && (param_2 != 0)) &&
       ((uVar2 == 0 || ((param_2 != 7 && (param_2 != 8)))))) {
      local_10 = param_4;
      if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00003538();
      }
      local_10 = FUN_001748fa(puVar1,*(undefined4 *)(*puVar1 & 0xffffffe0),param_2);
      if (param_2 == 7) {
        FUN_00176810(&local_10,&DAT_00176754);
      }
      return local_10;
    }
  }
  return 0;
}

