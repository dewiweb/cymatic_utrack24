// rea decompile_all
// name: FUN_00603950
// address: 0x603950
// body: available
// range: 0x603950-0x60399e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00603950(int *param_1,float param_2)

{
  undefined *puVar1;
  uint uVar2;
  int in_ECX;
  undefined **ppuVar3;
  int *piVar4;
  uint uVar5;
  
  uVar2 = *(int *)(in_ECX + 0x20) - 1;
  uVar5 = (uint)((float)*(int *)(in_ECX + 0x20) * param_2);
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  else if ((int)uVar2 < (int)uVar5) {
    uVar5 = uVar2;
  }
  if (uVar5 < *(uint *)(in_ECX + 0x20)) {
    ppuVar3 = (undefined **)(*(int *)(in_ECX + 0x18) + uVar5 * 4);
  }
  else {
    ppuVar3 = &PTR_DAT_00c7ed68;
  }
  puVar1 = *ppuVar3;
  *param_1 = (int)puVar1;
  piVar4 = (int *)(puVar1 + -8);
  if (piVar4 != &DAT_00bfe124) {
    LOCK();
    *piVar4 = *piVar4 + 1;
    UNLOCK();
  }
  return;
}

