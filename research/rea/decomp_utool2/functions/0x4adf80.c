// rea decompile_all
// name: FUN_004adf80
// address: 0x4adf80
// body: available
// range: 0x4adf80-0x4adfd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004adf80(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  undefined8 *puVar3;
  int iVar4;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = param_1[2];
  FUN_0041c930(param_1[2]);
  iVar4 = 0;
  if (0 < in_ECX[2]) {
    iVar2 = 0;
    do {
      puVar3 = (undefined8 *)(*in_ECX + iVar2);
      if (puVar3 != (undefined8 *)0x0) {
        iVar1 = *param_1;
        *puVar3 = *(undefined8 *)(iVar1 + iVar2);
        *(undefined4 *)(puVar3 + 1) = *(undefined4 *)(iVar1 + 8 + iVar2);
      }
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar4 < in_ECX[2]);
  }
  return;
}

