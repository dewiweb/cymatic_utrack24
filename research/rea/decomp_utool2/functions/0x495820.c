// rea decompile_all
// name: FUN_00495820
// address: 0x495820
// body: available
// range: 0x495820-0x49595c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00495820(int param_1,int param_2)

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
  int local_8;
  
  local_8 = 0;
  if ((param_1 < param_2) && (7 < (uint)(param_2 - param_1))) {
    iVar2 = *in_ECX;
    uVar1 = param_2 - param_1 & 0x80000007;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffff8) + 1;
    }
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    iVar4 = 0;
    iVar5 = 0;
    iVar6 = 0;
    iVar7 = 0;
    iVar3 = (param_1 + 2) * 0xc;
    do {
      param_1 = param_1 + 8;
      iVar8 = iVar8 + *(int *)(iVar3 + -0x18 + iVar2);
      iVar9 = iVar9 + *(int *)(iVar3 + -0xc + iVar2);
      iVar10 = iVar10 + *(int *)(iVar3 + iVar2);
      iVar11 = iVar11 + *(int *)(iVar3 + 0xc + iVar2);
      iVar4 = iVar4 + *(int *)(iVar3 + 0x18 + iVar2);
      iVar5 = iVar5 + *(int *)(iVar3 + 0x24 + iVar2);
      iVar6 = iVar6 + *(int *)(iVar3 + 0x30 + iVar2);
      iVar7 = iVar7 + *(int *)(iVar3 + 0x3c + iVar2);
      iVar3 = iVar3 + 0x60;
    } while (param_1 < (int)(param_2 - uVar1));
    local_8 = iVar4 + iVar8 + iVar6 + iVar10 + iVar5 + iVar9 + iVar7 + iVar11;
  }
  iVar2 = 0;
  iVar3 = 0;
  if (param_2 <= param_1) {
    return local_8;
  }
  if (1 < param_2 - param_1) {
    iVar4 = param_1 * 0xc;
    iVar5 = ((param_2 - param_1) - 2U >> 1) + 1;
    param_1 = param_1 + iVar5 * 2;
    do {
      iVar2 = iVar2 + *(int *)(iVar4 + *in_ECX);
      iVar3 = iVar3 + *(int *)(iVar4 + 0xc + *in_ECX);
      iVar5 = iVar5 + -1;
      iVar4 = iVar4 + 0x18;
    } while (iVar5 != 0);
  }
  if (param_1 < param_2) {
    local_8 = local_8 + *(int *)(*in_ECX + param_1 * 0xc);
  }
  return iVar3 + iVar2 + local_8;
}

