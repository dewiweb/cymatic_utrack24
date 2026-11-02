// rea decompile_all
// name: FUN_005c8630
// address: 0x5c8630
// body: available
// range: 0x5c8630-0x5c9390 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005c9300) */
/* WARNING: Removing unreachable block (ram,0x005c9311) */
/* WARNING: Removing unreachable block (ram,0x005c931e) */
/* WARNING: Removing unreachable block (ram,0x005c9327) */
/* WARNING: Removing unreachable block (ram,0x005c9340) */
/* WARNING: Removing unreachable block (ram,0x005c9351) */
/* WARNING: Removing unreachable block (ram,0x005c935e) */
/* WARNING: Removing unreachable block (ram,0x005c9367) */
/* WARNING: Removing unreachable block (ram,0x005c8f4a) */
/* WARNING: Removing unreachable block (ram,0x005c8cf6) */
/* WARNING: Removing unreachable block (ram,0x005c9067) */
/* WARNING: Removing unreachable block (ram,0x005c8d1b) */
/* WARNING: Removing unreachable block (ram,0x005c88f3) */
/* WARNING: Removing unreachable block (ram,0x005c8918) */
/* WARNING: Heritage AFTER dead removal. Example location: r0x00c7ed68 : 0x005c893a */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

int * FUN_005c8630(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,
                  undefined8 param_5)

