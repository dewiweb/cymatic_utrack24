// rea decompile_all
// name: FUN_0066cac0
// address: 0x66cac0
// body: available
// range: 0x66cac0-0x66cb2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066cac0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x13c);
  (**(code **)(*(int *)(param_1 + 0x15c) + 8))(param_1);
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar2 == 0) {
    *(undefined4 *)(iVar1 + 0x10) = 2;
    if (*(char *)(param_1 + 0xb2) != '\0') goto LAB_0066cb29;
  }
  else {
    if (iVar2 == 1) {
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
      *(undefined4 *)(iVar1 + 0x10) = 2;
      return;
    }
    if (iVar2 != 2) goto LAB_0066cb29;
    if (*(char *)(param_1 + 0xb2) != '\0') {
      *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
      *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
      *(undefined4 *)(iVar1 + 0x10) = 1;
      return;
    }
  }
  *(int *)(iVar1 + 0x1c) = *(int *)(iVar1 + 0x1c) + 1;
LAB_0066cb29:
  *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
  return;
}

