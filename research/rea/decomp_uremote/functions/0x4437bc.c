// rea decompile_all
// name: FUN_004437bc
// address: 0x4437bc
// body: available
// range: 0x4437bc-0x44386a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004437bc(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_EBX;
  
  FUN_0044dc47(param_1);
  *param_1 = SIngleFaderMeterPanel::vftable;
  param_1[0x1d] = unaff_EBX;
  FUN_0043d31e(param_1 + 0x1e);
  param_1[0x4c] = 0;
  FUN_004c1064(0xffffffff);
  iVar2 = FUN_005af82d(0x1d0);
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)
             FUN_0044408f(iVar2,*(undefined4 *)(unaff_EBX + 0x84),0,
                          *(undefined4 *)(unaff_EBX + 0x8c));
  }
  puVar1 = (undefined4 *)param_1[0x4c];
  if ((puVar1 != puVar3) && (param_1[0x4c] = puVar3, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  FUN_004c1064(0xffffffff);
  return param_1;
}

