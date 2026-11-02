// rea decompile_all
// name: FUN_005ae7b0
// address: 0x5ae7b0
// body: available
// range: 0x5ae7b0-0x5ae856 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ae7b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  iVar2 = DAT_00c8a5e8;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_00718440;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = in_ECX + 0x1d;
  *in_ECX = WelcomeWizard::Page2::vftable;
  *puVar1 = WelcomeWizard::Page2::vftable;
  in_ECX[0x1e] = WelcomeWizard::Page2::vftable;
  if (iVar2 == 0) {
    operator_new(0x34);
    DAT_00c8a5e8 = FUN_005b6bb0();
  }
  FUN_00415ff0(puVar1);
  FUN_00407640(uVar3);
  FUN_006e4a60();
  FUN_006e4a60();
  in_ECX[0x1e] = juce::Button::Listener::vftable;
  *puVar1 = PnPDetector::Listener::vftable;
  FUN_006ea0b0();
  ExceptionList = local_10;
  return;
}

