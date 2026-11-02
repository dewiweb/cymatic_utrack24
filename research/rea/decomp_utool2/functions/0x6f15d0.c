// rea decompile_all
// name: FUN_006f15d0
// address: 0x6f15d0
// body: available
// range: 0x6f15d0-0x6f1758 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f15d0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  
  *in_ECX = juce::CodeEditorComponent::vftable;
  in_ECX[0x1c] = juce::CodeEditorComponent::vftable;
  in_ECX[0x1e] = juce::CodeEditorComponent::vftable;
  FUN_00415ff0(-(uint)(in_ECX[0xbd] != 0) & in_ECX[0xbd] + 0x20);
  FUN_004b6e20();
  FID_conflict__free((void *)in_ECX[199]);
  FUN_004b6e60();
  FID_conflict__free((void *)in_ECX[0xc4]);
  FUN_00433420();
  FID_conflict__free((void *)in_ECX[0xc1]);
  if ((undefined4 *)in_ECX[0xbe] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xbe])(1);
  }
  if ((undefined4 *)in_ECX[0xbd] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0xbd])(1);
  }
  FUN_006d2900();
  FUN_006d2900();
  if ((undefined4 *)in_ECX[0x3b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)in_ECX[0x3b])(1);
  }
  if ((*(char *)(in_ECX + 0x3a) != '\0') && (*(undefined1 *)(in_ECX + 0x3a) = 0, in_ECX[0x36] != 0))
  {
    FUN_00415ff0(in_ECX + 0x36);
  }
  if ((*(char *)(in_ECX + 0x35) != '\0') && (*(undefined1 *)(in_ECX + 0x35) = 0, in_ECX[0x31] != 0))
  {
    FUN_00415ff0(in_ECX + 0x31);
  }
  if ((*(char *)(in_ECX + 0x30) != '\0') && (*(undefined1 *)(in_ECX + 0x30) = 0, in_ECX[0x2c] != 0))
  {
    FUN_00415ff0(in_ECX + 0x2c);
  }
  puVar3 = (undefined4 *)in_ECX[0x20];
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
  in_ECX[0x1e] = juce::TextInputTarget::vftable;
  in_ECX[0x1c] = juce::ApplicationCommandTarget::vftable;
  if (in_ECX[0x1d] != 0) {
    *(undefined4 *)(in_ECX[0x1d] + 8) = 0;
  }
  puVar3 = (undefined4 *)in_ECX[0x1d];
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
  FUN_006ea0b0();
  return;
}

