// rea decompile_all
// name: FUN_00608710
// address: 0x608710
// body: available
// range: 0x608710-0x60880c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00608710(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  
  *in_ECX = juce::AudioProcessorGraph::vftable;
  in_ECX[0x26] = juce::AudioProcessorGraph::vftable;
  FUN_00608530();
  FUN_00608630();
  FID_conflict__free((void *)in_ECX[0x37]);
  iVar2 = in_ECX[0x35];
  if (iVar2 != 0) {
    FID_conflict__free(*(void **)(iVar2 + 0x1e0));
    FID_conflict__free(*(void **)(iVar2 + 0x148));
    FID_conflict__free(*(void **)(iVar2 + 0xa8));
    FID_conflict__free(*(void **)(iVar2 + 0x10));
    FUN_004bfe14(iVar2,0x268);
  }
  FID_conflict__free((void *)in_ECX[0x32]);
  FUN_00447800();
  FID_conflict__free((void *)in_ECX[0x2f]);
  FUN_004476f0();
  FUN_00415180();
  FID_conflict__free((void *)in_ECX[0x28]);
  in_ECX[0x26] = juce::AsyncUpdater::vftable;
  LOCK();
  *(undefined4 *)(in_ECX[0x27] + 0xc) = 0;
  UNLOCK();
  puVar3 = (undefined4 *)in_ECX[0x27];
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
  FUN_0060a6b0();
  return;
}

