// rea decompile_all
// name: FUN_00488390
// address: 0x488390
// body: available
// range: 0x488390-0x488548 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00488390(byte *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  iVar1 = *(int *)(*in_ECX + 0xc);
  iVar7 = (int)param_1 - in_ECX[3];
  pbVar2 = (byte *)(iVar1 * (int)param_1 + in_ECX[5]);
  if (in_ECX[2] < 0xfe) {
    do {
      uVar3 = (uint)*(byte *)(*(int *)(in_ECX[1] + 0xc) * iVar7 + in_ECX[6]);
      uVar8 = (uVar3 << 0x10 | uVar3) * in_ECX[2];
      uVar3 = uVar8 >> 8 & 0xff00ff;
      iVar4 = 0x100 - (uVar8 >> 0x18);
      iVar5 = ((uint)pbVar2[1] * iVar4 >> 8) + uVar3;
      uVar3 = (((uint)pbVar2[2] << 0x10 | (uint)*pbVar2) * iVar4 >> 8 & 0xff00ff) + uVar3;
      iVar7 = iVar7 + 1;
      uVar3 = (0x100 - (uVar3 >> 8 & 0xff00ff) | uVar3) & 0xff00ff;
      *pbVar2 = (byte)uVar3;
      pbVar2[1] = -(char)((uint)iVar5 >> 8) | (byte)iVar5;
      pbVar2[2] = (byte)(uVar3 >> 0x10);
      pbVar2 = pbVar2 + iVar1;
      param_2 = param_2 + -1;
    } while (0 < param_2);
    return;
  }
  iVar4 = *(int *)(in_ECX[1] + 0xc);
  param_1 = (byte *)(iVar4 * iVar7 + in_ECX[6]);
  if (((iVar1 == iVar4) && (*(int *)(in_ECX[1] + 4) == 1)) && (*(int *)(*in_ECX + 4) == 1)) {
    FUN_004c2c30(pbVar2,param_1,iVar4 * param_2);
    return;
  }
  do {
    uVar3 = (uint)*param_1;
    uVar6 = uVar3 << 0x10 | uVar3;
    uVar8 = (((uint)pbVar2[2] << 0x10 | (uint)*pbVar2) * (0x100 - uVar3) >> 8 & 0xff00ff) + uVar6;
    uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) & 0xff00ff;
    *pbVar2 = (byte)uVar8;
    iVar7 = ((uint)pbVar2[1] * (0x100 - uVar3) >> 8) + uVar6;
    pbVar2[1] = -(char)((uint)iVar7 >> 8) | (byte)iVar7;
    param_2 = param_2 + -1;
    pbVar2[2] = (byte)(uVar8 >> 0x10);
    param_1 = param_1 + iVar4;
    pbVar2 = pbVar2 + iVar1;
  } while (0 < param_2);
  return;
}

