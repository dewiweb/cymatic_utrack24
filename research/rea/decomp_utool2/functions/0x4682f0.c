// rea decompile_all
// name: FUN_004682f0
// address: 0x4682f0
// body: available
// range: 0x4682f0-0x4688ed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_004682f0(int *param_1,int *param_2)

{
  int *piVar1;
  code *pcVar2;
  int *piVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  DWORD DVar10;
  DWORD *pDVar11;
  undefined4 uVar12;
  int in_ECX;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  undefined4 *local_3c;
  int local_38;
  int *local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00701250;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)(in_ECX + 8);
  local_2c = 0;
  local_14 = in_ECX;
  cVar5 = FUN_0061f5a0();
  while (cVar5 == '\0') {
    WaitForSingleObject(*(HANDLE *)(in_ECX + 0xc),100);
    cVar5 = FUN_0061f5a0();
  }
  iVar9 = *(int *)(*param_2 + 0xc);
  local_20 = (int *)(iVar9 + -8);
  if (local_20 != &DAT_00bfe124) {
    LOCK();
    *local_20 = *local_20 + 1;
    UNLOCK();
  }
  puVar15 = *(undefined4 **)(*param_2 + 0x10);
  local_1c = puVar15 + -2;
  if (local_1c != &DAT_00bfe124) {
    LOCK();
    *local_1c = *local_1c + 1;
    UNLOCK();
  }
  local_8._0_1_ = 2;
  local_8._1_3_ = 0;
  local_24 = *(int *)(local_14 + 0x30) + -1;
  local_3c = puVar15;
  if (-1 < local_24) {
    local_28 = local_24 * 0x10;
    do {
      local_18 = (int *)(*(int *)(local_14 + 0x28) + local_28);
      piVar8 = (int *)iVar9;
      iVar6 = *local_18;
      if (*local_18 == iVar9) {
LAB_004683f8:
        if (((((undefined4 *)local_18[1] == puVar15) ||
             (iVar6 = FUN_00448730(local_18[1]), iVar6 == 0)) && ((int *)local_18[3] != (int *)0x0))
           && ((pcVar2 = *(code **)(*(int *)local_18[3] + 4), pcVar2 == FUN_00464450 ||
               (cVar5 = (*pcVar2)(), cVar5 != '\0')))) {
          *(int *)(local_14 + 0x34) = *(int *)(local_14 + 0x34) + 1;
          local_18[2] = *(int *)(local_14 + 0x34);
          iVar9 = local_18[3];
          *param_1 = iVar9;
          if (iVar9 != 0) {
            LOCK();
            *(int *)(iVar9 + 4) = *(int *)(iVar9 + 4) + 1;
            UNLOCK();
          }
          if (local_1c != &DAT_00bfe124) {
            LOCK();
            iVar9 = *local_1c;
            *local_1c = *local_1c + -1;
            UNLOCK();
            if (iVar9 == 0) {
              FID_conflict__free(local_1c);
            }
          }
          if (local_20 != &DAT_00bfe124) {
            LOCK();
            iVar9 = *local_20;
            *local_20 = *local_20 + -1;
            UNLOCK();
            if (iVar9 == 0) {
              FID_conflict__free(local_20);
            }
          }
          FUN_0061f540();
          ExceptionList = local_10;
          return param_1;
        }
      }
      else {
        do {
          local_30 = iVar6;
          local_34 = piVar8;
          local_38 = FUN_00443260();
          iVar6 = FUN_00443260();
          if ((local_38 - iVar6 != 0) &&
             (iVar6 = (local_38 - iVar6 >> 0x1f & 0xfffffffeU) + 1, iVar6 != 0)) goto LAB_004683f1;
          piVar8 = local_34;
          iVar6 = local_30;
        } while (local_38 != 0);
        iVar6 = 0;
LAB_004683f1:
        if (iVar6 == 0) goto LAB_004683f8;
      }
      local_24 = local_24 + -1;
      local_28 = local_28 + -0x10;
    } while (-1 < local_24);
  }
  local_34 = piVar1;
  FUN_0061f490();
  iVar6 = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar7 = *(int *)(local_14 + 0x30) + -1;
  if (-1 < iVar7) {
    local_38 = *(int *)(local_14 + 0x28);
    iVar13 = iVar7 * 0x10;
    uVar14 = 0xffffffff;
    do {
      if (*(uint *)(local_38 + 8 + iVar13) < uVar14) {
        uVar14 = *(uint *)(local_38 + 8 + iVar13);
        iVar6 = iVar7;
      }
      iVar13 = iVar13 + -0x10;
      iVar7 = iVar7 + -1;
      puVar15 = local_3c;
    } while (-1 < iVar7);
  }
  local_18 = (int *)(iVar6 * 0x10 + *(int *)(local_14 + 0x28));
  if (local_20 != &DAT_00bfe124) {
    LOCK();
    *local_20 = *local_20 + 1;
    UNLOCK();
  }
  LOCK();
  iVar6 = *local_18;
  *local_18 = iVar9;
  UNLOCK();
  piVar8 = (int *)(iVar6 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  if (local_1c != &DAT_00bfe124) {
    LOCK();
    *local_1c = *local_1c + 1;
    UNLOCK();
  }
  LOCK();
  iVar9 = local_18[1];
  local_18[1] = (int)puVar15;
  UNLOCK();
  piVar8 = (int *)(iVar9 + -8);
  if (piVar8 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      FID_conflict__free(piVar8);
    }
  }
  *(int *)(local_14 + 0x34) = *(int *)(local_14 + 0x34) + 1;
  local_18[2] = *(int *)(local_14 + 0x34);
  if (DAT_00c8a674 == (code *)0x0) {
    piVar8 = (int *)FUN_0063eee0();
  }
  else {
    piVar8 = (int *)(*DAT_00c8a674)(&local_3c);
  }
  iVar9 = local_18[3];
  local_18[3] = *piVar8;
  *piVar8 = iVar9;
  if (local_3c != (undefined4 *)0x0) {
    LOCK();
    piVar8 = local_3c + 1;
    iVar9 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)*local_3c)();
    }
  }
  if (*(int *)(local_14 + 4) == 0) {
    operator_new(0x28);
    piVar8 = (int *)FUN_00468990();
    if (piVar8 != (int *)0x0) {
      LOCK();
      piVar8[1] = piVar8[1] + 1;
      UNLOCK();
    }
    local_2c = 2;
    piVar3 = (int *)*param_2;
    param_2 = piVar8;
    if ((piVar3 == piVar8) ||
       ((((((float)piVar3[5] == (float)piVar8[5] && ((char)piVar3[9] == (char)piVar8[9])) &&
          (((float)piVar3[6] == (float)piVar8[6] && ((float)piVar3[7] == (float)piVar8[7])))) &&
         ((piVar3[3] == piVar8[3] || (iVar9 = FUN_00448730(piVar3[3]), iVar9 == 0)))) &&
        ((piVar3[4] == piVar8[4] || (iVar9 = FUN_00448730(piVar3[4]), iVar9 == 0)))))) {
      bVar4 = true;
      goto LAB_004686a8;
    }
  }
  bVar4 = false;
