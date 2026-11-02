// rea decompile_all
// name: FUN_00465646
// address: 0x465646
// body: available
// range: 0x465646-0x4656d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

int FUN_00465646(int param_1,int param_2,undefined8 param_3)

{
  undefined **local_4c;
  undefined **local_48 [4];
  int aiStack_38 [9];
  undefined4 local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x3c;
  local_4c = &PTR_00917fc4;
  local_8 = 0;
  local_14 = 1;
  local_48[0] = std::basic_ostream<char,std::char_traits<char>_>::vftable;
  FUN_0046e97b();
  local_8 = 1;
  if (0 < param_2) {
    *(int *)((int)aiStack_38 + (int)local_4c[1]) = param_2;
  }
  FUN_0046de6d(&local_4c,param_3);
  local_8 = 0xffffffff;
  *(undefined ***)((int)local_48 + (int)(local_4c[1] + -4)) =
       std::basic_ostream<char,std::char_traits<char>_>::vftable;
  local_48[0] = std::ios_base::vftable;
  std::ios_base::_Ios_base_dtor((ios_base *)local_48);
  return **(int **)(param_1 + 0x24) - **(int **)(param_1 + 0x14);
}

