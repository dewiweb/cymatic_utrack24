// rea decompile_all
// name: FUN_004fee77
// address: 0x4fee77
// body: available
// range: 0x4fee77-0x4feef8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004fee77(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int in_ECX;
  undefined1 local_58 [8];
  undefined1 local_50 [32];
  undefined1 local_30 [8];
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x48;
  local_8 = 0x4fee83;
  local_20 = *(undefined4 *)(in_ECX + 0xc);
  local_1c = *(undefined4 *)(in_ECX + 0x10);
  local_18 = *(undefined4 *)(in_ECX + 0x14);
  local_14 = *(undefined4 *)(in_ECX + 0x18);
  FUN_004a4c72(local_30);
  if ((0 < local_28) && (0 < local_24)) {
    FUN_005002aa(local_58);
    local_8 = 0;
    FUN_00478556(in_ECX + 8);
    FUN_00501043(local_50,param_3,param_4);
    local_8 = 0xffffffff;
    FUN_004a6c46(local_58);
  }
  return;
}

