// rea decompile_all
// name: FUN_00486f10
// address: 0x486f10
// body: available
// range: 0x486f10-0x487034 inclusive
// range: 0x487040-0x4870d7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00486f10(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  
  if (*(int *)(in_ECX + 0x6c) < param_2) {
    *(int *)(in_ECX + 0x6c) = param_2;
    FID_conflict__free(*(void **)(in_ECX + 0x68));
    uVar2 = FUN_004c554b(param_2 * 4);
    *(undefined4 *)(in_ECX + 0x68) = uVar2;
  }
  puVar8 = *(uint **)(in_ECX + 0x68);
  FUN_00476510(puVar8,param_1,param_2);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x48) + 0xc);
  iVar4 = *(int *)(in_ECX + 0x50) * param_3 >> 8;
  pbVar3 = (byte *)(iVar1 * param_1 + *(int *)(in_ECX + 100));
  if (iVar4 < 0xfe) {
    do {
      uVar9 = (*puVar8 >> 8 & 0xff00ff) * iVar4;
      iVar5 = 0x100 - (uVar9 >> 0x18);
      iVar7 = ((uint)pbVar3[1] * iVar5 >> 8) + (uVar9 >> 8 & 0xff00ff);
      uVar9 = (((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar5 >> 8 & 0xff00ff) +
              ((*puVar8 & 0xff00ff) * iVar4 >> 8 & 0xff00ff);
      uVar9 = (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) & 0xff00ff;
      *pbVar3 = (byte)uVar9;
      pbVar3[1] = -(char)((uint)iVar7 >> 8) | (byte)iVar7;
      puVar8 = puVar8 + 1;
      pbVar3[2] = (byte)(uVar9 >> 0x10);
      pbVar3 = pbVar3 + iVar1;
      param_2 = param_2 + -1;
    } while (0 < param_2);
    return;
  }
  do {
    iVar4 = 0x100 - (uint)*(byte *)((int)puVar8 + 3);
    uVar9 = *puVar8;
    uVar6 = (((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar4 >> 8 & 0xff00ff) + (uVar9 & 0xff00ff)
    ;
    uVar6 = (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6) & 0xff00ff;
    *pbVar3 = (byte)uVar6;
    iVar4 = ((uint)pbVar3[1] * iVar4 >> 8) + (uVar9 >> 8 & 0xff00ff);
    pbVar3[1] = -(char)((uint)iVar4 >> 8) | (byte)iVar4;
    puVar8 = puVar8 + 1;
    pbVar3[2] = (byte)(uVar6 >> 0x10);
    pbVar3 = pbVar3 + iVar1;
    param_2 = param_2 + -1;
  } while (0 < param_2);
  return;
}

