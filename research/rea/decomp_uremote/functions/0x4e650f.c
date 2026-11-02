// rea decompile_all
// name: FUN_004e650f
// address: 0x4e650f
// body: available
// range: 0x4e650f-0x4e6575 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004e650f(void)

{
  char cVar1;
  int in_ECX;
  undefined4 *puVar2;
  undefined4 uStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x4e651b;
  puVar2 = (undefined4 *)auStack_20;
  if (*(int *)(in_ECX + 0x28) != 0) {
    uStack_24 = 0x4e652d;
    cVar1 = FUN_004e5fe6();
    uStack_24 = 1;
    FUN_004e60f1();
    if (cVar1 != '\0') {
      uStack_24 = 0x4e6544;
      FUN_004f5fb6();
      local_8 = 0;
      puVar2 = &uStack_24;
      uStack_24 = 0x4e6552;
      (**(code **)(*(int *)(in_ECX + -0x78) + 0xb4))();
      puVar2[-1] = 0;
      puVar2[-2] = 0x4e655b;
      cVar1 = FUN_004f5fe9();
      if (cVar1 != '\0') {
        puVar2[-1] = 0x4e6566;
        FUN_004e6477();
      }
      puVar2[-1] = 0x4e656e;
      FUN_00474d0f();
    }
  }
  *(undefined4 *)((int)puVar2 + -4) = 0x4e6573;
  return;
}

