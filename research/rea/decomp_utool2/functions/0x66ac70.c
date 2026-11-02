// rea decompile_all
// name: FUN_0066ac70
// address: 0x66ac70
// body: available
// range: 0x66ac70-0x66ad0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066ac70(void)

{
  undefined4 uVar1;
  int in_ECX;
  int iVar2;
  undefined4 *local_8;
  
  local_8 = (undefined4 *)(*(code *)**(undefined4 **)(in_ECX + 4))();
  *(undefined4 **)(in_ECX + 0x144) = local_8;
  *local_8 = FUN_0066b250;
  if (*(char *)(*(int *)(in_ECX + 0x154) + 8) != '\0') {
    local_8[1] = FUN_0066ae40;
    FUN_0066ad10();
    return;
  }
  local_8[1] = FUN_0066b030;
  iVar2 = 0;
  if (0 < *(int *)(in_ECX + 0x3c)) {
    local_8 = local_8 + 2;
    do {
      uVar1 = (**(code **)(*(int *)(in_ECX + 4) + 8))();
      iVar2 = iVar2 + 1;
      *local_8 = uVar1;
      local_8 = local_8 + 1;
    } while (iVar2 < *(int *)(in_ECX + 0x3c));
  }
  return;
}

