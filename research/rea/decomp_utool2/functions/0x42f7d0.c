// rea decompile_all
// name: FUN_0042f7d0
// address: 0x42f7d0
// body: available
// range: 0x42f7d0-0x430304 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

void FUN_0042f7d0(int *param_1,int *param_2,int *param_3,double param_4,int param_5)

{
  undefined4 *puVar1;
  int *_Memory;
  double *pdVar2;
  void *pvVar3;
  bool bVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int in_ECX;
  double *pdVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 local_bc;
  int local_b4;
  int *local_b0;
  int local_ac;
  int local_a8;
  int *local_a4;
  int local_a0;
  int local_9c;
  int *local_98;
  int local_94;
  int local_90;
  int *local_8c;
  int local_88;
  undefined1 local_81;
  int local_80;
  int local_7c [4];
  undefined4 local_6c;
  int local_48 [4];
  int *local_38;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fe006;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_b0 = param_1;
  local_8c = param_2;
  local_a4 = param_3;
  if ((*(char *)(in_ECX + 0x734) != '\0') || (*(char *)(in_ECX + 0x73b) != '\0')) {
    FUN_00430310(local_14);
  }
  if ((param_5 < 8) || (0x4000 < param_5)) {
    *(undefined1 *)(in_ECX + 0x73c) = 1;
  }
  if (*(int *)(in_ECX + 0x24) == 0) {
    FUN_00431970(&local_9c);
    if (*(int *)(in_ECX + 0x24) == 0) {
      *local_b0 = local_9c;
      piVar5 = (int *)(local_9c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        *piVar5 = *piVar5 + 1;
        UNLOCK();
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar5);
          }
        }
      }
      goto LAB_004302e5;
    }
    piVar5 = (int *)(local_9c + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  *(undefined1 *)(in_ECX + 0x735) = 0;
  local_88 = in_ECX + 0x50;
  *(undefined4 *)(in_ECX + 0x728) = 0xffffffff;
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x24))(in_ECX + 0x4c,local_88);
  uVar6 = FUN_00430c60(param_5);
  *(double *)(in_ECX + 0x6a8) = param_4;
  *(undefined4 *)(in_ECX + 0x6a0) = uVar6;
  FID_conflict__free(*(void **)(in_ECX + 0x6b0));
  *(undefined4 *)(in_ECX + 0x6b0) = 0;
  *(undefined4 *)(in_ECX + 0x6c4) = 4;
  *(undefined4 *)(in_ECX + 0x6c8) = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x6cc) = 0;
  *(undefined4 *)(in_ECX + 0x6b4) = 0;
  *(undefined4 *)(in_ECX + 0x6b8) = 0;
  *(undefined4 *)(in_ECX + 0x6bc) = 0;
  *(undefined4 *)(in_ECX + 0x6c0) = 0;
  FID_conflict__free(*(void **)(in_ECX + 0x6d0));
  *(undefined4 *)(in_ECX + 0x6d0) = 0;
  *(undefined4 *)(in_ECX + 0x6e4) = 4;
  *(undefined4 *)(in_ECX + 0x6e8) = 0xffffffff;
  *(undefined1 *)(in_ECX + 0x6ec) = 0;
  *(undefined4 *)(in_ECX + 0x6d4) = 0;
  *(undefined4 *)(in_ECX + 0x6d8) = 0;
  *(undefined4 *)(in_ECX + 0x6dc) = 0;
  *(undefined4 *)(in_ECX + 0x6e0) = 0;
  FUN_0042f570();
  if ((param_4 != 0.0) && (0 < *(int *)(in_ECX + 0x74))) {
    pdVar9 = *(double **)(in_ECX + 0x6c);
    pdVar2 = pdVar9 + *(int *)(in_ECX + 0x74);
    for (; (pdVar9 != pdVar2 && (param_4 != *pdVar9)); pdVar9 = pdVar9 + 1) {
    }
  }
  FUN_004311a0();
  local_bc = 0;
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x34))(&local_bc);
  *(undefined8 *)(in_ECX + 0x6a8) = local_bc;
  piVar5 = (int *)(*(int *)(in_ECX + 0x48) + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar7 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar7 == 0) {
      FID_conflict__free(piVar5);
    }
  }
  *(undefined1 **)(in_ECX + 0x48) = &DAT_00bfe12c;
  *(undefined1 *)(in_ECX + 0x736) = 0;
  FUN_00431110();
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x24))((int *)(in_ECX + 0x4c),in_ECX + 0x50);
  iVar7 = *(int *)(in_ECX + 0x4c);
  FID_conflict__free(*(void **)(in_ECX + 0x710));
  uVar6 = FUN_004c5556(iVar7 + 8,4);
  *(undefined4 *)(in_ECX + 0x710) = uVar6;
  iVar7 = *(int *)(in_ECX + 0x50);
  FID_conflict__free(*(void **)(in_ECX + 0x714));
  uVar6 = FUN_004c5556(iVar7 + 8,4);
  *(undefined4 *)(in_ECX + 0x714) = uVar6;
  if (*(char *)(in_ECX + 0x73a) != '\0') {
    if (*(int *)(in_ECX + 0x24) != 0) {
      (**(code **)(**(int **)(in_ECX + 0x24) + 8))(*(int **)(in_ECX + 0x24));
      *(undefined4 *)(in_ECX + 0x24) = 0;
      if (*(int *)(in_ECX + 0x24) != 0) {
        (**(code **)(**(int **)(in_ECX + 0x24) + 8))(*(int **)(in_ECX + 0x24));
        *(undefined4 *)(in_ECX + 0x24) = 0;
      }
    }
    local_81 = 0;
    FUN_004316d0(&local_81);
    FUN_004317f0(&local_b4);
    *(undefined1 *)(in_ECX + 0x73a) = 0;
    piVar5 = (int *)(local_b4 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  local_80 = FUN_00430d90(param_2,local_a4);
  puVar1 = (undefined4 *)(in_ECX + 0x28);
  if (DAT_00c8a600 == in_ECX) {
    *puVar1 = FUN_00433620;
    *(code **)(in_ECX + 0x30) = FUN_004335f0;
    *(code **)(in_ECX + 0x34) = FUN_00433680;
    *(undefined1 **)(in_ECX + 0x2c) = &LAB_004335d0;
  }
  else {
    FUN_00433140();
  }
  (**(code **)(**(int **)(in_ECX + 0x24) + 0x50))();
  iVar7 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x4c))
                    (*(undefined4 *)(in_ECX + 0x70c),local_80,*(undefined4 *)(in_ECX + 0x6a0),puVar1
                    );
  if (iVar7 == 0) {
LAB_0042fcb7:
    iVar7 = *(int *)(in_ECX + 0x6a0) * local_80;
    *(undefined1 *)(in_ECX + 0x736) = 1;
    FID_conflict__free(*(void **)(in_ECX + 0x724));
    uVar6 = FUN_004c5556(iVar7 + 0x20,4);
    *(undefined4 *)(in_ECX + 0x724) = uVar6;
    local_80 = 0;
    local_98 = (int *)0x0;
    local_94 = 0;
    local_90 = 0;
    local_8 = 0;
    iVar7 = 0;
    *(undefined4 *)(in_ECX + 0x6a4) = 0x10;
    if (0 < *(int *)(in_ECX + 0x4c)) {
      local_88 = 0;
      do {
        if ((local_8c[6] < iVar7) || (iVar7 < 0)) {
LAB_0042fd62:
          bVar4 = false;
        }
        else {
          piVar5 = (int *)*local_8c;
          if (piVar5 == (int *)0x0) {
            piVar5 = local_8c + 1;
          }
          if ((piVar5[iVar7 >> 5] & 1 << ((byte)iVar7 & 0x1f)) == 0) goto LAB_0042fd62;
          bVar4 = true;
        }
        if (bVar4) {
          *(int *)(*(int *)(in_ECX + 0x710) + local_80 * 4) =
               *(int *)(in_ECX + 0x724) + *(int *)(in_ECX + 0x6a0) * local_80 * 4;
          _memset(local_7c + 1,0,0x30);
          local_7c[1] = 1;
          local_7c[0] = iVar7;
          (**(code **)(**(int **)(in_ECX + 0x24) + 0x48))(local_7c);
          FUN_004097d0(local_6c);
          iVar8 = local_88;
          uVar12 = FUN_0042e630(local_6c);
          iVar11 = (int)((ulonglong)uVar12 >> 0x20);
          *(undefined8 *)(iVar11 + iVar8) = *(undefined8 *)uVar12;
          *(undefined4 *)(iVar11 + 8 + iVar8) = *(undefined4 *)((undefined8 *)uVar12 + 1);
          iVar11 = *(int *)(*(int *)(in_ECX + 0x718) + iVar8);
          iVar10 = *(int *)(in_ECX + 0x6a4);
          if (*(int *)(in_ECX + 0x6a4) < iVar11) {
            iVar10 = iVar11;
          }
          local_80 = local_80 + 1;
          local_88 = iVar8 + 0xc;
          *(int *)(in_ECX + 0x6a4) = iVar10;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(in_ECX + 0x4c));
    }
    iVar7 = 0;
    local_80 = 0;
    if (0 < *(int *)(in_ECX + 0x50)) {
      local_88 = 0;
      do {
        if ((local_a4[6] < iVar7) || (iVar7 < 0)) {
LAB_0042fe62:
          bVar4 = false;
        }
        else {
          piVar5 = (int *)*local_a4;
          if (piVar5 == (int *)0x0) {
            piVar5 = local_a4 + 1;
          }
          if ((piVar5[iVar7 >> 5] & 1 << ((byte)iVar7 & 0x1f)) == 0) goto LAB_0042fe62;
          bVar4 = true;
        }
        if (bVar4) {
          *(int *)(*(int *)(in_ECX + 0x714) + local_80 * 4) =
               *(int *)(in_ECX + 0x724) +
               *(int *)(in_ECX + 0x6a0) * (*(int *)(in_ECX + 0x72c) + local_80) * 4;
          _memset(local_48 + 1,0,0x30);
          local_48[1] = 0;
          local_48[0] = iVar7;
          (**(code **)(**(int **)(in_ECX + 0x24) + 0x48))(local_48);
          local_8c = local_38;
          for (piVar5 = local_98; piVar5 != local_98 + local_90; piVar5 = piVar5 + 1) {
            if (local_38 == (int *)*piVar5) goto LAB_0042ff35;
          }
          iVar11 = local_90 + 1;
          if (local_94 < iVar11) {
            iVar8 = iVar11;
            if (iVar11 < 0) {
              iVar8 = local_90 + 2;
            }
            FUN_00409cf0((iVar8 >> 1) + 8 + iVar11 & 0xfffffff8);
          }
          iVar11 = local_90 + 1;
          piVar5 = local_98 + local_90;
          local_90 = iVar11;
          if (piVar5 != (int *)0x0) {
            *piVar5 = (int)local_8c;
          }
LAB_0042ff35:
          iVar8 = local_88;
          uVar12 = FUN_0042e630(local_38);
          iVar11 = (int)((ulonglong)uVar12 >> 0x20);
          *(undefined8 *)(iVar11 + iVar8) = *(undefined8 *)uVar12;
          *(undefined4 *)(iVar11 + 8 + iVar8) = *(undefined4 *)((undefined8 *)uVar12 + 1);
          iVar11 = *(int *)(*(int *)(in_ECX + 0x71c) + iVar8);
          iVar10 = *(int *)(in_ECX + 0x6a4);
          if (*(int *)(in_ECX + 0x6a4) < iVar11) {
            iVar10 = iVar11;
          }
          local_80 = local_80 + 1;
          local_88 = iVar8 + 0xc;
          *(int *)(in_ECX + 0x6a4) = iVar10;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(in_ECX + 0x50));
    }
    iVar7 = 0;
    if (0 < *(int *)(in_ECX + 0x730)) {
      iVar11 = 0;
      do {
        local_8c = *(int **)(in_ECX + 0x6a0);
        pvVar3 = *(void **)((*(int *)(in_ECX + 0x72c) + iVar7) * 0x10 + *(int *)(in_ECX + 0x70c) + 8
                           );
        if (pvVar3 != (void *)0x0) {
          _memset(pvVar3,0,*(int *)(*(int *)(in_ECX + 0x71c) + 4 + iVar11) * (int)local_8c);
        }
        local_8c = *(int **)(in_ECX + 0x6a0);
        pvVar3 = *(void **)((*(int *)(in_ECX + 0x72c) + iVar7) * 0x10 + *(int *)(in_ECX + 0x70c) +
                           0xc);
        if (pvVar3 != (void *)0x0) {
          _memset(pvVar3,0,*(int *)(*(int *)(in_ECX + 0x71c) + 4 + iVar11) * (int)local_8c);
        }
        iVar7 = iVar7 + 1;
        iVar11 = iVar11 + 0xc;
      } while (iVar7 < *(int *)(in_ECX + 0x730));
    }
    *(undefined4 *)(in_ECX + 0x84) = 0;
    *(undefined4 *)(in_ECX + 0x88) = 0;
    (**(code **)(**(int **)(in_ECX + 0x24) + 0x28))
              ((undefined4 *)(in_ECX + 0x84),(undefined4 *)(in_ECX + 0x88));
    (**(code **)(**(int **)(in_ECX + 0x24) + 0x2c))
              (in_ECX + 0x8c,in_ECX + 0x90,in_ECX + 0x94,in_ECX + 0x98);
    *(undefined1 *)(in_ECX + 0x734) = 1;
    *(undefined1 *)(in_ECX + 0x737) = 0;
    iVar7 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x1c))();
    if (iVar7 == 0) {
      iVar7 = 299;
      do {
        if (*(char *)(in_ECX + 0x737) != '\0') break;
        Sleep(10);
        iVar7 = iVar7 + -1;
      } while (0 < iVar7);
      *(undefined1 *)(in_ECX + 0x735) = 1;
      if (*(char *)(in_ECX + 0x737) == '\0') {
        FUN_0045c990("Device didn\'t start correctly");
        iVar7 = *(int *)(in_ECX + 0x48);
        piVar5 = (int *)(iVar7 + -8);
        *(int *)(in_ECX + 0x48) = local_ac;
        local_ac = iVar7;
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        (**(code **)(**(int **)(in_ECX + 0x24) + 0x20))();
      }
    }
    else {
      *(undefined1 *)(in_ECX + 0x734) = 0;
      Sleep(10);
      (**(code **)(**(int **)(in_ECX + 0x24) + 0x20))();
      FUN_0045c990("Can\'t start device");
      iVar7 = *(int *)(in_ECX + 0x48);
      piVar5 = (int *)(iVar7 + -8);
      *(int *)(in_ECX + 0x48) = local_a8;
      local_a8 = iVar7;
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      Sleep(10);
    }
    local_8 = 0xffffffff;
    FID_conflict__free(local_98);
  }
  else {
    *(undefined4 *)(in_ECX + 0x6a0) = *(undefined4 *)(in_ECX + 0x94);
    (**(code **)(**(int **)(in_ECX + 0x24) + 0x50))();
    iVar7 = (**(code **)(**(int **)(in_ECX + 0x24) + 0x4c))
                      (*(undefined4 *)(in_ECX + 0x70c),local_80,*(undefined4 *)(in_ECX + 0x6a0),
                       puVar1);
    if (iVar7 == 0) goto LAB_0042fcb7;
    FUN_0045c990("Can\'t create i/o buffers");
    iVar7 = *(int *)(in_ECX + 0x48);
    piVar5 = (int *)(iVar7 + -8);
    *(int *)(in_ECX + 0x48) = local_a0;
    local_a0 = iVar7;
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  if (**(char **)(in_ECX + 0x48) != '\0') {
    if ((*(int *)(in_ECX + 0x24) != 0) && (*(char *)(in_ECX + 0x736) != '\0')) {
      *(undefined1 *)(in_ECX + 0x736) = 0;
      (**(code **)(**(int **)(in_ECX + 0x24) + 0x50))();
    }
    Sleep(0x14);
    iVar7 = *(int *)(in_ECX + 0x48);
    *(undefined2 *)(in_ECX + 0x734) = 0;
    piVar5 = (int *)(iVar7 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    local_8 = 1;
    FUN_00430310();
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      *piVar5 = *piVar5 + 1;
      UNLOCK();
    }
    LOCK();
    iVar11 = *(int *)(in_ECX + 0x48);
    *(int *)(in_ECX + 0x48) = iVar7;
    UNLOCK();
    _Memory = (int *)(iVar11 + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar7 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(_Memory);
      }
    }
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  iVar7 = *(int *)(in_ECX + 0x48);
  *(undefined1 *)(in_ECX + 0x73a) = 0;
  *local_b0 = iVar7;
  piVar5 = (int *)(iVar7 + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
  }
LAB_004302e5:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

