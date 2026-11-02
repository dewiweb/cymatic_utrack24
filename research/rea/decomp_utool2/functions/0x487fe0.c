// rea decompile_all
// name: FUN_00487fe0
// address: 0x487fe0
// body: available
// range: 0x487fe0-0x4880ae inclusive
// range: 0x4880b0-0x4880db inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00487fe0(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  int *in_ECX;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = *(int *)(*in_ECX + 0xc);
  iVar6 = param_1 - in_ECX[3];
  pbVar3 = (byte *)(iVar2 * param_1 + in_ECX[5]);
  if (in_ECX[2] < 0xfe) {
    param_1 = param_2;
    do {
      iVar4 = *(int *)(in_ECX[1] + 0xc) * iVar6;
      iVar6 = iVar6 + 1;
      uVar5 = (uint)*(byte *)(iVar4 + 3 + in_ECX[6]) * (in_ECX[2] + 1);
      param_1 = param_1 + -1;
      *pbVar3 = (char)((0x100 - (uVar5 >> 8)) * (uint)*pbVar3 >> 8) + (char)(uVar5 >> 8);
      pbVar3 = pbVar3 + iVar2;
    } while (0 < param_1);
    return;
  }
  iVar4 = *(int *)(in_ECX[1] + 0xc);
  iVar6 = iVar4 * iVar6 + in_ECX[6];
  if (((iVar2 == iVar4) && (*(int *)(in_ECX[1] + 4) == 1)) && (*(int *)(*in_ECX + 4) == 1)) {
    FUN_004c2c30(pbVar3,iVar6,iVar4 * param_2);
    return;
  }
  do {
    pbVar1 = (byte *)(iVar6 + 3);
    iVar6 = iVar6 + iVar4;
    param_2 = param_2 + -1;
    *pbVar3 = (char)((0x100 - (uint)*pbVar1) * (uint)*pbVar3 >> 8) + *pbVar1;
    pbVar3 = pbVar3 + iVar2;
  } while (0 < param_2);
  return;
}

