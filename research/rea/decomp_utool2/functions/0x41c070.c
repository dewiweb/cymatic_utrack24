// rea decompile_all
// name: FUN_0041c070
// address: 0x41c070
// body: available
// range: 0x41c070-0x41c2f9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041c070(int *param_1)

{
  double dVar1;
  int iVar2;
  int iVar3;
  undefined4 *in_ECX;
  int *piVar4;
  int *in_EDX;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_14;
  int *local_c;
  int *local_8;
  
  local_c = in_EDX + (((int)param_1 - (int)in_EDX >> 2) - ((int)param_1 - (int)in_EDX >> 0x1f) >> 1)
  ;
  FUN_0041c440(param_1 + -1);
  piVar5 = local_c + 1;
  for (; in_EDX < local_c; local_c = local_c + -1) {
    dVar1 = *(double *)(*(int *)(*local_c + 0xdc) + 0x38);
    if ((*(double *)(*(int *)(local_c[-1] + 0xdc) + 0x38) < dVar1) ||
       (dVar1 < *(double *)(*(int *)(local_c[-1] + 0xdc) + 0x38))) break;
  }
  piVar6 = piVar5;
  local_14 = piVar5;
  local_8 = piVar5;
  piVar8 = local_c;
  if (piVar5 < param_1) {
    do {
      piVar6 = piVar5;
      local_14 = piVar5;
      local_8 = piVar5;
      if ((*(double *)(*(int *)(*piVar5 + 0xdc) + 0x38) <
           *(double *)(*(int *)(*local_c + 0xdc) + 0x38)) ||
         (*(double *)(*(int *)(*local_c + 0xdc) + 0x38) <
          *(double *)(*(int *)(*piVar5 + 0xdc) + 0x38))) break;
      piVar5 = piVar5 + 1;
      piVar6 = piVar5;
      local_14 = piVar5;
      local_8 = piVar5;
    } while (piVar5 < param_1);
  }
joined_r0x0041c174:
  do {
    piVar4 = local_c;
    if (param_1 <= piVar6) {
joined_r0x0041c1fc:
      for (; piVar7 = piVar6, in_EDX < local_c; local_c = local_c + -1) {
        piVar4 = piVar4 + -1;
        dVar1 = *(double *)(*(int *)(*piVar8 + 0xdc) + 0x38);
        piVar5 = local_8;
        if (dVar1 <= *(double *)(*(int *)(*piVar4 + 0xdc) + 0x38)) {
          piVar7 = local_14;
          if (dVar1 < *(double *)(*(int *)(*piVar4 + 0xdc) + 0x38)) break;
          piVar8 = piVar8 + -1;
          if (piVar8 != piVar4) {
            iVar2 = *piVar8;
            *piVar8 = *piVar4;
            *piVar4 = iVar2;
          }
        }
        piVar6 = local_14;
      }
      if (local_c == in_EDX) {
        if (piVar7 == param_1) {
          *in_ECX = piVar8;
          in_ECX[1] = piVar5;
          return;
        }
        if (piVar5 != piVar7) {
          iVar2 = *piVar8;
          *piVar8 = *piVar5;
          *piVar5 = iVar2;
        }
        piVar5 = piVar5 + 1;
        iVar2 = *piVar8;
        *piVar8 = *piVar7;
        *piVar7 = iVar2;
        piVar6 = piVar7 + 1;
        local_14 = piVar7 + 1;
        local_8 = piVar5;
        piVar8 = piVar8 + 1;
      }
      else {
        local_c = local_c + -1;
        if (piVar7 == param_1) {
          piVar8 = piVar8 + -1;
          if (local_c != piVar8) {
            iVar2 = *local_c;
            *local_c = *piVar8;
            *piVar8 = iVar2;
          }
          iVar2 = *piVar8;
          piVar5 = piVar5 + -1;
          *piVar8 = *piVar5;
          *piVar5 = iVar2;
          piVar6 = piVar7;
          local_8 = piVar5;
        }
        else {
          iVar2 = *piVar7;
          *piVar7 = *local_c;
          *local_c = iVar2;
          piVar6 = piVar7 + 1;
          local_14 = piVar7 + 1;
        }
      }
      goto joined_r0x0041c174;
    }
    iVar2 = *piVar6;
    local_8 = piVar5;
    if (*(double *)(*(int *)(iVar2 + 0xdc) + 0x38) <= *(double *)(*(int *)(*piVar8 + 0xdc) + 0x38))
    {
      local_14 = piVar6;
      if (*(double *)(*(int *)(iVar2 + 0xdc) + 0x38) < *(double *)(*(int *)(*piVar8 + 0xdc) + 0x38))
      goto joined_r0x0041c1fc;
      local_8 = piVar5 + 1;
      if (piVar5 != piVar6) {
        iVar3 = *piVar5;
        *piVar5 = iVar2;
        *piVar6 = iVar3;
      }
    }
    piVar6 = piVar6 + 1;
    piVar5 = local_8;
    local_14 = piVar6;
  } while( true );
}

