// rea decompile_all
// name: FUN_00487d80
// address: 0x487d80
// body: available
// range: 0x487d80-0x487e1e inclusive
// range: 0x487e20-0x487e32 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00487d80(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  int *in_ECX;
  uint uVar4;
  
  iVar1 = *(int *)(*in_ECX + 0xc);
  pbVar3 = (byte *)(iVar1 * param_1 + in_ECX[5]);
  if (in_ECX[2] < 0xfe) {
    do {
      param_2 = param_2 + -1;
      uVar4 = (in_ECX[2] + 1) * 0xff;
      *pbVar3 = (char)((0x100 - (uVar4 >> 8)) * (uint)*pbVar3 >> 8) + (char)(uVar4 >> 8);
      pbVar3 = pbVar3 + iVar1;
    } while (0 < param_2);
    return;
  }
  iVar2 = *(int *)(in_ECX[1] + 0xc);
  if (((iVar1 == iVar2) && (*(int *)(in_ECX[1] + 4) == 1)) && (*(int *)(*in_ECX + 4) == 1)) {
    FUN_004c2c30(pbVar3,iVar2 * (param_1 - in_ECX[3]) + in_ECX[6],iVar2 * param_2);
    return;
  }
  do {
    *pbVar3 = 0xff;
    param_2 = param_2 + -1;
    pbVar3 = pbVar3 + iVar1;
  } while (0 < param_2);
  return;
}

