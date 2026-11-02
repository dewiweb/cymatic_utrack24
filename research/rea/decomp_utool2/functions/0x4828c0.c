// rea decompile_all
// name: FUN_004828c0
// address: 0x4828c0
// body: available
// range: 0x4828c0-0x4829f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004828c0(int *param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  double dVar6;
  undefined1 local_2c [4];
  int *local_28;
  int local_24;
  int local_20;
  int iStack_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  
  local_14 = *(int **)(in_ECX + 8);
  piVar3 = (int *)(*(int *)(in_ECX + 0x10) * 0x10 + *(int *)(in_ECX + 8));
  if (local_14 != piVar3) {
    dVar6 = 6755399441055744.0;
    local_28 = piVar3;
    do {
      local_18 = local_14[2];
      local_c = local_14[1];
      local_10 = *local_14;
      local_24 = local_14[3] + local_c;
      if (local_c < local_24) {
        do {
          piVar3 = (int *)param_1[0xc];
          param_1[0xd] = piVar3[2] * local_c + *piVar3;
          if ((char)param_1[10] == '\0') {
            if (*(char *)((int)param_1 + 0x29) == '\0') {
              local_20 = SUB84(((double)local_c - *(double *)(param_1 + 8)) *
                               *(double *)(param_1 + 6) + dVar6,0);
              param_1[3] = local_20;
            }
          }
          else {
            iVar2 = param_1[4] * local_c - param_1[3] >> 0xc;
            if (iVar2 < 0) {
              param_1[2] = *(int *)*param_1;
            }
            else {
              if (param_1[1] < iVar2) {
                iVar2 = param_1[1];
              }
              param_1[2] = *(int *)(*param_1 + iVar2 * 4);
            }
          }
          _local_20 = CONCAT44(piVar3[3],local_20);
          pbVar5 = (byte *)(piVar3[3] * local_10 + param_1[0xd]);
          iVar2 = local_10;
          iVar4 = local_18;
          do {
            iVar1 = FUN_00464e80(local_2c,iVar2);
            iVar4 = iVar4 + -1;
            iVar2 = iVar2 + 1;
            *pbVar5 = (char)((0x100 - (uint)*(byte *)(iVar1 + 3)) * (uint)*pbVar5 >> 8) +
                      *(byte *)(iVar1 + 3);
            pbVar5 = pbVar5 + iStack_1c;
          } while (0 < iVar4);
          local_c = local_c + 1;
          piVar3 = local_28;
        } while (local_c < local_24);
      }
      local_14 = local_14 + 4;
    } while (local_14 != piVar3);
  }
  return;
}

