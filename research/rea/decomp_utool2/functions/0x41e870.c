// rea decompile_all
// name: FUN_0041e870
// address: 0x41e870
// body: available
// range: 0x41e870-0x41ebf4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041e870(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  bool bVar10;
  int *piVar11;
  int *piVar12;
  undefined4 *in_ECX;
  int *in_EDX;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *local_10;
  int *local_c;
  
  FUN_0041ed60(param_1 + -1,param_1);
  piVar15 = in_EDX + (((int)param_1 - (int)in_EDX >> 2) - ((int)param_1 - (int)in_EDX >> 0x1f) >> 1)
            + 1;
  piVar1 = in_EDX + (((int)param_1 - (int)in_EDX >> 2) - ((int)param_1 - (int)in_EDX >> 0x1f) >> 1);
  do {
    do {
      local_10 = piVar1;
      if (local_10 <= in_EDX) goto LAB_0041e93d;
      piVar1 = local_10 + -1;
      uVar2 = *(uint *)*local_10;
      uVar3 = ((uint *)*local_10)[1];
      uVar4 = *(uint *)*piVar1;
      uVar5 = ((uint *)*piVar1)[1];
      if ((uVar4 != uVar2) || (uVar5 != uVar3)) {
        if (((int)uVar5 < (int)uVar3) || (((int)uVar5 <= (int)uVar3 && (uVar4 <= uVar2)))) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if ((int)((uint)!bVar10 * 2 + -1) < 0) goto LAB_0041e93d;
      }
      uVar2 = *(uint *)*local_10;
      uVar3 = ((uint *)*local_10)[1];
      uVar4 = *(uint *)*piVar1;
      uVar5 = ((uint *)*piVar1)[1];
    } while ((uVar2 == uVar4) && (uVar3 == uVar5));
    if (((int)uVar3 < (int)uVar5) || (((int)uVar3 <= (int)uVar5 && (uVar2 <= uVar4)))) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  } while (-1 < (int)((uint)!bVar10 * 2 + -1));
LAB_0041e93d:
  local_c = piVar15;
  piVar1 = piVar15;
  piVar11 = piVar15;
  piVar14 = local_10;
  if (piVar15 < param_1) {
    puVar6 = (uint *)*local_10;
    uVar2 = puVar6[1];
    do {
      puVar7 = (uint *)*piVar15;
      uVar3 = puVar7[1];
      local_c = piVar15;
      piVar1 = piVar15;
      piVar11 = piVar15;
      if ((*puVar7 != *puVar6) || (uVar3 != uVar2)) {
        if (((int)uVar3 < (int)uVar2) || (((int)uVar3 <= (int)uVar2 && (*puVar7 <= *puVar6)))) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if ((int)((uint)!bVar10 * 2 + -1) < 0) break;
      }
      uVar3 = puVar7[1];
      uVar4 = puVar6[1];
      if ((*puVar6 != *puVar7) || (uVar4 != uVar3)) {
        if (((int)uVar4 < (int)uVar3) || (((int)uVar4 <= (int)uVar3 && (*puVar6 <= *puVar7)))) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if ((int)((uint)!bVar10 * 2 + -1) < 0) break;
      }
      piVar15 = piVar15 + 1;
      local_c = piVar15;
      piVar1 = piVar15;
      piVar11 = piVar15;
    } while (piVar15 < param_1);
  }
