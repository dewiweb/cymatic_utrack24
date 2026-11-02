// rea decompile_all
// name: FUN_006039a0
// address: 0x6039a0
// body: available
// range: 0x6039a0-0x603a06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_006039a0(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  int in_ECX;
  float fVar3;
  
  iVar2 = FUN_0062c730(*param_1,0,0);
  fVar3 = ((float)iVar2 + 0.5) / (float)*(int *)(in_ECX + 0x20);
  if (fVar3 < 0.0) {
    return (float10)0.0;
  }
  fVar1 = 1.0;
  if (fVar3 <= 1.0) {
    fVar1 = fVar3;
  }
  return (float10)fVar1;
}

