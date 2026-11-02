// rea decompile_all
// name: FUN_0049ec3c
// address: 0x49ec3c
// body: available
// range: 0x49ec3c-0x49eca1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

undefined1 FUN_0049ec3c(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int *in_ECX;
  undefined4 *puVar2;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x49ec48;
  iStack_24 = 1;
  piStack_28 = (int *)0x49ec56;
  iStack_24 = FUN_0049e9d0();
  puVar2 = (undefined4 *)auStack_20;
  if (iStack_24 == 0) {
    iStack_24 = 0x49ec78;
    FUN_0049e080();
    local_8 = 0;
    if ((param_1 == (int *)0x0) || (param_1 == in_ECX)) {
      uVar1 = 0;
    }
    else {
      iStack_24 = param_2;
      piStack_28 = param_1;
      puVar2 = &uStack_2c;
      uStack_2c = 0x49ec90;
      uVar1 = (**(code **)(*param_1 + 0x1c))();
    }
    *(undefined4 *)((int)puVar2 + -4) = 0x49ec9a;
    FUN_00474d0f();
  }
  else {
    iStack_24 = iStack_24 + 4;
    piStack_28 = (int *)0x49ec66;
    FUN_00478907();
    puVar2 = (undefined4 *)auStack_20;
    uVar1 = 1;
  }
  *(undefined4 *)((int)puVar2 + -4) = 0x49ec6d;
  return uVar1;
}

