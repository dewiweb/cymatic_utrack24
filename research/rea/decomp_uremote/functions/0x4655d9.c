// rea decompile_all
// name: FUN_004655d9
// address: 0x4655d9
// body: available
// range: 0x4655d9-0x465645 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_004655d9(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 unaff_EDI;
  
  FUN_0046e01b(param_1);
  uVar1 = DAT_0095dc44 & 1;
  *param_1 = juce::NumberToStringConverters::StackArrayStream::vftable;
  if (uVar1 == 0) {
    DAT_0095dc44 = DAT_0095dc44 | 1;
    puVar2 = (undefined4 *)FUN_005cd24a();
    _DAT_0095dc40 = (facet *)*puVar2;
    std::locale::facet::_Incref(_DAT_0095dc40);
    _atexit((_func_4879 *)&LAB_005e6c59);
  }
  *(undefined4 *)param_1[5] = unaff_EDI;
  *(undefined4 *)param_1[9] = unaff_EDI;
  *(undefined4 *)param_1[0xd] = 0x30;
  return param_1;
}

