// rea decompile_all
// name: FUN_004452b4
// address: 0x4452b4
// body: available
// range: 0x4452b4-0x4453aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004452b4(undefined4 *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_004bfd7b();
  *param_1 = DSPMViewport::vftable;
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  param_1[0x1e] = 0x42800000;
  param_1[0x1c] = uVar1;
  param_1[0x1d] = param_3;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  FUN_0043f0d9(param_1 + 0x22,param_4);
  FUN_004c1055(param_1 + 0x22);
  param_4 = 0x18;
  do {
    iVar2 = FUN_005af82d(0x6c0);
    if (iVar2 == 0) {
      param_3 = 0;
    }
    else {
      param_3 = FUN_00444be5(iVar2,param_2,param_1[0x1c],param_1[0x21],param_1[0x1d],param_1 + 0x22)
      ;
    }
    FUN_004c1064(0xffffffff);
    if ((int)param_1[0x20] < param_1[0x21] + 1) {
      FUN_004f8197();
    }
    param_4 = param_4 + -1;
    iVar2 = param_1[0x21];
    param_1[0x21] = iVar2 + 1;
    *(undefined4 *)(param_1[0x1f] + iVar2 * 4) = param_3;
  } while (param_4 != 0);
  return param_1;
}

