// rea decompile_all
// name: FUN_004044e0
// address: 0x4044e0
// body: available
// range: 0x4044e0-0x40477d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004044e0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int in_ECX;
  int *piVar13;
  int iVar14;
  int *in_EDX;
  int *piVar15;
  double *pdVar16;
  int iVar17;
  int iVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  int local_1c;
  int local_14;
  
  *in_EDX = in_ECX;
  in_EDX[1] = 1;
  if (2 < in_ECX) {
    dVar19 = 1.0;
    iVar17 = in_ECX >> 1;
    FUN_006f7a30();
    dVar19 = dVar19 / (double)iVar17;
    *param_1 = 0x3ff0000000000000;
    dVar21 = (double)iVar17 * dVar19;
    param_1[1] = 0;
    FUN_006f7d20();
    param_1[iVar17] = dVar21;
    (param_1 + iVar17)[1] = dVar21;
    if (2 < iVar17) {
      iVar18 = 2;
      if (2 < iVar17) {
        pdVar16 = (double *)(param_1 + in_ECX + -2);
        do {
          dVar20 = (double)iVar18 * dVar19;
          dVar21 = dVar20;
          FUN_006f7d20();
          FUN_006f9250();
          param_1[iVar18] = dVar21;
          param_1[iVar18 + 1] = dVar20;
          iVar18 = iVar18 + 2;
          *pdVar16 = dVar20;
          pdVar16[1] = dVar21;
          pdVar16 = pdVar16 + -2;
        } while (iVar18 < iVar17);
      }
      iVar17 = 1;
      piVar15 = in_EDX + 2;
      local_1c = 1;
      *piVar15 = 0;
      if (8 < in_ECX) {
        do {
          in_ECX = in_ECX >> 1;
          iVar18 = 0;
          if (0 < iVar17) {
            piVar13 = piVar15 + iVar17;
            do {
              iVar14 = iVar18 + 2;
              iVar18 = iVar18 + 1;
              *piVar13 = in_EDX[iVar14] + in_ECX;
              piVar13 = piVar13 + 1;
            } while (iVar18 < iVar17);
          }
          local_1c = iVar17 * 2;
          iVar18 = iVar17 * 0x10;
          iVar17 = local_1c;
        } while (iVar18 < in_ECX);
      }
      if (local_1c * 8 - in_ECX == 0) {
        local_14 = 0;
        if (0 < local_1c) {
          iVar17 = local_1c * 2;
          piVar13 = piVar15;
          do {
            iVar18 = 0;
            if (0 < local_14) {
              do {
                iVar14 = *piVar13 + iVar18 * 2;
                puVar1 = param_1 + iVar14;
                uVar5 = *(undefined4 *)puVar1;
                uVar6 = *(undefined4 *)((int)puVar1 + 4);
                uVar7 = *(undefined4 *)(puVar1 + 1);
                uVar8 = *(undefined4 *)((int)puVar1 + 0xc);
                iVar12 = piVar15[iVar18] + local_14 * 2;
                puVar1 = param_1 + iVar12;
                uVar9 = *(undefined4 *)((int)puVar1 + 4);
                uVar10 = *(undefined4 *)(puVar1 + 1);
                uVar11 = *(undefined4 *)((int)puVar1 + 0xc);
                puVar2 = param_1 + iVar14;
                *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
                *(undefined4 *)((int)puVar2 + 4) = uVar9;
                *(undefined4 *)(puVar2 + 1) = uVar10;
                *(undefined4 *)((int)puVar2 + 0xc) = uVar11;
                iVar14 = iVar14 + iVar17;
                puVar1 = param_1 + iVar12;
                *(undefined4 *)puVar1 = uVar5;
                *(undefined4 *)((int)puVar1 + 4) = uVar6;
                *(undefined4 *)(puVar1 + 1) = uVar7;
                *(undefined4 *)((int)puVar1 + 0xc) = uVar8;
                iVar12 = iVar12 + local_1c * 4;
                puVar1 = param_1 + iVar14;
                uVar5 = *(undefined4 *)puVar1;
                uVar6 = *(undefined4 *)((int)puVar1 + 4);
                uVar7 = *(undefined4 *)(puVar1 + 1);
                uVar8 = *(undefined4 *)((int)puVar1 + 0xc);
                puVar1 = param_1 + iVar12;
                uVar9 = *(undefined4 *)((int)puVar1 + 4);
                uVar10 = *(undefined4 *)(puVar1 + 1);
                uVar11 = *(undefined4 *)((int)puVar1 + 0xc);
                puVar2 = param_1 + iVar14;
                *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
                *(undefined4 *)((int)puVar2 + 4) = uVar9;
                *(undefined4 *)(puVar2 + 1) = uVar10;
                *(undefined4 *)((int)puVar2 + 0xc) = uVar11;
                iVar14 = iVar14 + iVar17;
                puVar1 = param_1 + iVar12;
                *(undefined4 *)puVar1 = uVar5;
                *(undefined4 *)((int)puVar1 + 4) = uVar6;
                *(undefined4 *)(puVar1 + 1) = uVar7;
                *(undefined4 *)((int)puVar1 + 0xc) = uVar8;
                iVar12 = iVar12 + local_1c * -2;
                puVar1 = param_1 + iVar14;
                uVar5 = *(undefined4 *)puVar1;
                uVar6 = *(undefined4 *)((int)puVar1 + 4);
                uVar7 = *(undefined4 *)(puVar1 + 1);
                uVar8 = *(undefined4 *)((int)puVar1 + 0xc);
                puVar1 = param_1 + iVar12;
                uVar9 = *(undefined4 *)((int)puVar1 + 4);
                uVar10 = *(undefined4 *)(puVar1 + 1);
                uVar11 = *(undefined4 *)((int)puVar1 + 0xc);
                puVar2 = param_1 + iVar14;
                *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
                *(undefined4 *)((int)puVar2 + 4) = uVar9;
                *(undefined4 *)(puVar2 + 1) = uVar10;
                *(undefined4 *)((int)puVar2 + 0xc) = uVar11;
                puVar1 = param_1 + iVar12;
                *(undefined4 *)puVar1 = uVar5;
                *(undefined4 *)((int)puVar1 + 4) = uVar6;
                *(undefined4 *)(puVar1 + 1) = uVar7;
                *(undefined4 *)((int)puVar1 + 0xc) = uVar8;
                iVar12 = iVar12 + local_1c * 4;
                puVar1 = param_1 + iVar14 + iVar17;
                uVar5 = *(undefined4 *)puVar1;
                uVar6 = *(undefined4 *)((int)puVar1 + 4);
                uVar7 = *(undefined4 *)(puVar1 + 1);
                uVar8 = *(undefined4 *)((int)puVar1 + 0xc);
                puVar1 = param_1 + iVar12;
                uVar9 = *(undefined4 *)((int)puVar1 + 4);
                uVar10 = *(undefined4 *)(puVar1 + 1);
                uVar11 = *(undefined4 *)((int)puVar1 + 0xc);
                puVar2 = param_1 + iVar14 + iVar17;
                *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
                *(undefined4 *)((int)puVar2 + 4) = uVar9;
                *(undefined4 *)(puVar2 + 1) = uVar10;
                *(undefined4 *)((int)puVar2 + 0xc) = uVar11;
                puVar1 = param_1 + iVar12;
                *(undefined4 *)puVar1 = uVar5;
                *(undefined4 *)((int)puVar1 + 4) = uVar6;
                *(undefined4 *)(puVar1 + 1) = uVar7;
                *(undefined4 *)((int)puVar1 + 0xc) = uVar8;
                iVar18 = iVar18 + 1;
              } while (iVar18 < local_14);
            }
            iVar18 = *piVar13 + local_14 * 2 + iVar17;
            puVar1 = param_1 + iVar18;
            uVar5 = *(undefined4 *)puVar1;
            uVar6 = *(undefined4 *)((int)puVar1 + 4);
            uVar7 = *(undefined4 *)(puVar1 + 1);
            uVar8 = *(undefined4 *)((int)puVar1 + 0xc);
            puVar1 = param_1 + iVar18 + iVar17;
            uVar9 = *(undefined4 *)((int)puVar1 + 4);
            uVar10 = *(undefined4 *)(puVar1 + 1);
            uVar11 = *(undefined4 *)((int)puVar1 + 0xc);
            puVar2 = param_1 + iVar18;
            *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
            *(undefined4 *)((int)puVar2 + 4) = uVar9;
            *(undefined4 *)(puVar2 + 1) = uVar10;
            *(undefined4 *)((int)puVar2 + 0xc) = uVar11;
            puVar1 = param_1 + iVar18 + iVar17;
            *(undefined4 *)puVar1 = uVar5;
            *(undefined4 *)((int)puVar1 + 4) = uVar6;
            *(undefined4 *)(puVar1 + 1) = uVar7;
            *(undefined4 *)((int)puVar1 + 0xc) = uVar8;
            local_14 = local_14 + 1;
            piVar13 = piVar13 + 1;
          } while (local_14 < local_1c);
          return;
        }
      }
      else {
        iVar17 = 1;
        piVar13 = piVar15;
        if (1 < local_1c) {
          do {
            iVar18 = 0;
            if (0 < iVar17) {
              do {
                iVar14 = piVar13[1] + iVar18 * 2;
                piVar3 = piVar15 + iVar18;
                puVar1 = param_1 + iVar14;
                uVar5 = *(undefined4 *)puVar1;
                uVar6 = *(undefined4 *)((int)puVar1 + 4);
                uVar7 = *(undefined4 *)(puVar1 + 1);
                uVar8 = *(undefined4 *)((int)puVar1 + 0xc);
                iVar18 = iVar18 + 1;
                iVar12 = *piVar3 + iVar17 * 2;
                puVar1 = param_1 + iVar12;
                uVar9 = *(undefined4 *)((int)puVar1 + 4);
                uVar10 = *(undefined4 *)(puVar1 + 1);
                uVar11 = *(undefined4 *)((int)puVar1 + 0xc);
                puVar2 = param_1 + iVar14;
                *(undefined4 *)puVar2 = *(undefined4 *)puVar1;
                *(undefined4 *)((int)puVar2 + 4) = uVar9;
                *(undefined4 *)(puVar2 + 1) = uVar10;
                *(undefined4 *)((int)puVar2 + 0xc) = uVar11;
                iVar14 = iVar14 + local_1c * 2;
                puVar1 = param_1 + iVar12;
                *(undefined4 *)puVar1 = uVar5;
                *(undefined4 *)((int)puVar1 + 4) = uVar6;
                *(undefined4 *)(puVar1 + 1) = uVar7;
                *(undefined4 *)((int)puVar1 + 0xc) = uVar8;
                iVar12 = iVar12 + local_1c * 2;
                puVar1 = param_1 + iVar14;
                uVar5 = *(undefined4 *)puVar1;
                uVar6 = *(undefined4 *)((int)puVar1 + 4);
                uVar7 = *(undefined4 *)(puVar1 + 1);
                uVar8 = *(undefined4 *)((int)puVar1 + 0xc);
                uVar4 = (param_1 + iVar12)[1];
                param_1[iVar14] = param_1[iVar12];
                (param_1 + iVar14)[1] = uVar4;
                puVar1 = param_1 + iVar12;
                *(undefined4 *)puVar1 = uVar5;
                *(undefined4 *)((int)puVar1 + 4) = uVar6;
                *(undefined4 *)(puVar1 + 1) = uVar7;
                *(undefined4 *)((int)puVar1 + 0xc) = uVar8;
              } while (iVar18 < iVar17);
            }
            iVar17 = iVar17 + 1;
            piVar13 = piVar13 + 1;
          } while (iVar17 < local_1c);
        }
      }
    }
  }
  return;
}

