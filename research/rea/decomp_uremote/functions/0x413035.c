// rea decompile_all
// name: _free
// address: 0x413035
// body: available
// range: 0x413035-0x413039 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void __cdecl _free(void *_Memory)

{
  int iVar1;
  BOOL BVar2;
  int *piVar3;
  DWORD DVar4;
  
  if (_Memory != (void *)0x0) {
    if (DAT_0095de2c == 3) {
      __lock(4);
      iVar1 = ___sbh_find_block(_Memory);
      if (iVar1 != 0) {
        ___sbh_free_block(iVar1,_Memory);
      }
      FUN_005ae21b();
      if (iVar1 != 0) {
        return;
      }
    }
    BVar2 = HeapFree(DAT_0095cd74,0,_Memory);
    if (BVar2 == 0) {
      piVar3 = __errno();
      DVar4 = GetLastError();
      iVar1 = __get_errno_from_oserr(DVar4);
      *piVar3 = iVar1;
    }
  }
  return;
}

