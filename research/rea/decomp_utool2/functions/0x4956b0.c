// rea decompile_all
// name: FUN_004956b0
// address: 0x4956b0
// body: available
// range: 0x4956b0-0x4957b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004956b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int local_14;
  int local_c;
  int local_8;
  
  iVar2 = 0;
  local_14 = 0;
  if (param_1 < param_2) {
    iVar6 = param_1 * 0xc;
    local_8 = param_2 - param_1;
    do {
      piVar5 = (int *)(*in_ECX + iVar6);
      if ((*piVar5 < piVar5[2]) && (piVar5[1] < *piVar5)) {
        iVar1 = iVar2 + 1;
        iVar3 = iVar2;
        if (0 < iVar1) {
          if (iVar1 < 0) {
            iVar1 = iVar2 + 2;
          }
          FUN_00409cf0((iVar1 >> 1) + iVar2 + 9 & 0xfffffff8);
          iVar3 = local_14;
        }
        iVar2 = iVar3 + 1;
        local_14 = iVar2;
        if ((undefined4 *)(iVar3 * 4) != (undefined4 *)0x0) {
          *(undefined4 *)(iVar3 * 4) = piVar5;
        }
      }
      iVar6 = iVar6 + 0xc;
      local_8 = local_8 + -1;
    } while (local_8 != 0);
  }
  local_c = 3;
  do {
    iVar1 = iVar2;
    iVar6 = iVar2;
    if (param_3 < 1) break;
    for (; (iVar6 = iVar6 + -1, -1 < iVar6 && (iVar2 = local_14, 0 < param_3));
        param_3 = param_3 - iVar3) {
      piVar5 = *(int **)(iVar6 * 4);
      iVar4 = piVar5[2] - *piVar5;
      iVar3 = param_3 / iVar1;
      if (iVar4 < param_3 / iVar1) {
        iVar3 = iVar4;
      }
      *piVar5 = *piVar5 + iVar3;
      iVar1 = iVar1 + -1;
    }
    local_c = local_c + -1;
  } while (-1 < local_c);
  FUN_00495630(param_1,param_2,param_3);
  FID_conflict__free((void *)0x0);
  return;
}

