// rea decompile_all
// name: FUN_006ab010
// address: 0x6ab010
// body: available
// range: 0x6ab010-0x6ab1a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_006ab010(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 *local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  local_14 = in_ECX;
  FUN_006ab6f0();
  *in_ECX = juce::LookAndFeel_V2::vftable;
  in_ECX[1] = juce::LookAndFeel_V2::vftable;
  in_ECX[2] = juce::LookAndFeel_V2::vftable;
  in_ECX[3] = juce::LookAndFeel_V2::vftable;
  in_ECX[4] = juce::LookAndFeel_V2::vftable;
  in_ECX[5] = juce::LookAndFeel_V2::vftable;
  in_ECX[6] = juce::LookAndFeel_V2::vftable;
  in_ECX[7] = juce::LookAndFeel_V2::vftable;
  in_ECX[8] = juce::LookAndFeel_V2::vftable;
  in_ECX[9] = juce::LookAndFeel_V2::vftable;
  in_ECX[10] = juce::LookAndFeel_V2::vftable;
  in_ECX[0xb] = juce::LookAndFeel_V2::vftable;
  in_ECX[0xc] = juce::LookAndFeel_V2::vftable;
  in_ECX[0xd] = juce::LookAndFeel_V2::vftable;
  in_ECX[0xe] = juce::LookAndFeel_V2::vftable;
  in_ECX[0xf] = juce::LookAndFeel_V2::vftable;
  in_ECX[0x10] = juce::LookAndFeel_V2::vftable;
  in_ECX[0x11] = juce::LookAndFeel_V2::vftable;
  in_ECX[0x12] = juce::LookAndFeel_V2::vftable;
  in_ECX[0x13] = juce::LookAndFeel_V2::vftable;
  in_ECX[0x14] = juce::LookAndFeel_V2::vftable;
  in_ECX[0x15] = juce::LookAndFeel_V2::vftable;
  in_ECX[0x16] = juce::LookAndFeel_V2::vftable;
  in_ECX[0x17] = juce::LookAndFeel_V2::vftable;
  in_ECX[0x18] = juce::LookAndFeel_V2::vftable;
  in_ECX[0x19] = juce::LookAndFeel_V2::vftable;
  in_ECX[0x1a] = juce::LookAndFeel_V2::vftable;
  in_ECX[0x1b] = juce::LookAndFeel_V2::vftable;
  in_ECX[0x24] = 0;
  in_ECX[0x25] = 0;
  local_10 = &DAT_00c1a3c0;
  do {
    local_20 = local_10[1];
    iVar4 = in_ECX[0x1f];
    local_24 = *local_10;
    if (0 < iVar4) {
      local_c = in_ECX[0x1d];
      iVar2 = 0;
      do {
        if (local_24 == *(int *)(local_c + iVar2 * 8)) {
          if (-1 < iVar2) {
            *(int *)(in_ECX[0x1d] + 4 + iVar2 * 8) = local_20;
            goto LAB_006ab17a;
          }
          break;
        }
        iVar1 = (iVar4 + iVar2) / 2;
        if (iVar1 == iVar2) break;
        iVar3 = iVar1;
        if (local_24 < *(int *)(local_c + iVar1 * 8)) {
          iVar3 = iVar2;
          iVar4 = iVar1;
        }
        iVar2 = iVar3;
      } while (iVar3 < iVar4);
    }
    local_1c = local_20;
    local_8 = local_24;
    FUN_004ae4f0(&local_24);
LAB_006ab17a:
    local_10 = local_10 + 2;
    if (0xc1a707 < (int)local_10) {
      return local_14;
    }
  } while( true );
}

