// rea decompile_all
// name: FUN_006351a0
// address: 0x6351a0
// body: available
// range: 0x6351a0-0x635253 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006351a0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_ECX;
  int *piVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071eb60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = &DAT_00bfe12c;
  in_ECX[1] = 0;
  *(undefined2 *)(in_ECX + 2) = 0;
  in_ECX[3] = &DAT_00bfe12c;
  in_ECX[4] = &DAT_00bfe12c;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  local_8 = 3;
  *(undefined2 *)(in_ECX + 8) = 0x100;
  puVar2 = operator_new(0xc);
  *puVar2 = juce::FileInputSource::vftable;
  iVar1 = *param_1;
  puVar2[1] = iVar1;
  piVar3 = (int *)(iVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  *(undefined1 *)(puVar2 + 2) = 0;
  in_ECX[9] = puVar2;
  ExceptionList = local_10;
  return;
}

