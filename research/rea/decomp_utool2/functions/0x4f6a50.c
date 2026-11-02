// rea decompile_all
// name: FUN_004f6a50
// address: 0x4f6a50
// body: available
// range: 0x4f6a50-0x4f6af7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_004f6a50(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  
  iVar2 = *(int *)(in_ECX + 0x188);
  if ((*(int *)(iVar2 + 0x328) <= param_2) &&
     (iVar1 = *(int *)(iVar2 + 0x324), param_2 < *(int *)(iVar2 + 0x328) + iVar1)) {
    iVar4 = 1;
    if (1 < iVar1) {
      iVar4 = iVar1;
    }
    if ((uint)(param_2 % iVar4) < *(uint *)(iVar2 + 0x324)) {
      iVar2 = *(int *)(*(int *)(iVar2 + 0x31c) + (param_2 % iVar4) * 4);
      goto LAB_004f6a9d;
    }
  }
  iVar2 = 0;
LAB_004f6a9d:
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x74) != 0)) {
    piVar3 = (int *)FUN_006f6dd6(*(int *)(iVar2 + 0x74),0,&juce::Component::RTTI_Type_Descriptor,
                                 &juce::SettableTooltipClient::RTTI_Type_Descriptor,0);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(param_1);
      return param_1;
    }
  }
  piVar3 = (int *)(PTR_DAT_00c7ed68 + -8);
  *param_1 = PTR_DAT_00c7ed68;
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  return param_1;
}

