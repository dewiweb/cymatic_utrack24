// rea decompile_all
// name: FUN_00602610
// address: 0x602610
// body: available
// range: 0x602610-0x6026bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00602610(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_ECX;
  
  FUN_00602db0(0,param_2 + 0x48);
  *in_ECX = juce::MemoryMappedAudioFormatReader::vftable;
  iVar1 = *param_1;
  in_ECX[0x14] = iVar1;
  piVar2 = (int *)(iVar1 + -8);
  if (piVar2 != &DAT_00bfe124) {
    LOCK();
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1c] = param_3;
  in_ECX[0x1d] = param_4;
  in_ECX[0x1e] = param_5;
  in_ECX[0x1f] = param_6;
  in_ECX[0x20] = param_7;
  *(undefined8 *)(in_ECX + 2) = *(undefined8 *)(param_2 + 8);
  in_ECX[4] = *(undefined4 *)(param_2 + 0x10);
  in_ECX[6] = *(undefined4 *)(param_2 + 0x18);
  in_ECX[7] = *(undefined4 *)(param_2 + 0x1c);
  in_ECX[8] = *(undefined4 *)(param_2 + 0x20);
  FUN_00630220(param_2 + 0x28);
  *(undefined1 *)(in_ECX + 9) = *(undefined1 *)(param_2 + 0x24);
  return;
}

