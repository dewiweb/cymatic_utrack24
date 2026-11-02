// rea decompile_all
// name: FUN_00470d88
// address: 0x470d88
// body: available
// range: 0x470d88-0x470dda inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_00470d88(void)

{
  int iVar1;
  undefined1 *puVar2;
  int in_ECX;
  int *unaff_ESI;
  
  puVar2 = &LAB_005d982f;
  if (0 < in_ECX) {
    puVar2 = (undefined1 *)FUN_0046ea7f();
    while (in_ECX = in_ECX + -1, -1 < in_ECX) {
      iVar1 = *unaff_ESI + unaff_ESI[2] * 4;
      puVar2 = (undefined1 *)0x0;
      if (iVar1 != 0) {
        puVar2 = (undefined1 *)FUN_0046537e(iVar1);
      }
      unaff_ESI[2] = unaff_ESI[2] + 1;
    }
  }
  return puVar2;
}

