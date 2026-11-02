// rea decompile_all
// name: FUN_00696ab0
// address: 0x696ab0
// body: available
// range: 0x696ab0-0x696b2a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00696ab0(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  int *piVar4;
  
  puVar3 = operator_new(0xc);
  *puVar3 = juce::TextEditor::LengthAndCharacterRestriction::vftable;
  iVar1 = *param_2;
  puVar3[1] = iVar1;
  piVar4 = (int *)(iVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  puVar3[2] = param_1;
  if (*(undefined4 **)(in_ECX + 300) != puVar3) {
    if (*(char *)(in_ECX + 0x130) == '\0') {
      *(undefined4 *)(in_ECX + 300) = 0;
    }
    puVar2 = *(undefined4 **)(in_ECX + 300);
    if ((puVar2 != puVar3) && (*(undefined4 **)(in_ECX + 300) = puVar3, puVar2 != (undefined4 *)0x0)
       ) {
      (**(code **)*puVar2)(1);
    }
  }
  *(undefined1 *)(in_ECX + 0x130) = 1;
  return;
}

