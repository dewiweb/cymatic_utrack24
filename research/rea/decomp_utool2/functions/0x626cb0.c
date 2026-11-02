// rea decompile_all
// name: FUN_00626cb0
// address: 0x626cb0
// body: available
// range: 0x626cb0-0x626d2c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00626cb0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int *in_ECX;
  
  if ((undefined **)*in_ECX == juce::DynamicObject::vftable) {
    piVar2 = (int *)in_ECX[2];
    piVar1 = piVar2 + in_ECX[4] * 6;
    if (piVar2 != piVar1) {
      while (*piVar2 != *param_1) {
        piVar2 = piVar2 + 6;
        if (piVar2 == piVar1) {
          return CONCAT31((int3)((uint)*(int *)PTR_PTR_00c7ed58 >> 8),
                          *(code **)(*(int *)PTR_PTR_00c7ed58 + 0x50) != FUN_004133b0);
        }
      }
      piVar2 = piVar2 + 2;
      if (piVar2 != (int *)0x0) goto LAB_00626d14;
    }
    return CONCAT31((int3)((uint)*(int *)PTR_PTR_00c7ed58 >> 8),
                    *(code **)(*(int *)PTR_PTR_00c7ed58 + 0x50) != FUN_004133b0);
  }
  piVar2 = (int *)(*(code *)((undefined **)*in_ECX)[2])(param_1);
LAB_00626d14:
  return CONCAT31((int3)((uint)*(int *)*piVar2 >> 8),
                  *(code **)(*(int *)*piVar2 + 0x50) != FUN_004133b0);
}

