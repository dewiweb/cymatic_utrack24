// rea decompile_all
// name: FUN_006a1c20
// address: 0x6a1c20
// body: available
// range: 0x6a1c20-0x6a1d22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006a1c20(void)

{
  int *piVar1;
  undefined4 *in_ECX;
  undefined1 auStack_34 [8];
  undefined4 uStack_2c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00722d23;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = in_ECX + 0x1c;
  *in_ECX = juce::MenuBarComponent::vftable;
  *piVar1 = (int)juce::MenuBarComponent::vftable;
  in_ECX[0x1d] = juce::MenuBarComponent::vftable;
  if (in_ECX[0x22] != 0) {
    uStack_2c = 0x6a1c71;
    FUN_00415ff0();
    in_ECX[0x22] = 0;
    FUN_006e6400(auStack_34);
    FUN_006ce9f0(1);
    uStack_2c = 0x6a1c98;
    (**(code **)(*piVar1 + 4))();
  }
  if (DAT_00c8a67c == 0) {
    uStack_2c = 0x6a1cac;
    operator_new(0xd0);
    DAT_00c8a67c = FUN_006cb960();
  }
  uStack_2c = 0x6a1cc7;
  FUN_00415ff0();
  FUN_006cb130();
  uStack_2c = 0x6a1cd9;
  FID_conflict__free((void *)in_ECX[0x26]);
  FUN_0040f7f0();
  uStack_2c = 0x6a1cf2;
  FID_conflict__free((void *)in_ECX[0x23]);
  in_ECX[0x1d] = juce::Timer::vftable;
  FUN_0063eab0();
  *piVar1 = (int)juce::MenuBarModel::Listener::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

