// rea decompile_all
// name: FUN_0048194e
// address: 0x48194e
// body: available
// range: 0x48194e-0x481978 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048194e(undefined1 param_1)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *unaff_ESI;
  
  piVar2 = (int *)unaff_ESI[6];
  *(undefined1 *)*piVar2 = param_1;
  *piVar2 = *piVar2 + 1;
  piVar1 = piVar2 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    cVar3 = (*(code *)piVar2[3])();
    if (cVar3 == '\0') {
      *(undefined4 *)(*unaff_ESI + 0x14) = 0x18;
      (**(code **)*unaff_ESI)();
    }
  }
  return;
}

