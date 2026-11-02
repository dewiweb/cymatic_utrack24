// rea decompile_all
// name: FUN_006e1340
// address: 0x6e1340
// body: available
// range: 0x6e1340-0x6e1404 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_006e1340(double param_1)

{
  int iVar1;
  int in_ECX;
  double dVar2;
  double dVar3;
  
  iVar1 = *(int *)(in_ECX + 0x78);
  dVar2 = (param_1 - *(double *)(iVar1 + 0x70)) /
          (*(double *)(iVar1 + 0x78) - *(double *)(iVar1 + 0x70));
  if (*(double *)(iVar1 + 0xa0) == 1.0) {
    return (float10)dVar2;
  }
  if (*(char *)(iVar1 + 0xb0) == '\0') {
    FUN_006f8700();
    return (float10)dVar2;
  }
  dVar3 = (dVar2 + dVar2) - 1.0;
  dVar2 = ABS(dVar3);
  FUN_006f8700();
  return (float10)((dVar2 * (double)(int)((uint)(0.0 <= dVar3) * 2 + -1) + 1.0) * 0.5);
}

