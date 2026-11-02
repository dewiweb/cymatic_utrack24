// rea decompile_all
// name: FUN_0047d60d
// address: 0x47d60d
// body: available
// range: 0x47d60d-0x47d667 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_0047d60d(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined *puVar2;
  undefined1 local_3c [52];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x2c;
  local_8 = 0x47d619;
  FUN_0047888f();
  local_8 = 0;
  FUN_004a905c(extraout_ECX,param_3);
  puVar2 = &DAT_0095d798;
  uVar1 = FUN_0047badf(param_4);
  FUN_0047d2d0(local_3c,uVar1,puVar2);
  FUN_004f7994();
  return;
}

