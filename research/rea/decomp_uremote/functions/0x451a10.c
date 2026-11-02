// rea decompile_all
// name: FUN_00451a10
// address: 0x451a10
// body: available
// range: 0x451a10-0x451ae5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_00451a10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *apuStack_38 [5];
  undefined4 local_24 [4];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x451a1c;
  local_14 = (undefined1 *)apuStack_38;
  FUN_004652e4(param_2);
  FUN_0045658e(param_1);
  local_8 = 0;
  puVar1 = param_1 + 0x1f;
  *puVar1 = SwitchButton::Listener::vftable;
  *param_1 = ViewItemElementSwitch::vftable;
  *puVar1 = ViewItemElementSwitch::vftable;
  apuStack_38[0] = (undefined4 *)0x451a57;
  FUN_00441e24();
  local_8._0_1_ = 2;
  if (puVar1 != (undefined4 *)0x0) {
    piVar3 = (int *)param_1[0x3c];
    piVar2 = piVar3 + param_1[0x3e];
    for (; param_2 = puVar1, piVar3 != piVar2; piVar3 = piVar3 + 1) {
      if (puVar1 == (undefined4 *)*piVar3) goto LAB_00451a86;
    }
    apuStack_38[0] = &param_2;
    FUN_00450daf();
  }
LAB_00451a86:
  apuStack_38[0] = (undefined4 *)0x451a91;
  FUN_00461619();
  apuStack_38[0] = &param_2;
  local_8._0_1_ = 3;
  FUN_00465075();
  apuStack_38[0] = local_24;
  local_8._0_1_ = 4;
  FUN_00460bc4(param_1 + 0x36,&param_2);
  apuStack_38[0] = (undefined4 *)0x451ac3;
  thunk_FUN_004652d6();
  local_8 = CONCAT31(local_8._1_3_,2);
  apuStack_38[0] = (undefined4 *)0x451acf;
  FUN_004615f7();
  apuStack_38[0] = (undefined4 *)0xffffffff;
  FUN_004c103f();
  return param_1;
}

