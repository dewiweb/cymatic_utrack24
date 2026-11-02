// rea decompile_all
// name: FUN_00471990
// address: 0x471990
// body: available
// range: 0x471990-0x4719f6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00471990(int *param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = param_1[2];
  FUN_0040ede0(param_1[2]);
  iVar3 = 0;
  if (0 < in_ECX[2]) {
    iVar4 = 0;
    do {
      puVar1 = (undefined4 *)(*in_ECX + iVar4);
      if (puVar1 != (undefined4 *)0x0) {
        iVar2 = *param_1 + iVar4;
        *puVar1 = *(undefined4 *)(*param_1 + iVar4);
        puVar1[1] = *(undefined4 *)(iVar2 + 4);
        puVar1[2] = *(undefined4 *)(iVar2 + 8);
        puVar1[3] = *(undefined4 *)(iVar2 + 0xc);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (iVar3 < in_ECX[2]);
  }
  return;
}