{
  double dVar1;
  char cVar2;
  ULONG_PTR UVar3;
  undefined *puVar4;
  PRTL_CRITICAL_SECTION_DEBUG p_Var5;
  int *piVar6;
  undefined4 uVar7;
  HANDLE pvVar8;
  DWORD dwPriorityClass;
  int *piVar9;
  uintptr_t uVar10;
  BOOL BVar11;
  undefined1 *in_ECX;
  int iVar12;
  int iVar13;
  int *extraout_ECX;
  int *extraout_ECX_00;
  undefined1 *puVar14;
  int iVar15;
  uint uVar16;
  code *pcVar17;
  DWORD DVar18;
  LPCRITICAL_SECTION lpCriticalSection;
  uint local_40;
  undefined1 *local_38;
  int *local_34;
  uint local_30;
  PRTL_CRITICAL_SECTION_DEBUG local_2c;
  int *local_28;
  LPCRITICAL_SECTION local_24;
  undefined1 *puStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  puStack_20 = &stack0xfffffffc;
  puStack_18 = &LAB_0071ac7a;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  local_14 = 0;
  local_38 = in_ECX;
  FUN_0042d390();
  *(undefined8 *)(in_ECX + 0x98) = param_5;
  uVar16 = 0x3c0;
  if (0 < (int)param_4) {
    uVar16 = param_4;
  }
  *(uint *)(in_ECX + 0x90) = uVar16 & 0xfffffff8;
  local_14 = 1;
  FUN_0042d8c0();
  piVar9 = (int *)(in_ECX + 0xa0);
  local_28 = piVar9;
  FUN_006374e0();
  puVar14 = (undefined1 *)*piVar9;
  if (puVar14 == (undefined1 *)0x0) {
    puVar14 = in_ECX + 0xa4;
  }
  for (iVar12 = *(int *)(in_ECX + 0xb8) >> 5; -1 < iVar12; iVar12 = iVar12 + -1) {
    uVar16 = *(uint *)(puVar14 + iVar12 * 4);
    if (uVar16 != 0) {
      iVar12 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      break;
    }
  }
  FUN_0062bb60(*(undefined4 *)(in_ECX + 0x54));
  p_Var5 = (PRTL_CRITICAL_SECTION_DEBUG)FUN_00637390();
  local_30 = *(uint *)(in_ECX + 0x90);
  local_24 = (LPCRITICAL_SECTION)(in_ECX + 0xe0);
  local_2c = (PRTL_CRITICAL_SECTION_DEBUG)0x1;
  if (1 < (int)p_Var5) {
    local_2c = p_Var5;
  }
  local_14._0_1_ = 2;
  if ((local_30 != *(int *)(in_ECX + 0xe4)) || (local_2c != local_24->DebugInfo)) {
    local_34 = (int *)(local_30 + 3 & 0xfffffffc);
    uVar16 = (int)local_2c * 4 + 0x13U & 0xfffffff0;
    *(uint *)(in_ECX + 0xe8) = uVar16 + ((int)local_34 * (int)local_2c + 8) * 4;
    FUN_00403500();
    iVar13 = 0;
    iVar12 = (int)*(HANDLE *)(in_ECX + 0xf0) + uVar16;
    local_24->OwningThread = *(HANDLE *)(in_ECX + 0xf0);
    if (0 < (int)local_2c) {
      do {
        *(int *)((int)local_24->OwningThread + iVar13 * 4) = iVar12;
        iVar13 = iVar13 + 1;
        iVar12 = iVar12 + (int)local_34 * 4;
      } while (iVar13 < (int)local_2c);
    }
    *(undefined4 *)((int)local_24->OwningThread + (int)local_2c * 4) = 0;
    local_24->DebugInfo = local_2c;
    local_24->LockCount = local_30;
    in_ECX = local_38;
    piVar9 = local_28;
  }
  local_14 = CONCAT31(local_14._1_3_,1);
  FUN_004032e0();
  local_30 = 0;
  local_28 = (int *)0x0;
  do {
    piVar6 = (int *)*piVar9;
    if (piVar6 == (int *)0x0) {
      piVar6 = piVar9 + 1;
    }
    iVar12 = piVar9[6] >> 5;
    if (-1 < iVar12) {
LAB_005c87f0:
      uVar16 = piVar6[iVar12];
      if (uVar16 == 0) break;
      iVar13 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      iVar13 = iVar12 * 0x20 + iVar13;
      goto LAB_005c87ff;
    }
LAB_005c87fc:
    iVar13 = -1;
LAB_005c87ff:
    if (iVar13 < (int)local_30) goto LAB_005c8a11;
    if ((piVar9[6] < (int)local_30) || ((int)local_30 < 0)) {
LAB_005c8874:
      local_2c = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    }
    else {
      local_2c = (PRTL_CRITICAL_SECTION_DEBUG)*piVar9;
      if (local_2c == (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        local_2c = (PRTL_CRITICAL_SECTION_DEBUG)(piVar9 + 1);
      }
      if ((*(uint *)((int)local_2c + ((int)local_30 >> 5) * 4) & 1 << ((byte)local_30 & 0x1f)) == 0)
      goto LAB_005c8874;
      in_ECX[0x174] = 0;
      local_2c = *(PRTL_CRITICAL_SECTION_DEBUG *)((int)local_28 + *(int *)(in_ECX + 0xec));
      local_28 = (int *)((int)local_28 + 4);
    }
    iVar12 = local_30 + 1;
    if ((piVar9[6] < iVar12) || (iVar12 < 0)) {
LAB_005c88c9:
      local_34 = (undefined4 *)0x0;
    }
    else {
      local_34 = (int *)*piVar9;
      if (local_34 == (int *)0x0) {
        local_34 = piVar9 + 1;
      }
      if ((local_34[iVar12 >> 5] & 1 << ((byte)iVar12 & 0x1f)) == 0) goto LAB_005c88c9;
      in_ECX[0x174] = 0;
      local_34 = *(int **)((int)local_28 + *(int *)(in_ECX + 0xec));
      local_28 = (int *)((int)local_28 + 4);
    }
    if ((local_2c != (PRTL_CRITICAL_SECTION_DEBUG)0x0) || (local_34 != (undefined4 *)0x0)) {
      local_24 = operator_new(0x44);
      dVar1 = *(double *)(in_ECX + 0x98);
      UVar3 = *(ULONG_PTR *)(in_ECX + 0x90);
      local_24->OwningThread = (HANDLE)0x10;
      puVar4 = PTR_DAT_00c7ed68;
      local_24->SpinCount = (ULONG_PTR)PTR_DAT_00c7ed68;
      piVar6 = (int *)(puVar4 + -8);
      piVar9 = (int *)(in_ECX + 0xa0);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      local_24[1].LockSemaphore = (HANDLE)(int)dVar1;
      local_24[2].DebugInfo = local_2c;
      local_24[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      local_24[1].LockCount = 0;
      local_24[1].RecursionCount = 0;
      local_24[1].OwningThread = (HANDLE)0x0;
      local_24[1].SpinCount = UVar3;
      local_24[2].LockCount = (LONG)local_34;
      local_24[2].RecursionCount = 0;
      local_24[2].OwningThread = (HANDLE)0x0;
      local_24[2].LockSemaphore = (HANDLE)0x0;
      iVar12 = *(int *)(in_ECX + 0x7c) + 1;
      if ((int)*(uint *)(in_ECX + 0x78) < iVar12) {
        iVar13 = iVar12;
        if (iVar12 < 0) {
          iVar13 = *(int *)(in_ECX + 0x7c) + 2;
        }
        uVar16 = (iVar13 >> 1) + 8 + iVar12 & 0xfffffff8;
        if (*(uint *)(in_ECX + 0x78) != uVar16) {
          if ((int)uVar16 < 1) {
            FID_conflict__free(*(void **)(in_ECX + 0x74));
            *(undefined4 *)(in_ECX + 0x74) = 0;
          }
          else if (*(int *)(in_ECX + 0x74) == 0) {
            uVar7 = FUN_004c554b();
            *(undefined4 *)(in_ECX + 0x74) = uVar7;
          }
          else {
            uVar7 = FUN_004c553b();
            *(undefined4 *)(in_ECX + 0x74) = uVar7;
          }
          *(uint *)(in_ECX + 0x78) = uVar16;
        }
      }
      iVar12 = *(int *)(in_ECX + 0x7c);
      *(int *)(in_ECX + 0x7c) = iVar12 + 1;
      *(LPCRITICAL_SECTION *)(*(int *)(in_ECX + 0x74) + iVar12 * 4) = local_24;
    }
    local_30 = local_30 + 2;
  } while( true );
  iVar12 = iVar12 + -1;
  if (iVar12 < 0) goto LAB_005c87fc;
  goto LAB_005c87f0;
LAB_005c8a11:
  piVar9 = (int *)(in_ECX + 0xc0);
  FUN_006374e0();
  puVar14 = (undefined1 *)*piVar9;
  if (puVar14 == (undefined1 *)0x0) {
    puVar14 = in_ECX + 0xc4;
  }
  for (iVar12 = *(int *)(in_ECX + 0xd8) >> 5; -1 < iVar12; iVar12 = iVar12 + -1) {
    uVar16 = *(uint *)(puVar14 + iVar12 * 4);
    if (uVar16 != 0) {
      iVar12 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      break;
    }
  }
  FUN_0062bb60(*(undefined4 *)(in_ECX + 0x60));
  iVar12 = FUN_00637390();
  local_28 = *(int **)(in_ECX + 0x90);
  local_2c = (PRTL_CRITICAL_SECTION_DEBUG)1;
  if (1 < iVar12) {
    local_2c = (PRTL_CRITICAL_SECTION_DEBUG)iVar12;
  }
  local_14._0_1_ = 3;
  if ((local_28 != (int *)*(int *)(in_ECX + 0x17c)) ||
     (local_2c != (PRTL_CRITICAL_SECTION_DEBUG)*(int *)(in_ECX + 0x178))) {
    local_30 = (int)local_28 + 3U & 0xfffffffc;
    local_34 = (int *)((int)local_2c * 4 + 0x13U & 0xfffffff0);
    cVar2 = in_ECX[0x20c];
    local_24 = (LPCRITICAL_SECTION)(local_34 + local_30 * (int)local_2c + 8);
    *(LPCRITICAL_SECTION *)(in_ECX + 0x180) = local_24;
    FID_conflict__free(*(void **)(in_ECX + 0x188));
    if (cVar2 == '\0') {
      iVar12 = FUN_004c554b();
    }
    else {
      iVar12 = FUN_004c5556();
    }
    *(int *)(in_ECX + 0x188) = iVar12;
    if (iVar12 == 0) {
      iVar12 = __CxxThrowException_8();
    }
    iVar13 = 0;
    iVar15 = (int)local_34 + iVar12;
    *(int *)(in_ECX + 0x184) = iVar12;
    if (0 < (int)local_2c) {
      do {
        *(int *)(*(int *)(in_ECX + 0x184) + iVar13 * 4) = iVar15;
        iVar13 = iVar13 + 1;
        iVar15 = iVar15 + local_30 * 4;
        in_ECX = local_38;
      } while (iVar13 < (int)local_2c);
      piVar9 = (int *)(local_38 + 0xc0);
    }
    *(undefined4 *)(*(int *)(in_ECX + 0x184) + (int)local_2c * 4) = 0;
    *(int **)(in_ECX + 0x17c) = local_28;
    *(PRTL_CRITICAL_SECTION_DEBUG *)(in_ECX + 0x178) = local_2c;
  }
  local_14 = CONCAT31(local_14._1_3_,1);
  if (in_ECX[0x20c] == '\0') {
    if (0 < *(int *)(in_ECX + 0x178)) {
      iVar12 = 0;
      do {
        _memset(*(void **)(*(int *)(in_ECX + 0x184) + iVar12 * 4),0,*(int *)(in_ECX + 0x17c) * 4);
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(in_ECX + 0x178));
      piVar9 = (int *)(in_ECX + 0xc0);
    }
    in_ECX[0x20c] = 1;
  }
  local_28 = (int *)0x0;
  local_30 = 0;
  do {
    piVar6 = (int *)*piVar9;
    if (piVar6 == (int *)0x0) {
      piVar6 = piVar9 + 1;
    }
    iVar12 = piVar9[6] >> 5;
    if (-1 < iVar12) {
LAB_005c8c03:
      uVar16 = piVar6[iVar12];
      if (uVar16 == 0) break;
      iVar13 = 0x1f;
      if (uVar16 != 0) {
        for (; uVar16 >> iVar13 == 0; iVar13 = iVar13 + -1) {
        }
      }
      iVar13 = iVar12 * 0x20 + iVar13;
      goto LAB_005c8c12;
    }
LAB_005c8c0f:
    iVar13 = -1;
LAB_005c8c12:
    if (iVar13 < (int)local_28) goto LAB_005c8e2d;
    if ((piVar9[6] < (int)local_28) || ((int)local_28 < 0)) {
LAB_005c8c77:
      local_2c = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    }
    else {
      local_24 = (LPCRITICAL_SECTION)*piVar9;
      if (local_24 == (LPCRITICAL_SECTION)0x0) {
        local_24 = (LPCRITICAL_SECTION)(piVar9 + 1);
      }
      if ((*(uint *)((int)local_24 + ((int)local_28 >> 5) * 4) & 1 << ((byte)local_28 & 0x1f)) == 0)
      goto LAB_005c8c77;
      in_ECX[0x20c] = 0;
      local_2c = *(PRTL_CRITICAL_SECTION_DEBUG *)(local_30 + *(int *)(in_ECX + 0x184));
      local_30 = local_30 + 4;
    }
    iVar12 = (int)local_28 + 1;
    if ((piVar9[6] < iVar12) || (iVar12 < 0)) {
LAB_005c8ccc:
      local_24 = (LPCRITICAL_SECTION)0x0;
    }
    else {
      local_24 = (LPCRITICAL_SECTION)*piVar9;
      if (local_24 == (LPCRITICAL_SECTION)0x0) {
        local_24 = (LPCRITICAL_SECTION)(piVar9 + 1);
      }
      if ((*(uint *)((int)local_24 + (iVar12 >> 5) * 4) & 1 << ((byte)iVar12 & 0x1f)) == 0)
      goto LAB_005c8ccc;
      in_ECX[0x20c] = 0;
      local_24 = *(LPCRITICAL_SECTION *)(local_30 + *(int *)(in_ECX + 0x184));
      local_30 = local_30 + 4;
    }
    if ((local_2c != (PRTL_CRITICAL_SECTION_DEBUG)0x0) || (local_24 != (LPCRITICAL_SECTION)0x0)) {
      local_34 = operator_new(0x44);
      local_40 = (uint)*(double *)(in_ECX + 0x98);
      uVar7 = *(undefined4 *)(in_ECX + 0x90);
      *local_34 = 0x10;
      puVar4 = PTR_DAT_00c7ed68;
      local_34[2] = (int)PTR_DAT_00c7ed68;
      piVar6 = (int *)(puVar4 + -8);
      piVar9 = (int *)(in_ECX + 0xc0);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        *piVar6 = *piVar6 + 1;
        UNLOCK();
      }
      local_34[7] = local_40;
      local_34[9] = (int)local_2c;
      local_34[3] = 0;
      local_34[4] = 0;
      local_34[5] = 0;
      local_34[6] = 0;
      local_34[8] = uVar7;
      local_34[10] = (int)local_24;
      local_34[0xb] = 0;
      local_34[0xc] = 0;
      iVar12 = *(int *)(in_ECX + 0x88) + 1;
      if ((int)*(uint *)(in_ECX + 0x84) < iVar12) {
        iVar13 = iVar12;
        if (iVar12 < 0) {
          iVar13 = *(int *)(in_ECX + 0x88) + 2;
        }
        local_40 = (iVar13 >> 1) + 8 + iVar12 & 0xfffffff8;
        if (*(uint *)(in_ECX + 0x84) != local_40) {
          if ((int)local_40 < 1) {
            FID_conflict__free(*(void **)(in_ECX + 0x80));
            *(undefined4 *)(in_ECX + 0x80) = 0;
          }
          else if (*(int *)(in_ECX + 0x80) == 0) {
            uVar7 = FUN_004c554b();
            *(undefined4 *)(in_ECX + 0x80) = uVar7;
          }
          else {
            uVar7 = FUN_004c553b();
            *(undefined4 *)(in_ECX + 0x80) = uVar7;
          }
          *(uint *)(in_ECX + 0x84) = local_40;
        }
      }
      iVar12 = *(int *)(in_ECX + 0x88);
      *(int *)(in_ECX + 0x88) = iVar12 + 1;
      *(int **)(*(int *)(in_ECX + 0x80) + iVar12 * 4) = local_34;
    }
    local_28 = (int *)((int)local_28 + 2);
  } while( true );
  iVar12 = iVar12 + -1;
  if (iVar12 < 0) goto LAB_005c8c0f;
  goto LAB_005c8c03;
LAB_005c8e2d:
  *param_1 = (int)&DAT_00bfe12c;
  pvVar8 = GetCurrentThread();
  iVar12 = GetThreadPriority(pvVar8);
  pvVar8 = GetCurrentProcess();
  dwPriorityClass = GetPriorityClass(pvVar8);
  iVar13 = 0xf;
  pvVar8 = GetCurrentThread();
  SetThreadPriority(pvVar8,iVar13);
  DVar18 = 0x100;
  pvVar8 = GetCurrentProcess();
  SetPriorityClass(pvVar8,DVar18);
  iVar13 = 0;
  if (0 < *(int *)(in_ECX + 0x88)) {
    do {
      piVar9 = (int *)FUN_0042bc10();
      in_ECX = local_38;
      local_28 = (int *)*param_1;
      *param_1 = *piVar9;
      *piVar9 = (int)local_28;
      piVar9 = (int *)(local_40 - 8);
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar15 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar15 == 0) {
          FID_conflict__free(piVar9);
          piVar9 = extraout_ECX;
        }
      }
      if (*(char *)*param_1 != '\0') {
        local_24 = (LPCRITICAL_SECTION)&stack0xfffffeac;
        local_34 = (int *)&stack0xfffffeb0;
        FUN_00637690(&PTR_DAT_00c7ed68);
        FUN_006377c0(piVar9);
        FUN_00637730();
        piVar9 = (int *)FUN_006377c0();
        iVar13 = *param_1;
        *param_1 = *piVar9;
        *piVar9 = iVar13;
        piVar9 = (int *)((int)local_2c + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar13 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar13 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        break;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(in_ECX + 0x88));
  }
  if ((*(char *)*param_1 == '\0') && (iVar13 = 0, 0 < *(int *)(in_ECX + 0x7c))) {
    do {
      piVar9 = (int *)FUN_0042c300();
      in_ECX = local_38;
      iVar15 = *param_1;
      *param_1 = *piVar9;
      *piVar9 = iVar15;
      piVar9 = local_34 + -2;
      if (piVar9 != &DAT_00bfe124) {
        LOCK();
        iVar15 = *piVar9;
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (iVar15 == 0) {
          FID_conflict__free(piVar9);
          piVar9 = extraout_ECX_00;
        }
      }
      if (*(char *)*param_1 != '\0') {
        local_38 = &stack0xfffffeb0;
        local_24 = (LPCRITICAL_SECTION)&stack0xfffffeac;
        FUN_00637690(&PTR_DAT_00c7ed68);
        FUN_006377c0(piVar9);
        FUN_00637730();
        piVar9 = (int *)FUN_006377c0();
        iVar13 = *param_1;
        *param_1 = *piVar9;
        *piVar9 = iVar13;
        piVar9 = (int *)(local_30 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar13 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar13 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        break;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(in_ECX + 0x7c));
  }
  if (*(char *)*param_1 != '\0') goto LAB_005c92c2;
  iVar13 = 0;
  if (0 < *(int *)(in_ECX + 0x88)) {
    do {
      piVar9 = *(int **)(*(int *)(*(int *)(in_ECX + 0x80) + iVar13 * 4) + 0x30);
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0x10))(piVar9);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(in_ECX + 0x88));
  }
  iVar13 = 0;
  if (0 < *(int *)(in_ECX + 0x7c)) {
    do {
      piVar9 = *(int **)(*(int *)(*(int *)(in_ECX + 0x74) + iVar13 * 4) + 0x40);
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 0x10))(piVar9);
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 < *(int *)(in_ECX + 0x7c));
  }
  local_24 = (LPCRITICAL_SECTION)(in_ECX + 0x1c);
  EnterCriticalSection(local_24);
  if (*(int *)(in_ECX + 0x14) == 0) {
    *(undefined4 *)(in_ECX + 0x3c) = 9;
    EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1c));
    in_ECX[0x48] = 0;
    if (*(int *)(in_ECX + 0x14) == 0) {
      uVar10 = __beginthreadex((void *)0x0,*(uint *)(in_ECX + 0x40),FUN_00611a60,in_ECX + 0xc,0,
                               (uint *)&local_38);
      iVar13 = *(int *)(in_ECX + 0x3c);
      *(uintptr_t *)(in_ECX + 0x14) = uVar10;
      pvVar8 = *(HANDLE *)(in_ECX + 0x14);
      *(undefined1 **)(in_ECX + 0x18) = local_38;
      if (iVar13 < 1) {
        local_28 = (int *)0xfffffff1;
      }
      else if (iVar13 < 2) {
        local_28 = (int *)0xfffffffe;
      }
      else if (iVar13 < 5) {
        local_28 = (int *)0xffffffff;
      }
      else if (iVar13 < 7) {
        local_28 = (int *)0x0;
      }
      else if (iVar13 < 9) {
        local_28 = (int *)0x1;
      }
      else {
        local_28 = (int *)0xf;
        if (iVar13 < 10) {
          local_28 = (int *)2;
        }
      }
      if (pvVar8 == (HANDLE)0x0) {
        pvVar8 = GetCurrentThread();
      }
      SetThreadPriority(pvVar8,(int)local_28);
      SetEvent(*(HANDLE *)(in_ECX + 0x34));
    }
