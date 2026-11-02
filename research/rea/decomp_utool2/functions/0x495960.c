// rea decompile_all
// name: FUN_00495960
// address: 0x495960
// body: available
// range: 0x495960-0x495a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00495960(undefined4 param_1,uint param_2)

{
  uint uVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int local_8;
  
  iVar2 = 0;
  local_8 = 0;
  if ((0 < (int)param_2) && (7 < param_2)) {
    iVar3 = *in_ECX;
    uVar1 = param_2 & 0x80000007;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
    }
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    iVar12 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar7 = 0;
    iVar8 = 0;
    iVar4 = 0;
    do {
      iVar2 = iVar2 + 8;
      iVar9 = iVar9 + *(int *)(iVar4 + 4 + iVar3);
      iVar10 = iVar10 + *(int *)(iVar4 + 0x10 + iVar3);
      iVar11 = iVar11 + *(int *)(iVar4 + 0x1c + iVar3);
      iVar12 = iVar12 + *(int *)(iVar4 + 0x28 + iVar3);
      iVar5 = iVar5 + *(int *)(iVar4 + 0x34 + iVar3);
      iVar6 = iVar6 + *(int *)(iVar4 + 0x40 + iVar3);
      iVar7 = iVar7 + *(int *)(iVar4 + 0x4c + iVar3);
      iVar8 = iVar8 + *(int *)(iVar4 + 0x58 + iVar3);
      iVar4 = iVar4 + 0x60;
    } while (iVar2 < (int)(param_2 - uVar1));
    local_8 = iVar5 + iVar9 + iVar7 + iVar11 + iVar6 + iVar10 + iVar8 + iVar12;
  }
  iVar3 = 0;
  iVar4 = 0;
  if (iVar2 < (int)param_2) {
    if (1 < (int)(param_2 - iVar2)) {
      iVar5 = iVar2 * 0xc;
      iVar6 = ((param_2 - iVar2) - 2 >> 1) + 1;
      iVar2 = iVar2 + iVar6 * 2;
      do {
        iVar3 = iVar3 + *(int *)(iVar5 + 4 + *in_ECX);
        iVar4 = iVar4 + *(int *)(iVar5 + 0x10 + *in_ECX);
        iVar6 = iVar6 + -1;
        iVar5 = iVar5 + 0x18;
      } while (iVar6 != 0);
    }
    if (iVar2 < (int)param_2) {
      local_8 = local_8 + *(int *)(*in_ECX + 4 + iVar2 * 0xc);
    }
    local_8 = local_8 + iVar4 + iVar3;
  }
  return local_8;
}

