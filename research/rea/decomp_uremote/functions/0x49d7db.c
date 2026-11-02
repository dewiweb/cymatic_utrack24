// rea decompile_all
// name: FUN_0049d7db
// address: 0x49d7db
// body: available
// range: 0x49d7db-0x49d855 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0049d7db(undefined4 param_1)

{
  int iVar1;
  int local_1c;
  int local_18;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x49d7e7;
  local_1c = 0;
  iVar1 = FUN_004917a2();
  local_18 = iVar1;
  if (iVar1 != 0) {
    local_1c = FUN_0048f07b(iVar1);
    if (local_1c != 0) {
      FUN_0049d6b6(local_14,param_1,iVar1,local_1c);
      local_8 = 0;
      FUN_004920e3(&local_1c);
      FUN_0049f50b();
      FUN_004c4d7a();
      return;
    }
    FUN_004920e3(0);
  }
  FUN_004c6ae2();
  return;
}

