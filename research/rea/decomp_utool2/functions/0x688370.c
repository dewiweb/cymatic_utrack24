// rea decompile_all
// name: FUN_00688370
// address: 0x688370
// body: available
// range: 0x688370-0x688487 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00688370(void)

{
  undefined4 *in_ECX;
  int extraout_EDX;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 *puStack_24;
  uint uStack_20;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00720fd5;
  local_10 = ExceptionList;
  uStack_20 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puStack_24 = (undefined4 *)0x6883a0;
  FUN_006ea2c0();
  *in_ECX = juce::BubbleComponent::vftable;
  in_ECX[0x1c] = 0;
  in_ECX[0x1d] = 0;
  in_ECX[0x1e] = 0;
  in_ECX[0x1f] = 0;
  in_ECX[0x20] = 0;
  in_ECX[0x21] = 0;
  in_ECX[0x22] = 0xf;
  in_ECX[0x23] = juce::DropShadowEffect::vftable;
  in_ECX[0x24] = 0x90000000;
  in_ECX[0x25] = 4;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  local_8 = 1;
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) & 0xef | 8;
  puStack_24 = &local_14;
  uStack_28 = 0x688433;
  FUN_006842b0();
  in_ECX[0x24] = local_14;
  in_ECX[0x25] = 5;
  in_ECX[0x26] = 0;
  in_ECX[0x27] = 0;
  if (in_ECX[0xf] != extraout_EDX) {
    in_ECX[0xf] = extraout_EDX;
    FUN_006e6400(auStack_30);
    FUN_006ce9f0(1);
  }
  ExceptionList = local_10;
  return;
}

