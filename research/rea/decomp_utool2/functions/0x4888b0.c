// rea decompile_all
// name: FUN_004888b0
// address: 0x4888b0
// body: available
// range: 0x4888b0-0x488a39 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004888b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  
  iVar1 = *(int *)(*in_ECX + 0xc);
  iVar2 = param_1 - in_ECX[3];
  iVar4 = in_ECX[2] * param_3 >> 8;
  pbVar7 = (byte *)(iVar1 * param_1 + in_ECX[5]);
  if (iVar4 < 0xfe) {
    do {
      uVar3 = (uint)*(byte *)((iVar2 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) +
                             in_ECX[6]);
      uVar8 = (uVar3 << 0x10 | uVar3) * iVar4;
      uVar3 = uVar8 >> 8 & 0xff00ff;
      iVar5 = 0x100 - (uVar8 >> 0x18);
      iVar6 = ((uint)pbVar7[1] * iVar5 >> 8) + uVar3;
      uVar3 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar5 >> 8 & 0xff00ff) + uVar3;
      uVar3 = (0x100 - (uVar3 >> 8 & 0xff00ff) | uVar3) & 0xff00ff;
      *pbVar7 = (byte)uVar3;
      pbVar7[1] = -(char)((uint)iVar6 >> 8) | (byte)iVar6;
      param_2 = param_2 + -1;
      pbVar7[2] = (byte)(uVar3 >> 0x10);
      pbVar7 = pbVar7 + iVar1;
      iVar2 = iVar2 + 1;
    } while (0 < param_2);
    return;
  }
  do {
    uVar3 = (uint)*(byte *)((iVar2 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) +
                           in_ECX[6]);
    uVar9 = uVar3 << 0x10 | uVar3;
    uVar8 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * (0x100 - uVar3) >> 8 & 0xff00ff) + uVar9;
    uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) & 0xff00ff;
    *pbVar7 = (byte)uVar8;
    iVar4 = ((uint)pbVar7[1] * (0x100 - uVar3) >> 8) + uVar9;
    pbVar7[1] = -(char)((uint)iVar4 >> 8) | (byte)iVar4;
    param_2 = param_2 + -1;
    pbVar7[2] = (byte)(uVar8 >> 0x10);
    pbVar7 = pbVar7 + iVar1;
    iVar2 = iVar2 + 1;
  } while (0 < param_2);
  return;
}

