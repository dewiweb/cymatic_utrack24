// rea decompile_all
// name: FUN_004c6fae
// address: 0x4c6fae
// body: available
// range: 0x4c6fae-0x4c7071 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x004c7025) */
/* WARNING: Removing unreachable block (ram,0x004c7028) */
/* WARNING: Removing unreachable block (ram,0x004c703c) */
/* WARNING: Removing unreachable block (ram,0x004c7045) */
/* WARNING: Removing unreachable block (ram,0x004c7050) */
/* WARNING: Removing unreachable block (ram,0x004c7059) */

void FUN_004c6fae(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_004c121d();
  if (0 < iVar2) {
    iVar2 = FUN_004c121d();
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      iVar3 = FUN_004c1221();
      if (((*(byte *)(iVar3 + 0x68) & 2) != 0) && (cVar1 = FUN_004c3153(), cVar1 != '\0')) {
        FUN_004f96b8(0,0);
        FUN_004f6004(iVar3);
      }
    }
    _free((void *)0x0);
  }
  return;
}

