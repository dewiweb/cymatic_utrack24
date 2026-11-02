// rea decompile_all
// name: FUN_004a3e2a
// address: 0x4a3e2a
// body: available
// range: 0x4a3e2a-0x4a3e8a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 FUN_004a3e2a(void)

{
  char cVar1;
  undefined1 uVar2;
  int *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x4a3e36;
  cVar1 = FUN_004a3de2();
  uVar2 = 0;
  if (cVar1 != '\0') {
    FUN_004a8158(local_14);
    local_8 = 0;
    if ((*local_14[0] == 0) || (local_14[0][2] == 0)) {
      uVar2 = 0;
    }
    else {
      FUN_004a3c17();
      uVar2 = 1;
    }
    local_8 = 0xffffffff;
    FUN_004a69ac();
  }
  return uVar2;
}

