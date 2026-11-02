// rea decompile_all
// name: FUN_0069bfa0
// address: 0x69bfa0
// body: available
// range: 0x69bfa0-0x69c0ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0069bfa0(void)

{
  int *piVar1;
  undefined **ppuVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  bool bVar5;
  
  piVar1 = (int *)(in_ECX + 0x8c);
  (**(code **)(*(int *)(in_ECX + 0x8c) + 0x28))(1);
  FUN_006e5050(piVar1,0xffffffff);
  uVar4 = 0;
  if (0 < *(int *)(in_ECX + 0x88)) {
    bVar5 = *(int *)(in_ECX + 0x88) != 0;
    do {
      if (bVar5) {
        ppuVar2 = (undefined **)(*(int *)(in_ECX + 0x80) + uVar4 * 4);
      }
      else {
        ppuVar2 = &PTR_DAT_00c7ed68;
      }
      if (**ppuVar2 == '\0') {
        *(bool *)(in_ECX + 0x135) = 0 < *(int *)(in_ECX + 0x11c);
      }
      else if (uVar4 < *(uint *)(in_ECX + 0x88)) {
        FUN_006e8760(*(int *)(in_ECX + 0x80) + uVar4 * 4,uVar4 + 1);
      }
      else {
        FUN_006e8760(&PTR_DAT_00c7ed68,uVar4 + 1);
      }
      uVar4 = uVar4 + 1;
      bVar5 = uVar4 < *(uint *)(in_ECX + 0x88);
    } while ((int)uVar4 < (int)*(uint *)(in_ECX + 0x88));
  }
  iVar3 = *(int *)(in_ECX + 0x148);
  if ((*(char *)(iVar3 + 0xcc) != '\0') || (*(char *)(iVar3 + 0xcd) != '\0')) {
    *(byte *)(iVar3 + 0x68) = *(byte *)(iVar3 + 0x68) & 0x9f;
    *(undefined2 *)(iVar3 + 0xcc) = 0;
    *(undefined1 *)(iVar3 + 0xce) = 0;
    *(byte *)(in_ECX + 0xf4) = *(byte *)(in_ECX + 0xf4) | 0x20;
    *(undefined4 *)(in_ECX + 0x154) = 1;
    if ((undefined **)*piVar1 != juce::ComboBox::vftable) {
                    /* WARNING: Could not recover jumptable at 0x0069c0aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((undefined **)*piVar1)[0x21])();
      return;
    }
    if ((0 < *(int *)(in_ECX + 0xa8)) && (0 < *(int *)(in_ECX + 0xa4))) {
      iVar3 = FUN_006e9580();
      (**(code **)(*(int *)(iVar3 + 0x24) + 0x10))(piVar1,*(undefined4 *)(in_ECX + 0x148));
    }
  }
  return;
}

