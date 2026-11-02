// rea decompile_all
// name: FUN_004893e0
// address: 0x4893e0
// body: available
// range: 0x4893e0-0x489588 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004893e0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  byte *pbVar8;
  
  iVar1 = *(int *)(*in_ECX + 0xc);
  iVar2 = param_1 - in_ECX[3];
  pbVar8 = (byte *)(iVar1 * param_1 + in_ECX[5]);
  if (0xfd < in_ECX[2]) {
    do {
      puVar6 = (uint *)((iVar2 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) + in_ECX[6]
                       );
      uVar5 = *puVar6;
      iVar3 = 0x100 - (uint)*(byte *)((int)puVar6 + 3);
      uVar4 = (((uint)pbVar8[2] << 0x10 | (uint)*pbVar8) * iVar3 >> 8 & 0xff00ff) +
              (uVar5 & 0xff00ff);
      uVar4 = (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) & 0xff00ff;
      *pbVar8 = (byte)uVar4;
      iVar3 = ((uint)pbVar8[1] * iVar3 >> 8) + (uVar5 >> 8 & 0xff00ff);
      pbVar8[1] = -(char)((uint)iVar3 >> 8) | (byte)iVar3;
      param_2 = param_2 + -1;
      pbVar8[2] = (byte)(uVar4 >> 0x10);
      pbVar8 = pbVar8 + iVar1;
      iVar2 = iVar2 + 1;
    } while (0 < param_2);
    return;
  }
  do {
    uVar5 = *(uint *)((iVar2 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) + in_ECX[6]);
    uVar4 = (uVar5 >> 8 & 0xff00ff) * in_ECX[2];
    iVar3 = 0x100 - (uVar4 >> 0x18);
    iVar7 = ((uint)pbVar8[1] * iVar3 >> 8) + (uVar4 >> 8 & 0xff00ff);
    uVar5 = (((uint)pbVar8[2] << 0x10 | (uint)*pbVar8) * iVar3 >> 8 & 0xff00ff) +
            ((uVar5 & 0xff00ff) * in_ECX[2] >> 8 & 0xff00ff);
    uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) & 0xff00ff;
    *pbVar8 = (byte)uVar5;
    pbVar8[1] = -(char)((uint)iVar7 >> 8) | (byte)iVar7;
    param_2 = param_2 + -1;
    pbVar8[2] = (byte)(uVar5 >> 0x10);
    pbVar8 = pbVar8 + iVar1;
    iVar2 = iVar2 + 1;
  } while (0 < param_2);
  return;
}

