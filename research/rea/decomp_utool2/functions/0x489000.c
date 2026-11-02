// rea decompile_all
// name: FUN_00489000
// address: 0x489000
// body: available
// range: 0x489000-0x48914b inclusive
// range: 0x489150-0x4891e7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00489000(uint *param_1,int param_2)

{
  int iVar1;
  byte *pbVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar1 = *(int *)(*in_ECX + 0xc);
  iVar7 = (int)param_1 - in_ECX[3];
  pbVar2 = (byte *)(iVar1 * (int)param_1 + in_ECX[5]);
  if (in_ECX[2] < 0xfe) {
    do {
      uVar6 = *(uint *)(*(int *)(in_ECX[1] + 0xc) * iVar7 + in_ECX[6]);
      uVar5 = (uVar6 >> 8 & 0xff00ff) * in_ECX[2];
      iVar3 = 0x100 - (uVar5 >> 0x18);
      iVar4 = ((uint)pbVar2[1] * iVar3 >> 8) + (uVar5 >> 8 & 0xff00ff);
      iVar7 = iVar7 + 1;
      uVar6 = (((uint)pbVar2[2] << 0x10 | (uint)*pbVar2) * iVar3 >> 8 & 0xff00ff) +
              ((uVar6 & 0xff00ff) * in_ECX[2] >> 8 & 0xff00ff);
      uVar6 = (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) & 0xff00ff;
      *pbVar2 = (byte)uVar6;
      pbVar2[1] = -(char)((uint)iVar4 >> 8) | (byte)iVar4;
      pbVar2[2] = (byte)(uVar6 >> 0x10);
      pbVar2 = pbVar2 + iVar1;
      param_2 = param_2 + -1;
    } while (0 < param_2);
    return;
  }
  iVar3 = *(int *)(in_ECX[1] + 0xc);
  param_1 = (uint *)(iVar3 * iVar7 + in_ECX[6]);
  if (((iVar1 == iVar3) && (*(int *)(in_ECX[1] + 4) == 1)) && (*(int *)(*in_ECX + 4) == 1)) {
    FUN_004c2c30(pbVar2,param_1,iVar3 * param_2);
    return;
  }
  do {
    uVar6 = *param_1;
    iVar7 = 0x100 - (uint)*(byte *)((int)param_1 + 3);
    uVar5 = (((uint)pbVar2[2] << 0x10 | (uint)*pbVar2) * iVar7 >> 8 & 0xff00ff) + (uVar6 & 0xff00ff)
    ;
    uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) & 0xff00ff;
    *pbVar2 = (byte)uVar5;
    iVar7 = ((uint)pbVar2[1] * iVar7 >> 8) + (uVar6 >> 8 & 0xff00ff);
    param_1 = (uint *)((int)param_1 + iVar3);
    pbVar2[1] = -(char)((uint)iVar7 >> 8) | (byte)iVar7;
    pbVar2[2] = (byte)(uVar5 >> 0x10);
    pbVar2 = pbVar2 + iVar1;
    param_2 = param_2 + -1;
  } while (0 < param_2);
  return;
}

