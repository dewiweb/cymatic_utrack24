// rea decompile_all
// name: FUN_004855e0
// address: 0x4855e0
// body: available
// range: 0x4855e0-0x485777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004855e0(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  int in_ECX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 local_10 [8];
  int local_8;
  
  local_8 = *(int *)(*(int *)(in_ECX + 0x30) + 0xc);
  pbVar6 = (byte *)(local_8 * param_1 + *(int *)(in_ECX + 0x34));
  if (0xfe < param_3) {
    param_3 = param_2;
    do {
      puVar1 = (uint *)FUN_00464e80(&param_2,param_1);
      uVar4 = *puVar1;
      iVar2 = 0x100 - (uint)*(byte *)((int)puVar1 + 3);
      uVar3 = (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar2 >> 8 & 0xff00ff) +
              (uVar4 & 0xff00ff);
      uVar3 = (0x100 - (uVar3 >> 8 & 0xff00ff) | uVar3) & 0xff00ff;
      *pbVar6 = (byte)uVar3;
      iVar2 = ((uint)pbVar6[1] * iVar2 >> 8) + (uVar4 >> 8 & 0xff00ff);
      pbVar6[1] = -(char)((uint)iVar2 >> 8) | (byte)iVar2;
      param_3 = param_3 + -1;
      pbVar6[2] = (byte)(uVar3 >> 0x10);
      pbVar6 = pbVar6 + local_8;
      param_1 = param_1 + 1;
    } while (0 < param_3);
    return;
  }
  do {
    iVar2 = param_3;
    puVar1 = (uint *)FUN_00464e80(local_10,param_1);
    uVar4 = (*puVar1 >> 8 & 0xff00ff) * iVar2;
    iVar2 = 0x100 - (uVar4 >> 0x18);
    iVar5 = ((uint)pbVar6[1] * iVar2 >> 8) + (uVar4 >> 8 & 0xff00ff);
    uVar4 = (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar2 >> 8 & 0xff00ff) +
            ((*puVar1 & 0xff00ff) * param_3 >> 8 & 0xff00ff);
    uVar4 = (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) & 0xff00ff;
    *pbVar6 = (byte)uVar4;
    pbVar6[1] = -(char)((uint)iVar5 >> 8) | (byte)iVar5;
    param_2 = param_2 + -1;
    pbVar6[2] = (byte)(uVar4 >> 0x10);
    pbVar6 = pbVar6 + local_8;
    param_1 = param_1 + 1;
  } while (0 < param_2);
  return;
}

