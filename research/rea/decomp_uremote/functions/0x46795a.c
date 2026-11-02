// rea decompile_all
// name: FUN_0046795a
// address: 0x46795a
// body: available
// range: 0x46795a-0x4679ea inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0046795a(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(unaff_ESI + 0x10));
  uVar2 = 0;
  cVar1 = FUN_0046790b();
  if (cVar1 != '\0') {
    FUN_00467918();
    FUN_00467a4b();
    if (param_1 != 0) {
      FUN_0046791d(unaff_ESI,param_1);
    }
    cVar1 = FUN_0046790b();
    if (cVar1 != '\0') {
      FUN_0046537e(&param_1);
      FUN_00461c52(&param_1);
      FUN_004652d6();
      FUN_0046d59c();
      *(undefined4 *)(unaff_ESI + 8) = 0;
      *(undefined4 *)(unaff_ESI + 0xc) = 0;
      goto LAB_004679d7;
    }
  }
  uVar2 = 1;
LAB_004679d7:
  LeaveCriticalSection((LPCRITICAL_SECTION)(unaff_ESI + 0x10));
  return uVar2;
}

