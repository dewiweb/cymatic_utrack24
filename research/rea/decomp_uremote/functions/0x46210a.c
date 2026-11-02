// rea decompile_all
// name: FUN_0046210a
// address: 0x46210a
// body: available
// range: 0x46210a-0x462161 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0046210a(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  iVar1 = param_3;
  if (0x100 < param_3) {
    FUN_00461ce4();
  }
  puVar2 = (undefined4 *)(**(code **)(*param_2 + 8))(&param_3,in_ECX + 8);
  (**(code **)(*(int *)*puVar2 + 0xc))(param_1,param_2,iVar1 + 1);
  FUN_00463e49();
  return param_1;
}

