// rea decompile_all
// name: FUN_00472700
// address: 0x472700
// body: available
// range: 0x472700-0x4727e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00472700(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined4 local_14;
  int local_10;
  int local_c;
  undefined1 local_8 [4];
  
  if ((in_ECX[0xb] == 0) && (in_ECX[0xc] == 0)) {
    iVar1 = *(int *)*in_ECX;
    FUN_0067f7a0(local_8);
    (**(code **)(iVar1 + 0x34))();
    return;
  }
  puVar2 = &local_18;
  puVar4 = local_28;
  (**(code **)(*(int *)*in_ECX + 0x2c))(puVar4,puVar2,param_1);
  FUN_0044db90(puVar4,puVar2);
  if ((0 < local_10) && (0 < local_c)) {
    puVar2 = operator_new(0x14);
    puVar2[1] = 0;
    *puVar2 = juce::RenderingHelpers::
              ClipRegions<juce::RenderingHelpers::SoftwareRendererSavedState>::RectangleListRegion::
              vftable;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    if ((int)puVar2[3] < 1) {
      FUN_0040ede0(8);
    }
    iVar1 = puVar2[4];
    puVar2[4] = iVar1 + 1;
    puVar3 = (undefined4 *)(iVar1 * 0x10 + puVar2[2]);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = local_18;
      puVar3[1] = local_14;
      puVar3[2] = local_10;
      puVar3[3] = local_c;
    }
    puVar2[1] = puVar2[1] + 1;
    FUN_0046de90(puVar2,0);
  }
  return;
}

