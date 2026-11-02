// rea decompile_all
// name: FUN_00488d40
// address: 0x488d40
// body: available
// range: 0x488d40-0x488e98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00488d40(int param_1,int param_2)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  int iVar6;
  undefined2 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  
  iVar3 = *(int *)(*in_ECX + 0xc);
  iVar8 = param_1 - in_ECX[3];
  pbVar9 = (byte *)(iVar3 * param_1 + in_ECX[5]);
  if (0xfd < in_ECX[2]) {
    do {
      puVar7 = (undefined2 *)
               ((iVar8 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) + in_ECX[6]);
      uVar2 = *puVar7;
      bVar1 = *(byte *)(puVar7 + 1);
      *pbVar9 = (byte)uVar2;
      param_1._1_1_ = (byte)((ushort)uVar2 >> 8);
      pbVar9[1] = param_1._1_1_;
      param_2 = param_2 + -1;
      pbVar9[2] = bVar1;
      pbVar9 = pbVar9 + iVar3;
      iVar8 = iVar8 + 1;
    } while (0 < param_2);
    return;
  }
  do {
    pbVar10 = (byte *)((iVar8 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) + in_ECX[6])
    ;
    uVar5 = (pbVar10[1] | 0xff0000) * in_ECX[2];
    iVar6 = 0x100 - (uVar5 >> 0x18);
    iVar4 = ((uint)pbVar9[1] * iVar6 >> 8) + (uVar5 >> 8 & 0xff00ff);
    iVar8 = iVar8 + 1;
    uVar5 = (((uint)pbVar10[2] << 0x10 | (uint)*pbVar10) * in_ECX[2] >> 8 & 0xff00ff) +
            (((uint)pbVar9[2] << 0x10 | (uint)*pbVar9) * iVar6 >> 8 & 0xff00ff);
    uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) & 0xff00ff;
    pbVar9[1] = -(char)((uint)iVar4 >> 8) | (byte)iVar4;
    pbVar9[2] = (byte)(uVar5 >> 0x10);
    param_2 = param_2 + -1;
    *pbVar9 = (byte)uVar5;
    pbVar9 = pbVar9 + iVar3;
  } while (0 < param_2);
  return;
}