LAB_005c92a0:
    lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x1c);
LAB_005c92a4:
    pcVar17 = LeaveCriticalSection_exref;
    LeaveCriticalSection(lpCriticalSection);
  }
  else {
    DVar18 = GetCurrentThreadId();
    if (DVar18 != *(DWORD *)(in_ECX + 0x18)) {
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x1c));
      if (*(int *)(in_ECX + 0x14) == 0) {
LAB_005c9299:
        *(undefined4 *)(in_ECX + 0x3c) = 9;
        goto LAB_005c92a0;
      }
      pvVar8 = *(HANDLE *)(in_ECX + 0x14);
      if (pvVar8 == (HANDLE)0x0) {
        pvVar8 = GetCurrentThread();
      }
      BVar11 = SetThreadPriority(pvVar8,2);
      lpCriticalSection = local_24;
      if (BVar11 != 0) goto LAB_005c9299;
      goto LAB_005c92a4;
    }
    pvVar8 = GetCurrentThread();
    SetThreadPriority(pvVar8,2);
    pcVar17 = LeaveCriticalSection_exref;
  }
  (*pcVar17)();
  Sleep(10);
  SetEvent(*(HANDLE *)(in_ECX + 0x38));
LAB_005c92c2:
  pvVar8 = GetCurrentThread();
  SetThreadPriority(pvVar8,iVar12);
  pvVar8 = GetCurrentProcess();
  SetPriorityClass(pvVar8,dwPriorityClass);
  FID_conflict__free((void *)0x0);
  FID_conflict__free((void *)0x0);
  FID_conflict__free((void *)0x0);
  FID_conflict__free((void *)0x0);
  ExceptionList = local_1c;
  return param_1;
}

