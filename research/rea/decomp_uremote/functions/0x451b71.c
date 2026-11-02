// rea decompile_all
// name: FUN_00451b71
// address: 0x451b71
// body: available
// range: 0x451b71-0x451c6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 *
FUN_00451b71(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *local_38 [5];
  undefined4 local_24 [4];
  undefined1 *local_14;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x14;
  local_8 = 0x451b7d;
  local_14 = (undefined1 *)local_38;
  FUN_004652e4(param_2);
  FUN_0045658e(param_1);
  puVar1 = param_1 + 0x1f;
  *puVar1 = MySlider::Listener::vftable;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_38[0] = param_1 + 0x20;
  *param_1 = ViewItemElementSlider::vftable;
  *puVar1 = ViewItemElementSlider::vftable;
  FUN_0043e8aa();
  local_8 = CONCAT31(local_8._1_3_,2);
  local_38[0] = param_5;
  FUN_0043ed35(param_3,param_4);
  if (puVar1 != (undefined4 *)0x0) {
    piVar3 = (int *)param_1[0x62];
    piVar2 = piVar3 + param_1[100];
    for (; param_2 = puVar1, piVar3 != piVar2; piVar3 = piVar3 + 1) {
      if (puVar1 == (undefined4 *)*piVar3) goto LAB_00451c0d;
    }
    local_38[0] = &param_2;
    FUN_00450daf();
  }
LAB_00451c0d:
  local_38[0] = (undefined4 *)0x451c18;
  FUN_00461619();
  local_38[0] = &param_2;
  local_8._0_1_ = 3;
  FUN_00465075();
  local_38[0] = local_24;
  local_8._0_1_ = 4;
  FUN_00460bc4(param_1 + 0x36,&param_2);
  local_38[0] = (undefined4 *)0x451c4a;
  thunk_FUN_004652d6();
  local_8 = CONCAT31(local_8._1_3_,2);
  local_38[0] = (undefined4 *)0x451c56;
  FUN_004615f7();
  local_38[0] = (undefined4 *)0xffffffff;
  FUN_004c103f();
  return param_1;
}

