// rea decompile_all
// name: FUN_004373a0
// address: 0x4373a0
// body: available
// range: 0x4373a0-0x437560 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004373a0(int *param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint *in_ECX;
  
  _memset(in_ECX,0,0x54);
  piVar1 = param_1;
  if ((undefined **)*param_1 == juce::BufferedInputStream::vftable) {
    iVar3 = FUN_00623650(&param_1,4);
    if (iVar3 == 4) {
      uVar4 = (uint)param_1 >> 0x18 | ((uint)param_1 & 0xff0000) >> 8 |
              ((uint)param_1 & 0xff00) << 8 | (int)param_1 << 0x18;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = (*(code *)((undefined **)*param_1)[9])();
  }
  *in_ECX = uVar4;
  if ((undefined **)*piVar1 == juce::BufferedInputStream::vftable) {
    iVar3 = FUN_00623650(&param_1,4);
    if (iVar3 == 4) {
      uVar4 = (uint)param_1 >> 0x18 | ((uint)param_1 & 0xff0000) >> 8 |
              ((uint)param_1 & 0xff00) << 8 | (int)param_1 << 0x18;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = (*(code *)((undefined **)*piVar1)[9])();
  }
  in_ECX[1] = uVar4;
  if ((undefined **)*piVar1 == juce::BufferedInputStream::vftable) {
    iVar3 = FUN_00623650(&param_1,2);
    if (iVar3 == 2) {
      uVar2 = (ushort)param_1 << 8 | (ushort)param_1 >> 8;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (*(code *)((undefined **)*piVar1)[7])();
  }
  *(ushort *)(in_ECX + 2) = uVar2;
  if ((undefined **)*piVar1 == juce::BufferedInputStream::vftable) {
    iVar3 = FUN_00623650(&param_1,2);
    if (iVar3 == 2) {
      uVar2 = (ushort)param_1 << 8 | (ushort)param_1 >> 8;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (*(code *)((undefined **)*piVar1)[7])();
  }
  *(ushort *)((int)in_ECX + 10) = uVar2;
  if ((undefined **)*piVar1 == juce::BufferedInputStream::vftable) {
    iVar3 = FUN_00623650(&param_1,2);
    if (iVar3 == 2) {
      uVar2 = (ushort)param_1 << 8 | (ushort)param_1 >> 8;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (*(code *)((undefined **)*piVar1)[7])();
  }
  *(ushort *)(in_ECX + 3) = uVar2;
  if ((undefined **)*piVar1 == juce::BufferedInputStream::vftable) {
    iVar3 = FUN_00623650(&param_1,2);
    if (iVar3 == 2) {
      uVar2 = (ushort)param_1 << 8 | (ushort)param_1 >> 8;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (*(code *)((undefined **)*piVar1)[7])();
  }
  *(ushort *)((int)in_ECX + 0xe) = uVar2;
  if ((undefined **)*piVar1 == juce::BufferedInputStream::vftable) {
    iVar3 = FUN_00623650(&param_1,2);
    if (iVar3 == 2) {
      uVar2 = (ushort)param_1 << 8 | (ushort)param_1 >> 8;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = (*(code *)((undefined **)*piVar1)[7])();
  }
  *(ushort *)(in_ECX + 4) = uVar2;
  (**(code **)(*piVar1 + 0xc))((int)in_ECX + 0x12,0x42);
  return;
}

