// rea decompile_all
// name: ___tzset
// address: 0x5b1f3f
// body: available
// range: 0x5b1f3f-0x5b1f84 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    ___tzset
   
   Library: Visual Studio 2008 Release */

void __cdecl ___tzset(void)

{
  if (DAT_0095ca24 == 0) {
    __lock(6);
    if (DAT_0095ca24 == 0) {
      __tzset_nolock();
      DAT_0095ca24 = DAT_0095ca24 + 1;
    }
    FUN_005b1f85();
  }
  return;
}

