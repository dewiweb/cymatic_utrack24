// rea decompile_all
// name: FUN_00465e50
// address: 0x465e50
// body: available
// range: 0x465e50-0x465f28 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00465e50(int param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  int iVar4;
  
  *in_ECX = juce::ReferenceCountedObject::vftable;
  in_ECX[1] = 0;
  in_ECX[2] = param_1;
  in_ECX[3] = param_2;
  in_ECX[4] = param_3;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  *in_ECX = juce::SoftwarePixelData::vftable;
  in_ECX[0xb] = 0;
  if (param_1 == 1) {
    iVar4 = 3;
  }
  else {
    iVar4 = 1;
    if (param_1 == 2) {
      iVar4 = 4;
    }
  }
  in_ECX[0xc] = iVar4;
  iVar1 = 1;
  if (1 < param_2) {
    iVar1 = param_2;
  }
  uVar2 = iVar1 * iVar4 + 3U & 0xfffffffc;
  in_ECX[0xd] = uVar2;
  iVar4 = 1;
  if (1 < param_3) {
    iVar4 = param_3;
  }
  iVar4 = iVar4 * uVar2;
  FID_conflict__free((void *)in_ECX[0xb]);
  if (param_4 != '\0') {
    uVar3 = FUN_004c5556(iVar4,1);
    in_ECX[0xb] = uVar3;
    return;
  }
  uVar3 = FUN_004c554b(iVar4);
  in_ECX[0xb] = uVar3;
  return;
}