LAB_004686a8:
  if (((local_2c & 2) != 0) && (param_2 != (int *)0x0)) {
    LOCK();
    piVar8 = param_2 + 1;
    iVar9 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar9 == 1) {
      (**(code **)*param_2)();
    }
  }
  piVar8 = local_18;
  if ((bVar4) && (iVar9 = local_18[3], *(int *)(local_14 + 4) != iVar9)) {
    if (iVar9 != 0) {
      LOCK();
      *(int *)(iVar9 + 4) = *(int *)(iVar9 + 4) + 1;
      UNLOCK();
    }
    puVar15 = *(undefined4 **)(local_14 + 4);
    *(int *)(local_14 + 4) = iVar9;
    if (puVar15 != (undefined4 *)0x0) {
      LOCK();
      piVar3 = puVar15 + 1;
      iVar9 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        (**(code **)*puVar15)();
      }
    }
  }
  iVar9 = piVar8[3];
  *param_1 = iVar9;
  if (iVar9 != 0) {
    LOCK();
    *(int *)(iVar9 + 4) = *(int *)(iVar9 + 4) + 1;
    UNLOCK();
  }
  LOCK();
  iVar9 = *piVar1;
  if (iVar9 == 0) {
    *piVar1 = 1;
    iVar9 = 0;
  }
  UNLOCK();
  if (iVar9 != 0) {
    iVar9 = 0x13;
    do {
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 1;
        iVar6 = 0;
      }
      UNLOCK();
      if (iVar6 == 0) goto LAB_0046875a;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
    LOCK();
    iVar9 = *piVar1;
    if (iVar9 == 0) {
      *piVar1 = 1;
      iVar9 = 0;
    }
    UNLOCK();
    while (iVar9 != 0) {
      Sleep(0);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 1;
        iVar9 = 0;
      }
      UNLOCK();
    }
  }
