// rea decompile_all
// name: FUN_00488bc0
// address: 0x488bc0
// body: available
// range: 0x488bc0-0x488d0e inclusive
// range: 0x488d10-0x488d3b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00488bc0(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  byte *pbVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  undefined2 *puVar10;
  int iVar11;
  
  iVar3 = *(int *)(*in_ECX + 0xc);
  iVar11 = param_1 - in_ECX[3];
  iVar8 = in_ECX[2] * param_3 >> 8;
  pbVar4 = (byte *)(iVar3 * param_1 + in_ECX[5]);
  if (iVar8 < 0xfe) {
    do {
      pbVar7 = (byte *)(*(int *)(in_ECX[1] + 0xc) * iVar11 + in_ECX[6]);
      uVar6 = (pbVar7[1] | 0xff0000) * iVar8;
      iVar9 = 0x100 - (uVar6 >> 0x18);
      iVar5 = ((uint)pbVar4[1] * iVar9 >> 8) + (uVar6 >> 8 & 0xff00ff);
      uVar6 = (((uint)pbVar7[2] << 0x10 | (uint)*pbVar7) * iVar8 >> 8 & 0xff00ff) +
              (((uint)pbVar4[2] << 0x10 | (uint)*pbVar4) * iVar9 >> 8 & 0xff00ff);
      uVar6 = (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) & 0xff00ff;
      pbVar4[1] = -(char)((uint)iVar5 >> 8) | (byte)iVar5;
      iVar11 = iVar11 + 1;
      *pbVar4 = (byte)uVar6;
      pbVar4[2] = (byte)(uVar6 >> 0x10);
      pbVar4 = pbVar4 + iVar3;
      param_2 = param_2 + -1;
    } while (0 < param_2);
    return;
  }
  iVar8 = *(int *)(in_ECX[1] + 0xc);
  puVar10 = (undefined2 *)(iVar8 * iVar11 + in_ECX[6]);
  if (((iVar3 == iVar8) && (*(int *)(in_ECX[1] + 4) == 1)) && (*(int *)(*in_ECX + 4) == 1)) {
    FUN_004c2c30(pbVar4,puVar10,iVar8 * param_2);
    return;
  }
  do {
    uVar2 = *puVar10;
    param_2 = param_2 + -1;
    bVar1 = *(byte *)(puVar10 + 1);
    puVar10 = (undefined2 *)((int)puVar10 + iVar8);
    *pbVar4 = (byte)uVar2;
    param_1._1_1_ = (byte)((ushort)uVar2 >> 8);
    pbVar4[1] = param_1._1_1_;
    pbVar4[2] = bVar1;
    pbVar4 = pbVar4 + iVar3;
  } while (0 < param_2);
  return;
}

