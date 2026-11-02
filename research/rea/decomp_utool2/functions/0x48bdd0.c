// rea decompile_all
// name: FUN_0048bdd0
// address: 0x48bdd0
// body: available
// range: 0x48bdd0-0x48bfd9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0048bdd0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int *in_EDX;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *local_18;
  int *local_10;
  int *local_c;
  int *local_8;
  
  piVar9 = in_EDX + (((int)param_1 - (int)in_EDX >> 3) - ((int)param_1 - (int)in_EDX >> 0x1f) >> 1)
                    * 2;
  FUN_0048c1d0(param_1 + -2);
  piVar3 = piVar9 + 2;
  for (; in_EDX < piVar9; piVar9 = piVar9 + -2) {
    if ((piVar9[-2] < *piVar9) || (*piVar9 < piVar9[-2])) break;
  }
  piVar6 = piVar3;
  local_18 = piVar3;
  local_10 = piVar3;
  local_c = piVar9;
  local_8 = piVar9;
  if (piVar3 < param_1) {
    do {
      piVar6 = piVar3;
      local_18 = piVar3;
      local_10 = piVar3;
      if ((*piVar3 < *piVar9) || (*piVar9 < *piVar3)) break;
      piVar3 = piVar3 + 2;
      piVar6 = piVar3;
      local_18 = piVar3;
      local_10 = piVar3;
    } while (piVar3 < param_1);
  }
LAB_0048be53:
  piVar5 = local_8;
  if (piVar3 < param_1) {
    local_10 = piVar6;
    piVar4 = piVar6 + -2;
    do {
      piVar6 = local_10;
      piVar8 = piVar4;
      if (*piVar3 <= *piVar9) {
        local_18 = piVar3;
        if (*piVar3 < *piVar9) break;
        piVar8 = piVar4 + 2;
        piVar6 = local_10 + 2;
        if (local_10 != piVar3) {
          iVar1 = *piVar8;
          iVar2 = piVar4[3];
          *piVar8 = *piVar3;
          piVar4[3] = piVar3[1];
          piVar3[1] = iVar2;
          *piVar3 = iVar1;
          piVar9 = local_c;
        }
      }
      piVar3 = piVar3 + 2;
      local_10 = piVar6;
      piVar4 = piVar8;
      local_18 = piVar3;
    } while (piVar3 < param_1);
  }
  do {
    piVar4 = piVar3;
    piVar8 = piVar6;
    if (local_8 <= in_EDX) break;
    piVar7 = piVar5 + -2;
    local_c = piVar9;
    if (*piVar9 <= *piVar7) {
      piVar4 = local_18;
      piVar8 = local_10;
      if (*piVar9 < *piVar7) break;
      local_c = piVar9 + -2;
      if (local_c != piVar7) {
        iVar1 = *local_c;
        iVar2 = piVar9[-1];
        *local_c = *piVar7;
        piVar9[-1] = piVar5[-1];
        *piVar7 = iVar1;
        piVar5[-1] = iVar2;
      }
    }
    local_8 = local_8 + -2;
    piVar3 = local_18;
    piVar6 = local_10;
    piVar9 = local_c;
    piVar5 = piVar7;
  } while( true );
  if (local_8 == in_EDX) {
    if (piVar4 == param_1) {
      *in_ECX = piVar9;
      in_ECX[1] = piVar8;
      return;
    }
    if (piVar8 != piVar4) {
      iVar1 = *piVar9;
      iVar2 = piVar9[1];
      *piVar9 = *piVar8;
      piVar9[1] = piVar8[1];
      *piVar8 = iVar1;
      piVar8[1] = iVar2;
    }
    iVar1 = *piVar9;
    iVar2 = piVar9[1];
    piVar3 = piVar4 + 2;
    *piVar9 = *piVar4;
    piVar9[1] = piVar4[1];
    piVar4[1] = iVar2;
    *piVar4 = iVar1;
    piVar6 = piVar8 + 2;
    piVar9 = local_c + 2;
    local_18 = piVar3;
    local_10 = piVar8 + 2;
    local_c = local_c + 2;
  }
  else {
    piVar5 = local_8 + -2;
    if (piVar4 == param_1) {
      local_c = piVar9 + -2;
      if (piVar5 != local_c) {
        iVar1 = *piVar5;
        iVar2 = local_8[-1];
        *piVar5 = *local_c;
        local_8[-1] = piVar9[-1];
        *local_c = iVar1;
        piVar9[-1] = iVar2;
        piVar8 = local_10;
      }
      piVar6 = piVar8 + -2;
      iVar1 = *local_c;
      iVar2 = piVar9[-1];
      *local_c = piVar8[-2];
      piVar9[-1] = piVar8[-1];
      piVar8[-1] = iVar2;
      *piVar6 = iVar1;
      piVar3 = piVar4;
      piVar9 = local_c;
      local_10 = piVar6;
      local_8 = piVar5;
    }
    else {
      iVar1 = *piVar4;
      iVar2 = piVar4[1];
      *piVar4 = *piVar5;
      piVar4[1] = local_8[-1];
      piVar3 = piVar4 + 2;
      local_8[-1] = iVar2;
      *piVar5 = iVar1;
      piVar6 = piVar8;
      local_18 = piVar3;
      local_8 = piVar5;
    }
  }
  goto LAB_0048be53;
}

