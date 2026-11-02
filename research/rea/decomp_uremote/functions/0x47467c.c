// rea decompile_all
// name: FUN_0047467c
// address: 0x47467c
// body: available
// range: 0x4745fb-0x47468a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0047467c(void)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = DAT_0095d684;
  if (DAT_0095d684 != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0095d774);
    while ((*(int *)(iVar2 + 0x48) != 0 && (*(int *)(*(int *)(iVar2 + 0x48) + 4) < 1))) {
      piVar1 = *(int **)(iVar2 + 0x48);
      piVar1[1] = piVar1[2];
      FUN_004746da(iVar2);
      FUN_0047468b();
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0095d774);
      (**(code **)(*piVar1 + 4))();
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0095d774);
    }
    LOCK();
    *(undefined4 *)(iVar2 + 0x4c) = 0;
    UNLOCK();
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0095d774);
    return;
  }
  return;
}

