// rea decompile_all
// name: FUN_0048a480
// address: 0x48a480
// body: available
// range: 0x48a480-0x48a60c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048a480(uint param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *in_ECX;
  int iVar5;
  byte *pbVar6;
  ushort *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  int local_8;
  
  iVar2 = *(int *)(*in_ECX + 0xc);
  iVar8 = param_1 - in_ECX[3];
  iVar3 = in_ECX[2] * param_3 >> 8;
  puVar10 = (uint *)(iVar2 * param_1 + in_ECX[5]);
  if (0xfd < iVar3) {
    do {
      puVar7 = (ushort *)
               ((iVar8 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) + in_ECX[6]);
      uVar1 = *puVar7;
      param_1 = (uint)uVar1;
      uVar4 = param_1;
      param_1._1_1_ = (byte)(uVar1 >> 8);
      param_2 = param_2 + -1;
      *puVar10 = (((byte)puVar7[1] | 0xffffff00) << 8 | (uint)param_1._1_1_) << 8 | uVar4 & 0xff;
      puVar10 = (uint *)((int)puVar10 + iVar2);
      iVar8 = iVar8 + 1;
    } while (0 < param_2);
    return;
  }
  local_8 = param_2;
  do {
    pbVar6 = (byte *)((iVar8 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) + in_ECX[6]);
    uVar4 = (pbVar6[1] | 0xff0000) * iVar3;
    iVar5 = 0x100 - (uVar4 >> 0x18);
    uVar9 = (((uint)pbVar6[2] << 0x10 | (uint)*pbVar6) * iVar3 >> 8 & 0xff00ff) +
            ((*puVar10 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
    uVar4 = (uVar4 >> 8 & 0xff00ff) + ((*puVar10 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
    iVar8 = iVar8 + 1;
    local_8 = local_8 + -1;
    *puVar10 = (((0x100 - (uVar4 >> 8 & 0xff00ff)) * 0x100 | uVar4 * 0x100) ^
               (0x100 - (uVar9 >> 8 & 0xff00ff) | uVar9)) & 0xff00ff ^
               ((0x100 - (uVar4 >> 8 & 0xff00ff)) * 0x100 | uVar4 * 0x100);
    puVar10 = (uint *)((int)puVar10 + iVar2);
  } while (0 < local_8);
  return;
}

