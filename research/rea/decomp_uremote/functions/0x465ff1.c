// rea decompile_all
// name: FUN_00465ff1
// address: 0x465ff1
// body: available
// range: 0x465ff1-0x46613b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4
FUN_00465ff1(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,void *param_5)

{
  char *_Str;
  size_t _Size;
  size_t _Size_00;
  undefined4 extraout_ECX;
  int local_18;
  int local_14;
  
  if (param_3 < 0) {
    param_3 = 0;
  }
  if (param_4 < 0) {
    param_4 = 0;
  }
  _Str = (char *)*param_1;
  local_14 = 0;
  if (0 < param_3) {
    do {
      if (*_Str == '\0') {
        FUN_004652e4(param_1);
        FUN_00465c6b(param_2);
        return param_2;
      }
      FUN_004607e3();
      local_14 = local_14 + 1;
    } while (local_14 < param_3);
  }
  local_18 = 0;
  if (0 < param_4) {
    do {
      if (*_Str == '\0') break;
      FUN_004607e3();
      local_18 = local_18 + 1;
    } while (local_18 < param_4);
  }
  if (*_Str == '\0') {
    FUN_004653c3();
  }
  else {
    _Size = FUN_00465922();
    _Size_00 = _strlen(_Str);
    if (_Size_00 + _Size == 0) {
      FUN_004652cd();
      param_2 = extraout_ECX;
    }
    else {
      FUN_00465344();
      _memcpy(&stack0xffffffd4,(void *)*param_1,0);
      _memcpy(&stack0xffffffd4,param_5,_Size);
      _memcpy(&stack0xffffffd4 + _Size,_Str,_Size_00);
      (&stack0xffffffd4 + _Size)[_Size_00] = 0;
      FUN_004652e4();
      FUN_004652d6();
    }
  }
  return param_2;
}

