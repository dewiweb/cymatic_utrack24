// rea decompile_all
// name: FUN_004bffc5
// address: 0x4bffc5
// body: available
// range: 0x4bffc5-0x4c0035 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Unable to track spacebase fully for stack */

void FUN_004bffc5(int param_1)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 uStack_28;
  int iStack_24;
  undefined1 auStack_20 [24];
  undefined4 local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  local_8 = 0x4bffd1;
  puVar3 = (undefined4 *)auStack_20;
  iStack_24 = 0x4bffe0;
  cVar1 = FUN_00465953();
  if (cVar1 != '\0') {
    uStack_28 = 0x4bffed;
    iStack_24 = in_ECX + 4;
    FUN_00465317();
    if ((*(byte *)(in_ECX + 0x68) & 1) != 0) {
      iStack_24 = 0x4bfffa;
      piVar2 = (int *)FUN_004c0453();
      if (piVar2 != (int *)0x0) {
        iStack_24 = param_1;
        puVar3 = &uStack_28;
        uStack_28 = 0x4c0008;
        (**(code **)(*piVar2 + 0xc))();
      }
    }
    *(undefined4 *)((int)puVar3 + -4) = 0x4c0010;
    FUN_004c3456();
    local_8 = 0;
    *(int *)((int)puVar3 + -4) = in_ECX;
    *(undefined1 **)((int)puVar3 + -8) = &LAB_004734ba;
    *(int **)((int)puVar3 + -0xc) = &param_1;
    *(undefined4 *)((int)puVar3 + -0x10) = 0x4c0026;
    FUN_004f8791();
    *(undefined4 *)((int)puVar3 + -4) = 0x4c002e;
    FUN_00474d0f();
  }
  *(undefined4 *)((int)puVar3 + -4) = 0x4c0033;
  return;
}

