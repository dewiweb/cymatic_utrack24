// rea decompile_all
// name: FUN_00486ac0
// address: 0x486ac0
// body: available
// range: 0x486ac0-0x486c44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00486ac0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  if (*(int *)(in_ECX + 0x6c) < param_2) {
    *(int *)(in_ECX + 0x6c) = param_2;
    FID_conflict__free(*(void **)(in_ECX + 0x68));
    uVar2 = FUN_004c554b(param_2);
    *(undefined4 *)(in_ECX + 0x68) = uVar2;
  }
  pbVar7 = *(byte **)(in_ECX + 0x68);
  FUN_0048b680(pbVar7,param_1,param_2);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x48) + 0xc);
  iVar4 = *(int *)(in_ECX + 0x50) * param_3 >> 8;
  pbVar3 = (byte *)(iVar1 * param_1 + *(int *)(in_ECX + 100));
  if (iVar4 < 0xfe) {
    do {
      uVar9 = ((uint)*pbVar7 << 0x10 | (uint)*pbVar7) * iVar4;
      uVar10 = uVar9 >> 8 & 0xff00ff;
      iVar5 = 0x100 - (uVar9 >> 0x18);
      iVar6 = ((uint)pbVar3[1] * iVar5 >> 8) + uVar10;
      uVar10 = (((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * iVar5 >> 8 & 0xff00ff) + uVar10;
      uVar10 = (0x100 - (uVar10 >> 8 & 0xff00ff) | uVar10) & 0xff00ff;
      *pbVar3 = (byte)uVar10;
      pbVar3[1] = -(char)((uint)iVar6 >> 8) | (byte)iVar6;
      pbVar7 = pbVar7 + 1;
      pbVar3[2] = (byte)(uVar10 >> 0x10);
      pbVar3 = pbVar3 + iVar1;
      param_2 = param_2 + -1;
    } while (0 < param_2);
    return;
  }
  do {
    uVar10 = (uint)*pbVar7;
    uVar8 = uVar10 << 0x10 | uVar10;
    uVar9 = (((uint)pbVar3[2] << 0x10 | (uint)*pbVar3) * (0x100 - uVar10) >> 8 & 0xff00ff) + uVar8;
    uVar9 = (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9) & 0xff00ff;
    *pbVar3 = (byte)uVar9;
    iVar4 = ((uint)pbVar3[1] * (0x100 - uVar10) >> 8) + uVar8;
    pbVar3[1] = -(char)((uint)iVar4 >> 8) | (byte)iVar4;
    pbVar7 = pbVar7 + 1;
    pbVar3[2] = (byte)(uVar9 >> 0x10);
    pbVar3 = pbVar3 + iVar1;
    param_2 = param_2 + -1;
  } while (0 < param_2);
  return;
}

