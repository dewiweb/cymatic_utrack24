// rea decompile_all
// name: FUN_00461f9a
// address: 0x461f9a
// body: available
// range: 0x461f9a-0x46207c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00461f9a(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined1 local_1c [4];
  undefined4 local_18;
  int local_14;
  uint local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xc;
  local_8 = 0x461fa6;
  local_18 = 0;
  FUN_004652cd();
  local_8 = 0;
  local_18 = 1;
  local_14 = (**(code **)(*in_ECX + 0x1c))();
  iVar1 = (**(code **)(*(int *)in_ECX[2] + 0x1c))();
  if (local_14 < iVar1) {
    uVar2 = (**(code **)(*(int *)in_ECX[2] + 0x10))();
    local_8 = 1;
    thunk_FUN_00465b22(param_1);
    uVar2 = thunk_FUN_00465ac3(uVar2);
    thunk_FUN_00465b22(uVar2);
    local_8 = local_8 & 0xffffff00;
  }
  else {
    (**(code **)(*(int *)in_ECX[2] + 0x10))(local_1c);
    FUN_00465317(param_1);
  }
  FUN_004652d6();
  (**(code **)(*in_ECX + 0x40))(param_1);
  iVar1 = (**(code **)(*(int *)in_ECX[3] + 0x1c))();
  if (iVar1 < local_14) {
    uVar2 = (**(code **)(*(int *)in_ECX[3] + 0x10))(local_1c);
    local_8 = 3;
    thunk_FUN_00465ac3(uVar2);
  }
  else {
    uVar2 = (**(code **)(*(int *)in_ECX[3] + 0x10))();
    local_8 = 2;
    thunk_FUN_00465b22(param_1);
    uVar2 = thunk_FUN_00465ac3(uVar2);
    thunk_FUN_00465b22(uVar2);
  }
  FUN_004652d6();
  return param_1;
}

