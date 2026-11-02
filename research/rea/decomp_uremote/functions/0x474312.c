// rea decompile_all
// name: FUN_00474312
// address: 0x474312
// body: available
// range: 0x474312-0x47433e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00474312(void)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *in_ECX;
  
  *in_ECX = juce::AsyncUpdater::vftable;
  LOCK();
  piVar3 = *(int **)(in_ECX[1] + 8);
  *(int *)(in_ECX[1] + 8) = 0;
  UNLOCK();
  puVar2 = (undefined4 *)in_ECX[1];
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = puVar2 + 1;
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      piVar3 = (int *)(**(code **)*puVar2)(1);
    }
  }
  return piVar3;
}

