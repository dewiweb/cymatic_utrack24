// rea decompile_all
// name: FUN_004f0123
// address: 0x4f0123
// body: available
// range: 0x4f0123-0x4f0184 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004f0123(char param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int *in_EDX;
  
  cVar1 = FUN_004f0274(*in_ECX);
  if (cVar1 == '\0') {
LAB_004f017b:
    uVar3 = 0;
  }
  else {
    if (param_1 == '\0') {
      cVar1 = (**(code **)(*in_EDX + 0x10))();
      if (cVar1 == '\0') goto LAB_004f017b;
    }
    else {
      iVar2 = FUN_005af82d(0x30);
      if (iVar2 != 0) {
        FUN_004f0064(iVar2,in_EDX);
      }
      FUN_00473c1d();
    }
    uVar3 = 1;
  }
  return uVar3;
}

