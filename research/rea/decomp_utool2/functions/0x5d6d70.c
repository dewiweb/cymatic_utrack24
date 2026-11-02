// rea decompile_all
// name: FUN_005d6d70
// address: 0x5d6d70
// body: available
// range: 0x5d6d70-0x5d6e95 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005d6d70(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int in_EDX;
  int *piVar7;
  int *piVar8;
  int local_c;
  
  piVar4 = (int *)FUN_004c5556(1,0x460);
  local_c = -1;
  iVar2 = *(int *)(in_ECX + 0x1c);
  piVar1 = (int *)(param_3 + in_EDX * 4);
  piVar7 = (int *)(*piVar1 * 0x460 + (int)param_2);
  piVar8 = piVar4;
  for (iVar6 = 0x118; iVar6 != 0; iVar6 = iVar6 + -1) {
    *piVar8 = *piVar7;
    piVar7 = piVar7 + 1;
    piVar8 = piVar8 + 1;
  }
  iVar6 = *piVar4;
  iVar5 = -1;
  piVar7 = piVar4;
  if (0 < iVar6) {
    do {
      piVar7 = piVar7 + 1;
      if (local_c < *piVar7) {
        local_c = *piVar7;
      }
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (-1 < local_c) {
    param_2 = piVar4 + 0x50;
    piVar7 = piVar4 + 0x40;
    local_c = local_c + 1;
    do {
      iVar6 = *piVar7;
      if (iVar5 < iVar6) {
        iVar5 = iVar6;
      }
      *piVar7 = *(int *)(iVar2 + 0x18) + iVar6;
      iVar6 = 0;
      piVar8 = param_2;
      if (0 < 1 << ((byte)piVar7[-0x10] & 0x1f)) {
        do {
          iVar3 = *piVar8;
          if (iVar5 < iVar3) {
            iVar5 = iVar3;
          }
          if (-1 < iVar3) {
            *piVar8 = *(int *)(iVar2 + 0x18) + iVar3;
          }
          iVar6 = iVar6 + 1;
          piVar8 = piVar8 + 1;
        } while (iVar6 < 1 << ((byte)piVar7[-0x10] & 0x1f));
      }
      param_2 = param_2 + 8;
      piVar7 = piVar7 + 1;
      local_c = local_c + -1;
    } while (local_c != 0);
  }
  iVar6 = 0;
  if (-1 < iVar5) {
    do {
      iVar3 = iVar6 * 4;
      iVar6 = iVar6 + 1;
      *(undefined4 *)(iVar2 + 0x720 + *(int *)(iVar2 + 0x18) * 4) =
           *(undefined4 *)(*(int *)(param_1 + *piVar1 * 4) + iVar3);
      *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + 1;
    } while (iVar6 <= iVar5);
  }
  *(undefined4 *)(iVar2 + 800 + *(int *)(iVar2 + 0x10) * 4) = 1;
  *(int **)(iVar2 + 0x420 + *(int *)(iVar2 + 0x10) * 4) = piVar4;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  return;
}

