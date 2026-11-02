// rea decompile_all
// name: FUN_004c560e
// address: 0x4c560e
// body: available
// range: 0x4c560e-0x4c565c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c560e(void)

{
  char *pcVar1;
  int iVar2;
  int unaff_ESI;
  
  pcVar1 = (char *)(unaff_ESI + 0x84);
  if (*pcVar1 == '\0') {
    *pcVar1 = '\x01';
    iVar2 = *(int *)(unaff_ESI + 0x70);
    if (iVar2 != 0) {
      *(undefined4 *)(unaff_ESI + 0x70) = 0;
      FUN_004f4fea(unaff_ESI,iVar2,0);
      FUN_004c0c1f();
      *(undefined4 *)(unaff_ESI + 0x70) = 0;
    }
    *pcVar1 = '\0';
  }
  return;
}

