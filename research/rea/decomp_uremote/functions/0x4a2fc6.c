// rea decompile_all
// name: FUN_004a2fc6
// address: 0x4a2fc6
// body: available
// range: 0x4a2fc6-0x4a3065 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_004a2fc6(ushort param_1)

{
  char cVar1;
  int *piVar2;
  int in_ECX;
  undefined4 extraout_ECX;
  
  _param_1 = (uint)param_1;
  piVar2 = (int *)FUN_005af82d(0x28);
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[1] = 0;
    *piVar2 = (int)juce::WindowsDirectWriteTypeface::PathGeometrySink::vftable;
    FUN_0047888f();
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  (**(code **)(**(int **)(in_ECX + 0x30) + 0x38))
            (*(int **)(in_ECX + 0x30),0x44800000,&param_1,0,0,1,0,0,piVar2);
  FUN_00478907(piVar2 + 2);
  cVar1 = FUN_00477051();
  if (cVar1 == '\0') {
    FUN_0047a42b(extraout_ECX);
  }
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return 1;
}

