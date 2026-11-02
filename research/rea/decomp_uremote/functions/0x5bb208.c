// rea decompile_all
// name: FUN_005bb208
// address: 0x5bb208
// body: available
// range: 0x5bb208-0x5bb2b1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

void FUN_005bb208(int *param_1)

{
  int *piVar1;
  LONG LVar2;
  
  if (param_1 != (int *)0x0) {
    __lock(0xd);
    if ((LONG *)param_1[1] != (LONG *)0x0) {
      LVar2 = InterlockedDecrement((LONG *)param_1[1]);
      if ((LVar2 == 0) && ((undefined *)param_1[1] != &DAT_00956680)) {
        _free((undefined *)param_1[1]);
      }
    }
    FUN_005bb2b5();
    if (*param_1 != 0) {
      __lock(0xc);
      ___removelocaleref(*param_1);
      piVar1 = (int *)*param_1;
      if (((piVar1 != (int *)0x0) && (*piVar1 == 0)) && (piVar1 != (int *)&DAT_00956bb0)) {
        ___freetlocinfo(piVar1);
      }
      FUN_005bb2c1();
    }
    *param_1 = -0x45520ff3;
    param_1[1] = -0x45520ff3;
    _free(param_1);
  }
  return;
}

