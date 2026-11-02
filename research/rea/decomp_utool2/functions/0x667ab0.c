// rea decompile_all
// name: FUN_00667ab0
// address: 0x667ab0
// body: available
// range: 0x667ab0-0x667eb2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00667ab0(int *param_1)

{
  int *piVar1;
  double dVar2;
  short sVar3;
  ulonglong *puVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  ulonglong *puVar10;
  undefined4 *puVar11;
  short *psVar12;
  int *piVar13;
  double *pdVar14;
  int *piVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar19 [16];
  code *local_c;
  int local_8;
  
  piVar5 = param_1;
  param_1 = (int *)0x0;
  local_c = (code *)0x0;
  local_8 = 0;
  if (0 < piVar5[9]) {
    puVar11 = (undefined4 *)(piVar5[0x31] + 0x24);
    piVar13 = (int *)(piVar5[0x67] + 0x2c);
    do {
      switch(*puVar11) {
      case 1:
        local_c = FUN_0065d520;
        param_1 = (int *)0x0;
        break;
      case 2:
        local_c = FUN_0065d560;
        param_1 = (int *)0x0;
        break;
      default:
        *(undefined4 *)(*piVar5 + 0x14) = 7;
        *(undefined4 *)(*piVar5 + 0x18) = *puVar11;
LAB_00667bc3:
        (**(code **)*piVar5)(piVar5);
        break;
      case 4:
        local_c = FUN_0065d790;
        param_1 = (int *)0x0;
        break;
      case 8:
        iVar7 = piVar5[0x11];
        if (iVar7 == 0) {
          local_c = FUN_0065dad0;
          param_1 = (int *)0x0;
        }
        else if (iVar7 == 1) {
          local_c = FUN_0065e010;
          param_1 = (int *)0x1;
        }
        else {
          if (iVar7 != 2) {
            *(undefined4 *)(*piVar5 + 0x14) = 0x30;
            goto LAB_00667bc3;
          }
          local_c = FUN_0065e450;
          param_1 = (int *)0x2;
        }
      }
      piVar13[-10] = (int)local_c;
      if (((*(char *)(puVar11 + 3) != '\0') && ((int *)*piVar13 != param_1)) &&
         (puVar4 = (ulonglong *)puVar11[10], puVar4 != (ulonglong *)0x0)) {
        *piVar13 = (int)param_1;
        if (param_1 == (int *)0x0) {
          iVar7 = puVar11[0xb];
          iVar8 = 0;
          do {
            *(uint *)(iVar7 + iVar8 * 4) = (uint)*(ushort *)((int)puVar4 + iVar8 * 2);
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x40);
        }
        else if (param_1 == (int *)0x1) {
          piVar15 = (int *)puVar11[0xb];
          if (1 < DAT_00c89e14) {
            iVar7 = 0;
            if (((&DAT_00c1858e < piVar15) || (piVar15 + 0x3f < &DAT_00c18510)) &&
               (((int *)((int)puVar4 + 0x7e) < piVar15 || (piVar15 + 0x3f < puVar4)))) {
              puVar10 = puVar4;
              do {
                auVar16._8_8_ = 0;
                auVar16._0_8_ = *(ulonglong *)((int)puVar10 + (int)&DAT_00c18510 + -(int)puVar4);
                auVar19 = pmovsxwd(in_XMM1,auVar16);
                auVar17._8_8_ = 0;
                auVar17._0_8_ = *puVar10;
                auVar16 = pmovzxwd(auVar17,auVar17);
                auVar16 = pmulld(auVar16,auVar19);
                piVar1 = piVar15 + iVar7;
                *piVar1 = auVar16._0_4_ + 0x800 >> 0xc;
                piVar1[1] = auVar16._4_4_ + 0x800 >> 0xc;
                piVar1[2] = auVar16._8_4_ + 0x800 >> 0xc;
                piVar1[3] = auVar16._12_4_ + 0x800 >> 0xc;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = *(ulonglong *)((int)puVar10 + (int)&UNK_00c18518 + -(int)puVar4);
                in_XMM1 = pmovsxwd(auVar19,auVar18);
                auVar19._8_8_ = 0;
                auVar19._0_8_ = puVar10[1];
                auVar16 = pmovzxwd(auVar19,auVar19);
                auVar16 = pmulld(auVar16,in_XMM1);
                piVar1 = piVar15 + iVar7 + 4;
                *piVar1 = auVar16._0_4_ + 0x800 >> 0xc;
                piVar1[1] = auVar16._4_4_ + 0x800 >> 0xc;
                piVar1[2] = auVar16._8_4_ + 0x800 >> 0xc;
                piVar1[3] = auVar16._12_4_ + 0x800 >> 0xc;
                iVar7 = iVar7 + 8;
                puVar10 = puVar10 + 2;
              } while (iVar7 < 0x40);
              goto LAB_00667e63;
            }
          }
          psVar12 = &DAT_00c18510;
          do {
            puVar9 = (ushort *)((int)(puVar4 + -0x1830a2) + (int)psVar12);
            sVar3 = *psVar12;
            psVar12 = psVar12 + 1;
            *piVar15 = (int)((uint)*puVar9 * (int)sVar3 + 0x800) >> 0xc;
            piVar15 = piVar15 + 1;
          } while ((int)psVar12 < 0xc18590);
        }
        else if (param_1 == (int *)0x2) {
          pdVar14 = (double *)&DAT_00c17d30;
          pfVar6 = (float *)(puVar11[0xb] + 8);
          puVar9 = (ushort *)((int)puVar4 + 4);
          do {
            dVar2 = *pdVar14;
            in_XMM1._8_8_ = 0;
            in_XMM1._0_8_ = dVar2;
            pdVar14 = pdVar14 + 1;
            pfVar6[-2] = (float)((double)puVar9[-2] * dVar2);
            pfVar6[-1] = (float)((double)puVar9[-1] * dVar2 * 1.387039845);
            *pfVar6 = (float)((double)*puVar9 * dVar2 * 1.306562965);
            pfVar6[1] = (float)((double)puVar9[1] * dVar2 * 1.175875602);
            pfVar6[2] = (float)((double)puVar9[2] * dVar2);
            pfVar6[3] = (float)((double)puVar9[3] * dVar2 * 0.785694958);
            pfVar6[4] = (float)((double)puVar9[4] * dVar2 * 0.5411961);
            pfVar6[5] = (float)((double)puVar9[5] * dVar2 * 0.275899379);
            pfVar6 = pfVar6 + 8;
            puVar9 = puVar9 + 8;
          } while ((int)pdVar14 < 0xc17d70);
        }
        else {
          *(undefined4 *)(*piVar5 + 0x14) = 0x30;
          (**(code **)*piVar5)(piVar5);
        }
      }
LAB_00667e63:
      local_8 = local_8 + 1;
      piVar13 = piVar13 + 1;
      puVar11 = puVar11 + 0x15;
    } while (local_8 < piVar5[9]);
  }
  return;
}

