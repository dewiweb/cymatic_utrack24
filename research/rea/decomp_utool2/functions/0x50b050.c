// rea decompile_all
// name: FUN_0050b050
// address: 0x50b050
// body: available
// range: 0x50b050-0x50b159 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050b050(undefined4 *param_1)

{
  int in_ECX;
  
  FUN_00684c50();
  FUN_00472db0((float)*(int *)(in_ECX + 0x1c));
  FUN_00683310();
  if (*(char *)(in_ECX + 0x7b8) == '\0') {
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      (**(code **)(*(int *)*param_1 + 0x34))();
    }
    *(undefined1 *)(param_1 + 2) = 1;
    FUN_00684c50();
    FUN_00472d90(*(undefined4 *)(in_ECX + 0x6f8),*(int *)(in_ECX + 0x6fc) + -8,
                 *(undefined4 *)(in_ECX + 0x700));
    FUN_00682290(in_ECX + 0x7c8,0x24,4,0x3f4ccccd);
    if (*(char *)(param_1 + 2) != '\0') {
      *(undefined1 *)(param_1 + 2) = 0;
      return;
    }
    (**(code **)(*(int *)*param_1 + 0x38))();
  }
  return;
}

