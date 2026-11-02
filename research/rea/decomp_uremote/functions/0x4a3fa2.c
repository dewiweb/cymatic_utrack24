// rea decompile_all
// name: FUN_004a3fa2
// address: 0x4a3fa2
// body: available
// range: 0x4a3fa2-0x4a40a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004a3fa2(undefined4 param_1)

{
  char cVar1;
  undefined *puVar2;
  undefined4 local_18;
  undefined1 local_14 [12];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x4a3fae;
  local_18 = 0;
  if ((DAT_0095dcc0 & 1) == 0) {
    DAT_0095dcc0 = DAT_0095dcc0 | 1;
    local_8 = 0;
    FUN_004a3e8b(&DAT_0095dc5c);
    _atexit((_func_4879 *)&LAB_005e6de6);
  }
  FUN_0049f50b();
  local_8 = 1;
  FUN_0049f744();
  thunk_FUN_0049f6e8();
  cVar1 = FUN_00465948();
  if (cVar1 == '\0') {
    FUN_0049f729();
    cVar1 = FUN_00465948();
    if (cVar1 == '\0') {
      FUN_0049f732();
      cVar1 = FUN_00465948();
      if (cVar1 == '\0') goto LAB_004a403f;
      puVar2 = &DAT_0095dc64;
    }
    else {
      puVar2 = &DAT_0095dc60;
    }
  }
  else {
    puVar2 = &DAT_0095dc5c;
  }
  FUN_0049f750(puVar2);
LAB_004a403f:
  FUN_0049f73b();
  FUN_0049f74a();
  cVar1 = FUN_00465948();
  if (cVar1 != '\0') {
    FUN_0046537e(&local_18);
    local_8._0_1_ = 2;
    FUN_0049f792(&local_18);
    local_8 = CONCAT31(local_8._1_3_,1);
    FUN_004652d6();
  }
  FUN_004a4900(param_1,local_14);
  FUN_004c4d7a();
  return param_1;
}