joined_r0x0041e9e2:
  do {
    piVar13 = local_10;
    if (param_1 <= piVar15) {
joined_r0x0041eaa1:
      for (; piVar12 = piVar15, piVar16 = local_c, in_EDX < local_10; local_10 = local_10 + -1) {
        piVar13 = piVar13 + -1;
        puVar6 = (uint *)*piVar14;
        puVar7 = (uint *)*piVar13;
        uVar2 = puVar6[1];
        if ((*puVar7 == *puVar6) && (puVar7[1] == uVar2)) {
LAB_0041eaf6:
          uVar2 = puVar7[1];
          puVar9 = (uint *)*piVar14;
          if ((*puVar6 != *puVar7) || (puVar9[1] != uVar2)) {
            if (((int)puVar9[1] < (int)uVar2) ||
               (((int)puVar9[1] <= (int)uVar2 && (*puVar9 <= *puVar7)))) {
              bVar10 = false;
            }
            else {
              bVar10 = true;
            }
            piVar12 = piVar1;
            piVar16 = piVar11;
            if ((int)((uint)!bVar10 * 2 + -1) < 0) break;
          }
          piVar14 = piVar14 + -1;
          if (piVar14 != piVar13) {
            iVar8 = *piVar14;
            *piVar14 = (int)puVar7;
            *piVar13 = iVar8;
          }
        }
        else {
          if (((int)puVar7[1] < (int)uVar2) ||
             (((int)puVar7[1] <= (int)uVar2 && (*puVar7 <= *puVar6)))) {
            bVar10 = false;
          }
          else {
            bVar10 = true;
          }
          if (-1 < (int)((uint)!bVar10 * 2 + -1)) goto LAB_0041eaf6;
        }
        piVar15 = piVar1;
        local_c = piVar11;
      }
      if (local_10 == in_EDX) {
        if (piVar12 == param_1) {
          in_ECX[1] = piVar16;
          *in_ECX = piVar14;
          return;
        }
        if (piVar16 != piVar12) {
          iVar8 = *piVar14;
          *piVar14 = *piVar16;
          *piVar16 = iVar8;
        }
        piVar15 = piVar12 + 1;
        iVar8 = *piVar14;
        *piVar14 = *piVar12;
        *piVar12 = iVar8;
        local_c = piVar16 + 1;
        piVar1 = piVar15;
        piVar11 = piVar16 + 1;
        piVar14 = piVar14 + 1;
      }
      else {
        local_10 = local_10 + -1;
        if (piVar12 == param_1) {
          piVar14 = piVar14 + -1;
          if (local_10 != piVar14) {
            iVar8 = *local_10;
            *local_10 = *piVar14;
            *piVar14 = iVar8;
          }
          local_c = piVar16 + -1;
          iVar8 = *piVar14;
          *piVar14 = piVar16[-1];
          *local_c = iVar8;
          piVar15 = piVar12;
          piVar11 = local_c;
        }
        else {
          iVar8 = *piVar12;
          *piVar12 = *local_10;
          piVar15 = piVar12 + 1;
          *local_10 = iVar8;
          local_c = piVar16;
          piVar1 = piVar15;
        }
      }
      goto joined_r0x0041e9e2;
    }
    puVar6 = (uint *)*piVar15;
    uVar2 = puVar6[1];
    uVar3 = *(uint *)(*piVar14 + 4);
    if ((*(uint *)*piVar14 == *puVar6) && (uVar3 == uVar2)) {
LAB_0041ea28:
      uVar2 = *(uint *)(*piVar14 + 4);
      uVar3 = puVar6[1];
      if ((*puVar6 != *(uint *)*piVar14) || (uVar3 != uVar2)) {
        if (((int)uVar3 < (int)uVar2) ||
           (((int)uVar3 <= (int)uVar2 && (*puVar6 <= *(uint *)*piVar14)))) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        piVar15 = piVar1;
        local_c = piVar11;
        if ((int)((uint)!bVar10 * 2 + -1) < 0) goto joined_r0x0041eaa1;
      }
      local_c = piVar11 + 1;
      piVar12 = piVar1;
      if (piVar11 != piVar1) {
        iVar8 = *piVar11;
        *piVar11 = (int)puVar6;
        *piVar1 = iVar8;
      }
    }
    else {
      if (((int)uVar3 < (int)uVar2) ||
         (((int)uVar3 <= (int)uVar2 && (*(uint *)*piVar14 <= *puVar6)))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      piVar12 = piVar15;
      local_c = piVar11;
      if (-1 < (int)((uint)!bVar10 * 2 + -1)) goto LAB_0041ea28;
    }
    piVar15 = piVar12 + 1;
    piVar1 = piVar12 + 1;
    piVar11 = local_c;
  } while( true );
}

