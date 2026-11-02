// rea decompile_all
// name: FUN_0041c620
// address: 0x41c620
// body: available
// range: 0x41c620-0x41c698 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041c620(int param_1,int *param_2)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int in_ECX;
  int in_EDX;
  int iVar4;
  
  if (in_EDX <= param_1) {
    *(int *)(in_ECX + in_EDX * 4) = *param_2;
    return;
  }
  do {
    iVar4 = (in_EDX + -1) / 2;
    iVar3 = *(int *)(in_ECX + iVar4 * 4);
    dVar1 = *(double *)(*(int *)(iVar3 + 0xdc) + 0x38);
    dVar2 = *(double *)(*(int *)(*param_2 + 0xdc) + 0x38);
    if ((dVar2 <= dVar1) && (-1 < (int)(uint)(dVar2 < dVar1))) break;
    *(int *)(in_ECX + in_EDX * 4) = iVar3;
    in_EDX = iVar4;
  } while (param_1 < iVar4);
  *(int *)(in_ECX + in_EDX * 4) = *param_2;
  return;
}

