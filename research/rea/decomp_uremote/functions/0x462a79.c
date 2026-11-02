// rea decompile_all
// name: FUN_00462a79
// address: 0x462a79
// body: available
// range: 0x462a79-0x462afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_00462a79(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 uStack_30;
  undefined1 **ppuStack_2c;
  undefined1 *local_18;
  undefined1 *local_14 [3];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 8;
  local_8 = 0x462a85;
  local_14[0] = (undefined1 *)0x0;
  ppuStack_2c = (undefined1 **)0x462a93;
  iVar1 = (**(code **)(**(int **)(in_ECX + 8) + 0x1c))();
  if (iVar1 < 1) {
    ppuStack_2c = &local_18;
    uStack_30 = 0x462ad4;
    uStack_30 = (**(code **)(**(int **)(in_ECX + 8) + 0x10))();
    local_8 = 1;
    FUN_00465bec(param_1);
  }
  else {
    ppuStack_2c = local_14;
    uStack_30 = 0x462aa8;
    uVar2 = (**(code **)(**(int **)(in_ECX + 8) + 0x10))();
    local_8 = 0;
    local_18 = (undefined1 *)&uStack_30;
    FUN_00465bec(&uStack_30,uVar2);
    FUN_00465c6b(param_1);
  }
  uStack_30 = 0x462af1;
  FUN_004652d6();
  return param_1;
}

