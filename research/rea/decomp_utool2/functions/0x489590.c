// rea decompile_all
// name: FUN_00489590
// address: 0x489590
// body: available
// range: 0x489590-0x48973b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00489590(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  byte *pbVar9;
  
  iVar1 = *(int *)(*in_ECX + 0xc);
  iVar2 = param_1 - in_ECX[3];
  iVar3 = in_ECX[2] * param_3 >> 8;
  pbVar9 = (byte *)(iVar1 * param_1 + in_ECX[5]);
  if (iVar3 < 0xfe) {
    do {
      uVar6 = *(uint *)((iVar2 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) + in_ECX[6]
                       );
      uVar5 = (uVar6 >> 8 & 0xff00ff) * iVar3;
      iVar4 = 0x100 - (uVar5 >> 0x18);
      iVar8 = ((uint)pbVar9[1] * iVar4 >> 8) + (uVar5 >> 8 & 0xff00ff);
      uVar6 = (((uint)pbVar9[2] << 0x10 | (uint)*pbVar9) * iVar4 >> 8 & 0xff00ff) +
              ((uVar6 & 0xff00ff) * iVar3 >> 8 & 0xff00ff);
      uVar6 = (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) & 0xff00ff;
      *pbVar9 = (byte)uVar6;
      pbVar9[1] = -(char)((uint)iVar8 >> 8) | (byte)iVar8;
      param_2 = param_2 + -1;
      pbVar9[2] = (byte)(uVar6 >> 0x10);
      pbVar9 = pbVar9 + iVar1;
      iVar2 = iVar2 + 1;
    } while (0 < param_2);
    return;
  }
  do {
    puVar7 = (uint *)((iVar2 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) + in_ECX[6]);
    uVar6 = *puVar7;
    iVar3 = 0x100 - (uint)*(byte *)((int)puVar7 + 3);
    uVar5 = (((uint)pbVar9[2] << 0x10 | (uint)*pbVar9) * iVar3 >> 8 & 0xff00ff) + (uVar6 & 0xff00ff)
    ;
    uVar5 = (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5) & 0xff00ff;
    *pbVar9 = (byte)uVar5;
    iVar3 = ((uint)pbVar9[1] * iVar3 >> 8) + (uVar6 >> 8 & 0xff00ff);
    pbVar9[1] = -(char)((uint)iVar3 >> 8) | (byte)iVar3;
    param_2 = param_2 + -1;
    pbVar9[2] = (byte)(uVar5 >> 0x10);
    pbVar9 = pbVar9 + iVar1;
    iVar2 = iVar2 + 1;
  } while (0 < param_2);
  return;
}

