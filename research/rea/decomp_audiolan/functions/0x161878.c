// rea decompile_all
// name: FUN_00161878
// address: 0x161878
// body: available
// range: 0x161878-0x1618af inclusive
// range: 0x1618e4-0x1618e7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1618ac to 0x16dbb0 switch8_r3 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: switch8_r3 replaced with injection: switch8_r3 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001618ac) */
/* WARNING: Removing unreachable block (ram,0x001618ac) */

uint FUN_00161878(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x10) = param_2;
  param_2 = *(uint *)(param_1 + 0x14) & param_2;
  piVar2 = DAT_00161930;
  if ((param_2 & param_3) == 0) {
    return param_2;
  }
  for (; *piVar2 != 0; piVar2 = piVar2 + 1) {
  }
                    /* WARNING: Could not recover jumptable at 0x001618ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  if (DAT_001618b0 <= param_2) {
    param_2 = (uint)DAT_001618b0;
  }
  iVar3 = (uint)*(byte *)(param_2 + 0x1618b1) * 2;
  uVar1 = (*(code *)(iVar3 + 0x1618b1))
                    (0,DAT_00161930,s_std__ios__badbit__std__ios__fail_001618e8,iVar3,param_4);
  return uVar1;
}

