// rea decompile_all
// name: FUN_004fbec6
// address: 0x4fbec6
// body: available
// range: 0x4fbec6-0x4fbf7a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int * FUN_004fbec6(int *param_1)

{
  int iVar1;
  int *in_ECX;
  int extraout_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  }
  FUN_00476f96();
  param_1[7] = *(int *)(extraout_ECX + 0x18);
  param_1[8] = *(int *)(extraout_ECX + 0x1c);
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(extraout_ECX + 0x20);
  *(undefined1 *)((int)param_1 + 0x25) = *(undefined1 *)(extraout_ECX + 0x21);
  FUN_00476d39();
  param_1[0x13] = in_ECX[0x13];
  param_1[0x14] = in_ECX[0x14];
  FUN_0049f50b();
  param_1[0x16] = in_ECX[0x16];
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_0049f50b();
  if (in_ECX[0x19] != 0) {
    iVar1 = FUN_005af82d(0x18);
    if (iVar1 != 0) {
      iVar1 = FUN_004faccc();
      goto LAB_004fbf6e;
    }
  }
  iVar1 = 0;
LAB_004fbf6e:
  param_1[0x19] = iVar1;
  return param_1;
}

