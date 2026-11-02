// rea decompile_all
// name: FUN_001d631c
// address: 0x1d631c
// body: available
// range: 0x1d631c-0x1d638f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1d638c to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001d631c(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_2 + 3U & 0xfffffffc;
  if (*(uint *)*param_1 < ((uint *)*param_1)[1] + uVar3) {
    uVar2 = param_1[1];
    if (param_1[1] <= uVar3) {
      uVar2 = uVar3;
    }
    puVar1 = (uint *)FUN_0019b388(uVar2 + 0xc);
    puVar1[1] = 0;
    *puVar1 = uVar2;
    puVar1[2] = *param_1;
    *param_1 = (uint)puVar1;
  }
  uVar2 = *param_1;
  if ((uVar2 + *(int *)(uVar2 + 4) + 0xc & 3) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  *(uint *)(uVar2 + 4) = *(int *)(uVar2 + 4) + uVar3;
  return;
}

