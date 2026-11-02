// rea decompile_all
// name: FUN_0048af40
// address: 0x48af40
// body: available
// range: 0x48af40-0x48b0bc inclusive
// range: 0x48b0c0-0x48b183 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048af40(uint *param_1,int param_2)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *local_8;
  
  iVar1 = *(int *)(*in_ECX + 0xc);
  iVar5 = (int)param_1 - in_ECX[3];
  local_8 = (uint *)(iVar1 * (int)param_1 + in_ECX[5]);
  if (in_ECX[2] < 0xfe) {
    do {
      uVar4 = *(uint *)(*(int *)(in_ECX[1] + 0xc) * iVar5 + in_ECX[6]);
      uVar3 = (uVar4 >> 8 & 0xff00ff) * in_ECX[2];
      iVar2 = 0x100 - (uVar3 >> 0x18);
      uVar6 = ((*local_8 & 0xff00ff) * iVar2 >> 8 & 0xff00ff) +
              ((uVar4 & 0xff00ff) * in_ECX[2] >> 8 & 0xff00ff);
      uVar4 = (uVar3 >> 8 & 0xff00ff) + ((*local_8 >> 8 & 0xff00ff) * iVar2 >> 8 & 0xff00ff);
      iVar5 = iVar5 + 1;
      *local_8 = (((0x100 - (uVar4 >> 8 & 0xff00ff)) * 0x100 | uVar4 * 0x100) ^
                 (0x100 - (uVar6 >> 8 & 0xff00ff) | uVar6)) & 0xff00ff ^
                 (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4) << 8;
      local_8 = (uint *)((int)local_8 + iVar1);
      param_2 = param_2 + -1;
    } while (0 < param_2);
    return;
  }
  iVar2 = *(int *)(in_ECX[1] + 0xc);
  param_1 = (uint *)(iVar2 * iVar5 + in_ECX[6]);
  if (((iVar1 == iVar2) && (*(int *)(in_ECX[1] + 4) == 1)) && (*(int *)(*in_ECX + 4) == 1)) {
    FUN_004c2c30(local_8,param_1,iVar2 * param_2);
    return;
  }
  do {
    uVar4 = *param_1;
    iVar5 = 0x100 - (uVar4 >> 0x18);
    uVar3 = (uVar4 >> 8 & 0xff00ff) + ((*local_8 >> 8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff);
    uVar4 = ((*local_8 & 0xff00ff) * iVar5 >> 8 & 0xff00ff) + (uVar4 & 0xff00ff);
    param_1 = (uint *)((int)param_1 + iVar2);
    param_2 = param_2 + -1;
    *local_8 = (((0x100 - (uVar3 >> 8 & 0xff00ff)) * 0x100 | uVar3 * 0x100) ^
               (0x100 - (uVar4 >> 8 & 0xff00ff) | uVar4)) & 0xff00ff ^
               (0x100 - (uVar3 >> 8 & 0xff00ff) | uVar3) << 8;
    local_8 = (uint *)((int)local_8 + iVar1);
  } while (0 < param_2);
  return;
}

