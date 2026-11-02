// rea decompile_all
// name: FUN_005c2d40
// address: 0x5c2d40
// body: available
// range: 0x5c2d40-0x5c2e8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005c2d40(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  
  if (*(char *)(in_ECX + 0xcc) != '\0') {
    fVar4 = (float)*(int *)(param_1 + 8);
    if (*(int *)(param_1 + 8) < 0x2000) {
      fVar4 = fVar4 * 0.00012207031 - 1.0;
    }
    else {
      fVar4 = (fVar4 - 8192.0) / 8191.0 + (float)(undefined *)0x0;
    }
    *(double *)(param_1 + 0x18) = (double)((float)*(int *)(in_ECX + 0xd8) * fVar4);
    return;
  }
  piVar2 = *(int **)(in_ECX + 0x28);
  piVar3 = piVar2 + *(int *)(in_ECX + 0x30) * 4;
  if (piVar2 != piVar3) {
    while (((int)(uint)*(byte *)(param_1 + 2) <= *piVar2 ||
           (piVar2[1] + *piVar2 < (int)(uint)*(byte *)(param_1 + 2)))) {
      piVar2 = piVar2 + 4;
      if (piVar2 == piVar3) {
        return;
      }
    }
    fVar4 = (float)*(int *)(param_1 + 8);
    if (*(int *)(param_1 + 8) < 0x2000) {
      fVar4 = fVar4 * 0.00012207031 - 1.0;
    }
    else {
      fVar4 = (fVar4 - 8192.0) / 8191.0 + 0.0;
    }
    iVar1 = *(int *)(in_ECX + 0xdc + *piVar2 * 4);
    fVar5 = (float)iVar1;
    if (iVar1 < 0x2000) {
      fVar5 = fVar5 * 0.00012207031 - 1.0;
    }
    else {
      fVar5 = (fVar5 - 8192.0) / 8191.0 + 0.0;
    }
    *(double *)(param_1 + 0x18) =
         (double)((float)piVar2[3] * fVar5) + (double)((float)piVar2[2] * fVar4);
  }
  return;
}

