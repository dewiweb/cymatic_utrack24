// rea decompile_all
// name: FUN_004701a0
// address: 0x4701a0
// body: available
// range: 0x4701a0-0x47025e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004701a0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  
  iVar4 = in_ECX[2];
  iVar3 = param_1 + 1;
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else if (iVar4 < iVar3) {
    iVar3 = iVar4;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (iVar4 < param_1) {
    param_1 = iVar4;
  }
  iVar4 = param_1;
  if (param_1 < iVar3) {
    for (; iVar4 < iVar3; iVar4 = iVar4 + 1) {
      iVar2 = *(int *)(*in_ECX + iVar4 * 4);
      if (iVar2 != 0) {
        FUN_006764a0();
        FUN_004bfe14(iVar2,0x3c);
      }
      *(undefined4 *)(*in_ECX + iVar4 * 4) = 0;
    }
    puVar1 = (undefined4 *)(*in_ECX + param_1 * 4);
    iVar4 = in_ECX[2] - iVar3;
    in_ECX[2] = in_ECX[2] - (iVar3 - param_1);
    while (iVar4 = iVar4 + -1, -1 < iVar4) {
      *puVar1 = puVar1[iVar3 - param_1];
      puVar1 = puVar1 + 1;
    }
    iVar3 = in_ECX[2];
    if ((iVar3 * 2 < in_ECX[1]) && (iVar3 < in_ECX[1])) {
      FUN_00409cf0(iVar3);
    }
  }
  return;
}

