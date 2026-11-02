// rea decompile_all
// name: FUN_0048a120
// address: 0x48a120
// body: available
// range: 0x48a120-0x48a2db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048a120(uint param_1,int param_2,int param_3)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  int *in_ECX;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  
  iVar3 = *(int *)(*in_ECX + 0xc);
  iVar7 = param_1 - in_ECX[3];
  iVar10 = in_ECX[2] * param_3 >> 8;
  puVar9 = (uint *)(iVar3 * param_1 + in_ECX[5]);
  if (iVar10 < 0xfe) {
    do {
      pbVar5 = (byte *)(*(int *)(in_ECX[1] + 0xc) * iVar7 + in_ECX[6]);
      uVar8 = (pbVar5[1] | 0xff0000) * iVar10;
      iVar6 = 0x100 - (uVar8 >> 0x18);
      uVar11 = (((uint)pbVar5[2] << 0x10 | (uint)*pbVar5) * iVar10 >> 8 & 0xff00ff) +
               ((*puVar9 & 0xff00ff) * iVar6 >> 8 & 0xff00ff);
      uVar8 = (uVar8 >> 8 & 0xff00ff) + ((*puVar9 >> 8 & 0xff00ff) * iVar6 >> 8 & 0xff00ff);
      param_2 = param_2 + -1;
      *puVar9 = (((0x100 - (uVar8 >> 8 & 0xff00ff)) * 0x100 | uVar8 * 0x100) ^
                (0x100 - (uVar11 >> 8 & 0xff00ff) | uVar11)) & 0xff00ff ^
                (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8) << 8;
      iVar7 = iVar7 + 1;
      puVar9 = (uint *)((int)puVar9 + iVar3);
    } while (0 < param_2);
    return;
  }
  iVar10 = *(int *)(in_ECX[1] + 0xc);
  puVar4 = (ushort *)(iVar10 * iVar7 + in_ECX[6]);
  if (((iVar3 == iVar10) && (*(int *)(in_ECX[1] + 4) == 1)) && (*(int *)(*in_ECX + 4) == 1)) {
    FUN_004c2c30(puVar9,puVar4,iVar10 * param_2);
    return;
  }
  do {
    uVar2 = *puVar4;
    param_2 = param_2 + -1;
    puVar1 = puVar4 + 1;
    puVar4 = (ushort *)((int)puVar4 + iVar10);
    param_1 = (uint)uVar2;
    uVar8 = param_1;
    param_1._1_1_ = (byte)(uVar2 >> 8);
    *puVar9 = (((byte)*puVar1 | 0xffffff00) << 8 | (uint)param_1._1_1_) << 8 | uVar8 & 0xff;
    puVar9 = (uint *)((int)puVar9 + iVar3);
  } while (0 < param_2);
  return;
}