LAB_0046875a:
  piVar8 = (int *)(in_ECX + 0x14);
  *piVar8 = *piVar8 + -1;
  if (*piVar8 == 0) {
    *(undefined4 *)(in_ECX + 0x18) = 0;
    SetEvent(*(HANDLE *)(in_ECX + 0xc));
  }
  LOCK();
  *piVar1 = 0;
  UNLOCK();
  if (local_1c != &DAT_00bfe124) {
    LOCK();
    iVar9 = *local_1c;
    *local_1c = *local_1c + -1;
    UNLOCK();
    if (iVar9 == 0) {
      FID_conflict__free(local_1c);
    }
  }
  if (local_20 != &DAT_00bfe124) {
    LOCK();
    iVar9 = *local_20;
    *local_20 = *local_20 + -1;
    UNLOCK();
    if (iVar9 == 0) {
      FID_conflict__free(local_20);
    }
  }
  DVar10 = GetCurrentThreadId();
  LOCK();
  iVar9 = *piVar1;
  if (iVar9 == 0) {
    *piVar1 = 1;
    iVar9 = 0;
  }
  UNLOCK();
  if (iVar9 != 0) {
    iVar9 = 0x13;
    do {
      LOCK();
      iVar6 = *piVar1;
      if (iVar6 == 0) {
        *piVar1 = 1;
        iVar6 = 0;
      }
      UNLOCK();
      if (iVar6 == 0) goto LAB_00468806;
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
    LOCK();
    iVar9 = *piVar1;
    if (iVar9 == 0) {
      *piVar1 = 1;
      iVar9 = 0;
    }
    UNLOCK();
    while (iVar9 != 0) {
      Sleep(0);
      LOCK();
      iVar9 = *piVar1;
      if (iVar9 == 0) {
        *piVar1 = 1;
        iVar9 = 0;
      }
      UNLOCK();
    }
  }
LAB_00468806:
  uVar14 = 0;
  if (0 < *(int *)(in_ECX + 0x24)) {
    pDVar11 = *(DWORD **)(in_ECX + 0x1c);
    do {
      if (*pDVar11 == DVar10) {
        pDVar11 = pDVar11 + 1;
        *pDVar11 = *pDVar11 - 1;
        if (*pDVar11 == 0) {
          if (uVar14 < *(uint *)(in_ECX + 0x24)) {
            iVar6 = *(uint *)(in_ECX + 0x24) - 1;
            *(int *)(in_ECX + 0x24) = iVar6;
            iVar9 = *(int *)(in_ECX + 0x1c) + uVar14 * 8;
            if (0 < (int)(iVar6 - uVar14)) {
              FUN_004c1df0(iVar9,iVar9 + 8);
            }
            iVar9 = *(int *)(in_ECX + 0x24);
            iVar6 = *(int *)(in_ECX + 0x20);
            iVar7 = 0;
            if (0 < iVar9 * 2) {
              iVar7 = iVar9 * 2;
            }
            if (iVar7 < iVar6) {
              if (iVar9 < 8) {
                iVar9 = 8;
              }
              if ((iVar9 < iVar6) && (iVar6 != iVar9)) {
                if (iVar9 < 1) {
                  FID_conflict__free(*(void **)(in_ECX + 0x1c));
                  *(undefined4 *)(in_ECX + 0x1c) = 0;
                }
                else if (*(int *)(in_ECX + 0x1c) == 0) {
                  uVar12 = FUN_004c554b();
                  *(undefined4 *)(in_ECX + 0x1c) = uVar12;
                }
                else {
                  uVar12 = FUN_004c553b(*(int *)(in_ECX + 0x1c));
                  *(undefined4 *)(in_ECX + 0x1c) = uVar12;
                }
                *(int *)(in_ECX + 0x20) = iVar9;
              }
            }
          }
          SetEvent(*(HANDLE *)(in_ECX + 0xc));
        }
        LOCK();
        *piVar1 = 0;
        UNLOCK();
        ExceptionList = local_10;
        return param_1;
      }
      uVar14 = uVar14 + 1;
      pDVar11 = pDVar11 + 2;
    } while ((int)uVar14 < *(int *)(in_ECX + 0x24));
  }
  LOCK();
  *piVar1 = 0;
  UNLOCK();
  ExceptionList = local_10;
  return param_1;
}

