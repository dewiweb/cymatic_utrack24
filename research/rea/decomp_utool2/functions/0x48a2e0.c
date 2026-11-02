// rea decompile_all
// name: FUN_0048a2e0
// address: 0x48a2e0
// body: available
// range: 0x48a2e0-0x48a470 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048a2e0(uint param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int *in_ECX;
  byte *pbVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int local_c;
  
  iVar2 = *(int *)(*in_ECX + 0xc);
  iVar7 = param_1 - in_ECX[3];
  puVar8 = (uint *)(iVar2 * param_1 + in_ECX[5]);
  if (0xfd < in_ECX[2]) {
    do {
      puVar6 = (ushort *)
               ((iVar7 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) + in_ECX[6]);
      uVar1 = *puVar6;
      param_1 = (uint)uVar1;
      uVar3 = param_1;
      param_1._1_1_ = (byte)(uVar1 >> 8);
      param_2 = param_2 + -1;
      *puVar8 = (((byte)puVar6[1] | 0xffffff00) << 8 | (uint)param_1._1_1_) << 8 | uVar3 & 0xff;
      puVar8 = (uint *)((int)puVar8 + iVar2);
      iVar7 = iVar7 + 1;
    } while (0 < param_2);
    return;
  }
  local_c = param_2;
  do {
    pbVar4 = (byte *)((iVar7 % *(int *)(in_ECX[1] + 0x10)) * *(int *)(in_ECX[1] + 0xc) + in_ECX[6]);
    uVar3 = (pbVar4[1] | 0xff0000) * in_ECX[2];
    iVar9 = 0x100 - (uVar3 >> 0x18);
    uVar5 = (((uint)pbVar4[2] << 0x10 | (uint)*pbVar4) * in_ECX[2] >> 8 & 0xff00ff) +
            ((*puVar8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
    uVar3 = (uVar3 >> 8 & 0xff00ff) + ((*puVar8 >> 8 & 0xff00ff) * iVar9 >> 8 & 0xff00ff);
    local_c = local_c + -1;
    *puVar8 = (((0x100 - (uVar3 >> 8 & 0xff00ff)) * 0x100 | uVar3 * 0x100) ^
              (0x100 - (uVar5 >> 8 & 0xff00ff) | uVar5)) & 0xff00ff ^
              ((0x100 - (uVar3 >> 8 & 0xff00ff)) * 0x100 | uVar3 * 0x100);
    iVar7 = iVar7 + 1;
    puVar8 = (uint *)((int)puVar8 + iVar2);
  } while (0 < local_c);
  return;
}

