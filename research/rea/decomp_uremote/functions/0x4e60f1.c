// rea decompile_all
// name: FUN_004e60f1
// address: 0x4e60f1
// body: available
// range: 0x4e60f1-0x4e61c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */
/* WARNING: Removing unreachable block (ram,0x004e61ae) */

void FUN_004e60f1(char param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int *in_ECX;
  char cStack00000007;
  
  if (in_ECX[0x28] == 0) {
    return;
  }
  FUN_004f5fb6();
  puVar1 = (undefined4 *)in_ECX[0x28];
  in_ECX[0x28] = 0;
  (**(code **)(*in_ECX + 0xc0))(puVar1);
  if (param_1 == '\0') {
    cVar2 = FUN_004e5fe6();
    cStack00000007 = '\x01';
    if (cVar2 != '\0') goto LAB_004e614f;
  }
  cStack00000007 = '\0';
LAB_004e614f:
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  FUN_004c1613(in_ECX);
  if (cStack00000007 != '\0') {
    (**(code **)(*in_ECX + 0xb4))();
  }
  cVar2 = FUN_004f5fe9(0);
  if (cVar2 != '\0') {
    FUN_004c13e3(0);
  }
  if ((cStack00000007 != '\0') && (cVar2 = FUN_004f5fe9(0), cVar2 != '\0')) {
    FUN_004e6477();
  }
  FUN_00474d0f();
  return;
}

