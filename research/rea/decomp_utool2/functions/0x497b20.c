// rea decompile_all
// name: FUN_00497b20
// address: 0x497b20
// body: available
// range: 0x497b20-0x497c7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00497b20(int param_1)

{
  undefined4 *puVar1;
  DWORD DVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  iVar4 = *(int *)(in_ECX + 0x100) + -1;
  if (-1 < iVar4) {
    piVar6 = (int *)(*(int *)(in_ECX + 0xf8) + iVar4 * 4);
    do {
      if (((undefined4 *)*piVar6)[6] == param_1) {
        return (undefined4 *)*piVar6;
      }
      piVar6 = piVar6 + -1;
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  puVar1 = operator_new(0x40);
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *puVar1 = juce::PopupMenu::HelperClasses::MouseSourceState::vftable;
  puVar1[5] = in_ECX;
  puVar1[6] = param_1;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)(puVar1 + 10) = 0x3ff0000000000000;
  DVar2 = timeGetTime();
  if ((DAT_00c8a644 <= DVar2) || (DVar2 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar2;
  }
  puVar1[0xc] = DVar2;
  puVar1[0xd] = 0;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  iVar4 = *(int *)(in_ECX + 0x100) + 1;
  if ((*(int *)(in_ECX + 0xfc) < iVar4) &&
     (uVar5 = *(int *)(in_ECX + 0x100) + 9 + iVar4 / 2 & 0xfffffff8,
     *(uint *)(in_ECX + 0xfc) != uVar5)) {
    if ((int)uVar5 < 1) {
      FID_conflict__free(*(void **)(in_ECX + 0xf8));
      *(undefined4 *)(in_ECX + 0xf8) = 0;
    }
    else if (*(int *)(in_ECX + 0xf8) == 0) {
      uVar3 = FUN_004c554b();
      *(undefined4 *)(in_ECX + 0xf8) = uVar3;
    }
    else {
      uVar3 = FUN_004c553b(*(int *)(in_ECX + 0xf8),uVar5 * 4);
      *(undefined4 *)(in_ECX + 0xf8) = uVar3;
    }
    *(uint *)(in_ECX + 0xfc) = uVar5;
  }
  iVar4 = *(int *)(in_ECX + 0x100);
  *(int *)(in_ECX + 0x100) = iVar4 + 1;
  *(undefined4 **)(*(int *)(in_ECX + 0xf8) + iVar4 * 4) = puVar1;
  return puVar1;
}

