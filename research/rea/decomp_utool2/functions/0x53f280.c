// rea decompile_all
// name: FUN_0053f280
// address: 0x53f280
// body: available
// range: 0x53f280-0x53f314 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0053f280(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if (param_2 != 5) {
    iVar2 = FUN_005bd4e0();
    iVar2 = iVar2 * *(int *)(in_ECX + 0x24);
    iVar3 = FUN_0053e9b0();
    if (iVar2 <= iVar3) {
      FUN_0045c990("Too many channels, can\'t be exported");
      return param_1;
    }
    if (iVar2 < *(int *)(in_ECX + 0x5c)) {
      FUN_0045c990("Track count exceeded, can\'t be exported");
      return param_1;
    }
  }
  piVar1 = (int *)(PTR_DAT_00c7ed68 + -8);
  *param_1 = PTR_DAT_00c7ed68;
  if (piVar1 != &DAT_00bfe124) {
    LOCK();
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return param_1;
}

