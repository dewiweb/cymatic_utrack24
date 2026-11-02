// rea decompile_all
// name: FUN_004b0700
// address: 0x4b0700
// body: available
// range: 0x4b0700-0x4b0756 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004b0700(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *in_ECX;
  
  if (*in_ECX == 0) {
    puVar4 = operator_new(0xc);
    *puVar4 = juce::ReferenceCountedObject::vftable;
    piVar1 = puVar4 + 1;
    *piVar1 = 0;
    *puVar4 = juce::WeakReference<juce::LookAndFeel,juce::ReferenceCountedObject>::SharedPointer::
              vftable;
    puVar4[2] = param_1;
    if ((undefined4 *)*in_ECX != puVar4) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      puVar3 = (undefined4 *)*in_ECX;
      *in_ECX = (int)puVar4;
      if (puVar3 == (undefined4 *)0x0) {
        return puVar4;
      }
      LOCK();
      piVar1 = puVar3 + 1;
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)*puVar3)(1);
      }
    }
  }
  return (undefined4 *)*in_ECX;
}

