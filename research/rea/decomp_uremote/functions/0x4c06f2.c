// rea decompile_all
// name: FUN_004c06f2
// address: 0x4c06f2
// body: available
// range: 0x4c06f2-0x4c079a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c06f2(undefined4 param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *in_ECX;
  
  if ((byte)param_1 != (*(byte *)((int)in_ECX + 0x69) & 1)) {
    FUN_004c3456();
    *(byte *)((int)in_ECX + 0x69) =
         *(byte *)((int)in_ECX + 0x69) ^ (*(byte *)((int)in_ECX + 0x69) ^ (byte)param_1) & 1;
    cVar2 = FUN_004c044d();
    if (cVar2 != '\0') {
      piVar3 = (int *)FUN_004c0453();
      if (piVar3 != (int *)0x0) {
        cVar2 = (**(code **)(*piVar3 + 0x54))(param_1);
        if (cVar2 == '\0') {
          iVar1 = piVar3[2];
          FUN_004c041e();
          (**(code **)(*in_ECX + 0x30))(iVar1,0);
        }
      }
    }
    if ((byte)param_1 != 0) {
      cVar2 = FUN_004c3462();
      if (cVar2 == '\0') {
        FUN_004c052f(0);
      }
    }
    cVar2 = FUN_004c3462();
    if (cVar2 == '\0') {
      FUN_004c12e0();
    }
    FUN_00474d0f();
  }
  return;
}

