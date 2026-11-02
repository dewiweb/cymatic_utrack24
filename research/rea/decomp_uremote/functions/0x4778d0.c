// rea decompile_all
// name: FUN_004778d0
// address: 0x4778d0
// body: available
// range: 0x4778d0-0x477959 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004778d0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *in_ECX;
  int iVar4;
  
  *param_1 = 0;
  param_1[1] = *in_ECX;
  param_1[2] = in_ECX[1];
  param_1[3] = in_ECX[2];
  param_1[4] = in_ECX[3];
  param_1[5] = 0x20;
  param_1[6] = 0x41;
  *(undefined1 *)(param_1 + 7) = 1;
  FUN_00477dfd();
  *(undefined4 *)*param_1 = 0;
  iVar1 = *in_ECX;
  iVar2 = in_ECX[2];
  iVar4 = in_ECX[3];
  puVar3 = (undefined4 *)*param_1;
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    puVar3[4] = 0;
    *puVar3 = 2;
    puVar3[1] = iVar1 << 8;
    puVar3[2] = 0xff;
    puVar3[3] = (iVar2 + iVar1) * 0x100;
    puVar3 = puVar3 + param_1[6];
  }
  return param_1;
}

