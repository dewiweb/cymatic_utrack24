// rea decompile_all
// name: FUN_00488550
// address: 0x488550
// body: available
// range: 0x488550-0x48871a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00488550(byte *param_1,int param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  iVar1 = *(int *)(*in_ECX + 0xc);
  iVar8 = (int)param_1 - in_ECX[3];
  iVar5 = in_ECX[2] * param_3 >> 8;
  pbVar2 = (byte *)(iVar1 * (int)param_1 + in_ECX[5]);
  if (iVar5 < 0xfe) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(in_ECX[1] + 0xc) * iVar8 + in_ECX[6]);
      uVar9 = (uVar3 << 0x10 | uVar3) * iVar5;
      uVar3 = uVar9 >> 8 & 0xff00ff;
      iVar4 = 0x100 - (uVar9 >> 0x18);
      iVar6 = ((uint)pbVar2[1] * iVar4 >> 8) + uVar3;
      uVar3 = (((uint)pbVar2[2] << 0x10 | (uint)*pbVar2) * iVar4 >> 8 & 0xff00ff) + uVar3;
      iVar8 = iVar8 + 1;
      uVar3 = (0x100 - (uVar3 >> 8 & 0xff00ff) | uVar3) & 0xff00ff;
      *pbVar2 = (byte)uVar3;
      pbVar2[1] = -(char)((uint)iVar6 >> 8) | (byte)iVar6;
      pbVar2[2] = (byte)(uVar3 >> 0x10);
      pbVar2 = pbVar2 + iVar1;
      param_2 = param_2 + -1;
    } while (0 < param_2);
    return;
  }
  iVar5 = *(int *)(in_ECX[1] + 0xc);
  param_1 = (byte *)(iVar5 * iVar8 + in_ECX[6]);
  if (((iVar1 == iVar5) && (*(int *)(in_ECX[1] + 4) == 1)) && (*(int *)(*in_ECX + 4) == 1)) {
    FUN_004c2c30(pbVar2,param_1,iVar5 * param_2);
    return;
  }
  do {
    uVar3 = (uint)*param_1;
    uVar7 = uVar3 << 0x10 | uVar3;
    uVar9 = (((uint)pbVar2[2] << 0x10 | (uint)*pbVar2) * (0x100 - uVar3) >> 8 & 0xff00ff) + uVar7;
    uVar9 = (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) & 0xff00ff;
    *pbVar2 = (byte)uVar9;
    iVar8 = ((uint)pbVar2[1] * (0x100 - uVar3) >> 8) + uVar7;
    pbVar2[1] = -(char)((uint)iVar8 >> 8) | (byte)iVar8;
    param_2 = param_2 + -1;
    pbVar2[2] = (byte)(uVar9 >> 0x10);
    param_1 = param_1 + iVar5;
    pbVar2 = pbVar2 + iVar1;
  } while (0 < param_2);
  return;
}

