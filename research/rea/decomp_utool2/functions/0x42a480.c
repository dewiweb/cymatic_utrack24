// rea decompile_all
// name: FUN_0042a480
// address: 0x42a480
// body: available
// range: 0x42a480-0x42a51f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a480(void)

{
  int *piVar1;
  int *in_ECX;
  
  if ((undefined **)*in_ECX == juce::WasapiClasses::WASAPIAudioIODevice::vftable) {
    if (*(char *)((int)in_ECX + 0xa1) != '\0') {
      piVar1 = (int *)in_ECX[0x2d];
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x2e));
      *(undefined1 *)((int)in_ECX + 0xa1) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x2e));
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0xc))();
      }
    }
  }
  else {
    (*(code *)((undefined **)*in_ECX)[10])();
  }
  *(undefined1 *)(in_ECX + 0x12) = 1;
  if (in_ECX[0x18] != 0) {
    SetEvent(*(HANDLE *)(in_ECX[0x18] + 0x48));
  }
  if (in_ECX[0x19] != 0) {
    SetEvent(*(HANDLE *)(in_ECX[0x19] + 0x48));
  }
  FUN_006322a0(5000);
  if (in_ECX[0x18] != 0) {
    FUN_00428a40();
  }
  if (in_ECX[0x19] != 0) {
    FUN_00429140();
  }
  *(undefined1 *)(in_ECX + 0x28) = 0;
  return;
}

