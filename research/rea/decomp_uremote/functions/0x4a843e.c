// rea decompile_all
// name: FUN_004a843e
// address: 0x4a843e
// body: available
// range: 0x4a843e-0x4a84c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004a843e(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  undefined1 local_40 [4];
  int local_3c;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x30;
  local_8 = 0x4a844a;
  local_24 = in_ECX + 8;
  local_20 = *param_2;
  local_1c = param_2[1];
  local_18 = param_2[2];
  local_14 = param_2[3];
  FUN_0047e7d7(local_40,2);
  local_8 = 0;
  if (local_3c == 1) {
    FUN_004aa503(&local_24,param_3,param_4);
  }
  else if (local_3c == 2) {
    FUN_004aa4bc(&local_24);
  }
  else {
    FUN_004aa54a();
  }
  local_8 = 0xffffffff;
  FUN_0047e819();
  return;
}

