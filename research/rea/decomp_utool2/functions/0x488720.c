// rea decompile_all
// name: FUN_00488720
// address: 0x488720
// body: available
// range: 0x488720-0x48880a inclusive
// range: 0x488810-0x4888a8 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00488720(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = *(int *)(*in_ECX + 0xc);
  iVar2 = param_1 - in_ECX[3];
  pbVar6 = (byte *)(iVar1 * param_1 + in_ECX[5]);
  if (0xfd < in_ECX[2]) {
    do {
      uVar3 = (uint)*(byte *)((iVar2 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) +
                             in_ECX[6]);
      uVar8 = uVar3 << 0x10 | uVar3;
      uVar7 = (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * (0x100 - uVar3) >> 8 & 0xff00ff) + uVar8;
      uVar7 = (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) & 0xff00ff;
      *pbVar6 = (byte)uVar7;
      iVar4 = ((uint)pbVar6[1] * (0x100 - uVar3) >> 8) + uVar8;
      pbVar6[1] = -(char)((uint)iVar4 >> 8) | (byte)iVar4;
      param_2 = param_2 + -1;
      pbVar6[2] = (byte)(uVar7 >> 0x10);
      pbVar6 = pbVar6 + iVar1;
      iVar2 = iVar2 + 1;
    } while (0 < param_2);
    return;
  }
  do {
    uVar3 = (uint)*(byte *)((iVar2 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) +
                           in_ECX[6]);
    uVar7 = (uVar3 << 0x10 | uVar3) * in_ECX[2];
    uVar3 = uVar7 >> 8 & 0xff00ff;
    iVar4 = 0x100 - (uVar7 >> 0x18);
    iVar5 = ((uint)pbVar6[1] * iVar4 >> 8) + uVar3;
    uVar3 = (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar4 >> 8 & 0xff00ff) + uVar3;
    uVar3 = (0x100 - (uVar3 >> 8 & 0xff00ff) | uVar3) & 0xff00ff;
    *pbVar6 = (byte)uVar3;
    pbVar6[1] = -(char)((uint)iVar5 >> 8) | (byte)iVar5;
    param_2 = param_2 + -1;
    pbVar6[2] = (byte)(uVar3 >> 0x10);
    pbVar6 = pbVar6 + iVar1;
    iVar2 = iVar2 + 1;
  } while (0 < param_2);
  return;
}

