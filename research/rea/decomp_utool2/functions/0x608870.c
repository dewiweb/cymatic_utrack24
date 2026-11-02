// rea decompile_all
// name: FUN_00608870
// address: 0x608870
// body: available
// range: 0x608870-0x60894e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00608870(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined8 in_XMM1_Qa;
  undefined4 uVar5;
  undefined4 uStack_4c;
  
  if (*(char *)(in_ECX + 0x1c) == '\0') {
    *(undefined1 *)(in_ECX + 0x1c) = 1;
    iVar3 = FUN_006f6dd6(*(undefined4 *)(in_ECX + 0x18),0,
                         &juce::AudioProcessor::RTTI_Type_Descriptor,
                         &juce::AudioProcessorGraph::AudioGraphIOProcessor::RTTI_Type_Descriptor,0);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x9c) = param_2, param_2 != 0)) {
      FUN_006077b0();
    }
    piVar1 = *(int **)(in_ECX + 0x18);
    cVar2 = (**(code **)(*piVar1 + 0x24))();
    iVar3 = 0;
    if (cVar2 != '\0') {
      iVar3 = param_3;
    }
    piVar1[0x13] = iVar3;
    iVar3 = *(int *)(in_ECX + 0x18);
    if (*(int *)(iVar3 + 0x1c) < 1) {
      uStack_4c = 0;
    }
    else {
      uStack_4c = FUN_00637390();
    }
    if (*(int *)(iVar3 + 0x10) < 1) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_00637390();
    }
    uVar5 = (undefined4)((ulonglong)in_XMM1_Qa >> 0x20);
    FUN_0060a480(uVar4,uStack_4c,param_1,(int)in_XMM1_Qa,uVar5);
    (**(code **)(**(int **)(in_ECX + 0x18) + 8))((int)in_XMM1_Qa,uVar5,param_1);
  }
  return;
}

