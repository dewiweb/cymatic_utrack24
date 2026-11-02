// rea decompile_all
// name: FUN_004853b0
// address: 0x4853b0
// body: available
// range: 0x4853b0-0x48541e inclusive
// range: 0x485420-0x485456 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004853b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x68) + 0xc);
  pbVar6 = (byte *)(iVar1 * param_1 + *(int *)(in_ECX + 0x6c));
  iVar5 = param_2;
  if (param_3 < 0xff) {
    iVar2 = param_3 + 1;
    do {
      iVar3 = FUN_004650f0(&param_2,param_1);
      iVar5 = iVar5 + -1;
      param_1 = param_1 + 1;
      uVar4 = (uint)*(byte *)(iVar3 + 3) * iVar2;
      *pbVar6 = (char)((0x100 - (uVar4 >> 8)) * (uint)*pbVar6 >> 8) + (char)(uVar4 >> 8);
      pbVar6 = pbVar6 + iVar1;
    } while (0 < iVar5);
    return;
  }
  do {
    iVar2 = FUN_004650f0(&param_2,param_1);
    iVar5 = iVar5 + -1;
    param_1 = param_1 + 1;
    *pbVar6 = (char)((0x100 - (uint)*(byte *)(iVar2 + 3)) * (uint)*pbVar6 >> 8) +
              *(byte *)(iVar2 + 3);
    pbVar6 = pbVar6 + iVar1;
  } while (0 < iVar5);
  return;
}

