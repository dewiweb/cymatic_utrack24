// rea decompile_all
// name: FUN_005489e0
// address: 0x5489e0
// body: available
// range: 0x5489e0-0x548a49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005489e0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  
  if (DAT_00c8a5d4 != 0) {
    FUN_006320f0(in_ECX);
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x20);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(in_ECX + 0x20) = 0;
    (**(code **)*puVar1)(1);
  }
  if (*(int *)(in_ECX + 0x18) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(in_ECX + 0x14)) {
      do {
        FID_conflict__free(*(void **)(*(int *)(in_ECX + 0x18) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < *(int *)(in_ECX + 0x14));
    }
    FID_conflict__free(*(void **)(in_ECX + 0x18));
    FID_conflict__free(*(void **)(in_ECX + 0x1c));
  }
  return;
}

