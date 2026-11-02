// rea decompile_all
// name: FUN_004c0040
// address: 0x4c0040
// body: available
// range: 0x4c0040-0x4c011d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c0040(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x68) >> 1 & 1) != (byte)param_1) {
    FUN_004f5fb6();
    *(byte *)(in_ECX + 0x68) =
         *(byte *)(in_ECX + 0x68) ^ ((byte)param_1 * '\x02' ^ *(byte *)(in_ECX + 0x68)) & 2;
    if ((byte)param_1 == 0) {
      FUN_004c1690();
    }
    else {
      FUN_004c1613(in_ECX);
    }
    FUN_004c2bee();
    if ((byte)param_1 == 0) {
      if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
        (**(code **)(**(int **)(in_ECX + 0x40) + 0x10))();
      }
      if ((DAT_0095d698 == in_ECX) || (cVar1 = thunk_FUN_004c1278(in_ECX), cVar1 != '\0')) {
        if (*(int *)(in_ECX + 0xc) == 0) {
          FUN_004c312a(1);
        }
        else {
          FUN_004c301e();
        }
      }
    }
    cVar1 = FUN_004f5fe9(0);
    if (cVar1 != '\0') {
      FUN_004c011e();
      cVar1 = FUN_004f5fe9(0);
      if (((cVar1 != '\0') && ((*(byte *)(in_ECX + 0x68) & 1) != 0)) &&
         (piVar2 = (int *)FUN_004c0453(), piVar2 != (int *)0x0)) {
        (**(code **)(*piVar2 + 8))(param_1);
        FUN_004c12e0();
      }
    }
    FUN_00474d0f();
    return;
  }
  return;
}

