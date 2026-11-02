// rea decompile_all
// name: FUN_005f0580
// address: 0x5f0580
// body: available
// range: 0x5f0580-0x5f0dd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_005f0580(void)

{
  int *piVar1;
  void *pvVar2;
  bool bVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  uint in_EDX;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  float fVar10;
  double dVar11;
  float fVar12;
  int local_14;
  uint local_8;
  
  if (in_EDX <= *(uint *)in_ECX[1]) {
    return 1;
  }
  bVar3 = true;
  uVar7 = 0;
  do {
    if (*(uint *)(*in_ECX + 0x18) <= uVar7) break;
    if (bVar3) {
      iVar8 = in_ECX[1];
      if (0x3fffffff < in_EDX + 5) goto LAB_005f061b;
      iVar5 = (in_EDX + 5) * 4;
      iVar4 = 1;
      if (iVar5 != 0) {
        iVar4 = iVar5;
      }
      iVar4 = FUN_004c554b(iVar4);
      if (iVar4 == 0) goto LAB_005f061b;
      pvVar2 = *(void **)(iVar8 + 0x1c98 + uVar7 * 4);
      if (pvVar2 != (void *)0x0) {
        FID_conflict__free(pvVar2);
      }
      *(int *)(iVar8 + 0x1c98 + uVar7 * 4) = iVar4;
      *(int *)(iVar8 + 4 + uVar7 * 4) = iVar4;
      bVar3 = true;
    }
    else {
LAB_005f061b:
      bVar3 = false;
    }
    puVar9 = *(undefined4 **)(in_ECX[1] + 4 + uVar7 * 4);
    *puVar9 = 0;
    puVar9[1] = 0;
    puVar9[2] = 0;
    puVar9[3] = 0;
    piVar1 = (int *)(in_ECX[1] + 4 + uVar7 * 4);
    *piVar1 = *piVar1 + 0x10;
    uVar7 = uVar7 + 1;
  } while (bVar3);
  if (bVar3) {
    uVar7 = 0x24;
    do {
      if (0x2b < uVar7) {
        if ((bVar3) && (*(int *)(*in_ECX + 0x22c) != 0)) {
          local_8 = 0;
          iVar8 = 0x1ce8;
          goto LAB_005f0705;
        }
        break;
      }
      if (bVar3) {
        iVar8 = in_ECX[1];
        if (0x3fffffff < in_EDX + 5) goto LAB_005f06b8;
        iVar5 = (in_EDX + 5) * 4;
        iVar4 = 1;
        if (iVar5 != 0) {
          iVar4 = iVar5;
        }
        iVar4 = FUN_004c554b(iVar4);
        if (iVar4 == 0) goto LAB_005f06b8;
        pvVar2 = *(void **)(uVar7 + 0x1c94 + iVar8);
        if (pvVar2 != (void *)0x0) {
          FID_conflict__free(pvVar2);
        }
        *(int *)(uVar7 + 0x1c94 + iVar8) = iVar4;
        *(int *)(uVar7 + iVar8) = iVar4;
        bVar3 = true;
      }
      else {
LAB_005f06b8:
        bVar3 = false;
      }
      puVar9 = *(undefined4 **)(uVar7 + in_ECX[1]);
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *(int *)(uVar7 + in_ECX[1]) = *(int *)(uVar7 + in_ECX[1]) + 0x10;
      uVar7 = uVar7 + 4;
    } while (bVar3);
  }
  goto LAB_005f0785;
switchD_005f0abf_caseD_10:
  FUN_005eb3c0();
  iVar8 = iVar8 + 4;
  uVar7 = uVar7 + 1;
  local_14 = local_14 + 0x10;
  goto LAB_005f0aa1;
LAB_005f0705:
  do {
    if (*(uint *)(*in_ECX + 0x28) <= local_8) {
      iVar8 = in_ECX[1];
      if (in_EDX < 0x40000000) {
        iVar4 = 1;
        if (in_EDX * 4 != 0) {
          iVar4 = in_EDX * 4;
        }
        iVar4 = FUN_004c554b(iVar4);
        if (iVar4 != 0) {
          if (*(void **)(iVar8 + 0x1d68) != (void *)0x0) {
            FID_conflict__free(*(void **)(iVar8 + 0x1d68));
          }
          *(int *)(iVar8 + 0x1d68) = iVar4;
          *(int *)(iVar8 + 0xd4) = iVar4;
          bVar3 = true;
          local_8 = 0;
          goto LAB_005f0792;
        }
      }
      break;
    }
    iVar4 = in_ECX[1];
    if (in_EDX < 0x40000000) {
      iVar5 = 1;
      if (in_EDX * 4 != 0) {
        iVar5 = in_EDX * 4;
      }
      iVar5 = FUN_004c554b(iVar5);
      if (iVar5 == 0) goto LAB_005f0772;
      if (*(void **)(iVar8 + iVar4) != (void *)0x0) {
        FID_conflict__free(*(void **)(iVar8 + iVar4));
      }
      *(int *)(iVar8 + iVar4) = iVar5;
      *(int *)(iVar8 + -0x1c94 + iVar4) = iVar5;
      bVar3 = true;
    }
    else {
LAB_005f0772:
      bVar3 = false;
    }
    local_8 = local_8 + 1;
    iVar8 = iVar8 + 4;
  } while (bVar3);
  bVar3 = false;
LAB_005f0785:
  local_8 = 0;
  if (bVar3) {
LAB_005f0792:
    do {
      if (*(uint *)(*in_ECX + 0x18) <= local_8) break;
      uVar7 = 0;
      if (bVar3) {
        for (; uVar7 < 2; uVar7 = uVar7 + 1) {
          if ((!bVar3) || (iVar8 = in_ECX[1], 0x3fffffff < in_EDX)) {
LAB_005f08a9:
            bVar3 = false;
            break;
          }
          iVar4 = 1;
          if (in_EDX * 4 != 0) {
            iVar4 = in_EDX * 4;
          }
          iVar4 = FUN_004c554b(iVar4);
          if (iVar4 == 0) goto LAB_005f08a9;
          pvVar2 = *(void **)(iVar8 + 0x1d6c + (uVar7 + local_8 * 2) * 4);
          if (pvVar2 != (void *)0x0) {
            FID_conflict__free(pvVar2);
          }
          *(int *)(iVar8 + 0x1d6c + (uVar7 + local_8 * 2) * 4) = iVar4;
          *(int *)(iVar8 + 0x100 + (uVar7 + local_8 * 2) * 4) = iVar4;
          bVar3 = true;
        }
      }
      local_8 = local_8 + 1;
    } while (bVar3);
    if (bVar3) {
      local_8 = 0x76b;
      bVar3 = true;
      do {
        if (0x76e < local_8) {
          if (bVar3) {
            iVar8 = in_ECX[1];
            local_8 = 1;
            if (in_EDX * 2 < 0x20000000) {
              iVar4 = 1;
              if (in_EDX << 4 != 0) {
                iVar4 = in_EDX << 4;
              }
              iVar4 = FUN_004c554b(iVar4);
              if (iVar4 != 0) {
                if (*(void **)(iVar8 + 0x1dbc) != (void *)0x0) {
                  FID_conflict__free(*(void **)(iVar8 + 0x1dbc));
                }
                *(int *)(iVar8 + 0x1dbc) = iVar4;
                *(int *)(iVar8 + 0x1ac0) = iVar4;
                goto LAB_005f0972;
              }
            }
          }
          break;
        }
        uVar7 = 0;
        if (bVar3) {
          for (; uVar7 < 2; uVar7 = uVar7 + 1) {
            if ((!bVar3) || (iVar8 = in_ECX[1], 0x3fffffff < in_EDX)) {
LAB_005f095b:
              bVar3 = false;
              break;
            }
            iVar4 = 1;
            if (in_EDX * 4 != 0) {
              iVar4 = in_EDX * 4;
            }
            iVar4 = FUN_004c554b(iVar4);
            if (iVar4 == 0) goto LAB_005f095b;
            pvVar2 = *(void **)(iVar8 + (local_8 + uVar7) * 4);
            if (pvVar2 != (void *)0x0) {
              FID_conflict__free(pvVar2);
            }
            *(int *)(iVar8 + (local_8 + uVar7) * 4) = iVar4;
            *(int *)(iVar8 + -0x1c6c + (local_8 + uVar7) * 4) = iVar4;
            bVar3 = true;
          }
        }
        local_8 = local_8 + 2;
      } while (bVar3);
    }
  }
  local_8 = 0;
LAB_005f0972:
  if (*(int *)(*in_ECX + 0x23c) == 0) {
    if (local_8 != 0) {
LAB_005f0a7b:
      if ((in_EDX == *(uint *)in_ECX[1]) || (*(int *)(*in_ECX + 0x22c) == 0)) {
LAB_005f0dc5:
        *(uint *)in_ECX[1] = in_EDX;
        return local_8;
      }
      uVar7 = 0;
      iVar8 = 0x54;
      local_14 = 0;
LAB_005f0aa1:
      iVar4 = *in_ECX;
      if (uVar7 < *(uint *)(iVar4 + 0x28)) {
        switch(*(undefined4 *)(iVar4 + 0x2c + local_14)) {
        case 0:
          FUN_005eccf0();
          iVar8 = iVar8 + 4;
          uVar7 = uVar7 + 1;
          local_14 = local_14 + 0x10;
          goto LAB_005f0aa1;
        case 1:
          iVar4 = *(int *)(iVar8 + in_ECX[1]);
          if (0 < (int)in_EDX) {
            iVar5 = 0;
            do {
              fVar12 = (float)iVar5 / (float)(int)(in_EDX - 1);
              fVar10 = fVar12 - 0.5;
              FUN_00411660();
              dVar11 = (double)fVar12 * 6.283185307179586;
              FUN_006f7d20();
              *(float *)(iVar4 + iVar5 * 4) =
                   (float)((double)(0.62 - fVar10 * 0.48) - dVar11 * 0.3799999952316284);
              iVar5 = iVar5 + 1;
            } while (iVar5 < (int)in_EDX);
            iVar8 = iVar8 + 4;
            uVar7 = uVar7 + 1;
            local_14 = local_14 + 0x10;
            goto LAB_005f0aa1;
          }
          break;
        case 2:
          FUN_005ecab0();
          iVar8 = iVar8 + 4;
          uVar7 = uVar7 + 1;
          local_14 = local_14 + 0x10;
          goto LAB_005f0aa1;
        case 3:
          FUN_005ec8b0();
          iVar8 = iVar8 + 4;
          uVar7 = uVar7 + 1;
          local_14 = local_14 + 0x10;
          goto LAB_005f0aa1;
        case 4:
          FUN_005ec7a0();
          iVar8 = iVar8 + 4;
          uVar7 = uVar7 + 1;
          local_14 = local_14 + 0x10;
          goto LAB_005f0aa1;
        case 5:
          FUN_005ec550();
          iVar8 = iVar8 + 4;
          uVar7 = uVar7 + 1;
          local_14 = local_14 + 0x10;
          goto LAB_005f0aa1;
        case 6:
          FUN_005ec400();
          iVar8 = iVar8 + 4;
          uVar7 = uVar7 + 1;
          local_14 = local_14 + 0x10;
          goto LAB_005f0aa1;
        case 7:
          FUN_005ec2e0();
          iVar8 = iVar8 + 4;
          uVar7 = uVar7 + 1;
          local_14 = local_14 + 0x10;
          goto LAB_005f0aa1;
        default:
          FUN_005ec1c0();
          break;
        case 9:
          FUN_005ebfc0();
          iVar8 = iVar8 + 4;
          uVar7 = uVar7 + 1;
          local_14 = local_14 + 0x10;
          goto LAB_005f0aa1;
        case 10:
          FUN_005ebdc0();
          iVar8 = iVar8 + 4;
          uVar7 = uVar7 + 1;
          local_14 = local_14 + 0x10;
          goto LAB_005f0aa1;
        case 0xb:
          puVar9 = *(undefined4 **)(iVar8 + in_ECX[1]);
          uVar6 = in_EDX;
          if (0 < (int)in_EDX) {
            for (; uVar6 != 0; uVar6 = uVar6 - 1) {
              *puVar9 = 0x3f800000;
              puVar9 = puVar9 + 1;
            }
            iVar8 = iVar8 + 4;
            uVar7 = uVar7 + 1;
            local_14 = local_14 + 0x10;
            goto LAB_005f0aa1;
          }
          break;
        case 0xc:
          FUN_005eba10();
          iVar8 = iVar8 + 4;
          uVar7 = uVar7 + 1;
          local_14 = local_14 + 0x10;
          goto LAB_005f0aa1;
        case 0xd:
          FUN_005eb8e0();
          iVar8 = iVar8 + 4;
          uVar7 = uVar7 + 1;
          local_14 = local_14 + 0x10;
          goto LAB_005f0aa1;
        case 0xe:
          FUN_005eb740(*(undefined4 *)(iVar4 + 0x38 + local_14));
          uVar7 = uVar7 + 1;
          iVar8 = iVar8 + 4;
          local_14 = local_14 + 0x10;
          goto LAB_005f0aa1;
        case 0xf:
          FUN_005eb4c0(*(undefined4 *)(iVar4 + 0x38 + local_14));
          uVar7 = uVar7 + 1;
          iVar8 = iVar8 + 4;
          local_14 = local_14 + 0x10;
          goto LAB_005f0aa1;
        case 0x10:
          goto switchD_005f0abf_caseD_10;
        }
        iVar8 = iVar8 + 4;
        uVar7 = uVar7 + 1;
        local_14 = local_14 + 0x10;
        goto LAB_005f0aa1;
      }
      goto LAB_005f0dc5;
    }
  }
  else {
    if ((local_8 != 0) && (iVar8 = in_ECX[1], in_EDX * 2 < 0x40000000)) {
      iVar4 = 1;
      if (in_EDX << 3 != 0) {
        iVar4 = in_EDX << 3;
      }
      iVar4 = FUN_004c554b(iVar4);
      if (iVar4 != 0) {
        if (*(void **)(iVar8 + 0x1dc0) != (void *)0x0) {
          FID_conflict__free(*(void **)(iVar8 + 0x1dc0));
        }
        *(int *)(iVar8 + 0x1dc0) = iVar4;
        *(int *)(iVar8 + 0x1ac4) = iVar4;
        local_8 = 1;
        goto LAB_005f0a7b;
      }
    }
    local_8 = 0;
  }
  *(undefined4 *)*in_ECX = 8;
  return local_8;
}

