// rea decompile_all
// name: FUN_0046247e
// address: 0x46247e
// body: available
// range: 0x46247e-0x462548 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_0046247e(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  undefined1 **appuStack_2c [5];
  undefined4 local_18;
  undefined1 *local_14 [3];
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x46248a;
  local_18 = (undefined1 *)0x0;
  local_14[0] = (undefined1 *)appuStack_2c;
  if (*(int *)(in_ECX + 0x14) == 0) {
    local_14[0] = (undefined1 *)appuStack_2c;
    FUN_004652e4(in_ECX + 8);
    FUN_00465c6b(param_1);
  }
  else {
    FUN_004652e4(in_ECX + 8);
    FUN_00465c6b(local_14);
    local_8 = 0;
    iVar1 = 0;
    if (0 < *(int *)(in_ECX + 0x14)) {
      do {
        appuStack_2c[0] = (undefined1 **)&local_18;
        appuStack_2c[0] =
             (undefined1 **)(**(code **)(**(int **)(*(int *)(in_ECX + 0xc) + iVar1 * 4) + 0x10))();
        local_8._0_1_ = 1;
        thunk_FUN_00465ac3();
        local_8 = (uint)local_8._1_3_ << 8;
        appuStack_2c[0] = (undefined1 **)0x462503;
        FUN_004652d6();
        if (iVar1 < *(int *)(in_ECX + 0x14) + -1) {
          appuStack_2c[0] = local_14;
          thunk_FUN_00465aae();
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(in_ECX + 0x14));
    }
    appuStack_2c[0] = local_14;
    thunk_FUN_00465b22();
    appuStack_2c[0] = local_14;
    FUN_004652e4();
    appuStack_2c[0] = (undefined1 **)0x46253e;
    FUN_004652d6();
  }
  return param_1;
}

