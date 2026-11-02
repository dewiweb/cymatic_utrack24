// rea decompile_all
// name: FUN_00470fe0
// address: 0x470fe0
// body: available
// range: 0x470fe0-0x471104 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00470fe0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *in_ECX;
  void *local_48 [2];
  undefined1 local_40 [24];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  void *pvStack_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701980;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*in_ECX != 0) {
    if (*(char *)((int)in_ECX + 0x25) == '\0') {
      FUN_00472be0(param_1);
      local_8 = 0;
      if ((char)in_ECX[9] == '\0') {
        uVar1 = FUN_004644b0(local_40);
        FUN_004728b0(uVar1);
      }
      else {
        FUN_00472910((float)in_ECX[7],(float)in_ECX[8]);
      }
      puVar2 = operator_new(0x28);
      puVar2[1] = 0;
      *puVar2 = juce::RenderingHelpers::
                ClipRegions<juce::RenderingHelpers::SoftwareRendererSavedState>::EdgeTableRegion::
                vftable;
      FUN_0067d460(&pvStack_1c);
      puVar2[1] = puVar2[1] + 1;
      FUN_0046de90(puVar2,0);
      local_48[0] = pvStack_1c;
    }
    else {
      uVar1 = FUN_0046e950(local_48);
      local_8 = 1;
      local_18 = 0x3f800000;
      local_28 = 0x3f800000;
      uStack_24 = 0;
      uStack_20 = 0;
      pvStack_1c = (void *)0x0;
      local_14 = 0;
      FUN_00470f00(uVar1,&local_28);
    }
    FID_conflict__free(local_48[0]);
  }
  ExceptionList = local_10;
  return;
}

