// rea decompile_all
// name: FUN_00404780
// address: 0x404780
// body: available
// range: 0x404780-0x40492d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00404780(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int in_ECX;
  int iVar13;
  int *piVar14;
  int *in_EDX;
  int iVar15;
  int local_14;
  int local_c;
  int local_8;
  
  local_14 = 1;
  *in_EDX = 0;
  iVar15 = 1;
  if (8 < in_ECX) {
    do {
      in_ECX = in_ECX >> 1;
      iVar13 = 0;
      if (0 < iVar15) {
        piVar14 = in_EDX + iVar15;
        do {
          piVar1 = in_EDX + iVar13;
          iVar13 = iVar13 + 1;
          *piVar14 = *piVar1 + in_ECX;
          piVar14 = piVar14 + 1;
        } while (iVar13 < iVar15);
      }
      local_14 = iVar15 * 2;
      iVar13 = iVar15 * 0x10;
      iVar15 = local_14;
    } while (iVar13 < in_ECX);
  }
  if (local_14 * 8 - in_ECX == 0) {
    local_c = 0;
    if (0 < local_14) {
      iVar15 = local_14 * 2;
      piVar14 = in_EDX;
      do {
        local_8 = 0;
        if (0 < local_c) {
          do {
            iVar13 = *piVar14 + local_8 * 2;
            puVar2 = (undefined4 *)(param_1 + iVar13 * 8);
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            iVar11 = in_EDX[local_8] + local_c * 2;
            puVar2 = (undefined4 *)(param_1 + iVar11 * 8);
            uVar8 = puVar2[1];
            uVar9 = puVar2[2];
            uVar10 = puVar2[3];
            puVar3 = (undefined4 *)(param_1 + iVar13 * 8);
            *puVar3 = *puVar2;
            puVar3[1] = uVar8;
            puVar3[2] = uVar9;
            puVar3[3] = uVar10;
            iVar13 = iVar13 + iVar15;
            puVar2 = (undefined4 *)(param_1 + iVar11 * 8);
            *puVar2 = uVar4;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
            iVar11 = iVar11 + local_14 * 4;
            puVar2 = (undefined4 *)(param_1 + iVar13 * 8);
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            puVar2 = (undefined4 *)(param_1 + iVar11 * 8);
            uVar8 = puVar2[1];
            uVar9 = puVar2[2];
            uVar10 = puVar2[3];
            puVar3 = (undefined4 *)(param_1 + iVar13 * 8);
            *puVar3 = *puVar2;
            puVar3[1] = uVar8;
            puVar3[2] = uVar9;
            puVar3[3] = uVar10;
            iVar13 = iVar13 + iVar15;
            puVar2 = (undefined4 *)(param_1 + iVar11 * 8);
            *puVar2 = uVar4;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
            iVar11 = iVar11 + local_14 * -2;
            puVar2 = (undefined4 *)(param_1 + iVar13 * 8);
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            puVar2 = (undefined4 *)(param_1 + iVar11 * 8);
            uVar8 = puVar2[1];
            uVar9 = puVar2[2];
            uVar10 = puVar2[3];
            puVar3 = (undefined4 *)(param_1 + iVar13 * 8);
            *puVar3 = *puVar2;
            puVar3[1] = uVar8;
            puVar3[2] = uVar9;
            puVar3[3] = uVar10;
            puVar2 = (undefined4 *)(param_1 + iVar11 * 8);
            *puVar2 = uVar4;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
            iVar11 = iVar11 + local_14 * 4;
            puVar2 = (undefined4 *)(param_1 + (iVar13 + iVar15) * 8);
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            puVar2 = (undefined4 *)(param_1 + iVar11 * 8);
            uVar8 = puVar2[1];
            uVar9 = puVar2[2];
            uVar10 = puVar2[3];
            puVar3 = (undefined4 *)(param_1 + (iVar13 + iVar15) * 8);
            *puVar3 = *puVar2;
            puVar3[1] = uVar8;
            puVar3[2] = uVar9;
            puVar3[3] = uVar10;
            puVar2 = (undefined4 *)(param_1 + iVar11 * 8);
            *puVar2 = uVar4;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
            local_8 = local_8 + 1;
          } while (local_8 < local_c);
        }
        iVar13 = *piVar14 + local_c * 2 + iVar15;
        puVar2 = (undefined4 *)(param_1 + iVar13 * 8);
        uVar4 = *puVar2;
        uVar5 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        puVar2 = (undefined4 *)(param_1 + (iVar13 + iVar15) * 8);
        uVar8 = puVar2[1];
        uVar9 = puVar2[2];
        uVar10 = puVar2[3];
        puVar3 = (undefined4 *)(param_1 + iVar13 * 8);
        *puVar3 = *puVar2;
        puVar3[1] = uVar8;
        puVar3[2] = uVar9;
        puVar3[3] = uVar10;
        puVar2 = (undefined4 *)(param_1 + (iVar13 + iVar15) * 8);
        *puVar2 = uVar4;
        puVar2[1] = uVar5;
        puVar2[2] = uVar6;
        puVar2[3] = uVar7;
        local_c = local_c + 1;
        piVar14 = piVar14 + 1;
      } while (local_c < local_14);
      return;
    }
  }
  else {
    iVar15 = 1;
    piVar14 = in_EDX;
    if (1 < local_14) {
      do {
        iVar13 = 0;
        if (0 < iVar15) {
          do {
            iVar11 = piVar14[1] + iVar13 * 2;
            piVar1 = in_EDX + iVar13;
            puVar2 = (undefined4 *)(param_1 + iVar11 * 8);
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            iVar13 = iVar13 + 1;
            iVar12 = *piVar1 + iVar15 * 2;
            puVar2 = (undefined4 *)(param_1 + iVar12 * 8);
            uVar8 = puVar2[1];
            uVar9 = puVar2[2];
            uVar10 = puVar2[3];
            puVar3 = (undefined4 *)(param_1 + iVar11 * 8);
            *puVar3 = *puVar2;
            puVar3[1] = uVar8;
            puVar3[2] = uVar9;
            puVar3[3] = uVar10;
            iVar11 = iVar11 + local_14 * 2;
            puVar2 = (undefined4 *)(param_1 + iVar12 * 8);
            *puVar2 = uVar4;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
            iVar12 = iVar12 + local_14 * 2;
            puVar2 = (undefined4 *)(param_1 + iVar11 * 8);
            uVar4 = *puVar2;
            uVar5 = puVar2[1];
            uVar6 = puVar2[2];
            uVar7 = puVar2[3];
            puVar2 = (undefined4 *)(param_1 + iVar12 * 8);
            uVar8 = puVar2[1];
            uVar9 = puVar2[2];
            uVar10 = puVar2[3];
            puVar3 = (undefined4 *)(param_1 + iVar11 * 8);
            *puVar3 = *puVar2;
            puVar3[1] = uVar8;
            puVar3[2] = uVar9;
            puVar3[3] = uVar10;
            puVar2 = (undefined4 *)(param_1 + iVar12 * 8);
            *puVar2 = uVar4;
            puVar2[1] = uVar5;
            puVar2[2] = uVar6;
            puVar2[3] = uVar7;
          } while (iVar13 < iVar15);
        }
        iVar15 = iVar15 + 1;
        piVar14 = piVar14 + 1;
      } while (iVar15 < local_14);
    }
  }
  return;
}

