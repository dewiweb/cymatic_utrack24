// rea decompile_all
// name: FUN_004f1dff
// address: 0x4f1dff
// body: available
// range: 0x4f1dff-0x4f1efb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_004f1dff(void)

{
  int iVar1;
  int in_ECX;
  int local_48;
  HGLOBAL local_40;
  int local_38;
  int local_30;
  HGLOBAL local_28;
  int local_20;
  
  if (*(int *)(in_ECX + 8) == 0) {
    iVar1 = 1;
  }
  else {
    FUN_00467142();
    FUN_00465303();
    FUN_004f1d8b();
    if (local_48 < 0) {
      FUN_004f1d8b();
      if (local_30 < 0) {
        if (local_20 != 0) {
          GlobalUnlock(local_28);
        }
        if (local_38 == 0) {
          return local_30;
        }
        GlobalUnlock(local_40);
        return local_30;
      }
      if (*(int *)(local_20 + 0x10) == 0) {
        FUN_004f8e96(*(undefined4 *)(in_ECX + 8));
      }
      else {
        FUN_004f8e31(*(undefined4 *)(in_ECX + 8));
      }
      if (local_20 != 0) {
        GlobalUnlock(local_28);
      }
    }
    else {
      FUN_00465522();
      FUN_00465317();
      FUN_004652d6();
    }
    if (local_38 != 0) {
      GlobalUnlock(local_40);
    }
    iVar1 = 0;
  }
  return iVar1;
}

