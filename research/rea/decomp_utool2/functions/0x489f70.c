// rea decompile_all
// name: FUN_00489f70
// address: 0x489f70
// body: available
// range: 0x489f70-0x48a11d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00489f70(uint param_1,int param_2)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  int *in_ECX;
  byte *pbVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  iVar3 = *(int *)(*in_ECX + 0xc);
  iVar9 = param_1 - in_ECX[3];
  puVar7 = (uint *)(iVar3 * param_1 + in_ECX[5]);
  if (in_ECX[2] < 0xfe) {
    do {
      pbVar6 = (byte *)(*(int *)(in_ECX[1] + 0xc) * iVar9 + in_ECX[6]);
      uVar4 = (pbVar6[1] | 0xff0000) * in_ECX[2];
      iVar10 = 0x100 - (uVar4 >> 0x18);
      uVar8 = (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * in_ECX[2] >> 8 & 0xff00ff) +
              ((*puVar7 & 0xff00ff) * iVar10 >> 8 & 0xff00ff);
      uVar4 = (uVar4 >> 8 & 0xff00ff) + ((*puVar7 >> 8 & 0xff00ff) * iVar10 >> 8 & 0xff00ff);
      param_2 = param_2 + -1;
      iVar9 = iVar9 + 1;
      *puVar7 = (((0x100 - (uVar4 >> 8 & 0xff00ff)) * 0x100 | uVar4 * 0x100) ^
                (0x100 - (uVar8 >> 8 & 0xff00ff) | uVar8)) & 0xff00ff ^
                (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) << 8;
      puVar7 = (uint *)((int)puVar7 + iVar3);
    } while (0 < param_2);
    return;
  }
  iVar10 = *(int *)(in_ECX[1] + 0xc);
  puVar5 = (ushort *)(iVar10 * iVar9 + in_ECX[6]);
  if (((iVar3 == iVar10) && (*(int *)(in_ECX[1] + 4) == 1)) && (*(int *)(*in_ECX + 4) == 1)) {
    FUN_004c2c30(puVar7,puVar5,iVar10 * param_2);
    return;
  }
  do {
    uVar2 = *puVar5;
    param_2 = param_2 + -1;
    puVar1 = puVar5 + 1;
    puVar5 = (ushort *)((int)puVar5 + iVar10);
    param_1 = (uint)uVar2;
    uVar4 = param_1;
    param_1._1_1_ = (byte)(uVar2 >> 8);
    *puVar7 = (((byte)*puVar1 | 0xffffff00) << 8 | (uint)param_1._1_1_) << 8 | uVar4 & 0xff;
    puVar7 = (uint *)((int)puVar7 + iVar3);
  } while (0 < param_2);
  return;
}

