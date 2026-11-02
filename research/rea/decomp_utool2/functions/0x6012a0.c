// rea decompile_all
// name: FUN_006012a0
// address: 0x6012a0
// body: available
// range: 0x6012a0-0x6013be inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006012a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int in_ECX;
  double dVar4;
  
  iVar3 = FUN_006f6dd6(param_3,0,&juce::SynthesiserSound::RTTI_Type_Descriptor,
                       &juce::SamplerSound::RTTI_Type_Descriptor,0);
  if (iVar3 != 0) {
    dVar4 = 2.0;
    FUN_006f8700();
    *(double *)(in_ECX + 0xc0) = (dVar4 * *(double *)(iVar3 + 0x10)) / *(double *)(in_ECX + 8);
    *(undefined8 *)(in_ECX + 200) = 0;
    *(undefined4 *)(in_ECX + 0xd0) = param_2;
    *(undefined4 *)(in_ECX + 0xd4) = param_2;
    iVar1 = *(int *)(iVar3 + 0x3c);
    *(undefined1 *)(in_ECX + 0xe5) = 0;
    bVar2 = 0 < iVar1;
    *(bool *)(in_ECX + 0xe4) = bVar2;
    if (bVar2) {
      *(undefined4 *)(in_ECX + 0xd8) = 0;
      *(float *)(in_ECX + 0xdc) =
           (float)(*(double *)(in_ECX + 0xc0) / (double)*(int *)(iVar3 + 0x3c));
    }
    else {
      *(undefined4 *)(in_ECX + 0xd8) = 0x3f800000;
      *(undefined4 *)(in_ECX + 0xdc) = 0;
    }
    if (0 < *(int *)(iVar3 + 0x40)) {
      *(float *)(in_ECX + 0xe0) =
           (float)-(*(double *)(in_ECX + 0xc0) / (double)*(int *)(iVar3 + 0x40));
      return;
    }
    *(undefined4 *)(in_ECX + 0xe0) = 0xbf800000;
  }
  return;
}

