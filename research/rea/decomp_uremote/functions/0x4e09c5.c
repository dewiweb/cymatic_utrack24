// rea decompile_all
// name: FUN_004e09c5
// address: 0x4e09c5
// body: available
// range: 0x4e09c5-0x4e0a5e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined1 * FUN_004e09c5(char param_1)

{
  undefined4 *puVar1;
  char cVar2;
  undefined1 *puVar3;
  int *in_ECX;
  int *in_EDX;
  int iVar4;
  
  puVar3 = &LAB_005e036d;
  if ((*(byte *)(in_EDX + 0x1a) & 2) != 0) {
    FUN_004f5fb6();
    puVar1 = (undefined4 *)in_EDX[0x35];
    if ((puVar1 != (undefined4 *)0x0) && (in_EDX[0x35] = 0, puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)(1);
    }
    FUN_004a4d78();
    if (in_ECX == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      if ((in_ECX[7] != 0) && (*in_ECX != 0)) {
        *(int *)in_EDX[0x29] = in_ECX[7];
      }
      iVar4 = *in_ECX;
    }
    FUN_004c13e3(iVar4);
    if (param_1 != '\0') {
      cVar2 = FUN_004f5fe9(0);
      if (cVar2 != '\0') {
        (**(code **)(*in_EDX + 0x28))(0);
      }
    }
    puVar3 = (undefined1 *)FUN_00474d0f();
  }
  return puVar3;
}

