// rea decompile_all
// name: FUN_00444be5
// address: 0x444be5
// body: available
// range: 0x444be5-0x444e06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_00444be5(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  FUN_004bfd7b();
  param_1[0x1c] = FaderMeter::Listener::vftable;
  puVar1 = param_1 + 0x1d;
  *puVar1 = PushButton::Listener::vftable;
  puVar2 = param_1 + 0x1e;
  *puVar2 = PanCtrl::Listener::vftable;
  *puVar2 = DSPMChannelStrip::vftable;
  param_1[0x1f] = param_3;
  *param_1 = DSPMChannelStrip::vftable;
  param_1[0x1c] = DSPMChannelStrip::vftable;
  *puVar1 = DSPMChannelStrip::vftable;
  param_1[0x20] = param_4;
  param_1[0x21] = param_5;
  FUN_0044408f(param_1 + 0x22,param_2,param_6);
  FUN_0043f5eb();
  FUN_0043f5eb();
  FUN_00443b9d();
  FUN_00440b30();
  FUN_0044447d();
  FUN_00444b00();
  FUN_004c1064();
  FUN_0046537e();
  FUN_0043f850();
  FUN_004652d6();
  FUN_004c1064();
  FUN_0046537e();
  FUN_0043f850();
  FUN_004652d6();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00472fde();
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00472fde();
    }
  }
  FUN_004c1064();
  if (puVar2 != (undefined4 *)0x0) {
    piVar4 = (int *)param_1[0x18e];
    piVar3 = piVar4 + param_1[400];
    for (; piVar4 != piVar3; piVar4 = piVar4 + 1) {
      if (puVar2 == (undefined4 *)*piVar4) goto LAB_00444daf;
    }
    FUN_00450daf();
  }
LAB_00444daf:
  FUN_004c1064();
  FUN_00440b9a();
  FUN_00465858();
  FUN_00440c93();
  FUN_004652d6();
  FUN_004c1064();
  FUN_004c0e0e();
  return param_1;
}

