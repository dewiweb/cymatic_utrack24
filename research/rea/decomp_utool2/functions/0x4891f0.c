// rea decompile_all
// name: FUN_004891f0
// address: 0x4891f0
// body: available
// range: 0x4891f0-0x48933c inclusive
// range: 0x489340-0x4893d7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004891f0(uint *param_1,int param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  iVar1 = *(int *)(*in_ECX + 0xc);
  iVar6 = (int)param_1 - in_ECX[3];
  iVar3 = in_ECX[2] * param_3 >> 8;
  pbVar2 = (byte *)(iVar1 * (int)param_1 + in_ECX[5]);
  if (iVar3 < 0xfe) {
    do {
      uVar8 = *(uint *)(*(int *)(in_ECX[1] + 0xc) * iVar6 + in_ECX[6]);
      uVar7 = (uVar8 >> 8 & 0xff00ff) * iVar3;
      iVar4 = 0x100 - (uVar7 >> 0x18);
      iVar5 = ((uint)pbVar2[1] * iVar4 >> 8) + (uVar7 >> 8 & 0xff00ff);
      uVar8 = (((uint)pbVar2[2] << 0x10 | (uint)*pbVar2) * iVar4 >> 8 & 0xff00ff) +
              ((uVar8 & 0xff00ff) * iVar3 >> 8 & 0xff00ff);
      uVar8 = (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) & 0xff00ff;
      iVar6 = iVar6 + 1;
      pbVar2[1] = -(char)((uint)iVar5 >> 8) | (byte)iVar5;
      pbVar2[2] = (byte)(uVar8 >> 0x10);
      *pbVar2 = (byte)uVar8;
      param_2 = param_2 + -1;
      pbVar2 = pbVar2 + iVar1;
    } while (0 < param_2);
    return;
  }
  iVar3 = *(int *)(in_ECX[1] + 0xc);
  param_1 = (uint *)(iVar3 * iVar6 + in_ECX[6]);
  if (((iVar1 == iVar3) && (*(int *)(in_ECX[1] + 4) == 1)) && (*(int *)(*in_ECX + 4) == 1)) {
    FUN_004c2c30(pbVar2,param_1,iVar3 * param_2);
    return;
  }
  do {
    uVar8 = *param_1;
    iVar6 = 0x100 - (uint)*(byte *)((int)param_1 + 3);
    uVar7 = (((uint)pbVar2[2] << 0x10 | (uint)*pbVar2) * iVar6 >> 8 & 0xff00ff) + (uVar8 & 0xff00ff)
    ;
    uVar7 = (0x100 - (uVar7 >> 8 & 0xff00ff) | uVar7) & 0xff00ff;
    *pbVar2 = (byte)uVar7;
    iVar6 = ((uint)pbVar2[1] * iVar6 >> 8) + (uVar8 >> 8 & 0xff00ff);
    param_1 = (uint *)((int)param_1 + iVar3);
    pbVar2[1] = -(char)((uint)iVar6 >> 8) | (byte)iVar6;
    pbVar2[2] = (byte)(uVar7 >> 0x10);
    pbVar2 = pbVar2 + iVar1;
    param_2 = param_2 + -1;
  } while (0 < param_2);
  return;
}

