// rea decompile_all
// name: FUN_006977f0
// address: 0x6977f0
// body: available
// range: 0x6977f0-0x69782a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006977f0(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  int in_ECX;
  
  if ((*(int **)(in_ECX + 0xb8) != (int *)0x0) &&
     (pcVar1 = *(code **)(**(int **)(in_ECX + 0xb8) + 0x24), pcVar1 != FUN_006df280)) {
    iVar2 = (*pcVar1)(param_1);
    if (0 < iVar2) {
      FUN_00699080(param_1,iVar2);
    }
  }
  return;
}

