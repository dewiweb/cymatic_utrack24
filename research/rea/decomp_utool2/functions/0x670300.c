// rea decompile_all
// name: FUN_00670300
// address: 0x670300
// body: available
// range: 0x670300-0x6706a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00670300(int *param_1)

{
  int *piVar1;
  double dVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  ulonglong *puVar6;
  uint *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int *piVar12;
  ushort *puVar13;
  ulonglong *puVar14;
  double *pdVar15;
  short *psVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar20 [16];
  int local_8;
  
  local_8 = 0;
  iVar4 = param_1[0x56];
  if (0 < param_1[0xf]) {
    puVar7 = (uint *)(param_1[0x11] + 0x10);
    do {
      uVar5 = *puVar7;
      if ((3 < uVar5) || (param_1[uVar5 + 0x12] == 0)) {
        *(undefined4 *)(*param_1 + 0x14) = 0x34;
        *(uint *)(*param_1 + 0x18) = uVar5;
        (**(code **)*param_1)(param_1);
      }
      iVar9 = param_1[0x2e];
      puVar6 = (ulonglong *)param_1[uVar5 + 0x12];
      if (iVar9 == 0) {
        if (*(int *)(iVar4 + 0xc + uVar5 * 4) == 0) {
          uVar8 = (**(code **)param_1[1])(param_1,1,0x100);
          *(undefined4 *)(iVar4 + 0xc + uVar5 * 4) = uVar8;
        }
        iVar9 = *(int *)(iVar4 + 0xc + uVar5 * 4);
        iVar10 = 0;
        do {
          *(uint *)(iVar9 + iVar10 * 4) = (uint)*(ushort *)((int)puVar6 + iVar10 * 2) << 3;
          iVar10 = iVar10 + 1;
        } while (iVar10 < 0x40);
      }
      else if (iVar9 == 1) {
        if (*(int *)(iVar4 + 0xc + uVar5 * 4) == 0) {
          uVar8 = (**(code **)param_1[1])(param_1,1,0x100);
          *(undefined4 *)(iVar4 + 0xc + uVar5 * 4) = uVar8;
        }
        piVar12 = *(int **)(iVar4 + 0xc + uVar5 * 4);
        if (1 < DAT_00c89e14) {
          iVar9 = 0;
          if (((&DAT_00c1858e < piVar12) || (piVar12 + 0x3f < &DAT_00c18510)) &&
             (((int *)((int)puVar6 + 0x7e) < piVar12 || (piVar12 + 0x3f < puVar6)))) {
            puVar14 = puVar6;
            do {
              auVar17._8_8_ = 0;
              auVar17._0_8_ = *(ulonglong *)((int)&DAT_00c18510 + -(int)puVar6 + (int)puVar14);
              auVar20 = pmovsxwd(in_XMM1,auVar17);
              auVar18._8_8_ = 0;
              auVar18._0_8_ = *puVar14;
              auVar17 = pmovzxwd(auVar18,auVar18);
              auVar17 = pmulld(auVar17,auVar20);
              piVar1 = piVar12 + iVar9;
              *piVar1 = auVar17._0_4_ + 0x400 >> 0xb;
              piVar1[1] = auVar17._4_4_ + 0x400 >> 0xb;
              piVar1[2] = auVar17._8_4_ + 0x400 >> 0xb;
              piVar1[3] = auVar17._12_4_ + 0x400 >> 0xb;
              auVar19._8_8_ = 0;
              auVar19._0_8_ =
                   *(ulonglong *)((int)&PTR_LAB_00c18508 + -(int)puVar6 + (int)(puVar14 + 2));
              in_XMM1 = pmovsxwd(auVar20,auVar19);
              auVar20._8_8_ = 0;
              auVar20._0_8_ = puVar14[1];
              auVar17 = pmovzxwd(auVar20,auVar20);
              auVar17 = pmulld(auVar17,in_XMM1);
              piVar1 = piVar12 + iVar9 + 4;
              *piVar1 = auVar17._0_4_ + 0x400 >> 0xb;
              piVar1[1] = auVar17._4_4_ + 0x400 >> 0xb;
              piVar1[2] = auVar17._8_4_ + 0x400 >> 0xb;
              piVar1[3] = auVar17._12_4_ + 0x400 >> 0xb;
              iVar9 = iVar9 + 8;
              puVar14 = puVar14 + 2;
            } while (iVar9 < 0x40);
            goto LAB_00670683;
          }
        }
        psVar16 = &DAT_00c18510;
        do {
          puVar13 = (ushort *)((int)(puVar6 + -0x1830a2) + (int)psVar16);
          sVar3 = *psVar16;
          psVar16 = psVar16 + 1;
          *piVar12 = (int)((uint)*puVar13 * (int)sVar3 + 0x400) >> 0xb;
          piVar12 = piVar12 + 1;
        } while ((int)psVar16 < 0xc18590);
      }
      else if (iVar9 == 2) {
        if (*(int *)(iVar4 + 0x20 + uVar5 * 4) == 0) {
          uVar8 = (**(code **)param_1[1])(param_1,1,0x100);
          *(undefined4 *)(iVar4 + 0x20 + uVar5 * 4) = uVar8;
        }
        pdVar15 = (double *)&DAT_00c17d30;
        pfVar11 = (float *)(*(int *)(iVar4 + 0x20 + uVar5 * 4) + 8);
        puVar13 = (ushort *)((int)puVar6 + 4);
        do {
          dVar2 = *pdVar15;
          pfVar11[-2] = (float)(1.0 / ((double)puVar13[-2] * dVar2 * 8.0));
          pfVar11[-1] = (float)(1.0 / ((double)puVar13[-1] * dVar2 * 1.387039845 * 8.0));
          *pfVar11 = (float)(1.0 / ((double)*puVar13 * dVar2 * 1.306562965 * 8.0));
          pfVar11[1] = (float)(1.0 / ((double)puVar13[1] * dVar2 * 1.175875602 * 8.0));
          pfVar11[2] = (float)(1.0 / ((double)puVar13[2] * dVar2 * 8.0));
          pfVar11[3] = (float)(1.0 / ((double)puVar13[3] * dVar2 * 0.785694958 * 8.0));
          pfVar11[4] = (float)(1.0 / ((double)puVar13[4] * dVar2 * 0.5411961 * 8.0));
          in_XMM1._0_8_ = (double)puVar13[5] * dVar2 * 0.275899379 * 8.0;
          in_XMM1._8_8_ = 0;
          pfVar11[5] = (float)(1.0 / in_XMM1._0_8_);
          pdVar15 = pdVar15 + 1;
          pfVar11 = pfVar11 + 8;
          puVar13 = puVar13 + 8;
        } while ((int)pdVar15 < 0xc17d70);
      }
      else {
        *(undefined4 *)(*param_1 + 0x14) = 0x30;
        (**(code **)*param_1)(param_1);
      }
LAB_00670683:
      local_8 = local_8 + 1;
      puVar7 = puVar7 + 0x15;
    } while (local_8 < param_1[0xf]);
  }
  return;
}

