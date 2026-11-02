// rea decompile_all
// name: FUN_0052edb0
// address: 0x52edb0
// body: available
// range: 0x52edb0-0x52efa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0052edb0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int in_ECX;
  
  if (*(int *)(*(int *)(in_ECX + 0x98) + 0x9c) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0068f6f0();
  }
  iVar4 = FUN_006f6dd6(uVar3,0,&juce::TreeViewItem::RTTI_Type_Descriptor);
  if ((*(char *)(*(int *)(in_ECX + 0x90) + 0x1c) != '\0') && ((*(byte *)(iVar4 + 0x30) & 1) == 0)) {
    FUN_006841a0();
    FUN_00684a80();
  }
  FUN_00561df0();
  if (**(char **)(in_ECX + 0x174) == '\0') {
    if (**(char **)(in_ECX + 0x170) == '\0') goto LAB_0052ef08;
    iVar1 = *(int *)(in_ECX + 0x1c);
    iVar2 = *(int *)(in_ECX + 0x18);
    iVar6 = *(int *)(in_ECX + 0x170);
  }
  else {
    iVar1 = *(int *)(in_ECX + 0x1c);
    iVar2 = *(int *)(in_ECX + 0x18);
    iVar6 = *(int *)(in_ECX + 0x174);
  }
  piVar5 = (int *)(iVar6 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
  FUN_0057ee50(iVar6,3,iVar2 + -2,iVar1 + -6,0x22);
LAB_0052ef08:
  iVar6 = *(int *)(iVar4 + 8);
  if (iVar6 != 0) {
    if (*(int *)(iVar6 + 0x14) < 1) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(*(int *)(iVar6 + 0xc) + -4 + *(int *)(iVar6 + 0x14) * 4);
    }
    if ((iVar6 != iVar4) && (*(int *)(iVar4 + 0x40) != 0x3002)) {
      FUN_006842b0();
      FUN_00684c50();
      if ((float)*(int *)(in_ECX + 0x26c) < (float)*(int *)(in_ECX + 0x274)) {
        (**(code **)(*(int *)*param_1 + 0x50))();
      }
    }
  }
  return;
}

