// rea decompile_all
// name: FUN_0046e01b
// address: 0x46e01b
// body: available
// range: 0x46e01b-0x46e0af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_0046e01b(undefined4 *param_1)

{
  undefined4 *puVar1;
  _Locimp *p_Var2;
  facet *this;
  
  *param_1 = std::basic_streambuf<char,std::char_traits<char>_>::vftable;
  std::_Mutex::_Mutex((_Mutex *)(param_1 + 1));
  puVar1 = (undefined4 *)FUN_005af82d(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    p_Var2 = std::locale::_Init();
    *puVar1 = p_Var2;
    this = (facet *)FUN_005ccf82();
    std::locale::facet::_Incref(this);
  }
  param_1[0xe] = puVar1;
  param_1[8] = param_1 + 6;
  param_1[9] = param_1 + 7;
  param_1[4] = param_1 + 2;
  param_1[0xc] = param_1 + 10;
  param_1[5] = param_1 + 3;
  param_1[0xd] = param_1 + 0xb;
  param_1[3] = 0;
  *(undefined4 *)param_1[9] = 0;
  *(undefined4 *)param_1[0xd] = 0;
  *(undefined4 *)param_1[4] = 0;
  *(undefined4 *)param_1[8] = 0;
  *(undefined4 *)param_1[0xc] = 0;
  return param_1;
}

