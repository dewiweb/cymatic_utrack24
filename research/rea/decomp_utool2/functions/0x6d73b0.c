// rea decompile_all
// name: FUN_006d73b0
// address: 0x6d73b0
// body: available
// range: 0x6d73b0-0x6d74a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006d73b0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  
  puVar3 = (undefined4 *)in_ECX[0x26];
  *in_ECX = juce::LookAndFeel_V3::vftable;
  in_ECX[1] = juce::LookAndFeel_V3::vftable;
  in_ECX[2] = juce::LookAndFeel_V3::vftable;
  in_ECX[3] = juce::LookAndFeel_V3::vftable;
  in_ECX[4] = juce::LookAndFeel_V3::vftable;
  in_ECX[5] = juce::LookAndFeel_V3::vftable;
  in_ECX[6] = juce::LookAndFeel_V3::vftable;
  in_ECX[7] = juce::LookAndFeel_V3::vftable;
  in_ECX[8] = juce::LookAndFeel_V3::vftable;
  in_ECX[9] = juce::LookAndFeel_V3::vftable;
  in_ECX[10] = juce::LookAndFeel_V3::vftable;
  in_ECX[0xb] = juce::LookAndFeel_V3::vftable;
  in_ECX[0xc] = juce::LookAndFeel_V3::vftable;
  in_ECX[0xd] = juce::LookAndFeel_V3::vftable;
  in_ECX[0xe] = juce::LookAndFeel_V3::vftable;
  in_ECX[0xf] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x10] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x11] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x12] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x13] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x14] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x15] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x16] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x17] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x18] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x19] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x1a] = juce::LookAndFeel_V3::vftable;
  in_ECX[0x1b] = juce::LookAndFeel_V3::vftable;
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
  FUN_006aaf20();
  return;
}

