// rea decompile_all
// name: FUN_004c45e6
// address: 0x4c45e6
// body: available
// range: 0x4c45e6-0x4c4668 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c45e6(undefined4 param_1,char param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EDI;
  
  if (*(char *)(unaff_EDI + 0x24) != '\0') {
    cVar1 = FUN_004a8763();
    if ((cVar1 == '\0') || (*(char *)(unaff_EDI + 0x25) == '\0')) {
      FUN_004c6ae6(1);
      FUN_004c6b25();
      FUN_004c6b17();
      param_2 = '\x01';
    }
  }
  if (param_2 == '\0') {
    iVar2 = FUN_004c6b98();
    if (iVar2 == *(int *)(unaff_EDI + 0x34)) goto LAB_004c4659;
  }
  uVar3 = FUN_004c6b98();
  *(undefined4 *)(unaff_EDI + 0x34) = uVar3;
  FUN_004c3525();
  FUN_004f5624();
LAB_004c4659:
  FUN_004c6b17();
  return;
}

