// rea decompile_all
// name: FUN_004882b0
// address: 0x4882b0
// body: available
// range: 0x4882b0-0x488380 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004882b0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar2 = *(int *)(*in_ECX + 0xc);
  iVar6 = param_1 - in_ECX[3];
  iVar3 = in_ECX[2] * param_3 >> 8;
  pbVar5 = (byte *)(iVar2 * param_1 + in_ECX[5]);
  if (0xfd < iVar3) {
    do {
      bVar1 = *(byte *)((iVar6 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) + 3 +
                       in_ECX[6]);
      param_2 = param_2 + -1;
      *pbVar5 = (char)((0x100 - (uint)bVar1) * (uint)*pbVar5 >> 8) + bVar1;
      pbVar5 = pbVar5 + iVar2;
      iVar6 = iVar6 + 1;
    } while (0 < param_2);
    return;
  }
  do {
    uVar4 = (uint)*(byte *)((iVar6 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) + 3 +
                           in_ECX[6]) * (iVar3 + 1);
    param_2 = param_2 + -1;
    *pbVar5 = (char)((0x100 - (uVar4 >> 8)) * (uint)*pbVar5 >> 8) + (char)(uVar4 >> 8);
    pbVar5 = pbVar5 + iVar2;
    iVar6 = iVar6 + 1;
  } while (0 < param_2);
  return;
}

