// rea decompile_all
// name: FUN_00413c00
// address: 0x413c00
// body: available
// range: 0x413c00-0x413dd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00413c00(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_ECX;
  int *in_EDX;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *local_14;
  int *local_10;
  int *local_8;
  
  local_10 = in_EDX + (((int)param_1 - (int)in_EDX >> 2) - ((int)param_1 - (int)in_EDX >> 0x1f) >> 1
                      );
  FUN_00413f10(param_1 + -1);
  piVar6 = local_10 + 1;
  for (; in_EDX < local_10; local_10 = local_10 + -1) {
    if ((local_10[-1] < *local_10) || (*local_10 < local_10[-1])) break;
  }
  piVar8 = piVar6;
  local_14 = piVar6;
  local_8 = piVar6;
  piVar5 = local_10;
  if (piVar6 < param_1) {
    do {
      piVar8 = piVar6;
      local_14 = piVar6;
      local_8 = piVar6;
      if ((*piVar6 < *local_10) || (*local_10 < *piVar6)) break;
      piVar6 = piVar6 + 1;
      piVar8 = piVar6;
      local_14 = piVar6;
      local_8 = piVar6;
    } while (piVar6 < param_1);
  }
joined_r0x00413ca8:
  do {
    piVar4 = local_10;
    if (param_1 <= piVar6) {
joined_r0x00413cf6:
      for (; piVar3 = piVar6, piVar7 = piVar8, in_EDX < local_10; local_10 = local_10 + -1) {
        piVar4 = piVar4 + -1;
        iVar1 = *piVar4;
        if (*piVar5 <= iVar1) {
          piVar3 = local_14;
          piVar7 = local_8;
          if (*piVar5 < iVar1) break;
          piVar5 = piVar5 + -1;
          if (piVar5 != piVar4) {
            iVar2 = *piVar5;
            *piVar5 = iVar1;
            *piVar4 = iVar2;
          }
        }
        piVar6 = local_14;
        piVar8 = local_8;
      }
      if (local_10 == in_EDX) {
        if (piVar3 == param_1) {
          in_ECX[1] = piVar7;
          *in_ECX = piVar5;
          return;
        }
        if (piVar7 != piVar3) {
          iVar1 = *piVar5;
          *piVar5 = *piVar7;
          *piVar7 = iVar1;
        }
        piVar6 = piVar3 + 1;
        iVar1 = *piVar5;
        *piVar5 = *piVar3;
        *piVar3 = iVar1;
        piVar8 = piVar7 + 1;
        local_14 = piVar6;
        local_8 = piVar7 + 1;
        piVar5 = piVar5 + 1;
      }
      else {
        local_10 = local_10 + -1;
        if (piVar3 == param_1) {
          piVar5 = piVar5 + -1;
          if (local_10 != piVar5) {
            iVar1 = *local_10;
            *local_10 = *piVar5;
            *piVar5 = iVar1;
          }
          iVar1 = *piVar5;
          piVar8 = piVar7 + -1;
          *piVar5 = *piVar8;
          *piVar8 = iVar1;
          piVar6 = piVar3;
          local_8 = piVar8;
        }
        else {
          iVar1 = *piVar3;
          *piVar3 = *local_10;
          piVar6 = piVar3 + 1;
          *local_10 = iVar1;
          piVar8 = piVar7;
          local_14 = piVar6;
        }
      }
      goto joined_r0x00413ca8;
    }
    iVar1 = *piVar6;
    local_8 = piVar8;
    if (iVar1 <= *piVar5) {
      local_14 = piVar6;
      if (iVar1 < *piVar5) goto joined_r0x00413cf6;
      local_8 = piVar8 + 1;
      if (piVar8 != piVar6) {
        iVar2 = *piVar8;
        *piVar8 = iVar1;
        *piVar6 = iVar2;
      }
    }
    piVar6 = piVar6 + 1;
    piVar8 = local_8;
    local_14 = piVar6;
  } while( true );
}

