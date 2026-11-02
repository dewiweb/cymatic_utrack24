// rea decompile_all
// name: FUN_004fa5bc
// address: 0x4fa5bc
// body: available
// range: 0x4fa5bc-0x4fa637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

bool FUN_004fa5bc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *unaff_EDI;
  
  if (*unaff_EDI != 0) {
    *unaff_EDI = 0;
    FUN_00500959();
  }
  iVar2 = FUN_005af82d(0x1c);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004fa4ab(param_3);
  }
  iVar1 = *unaff_EDI;
  if ((iVar1 != iVar2) && (*unaff_EDI = iVar2, iVar1 != 0)) {
    FUN_00500959();
  }
  iVar2 = *unaff_EDI;
  if (((*(int *)(iVar2 + 0x10) == 0) || (*(int *)(iVar2 + 0xc) == 0)) && (iVar2 != 0)) {
    *unaff_EDI = 0;
    FUN_00500959();
  }
  return *unaff_EDI != 0;
}

