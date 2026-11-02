// rea decompile_all
// name: FUN_00487f70
// address: 0x487f70
// body: available
// range: 0x487f70-0x487fde inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00487f70(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  int *in_ECX;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(*in_ECX + 0xc);
  pbVar2 = (byte *)(iVar1 * param_1 + in_ECX[5]);
  iVar3 = in_ECX[2] * param_3 >> 8;
  if (0xfd < iVar3) {
    do {
      *pbVar2 = 0xff;
      param_2 = param_2 + -1;
      pbVar2 = pbVar2 + iVar1;
    } while (0 < param_2);
    return;
  }
  uVar4 = (iVar3 + 1) * 0xff;
  do {
    param_2 = param_2 + -1;
    *pbVar2 = (char)((uint)*pbVar2 * (0x100 - (uVar4 >> 8)) >> 8) + (char)(uVar4 >> 8);
    pbVar2 = pbVar2 + iVar1;
  } while (0 < param_2);
  return;
}

