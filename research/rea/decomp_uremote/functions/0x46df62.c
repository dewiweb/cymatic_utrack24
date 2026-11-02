// rea decompile_all
// name: FUN_0046df62
// address: 0x46df62
// body: available
// range: 0x46df62-0x46dfb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0046df62(void)

{
  char cVar1;
  int unaff_EBP;
  int *unaff_EDI;
  
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_0046dff2(*(undefined4 *)(unaff_EBP + -0x14),0);
  }
  *(undefined4 *)(unaff_EBP + -4) = 5;
  cVar1 = thunk_FUN_005c4124();
  if (cVar1 == '\0') {
    FUN_0046f478();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(*(int *)(*unaff_EDI + 4) + 0x28 + (int)unaff_EDI) != 0) {
    FUN_005cd52d();
  }
  return;
}

