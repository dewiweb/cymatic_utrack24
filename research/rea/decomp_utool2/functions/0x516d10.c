// rea decompile_all
// name: FUN_00516d10
// address: 0x516d10
// body: available
// range: 0x516d10-0x516d99 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_00516d10(void)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  int *piVar3;
  int iVar4;
  
  puVar2 = operator_new(0x18);
  *puVar2 = 3;
  puVar1 = PTR_DAT_00c7ed68;
  puVar2[1] = PTR_DAT_00c7ed68;
  piVar3 = (int *)(puVar1 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    *piVar3 = *piVar3 + 1;
    UNLOCK();
  }
  puVar2[2] = 4;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  iVar4 = *(int *)(in_ECX + 0x10) + 1;
  if (*(int *)(in_ECX + 0xc) < iVar4) {
    FUN_00409cf0(iVar4 / 2 + *(int *)(in_ECX + 0x10) + 9 & 0xfffffff8);
  }
  iVar4 = *(int *)(in_ECX + 0x10);
  *(int *)(in_ECX + 0x10) = iVar4 + 1;
  *(undefined4 **)(*(int *)(in_ECX + 8) + iVar4 * 4) = puVar2;
  return puVar2;
}

