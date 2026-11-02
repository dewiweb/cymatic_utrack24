// rea decompile_all
// name: FUN_006eaf80
// address: 0x6eaf80
// body: available
// range: 0x6eaf80-0x6eafff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006eaf80(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  undefined4 *puVar4;
  
  puVar4 = in_ECX + 0x21;
  *puVar4 = juce::SplashScreen::vftable;
  puVar3 = (undefined4 *)in_ECX[0x22];
  *in_ECX = juce::SplashScreen::vftable;
  in_ECX[0x1c] = juce::SplashScreen::vftable;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = puVar3 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*puVar3)(1);
    }
  }
  *puVar4 = juce::DeletedAtShutdown::vftable;
  FUN_00637f30();
  FUN_0063dc00(puVar4);
  FUN_00415ff0(puVar4);
  LOCK();
  DAT_00c8a918 = 0;
  UNLOCK();
  in_ECX[0x1c] = juce::Timer::vftable;
  FUN_0063eab0();
  FUN_006ea0b0();
  return;
}

