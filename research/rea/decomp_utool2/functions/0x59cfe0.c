// rea decompile_all
// name: FUN_0059cfe0
// address: 0x59cfe0
// body: available
// range: 0x59cfe0-0x59ec98 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0059d11d) */

void FUN_0059cfe0(void)

{
  ulonglong *puVar1;
  char *pcVar2;
  LONG *pLVar3;
  HANDLE pvVar4;
  char cVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  DWORD DVar12;
  undefined4 uVar13;
  int iVar14;
  int in_ECX;
  int *piVar15;
  uint uVar16;
  LPCRITICAL_SECTION p_Var17;
  HANDLE *ppvVar18;
  LPCRITICAL_SECTION p_Var19;
  uint uVar20;
  undefined4 *puVar21;
  char *pcVar22;
  LPCWSTR pWVar23;
  undefined4 *puVar24;
  bool bVar25;
  double dVar26;
  ulonglong uVar27;
  undefined8 uVar28;
  LARGE_INTEGER local_178;
  LARGE_INTEGER local_170;
  int local_168;
  int local_164;
  int local_160;
  undefined4 *local_15c;
  void *local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  undefined1 local_144;
  undefined3 uStack_143;
  undefined4 *local_140;
  int local_13c;
  int local_138;
  char *local_134;
  int local_130;
  int local_12c;
  int *local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  undefined4 *local_114;
  DWORD local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  uint local_e4;
  uint local_e0;
  undefined4 *local_dc;
  int local_d8;
  uint local_d4;
  LPCRITICAL_SECTION local_d0;
  int local_cc;
  uint local_c8;
  undefined8 local_c4;
  int local_bc;
  undefined8 local_b8;
  uint local_b0;
  uint local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  LPCRITICAL_SECTION local_98;
  LPCRITICAL_SECTION local_94;
  uint local_90;
  undefined1 *local_8c;
  undefined1 *local_88;
  char *local_84;
  uint local_80;
  uint local_7c;
  void *local_78;
  int local_74;
  int local_70;
  uint local_6c;
  LPCWSTR local_68;
  uint local_64;
  undefined1 *local_60;
  LPCRITICAL_SECTION local_5c;
  char *local_58;
  LPCRITICAL_SECTION local_54;
  undefined4 *local_50;
  LPCRITICAL_SECTION local_4c;
  char local_45;
  undefined8 local_44;
  int local_3c;
  int local_38;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715e85;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = (ulonglong)(uint)local_44;
  local_c8 = 0;
  local_3c = in_ECX;
  FUN_0045c990();
  local_8 = 0;
  FUN_005899e0();
  piVar15 = (int *)(local_bc + -8);
  if (piVar15 != &DAT_00bfe124) {
    LOCK();
    iVar14 = *piVar15;
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (iVar14 == 0) {
      FID_conflict__free(piVar15);
    }
  }
  local_b8 = 0;
  if (*(int *)(in_ECX + 0x88) == 1) {
    uVar27 = 0;
  }
  else {
    uVar9 = *(int *)(in_ECX + 0x88) - 2;
    uVar20 = 1 << (uVar9 & 0x1f);
    uVar16 = 0;
    if (0x1f < uVar9) {
      uVar16 = uVar20;
    }
    uVar20 = uVar20 ^ uVar16;
    if (0x3f < uVar9) {
      uVar16 = uVar20;
    }
    uVar27 = __aulldiv(uVar20 * 0x40000000 - 0x1000,
                       ((uVar16 << 0x1e | uVar20 >> 2) - 1) + (uint)(0xfff < uVar20 * 0x40000000));
  }
  local_90 = (uint)(uVar27 >> 0x20);
  local_80 = (uint)uVar27;
  dVar26 = 0.0;
  local_b8 = 0;
  puVar1 = (ulonglong *)(*(int *)(in_ECX + 0x98) + 0x30);
  local_e4 = *(uint *)puVar1;
  local_e0 = *(uint *)(*(int *)(in_ECX + 0x98) + 0x34);
  local_d4 = 0;
  if ((uVar27 == 0) || (*puVar1 < uVar27)) {
    local_a8 = 0;
  }
  else {
    local_a8 = 1;
  }
  local_8c = &DAT_00bfe12c;
  puVar21 = (undefined4 *)0x0;
  local_d8 = 0;
  local_50 = (undefined4 *)0x0;
  puVar24 = (undefined4 *)0x0;
  local_dc = (undefined4 *)0x0;
  local_44._0_4_ = 0;
  local_44._4_4_ = (LPCRITICAL_SECTION)0x0;
  local_c4 = 0;
  local_78 = (void *)0x0;
  local_74 = 0;
  local_70 = 0;
  local_8._0_1_ = 4;
  local_8._1_3_ = 0;
  FUN_004e5c80();
  local_8 = CONCAT31(local_8._1_3_,5);
  local_110 = timeGetTime();
  if ((DAT_00c8a644 <= local_110) || (local_110 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = local_110;
  }
  if ((*(int *)(*(int *)(local_3c + 0x98) + 0x34) != 0) ||
     (puVar11 = puVar24, *(int *)(*(int *)(local_3c + 0x98) + 0x30) != 0)) {
    local_128 = (int *)(local_3c + 0x94);
    local_ac = local_b8._4_4_;
    local_b0 = (uint)local_b8;
    local_98 = local_44._4_4_;
    local_9c = (uint)local_44;
    local_7c = local_c4._4_4_;
    local_6c = (uint)local_c4;
    do {
      FUN_0045c990();
      local_94 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
      EnterCriticalSection(local_94);
      local_8 = CONCAT31(local_8._1_3_,7);
      if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
        iVar10 = FUN_005891b0();
        QueryPerformanceCounter(&local_178);
        bVar25 = CARRY4(local_178.s.LowPart,DAT_00c8a908);
        iVar14 = local_178.s.HighPart + DAT_00c8a90c;
        *(DWORD *)(iVar10 + 0x40) = local_178.s.LowPart + DAT_00c8a908;
        *(uint *)(iVar10 + 0x44) = iVar14 + (uint)bVar25;
      }
      LeaveCriticalSection(local_94);
      piVar15 = (int *)(local_12c + -8);
      if (piVar15 != &DAT_00bfe124) {
        LOCK();
        iVar14 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar14 == 0) {
          FID_conflict__free(piVar15);
        }
      }
      p_Var19 = (LPCRITICAL_SECTION)&DAT_00bfe12c;
      local_94 = (LPCRITICAL_SECTION)&DAT_00bfe12c;
      local_60 = &DAT_00bfe12c;
      local_88 = &DAT_00bfe12c;
      local_8._0_1_ = 10;
      local_a4 = *(uint *)(*(int *)(local_3c + 0x98) + 0x30);
      local_a0 = *(uint *)(*(int *)(local_3c + 0x98) + 0x34);
      piVar15 = (int *)(*local_128 + -8);
      if (piVar15 != &DAT_00bfe124) {
        LOCK();
        *piVar15 = *piVar15 + 1;
        UNLOCK();
      }
      puVar6 = (undefined1 *)*local_128;
      LOCK();
      UNLOCK();
      piVar15 = (int *)(local_8c + -8);
      local_8c = puVar6;
      if (piVar15 != &DAT_00bfe124) {
        LOCK();
        iVar14 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar14 == 0) {
          FID_conflict__free(piVar15);
        }
      }
      if ((*(char *)(local_3c + 0x8c) != '\0') &&
         (iVar14 = *(int *)(local_3c + 0x98), *(int *)(iVar14 + 0x70) != 0)) {
        if ((int)local_d4 < (int)*(uint *)(iVar14 + 0x70)) {
          if (local_d4 < *(uint *)(iVar14 + 0x70)) {
            local_a0 = *(uint *)(*(int *)(iVar14 + 0x68) + 4 + local_d4 * 8);
            local_a4 = *(uint *)(*(int *)(iVar14 + 0x68) + local_d4 * 8);
          }
          else {
            dVar26 = 0.0;
            local_44._0_4_ = 0;
            uVar20 = (uint)local_44;
            local_44._4_4_ = (LPCRITICAL_SECTION)0x0;
            p_Var19 = local_44._4_4_;
            local_44._4_4_ = (LPCRITICAL_SECTION)0x0;
            local_44._0_4_ = 0;
            local_a0 = (uint)local_44._4_4_;
            local_a4 = (uint)local_44;
            local_44._0_4_ = uVar20;
            local_44._4_4_ = p_Var19;
          }
        }
        else {
          local_a4 = *(uint *)(iVar14 + 0x30);
          local_a0 = *(uint *)(iVar14 + 0x34);
        }
        local_d4 = local_d4 + 1;
        if ((int)local_d4 < 0) {
          iVar14 = FUN_006104a0();
          *(undefined1 *)(iVar14 + -1) = 0x2d;
        }
        else {
          FUN_006104a0();
        }
        FUN_004557e0();
        local_8._0_1_ = 0xb;
        FUN_00637690();
        local_8 = CONCAT31(local_8._1_3_,0xc);
        puVar11 = (undefined4 *)FUN_00635a10();
        puVar6 = (undefined1 *)*puVar11;
        *puVar11 = local_8c;
        piVar15 = (int *)(local_168 + -8);
        local_8c = puVar6;
        if (piVar15 != &DAT_00bfe124) {
          LOCK();
          iVar14 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar14 == 0) {
            FID_conflict__free(piVar15);
          }
        }
        piVar15 = (int *)(local_150 + -8);
        if (piVar15 != &DAT_00bfe124) {
          LOCK();
          iVar14 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar14 == 0) {
            FID_conflict__free(piVar15);
          }
        }
        local_8 = CONCAT31(local_8._1_3_,10);
        piVar15 = (int *)(local_124 + -8);
        if (piVar15 != &DAT_00bfe124) {
          LOCK();
          iVar14 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar14 == 0) {
            FID_conflict__free(piVar15);
          }
        }
        if ((int)local_d4 < 0) {
          iVar14 = FUN_006104a0();
          *(undefined1 *)(iVar14 + -1) = 0x2d;
        }
        else {
          FUN_006104a0();
        }
        FUN_004557e0();
        local_8 = CONCAT31(local_8._1_3_,0xd);
        puVar11 = (undefined4 *)FUN_00637690();
        p_Var19 = (LPCRITICAL_SECTION)*puVar11;
        *puVar11 = &DAT_00bfe12c;
        piVar15 = (int *)(local_154 + -8);
        local_94 = p_Var19;
        if (piVar15 != &DAT_00bfe124) {
          LOCK();
          iVar14 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar14 == 0) {
            FID_conflict__free(piVar15);
          }
        }
        local_8._0_1_ = 10;
        piVar15 = (int *)(local_120 + -8);
        if (piVar15 != &DAT_00bfe124) {
          LOCK();
          iVar14 = *piVar15;
          *piVar15 = *piVar15 + -1;
          UNLOCK();
          if (iVar14 == 0) {
            FID_conflict__free(piVar15);
          }
        }
      }
      FUN_0045c990();
      local_d0 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
      EnterCriticalSection(local_d0);
      local_8._0_1_ = 0xf;
      if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
        FUN_005891b0();
        FUN_0062f940();
      }
      LeaveCriticalSection(local_d0);
      local_8._0_1_ = 10;
      piVar15 = (int *)(local_118 + -8);
      if (piVar15 != &DAT_00bfe124) {
        LOCK();
        iVar14 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar14 == 0) {
          FID_conflict__free(piVar15);
        }
      }
      local_68 = (LPCWSTR)0x0;
      if ((local_ac <= local_a0) && ((local_ac < local_a0 || (local_b0 < local_a4)))) {
        local_d0 = (LPCRITICAL_SECTION)(local_3c + 100);
        do {
          DVar12 = timeGetTime();
          if ((DAT_00c8a644 <= DVar12) || (DVar12 < DAT_00c8a644 - 1000)) {
            DAT_00c8a644 = DVar12;
          }
          if ((1000 < DVar12 - local_110) &&
             ((local_110 = timeGetTime(), DAT_00c8a644 <= local_110 ||
              (local_110 < DAT_00c8a644 - 1000)))) {
            DAT_00c8a644 = local_110;
          }
          FUN_0045c990();
          local_5c = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
          EnterCriticalSection(local_5c);
          local_8._0_1_ = 0x11;
          if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
            local_54 = (LPCRITICAL_SECTION)FUN_005891b0();
            QueryPerformanceCounter(&local_170);
            bVar25 = CARRY4(DAT_00c8a908,local_170.s.LowPart);
            iVar14 = DAT_00c8a90c + local_170.s.HighPart;
            local_54[2].LockSemaphore = (HANDLE)(DAT_00c8a908 + local_170.s.LowPart);
            local_54[2].SpinCount = iVar14 + (uint)bVar25;
          }
          LeaveCriticalSection(local_5c);
          local_8 = CONCAT31(local_8._1_3_,10);
          piVar15 = (int *)(local_10c + -8);
          p_Var17 = local_d0;
          if (piVar15 != &DAT_00bfe124) {
            LOCK();
            iVar14 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar14 == 0) {
              FID_conflict__free(piVar15);
              p_Var17 = local_d0;
            }
          }
          while (bVar25 = false, *(char *)&p_Var17->LockSemaphore == '\0') {
            local_64 = 0;
            local_54 = (LPCRITICAL_SECTION)0x0;
            if ((int)p_Var17->OwningThread < 1) {
LAB_0059d77e:
              bVar25 = *(char *)&p_Var17->LockSemaphore == '\0';
              break;
            }
            bVar25 = p_Var17->OwningThread != (HANDLE)0x0;
            do {
              if (bVar25) {
                local_5c = *(LPCRITICAL_SECTION *)(p_Var17->LockCount + (int)local_54 * 4);
              }
              else {
                local_5c = (LPCRITICAL_SECTION)0x0;
              }
              if ((char)local_5c[2].RecursionCount != '\0') {
                FUN_0062ef90(local_54);
              }
              local_64 = local_64 + (int)local_5c->OwningThread;
              local_54 = (LPCRITICAL_SECTION)((int)&local_54->DebugInfo + 1);
              bVar25 = local_54 < p_Var17->OwningThread;
            } while ((int)local_54 < (int)p_Var17->OwningThread);
            if ((int)local_64 < 0xc9) goto LAB_0059d77e;
            if (DAT_00c8a8f0 == (HANDLE)0x0) {
              Sleep(5);
            }
            else {
              WaitForSingleObject(DAT_00c8a8f0,5);
            }
          }
          puVar21 = local_50;
          puVar11 = puVar24;
          if (!bVar25) {
            FUN_0045c990();
            local_4c = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
            EnterCriticalSection(local_4c);
            local_8._0_1_ = 0x13;
            if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
              FUN_005891b0();
              FUN_0062f940();
            }
            LeaveCriticalSection(local_4c);
            local_8._0_1_ = 10;
            piVar15 = (int *)(local_38 + -8);
            if (piVar15 != &DAT_00bfe124) {
              LOCK();
              iVar14 = *piVar15;
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (iVar14 == 0) {
                FID_conflict__free(piVar15);
              }
            }
            FUN_0045c990();
            local_4c = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
            EnterCriticalSection(local_4c);
            local_8 = CONCAT31(local_8._1_3_,0x15);
LAB_0059e74a:
            if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
              FUN_005891b0();
              FUN_0062f940();
            }
            LeaveCriticalSection(local_4c);
            piVar15 = (int *)(local_38 + -8);
            if (piVar15 != &DAT_00bfe124) {
              LOCK();
              iVar14 = *piVar15;
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (iVar14 == 0) {
                FID_conflict__free(piVar15);
              }
            }
LAB_0059e92a:
            piVar15 = (int *)(local_88 + -8);
            if (piVar15 != &DAT_00bfe124) {
              LOCK();
              iVar14 = *piVar15;
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (iVar14 == 0) {
                FID_conflict__free(piVar15);
              }
            }
            piVar15 = (int *)(local_60 + -8);
            if (piVar15 != &DAT_00bfe124) {
              LOCK();
              iVar14 = *piVar15;
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (iVar14 == 0) {
                FID_conflict__free(piVar15);
              }
            }
            piVar15 = (int *)((int)p_Var19 + -8);
            if (piVar15 != &DAT_00bfe124) {
              LOCK();
              iVar14 = *piVar15;
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (iVar14 == 0) {
                FID_conflict__free(piVar15);
              }
            }
            goto LAB_0059ec02;
          }
          FUN_0045c990();
          local_54 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
          EnterCriticalSection(local_54);
          local_8._0_1_ = 0x17;
          if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
            FUN_005891b0();
            FUN_0062f940();
          }
          LeaveCriticalSection(local_54);
          local_8._0_1_ = 10;
          piVar15 = (int *)(local_11c + -8);
          if (piVar15 != &DAT_00bfe124) {
            LOCK();
            iVar14 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar14 == 0) {
              FID_conflict__free(piVar15);
            }
          }
          if (puVar24 == (undefined4 *)0x0) {
            puVar11 = (undefined4 *)FUN_00411090();
            local_d8 = local_d8 + 1;
            puVar7 = (undefined4 *)*puVar11;
            *puVar11 = puVar21;
            local_50 = puVar7;
            if (local_15c != (undefined4 *)0x0) {
              LOCK();
              piVar15 = local_15c + 1;
              iVar14 = *piVar15;
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)*local_15c)();
              }
            }
            puVar11 = (undefined4 *)FUN_00548ab0();
            if (puVar11 == (undefined4 *)0x0) {
              FUN_00410ea0();
              local_8._0_1_ = 0x18;
              FUN_0059c9c0(4);
              local_8._0_1_ = 10;
              ppvVar18 = &local_4c[-1].LockSemaphore;
              if (ppvVar18 != (HANDLE *)&DAT_00bfe124) {
                LOCK();
                pvVar4 = *ppvVar18;
                *ppvVar18 = (HANDLE)((int)*ppvVar18 + -1);
                UNLOCK();
                if (pvVar4 == (HANDLE)0x0) {
                  FID_conflict__free(ppvVar18);
                }
              }
              FUN_0045c990();
              local_4c = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
              EnterCriticalSection(local_4c);
              local_8 = CONCAT31(local_8._1_3_,0x1a);
              puVar21 = puVar7;
              puVar11 = puVar24;
              goto LAB_0059e74a;
            }
            dVar26 = 0.0;
            local_44._0_4_ = 0;
            local_44._4_4_ = (LPCRITICAL_SECTION)0x0;
            local_98 = (LPCRITICAL_SECTION)0x0;
            local_9c = 0;
            local_dc = puVar11;
          }
          if (local_70 == 0) {
            piVar15 = (int *)((int)p_Var19 + -8);
            if (piVar15 != &DAT_00bfe124) {
              LOCK();
              *piVar15 = *piVar15 + 1;
              UNLOCK();
            }
            LOCK();
            UNLOCK();
            piVar15 = (int *)(local_60 + -8);
            local_60 = (undefined1 *)p_Var19;
            if (piVar15 != &DAT_00bfe124) {
              LOCK();
              iVar14 = *piVar15;
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (iVar14 == 0) {
                FID_conflict__free(piVar15);
              }
            }
            if (local_a8 != 0) {
              if (local_a8 < 0) {
                iVar14 = FUN_006104a0();
                *(undefined1 *)(iVar14 + -1) = 0x2d;
              }
              else {
                FUN_006104a0();
              }
              FUN_004557e0();
              local_8._0_1_ = 0x1b;
              FUN_00637690();
              FUN_006377c0();
              local_8 = CONCAT31(local_8._1_3_,0x1c);
              FUN_00636ec0();
              piVar15 = (int *)(local_164 + -8);
              if (piVar15 != &DAT_00bfe124) {
                LOCK();
                iVar14 = *piVar15;
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (iVar14 == 0) {
                  FID_conflict__free(piVar15);
                }
              }
              local_8._0_1_ = 10;
              piVar15 = (int *)(local_e8 + -8);
              if (piVar15 != &DAT_00bfe124) {
                LOCK();
                iVar14 = *piVar15;
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (iVar14 == 0) {
                  FID_conflict__free(piVar15);
                }
              }
            }
            if (*(int *)(local_3c + 0x80) == 1) {
              if (*(int *)(*(int *)(local_3c + 0x98) + 0x2c) < 0) {
                iVar14 = FUN_006104a0();
                *(undefined1 *)(iVar14 + -1) = 0x2d;
              }
              else {
                FUN_006104a0();
              }
              FUN_004557e0();
              local_8 = CONCAT31(local_8._1_3_,0x1d);
              puVar21 = (undefined4 *)FUN_00637690();
              puVar6 = (undefined1 *)*puVar21;
              *puVar21 = local_88;
              piVar15 = (int *)(local_160 + -8);
              local_88 = puVar6;
              if (piVar15 != &DAT_00bfe124) {
                LOCK();
                iVar14 = *piVar15;
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (iVar14 == 0) {
                  FID_conflict__free(piVar15);
                }
              }
              local_8._0_1_ = 10;
              piVar15 = (int *)(local_ec + -8);
              if (piVar15 != &DAT_00bfe124) {
                LOCK();
                iVar14 = *piVar15;
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (iVar14 == 0) {
                  FID_conflict__free(piVar15);
                }
              }
            }
            local_54 = (LPCRITICAL_SECTION)0x0;
            if (0 < *(int *)(*(int *)(local_3c + 0x98) + 100)) {
              do {
                FUN_00412980(&stack0xfffffe6c,local_54);
                FUN_00637730();
                FUN_00637730();
                local_8._0_1_ = 0x1e;
                piVar15 = (int *)(local_cc + -8);
                if (piVar15 != &DAT_00bfe124) {
                  LOCK();
                  *piVar15 = *piVar15 + 1;
                  UNLOCK();
                }
                FUN_006377c0();
                local_8._0_1_ = 0x1f;
                FUN_00635a10();
                local_8._0_1_ = 0x21;
                piVar15 = (int *)(local_130 + -8);
                if (piVar15 != &DAT_00bfe124) {
                  LOCK();
                  iVar14 = *piVar15;
                  *piVar15 = *piVar15 + -1;
                  UNLOCK();
                  if (iVar14 == 0) {
                    FID_conflict__free(piVar15);
                  }
                }
                pcVar22 = local_58;
                if (*local_58 != '\0') {
                  FUN_0045d6b0();
                  pcVar2 = pcVar22 + 1;
                  do {
                    cVar5 = *pcVar22;
                    pcVar22 = pcVar22 + 1;
                  } while (cVar5 != '\0');
                  local_68 = (LPCWSTR)((uint)(pcVar22 + (4 - (int)pcVar2)) & 0xfffffffc);
                  FUN_00455850();
                  local_58 = local_134;
                  pWVar23 = (LPCWSTR)(local_134 + (int)local_68);
                  local_68 = pWVar23;
                  FUN_0045e410();
                  DVar12 = GetFileAttributesW(pWVar23);
                  if ((DVar12 & 0x10) != 0) goto LAB_0059db9d;
                  if (*(int *)(local_3c + 0x80) == 1) {
                    FUN_00635980();
                    goto LAB_0059db9d;
                  }
                  FUN_0059c9c0(3);
                  FUN_0045c990();
                  p_Var17 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
                  local_b8 = CONCAT44(p_Var17,(uint)local_b8);
                  EnterCriticalSection(p_Var17);
                  local_8 = CONCAT31(local_8._1_3_,0x23);
LAB_0059e894:
                  if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
                    FUN_005891b0();
                    FUN_0062f940();
                  }
                  LeaveCriticalSection(p_Var17);
                  piVar15 = (int *)(local_38 + -8);
                  if (piVar15 != &DAT_00bfe124) {
                    LOCK();
                    iVar14 = *piVar15;
                    *piVar15 = *piVar15 + -1;
                    UNLOCK();
                    if (iVar14 == 0) {
                      FID_conflict__free(piVar15);
                    }
                  }
                  piVar15 = (int *)(local_58 + -8);
                  if (piVar15 != &DAT_00bfe124) {
                    LOCK();
                    iVar14 = *piVar15;
                    *piVar15 = *piVar15 + -1;
                    UNLOCK();
                    if (iVar14 == 0) {
                      FID_conflict__free(piVar15);
                    }
                  }
                  goto LAB_0059e906;
                }
LAB_0059db9d:
                FUN_00636040();
                local_8 = CONCAT31(local_8._1_3_,0x24);
                puVar21 = (undefined4 *)FUN_00634890();
                piVar15 = (int *)(local_138 + -8);
                local_45 = *(char *)*puVar21;
                if (piVar15 != &DAT_00bfe124) {
                  LOCK();
                  iVar14 = *piVar15;
                  *piVar15 = *piVar15 + -1;
                  UNLOCK();
                  if (iVar14 == 0) {
                    FID_conflict__free(piVar15);
                  }
                }
                local_8._0_1_ = 0x21;
                piVar15 = (int *)(local_13c + -8);
                if (piVar15 != &DAT_00bfe124) {
                  LOCK();
                  iVar14 = *piVar15;
                  *piVar15 = *piVar15 + -1;
                  UNLOCK();
                  if (iVar14 == 0) {
                    FID_conflict__free(piVar15);
                  }
                }
                if (local_45 != '\0') {
                  FUN_00636040();
                  local_8._0_1_ = 0x25;
                  FUN_0059c9c0(2);
                  local_8._0_1_ = 0x21;
                  ppvVar18 = &local_4c[-1].LockSemaphore;
                  if (ppvVar18 != (HANDLE *)&DAT_00bfe124) {
                    LOCK();
                    pvVar4 = *ppvVar18;
                    *ppvVar18 = (HANDLE)((int)*ppvVar18 + -1);
                    UNLOCK();
                    if (pvVar4 == (HANDLE)0x0) {
                      FID_conflict__free(ppvVar18);
                    }
                  }
                  FUN_0045c990();
                  p_Var17 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
                  local_b8 = CONCAT44(p_Var17,(uint)local_b8);
                  EnterCriticalSection(p_Var17);
                  local_8 = CONCAT31(local_8._1_3_,0x27);
                  goto LAB_0059e894;
                }
                FUN_0059b330();
                puVar21 = local_140;
                local_8._0_1_ = 0x28;
                if (local_140 == (undefined4 *)0x0) {
                  FUN_0059c9c0(2);
                  FUN_0045c990();
                  p_Var17 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
                  local_b8 = CONCAT44(p_Var17,(uint)local_b8);
                  EnterCriticalSection(p_Var17);
                  local_8 = CONCAT31(local_8._1_3_,0x2a);
                  goto LAB_0059e894;
                }
                FUN_0041cef0();
                if (local_74 < local_70 + 1) {
                  FUN_00409cf0();
                }
                iVar10 = local_70 + 1;
                *(undefined4 **)((int)local_78 + local_70 * 4) = puVar21;
                piVar15 = puVar21 + 1;
                LOCK();
                *piVar15 = *piVar15 + 1;
                UNLOCK();
                LOCK();
                iVar14 = *piVar15;
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                local_70 = iVar10;
                if (iVar14 == 1) {
                  (**(code **)*puVar21)();
                }
                piVar15 = (int *)(local_58 + -8);
                if (piVar15 != &DAT_00bfe124) {
                  LOCK();
                  iVar14 = *piVar15;
                  *piVar15 = *piVar15 + -1;
                  UNLOCK();
                  if (iVar14 == 0) {
                    FID_conflict__free(piVar15);
                  }
                }
                local_8._0_1_ = 10;
                piVar15 = (int *)(local_cc + -8);
                if (piVar15 != &DAT_00bfe124) {
                  LOCK();
                  iVar14 = *piVar15;
                  *piVar15 = *piVar15 + -1;
                  UNLOCK();
                  if (iVar14 == 0) {
                    FID_conflict__free(piVar15);
                  }
                }
                local_54 = (LPCRITICAL_SECTION)((int)&local_54->DebugInfo + 1);
              } while ((int)local_54 < *(int *)(*(int *)(local_3c + 0x98) + 100));
            }
            dVar26 = 0.0;
            local_c4 = 0;
            _local_144 = CONCAT31(uStack_143,*(undefined1 *)(local_3c + 0x8c));
            operator_new(0x80);
            local_8._0_1_ = 0x2b;
            local_68 = (LPCWSTR)FUN_0053e120();
            local_8._0_1_ = 10;
            FUN_00410ad0();
            FUN_00637730();
            local_8._0_1_ = 0x2c;
            FUN_00541b50();
            FUN_00410a10();
            local_8._0_1_ = 0x2d;
            uVar8 = (undefined1)local_8;
            local_8._0_1_ = 0x2d;
            if (*local_84 == '\0') {
LAB_0059de54:
              local_8._0_1_ = uVar8;
              piVar15 = (int *)(local_60 + -8);
              if (piVar15 != &DAT_00bfe124) {
                LOCK();
                *piVar15 = *piVar15 + 1;
                UNLOCK();
              }
              FUN_00637730();
              local_8 = CONCAT31(local_8._1_3_,0x33);
              FUN_0053baf0(&local_8c);
              iVar14 = local_14c;
LAB_0059dea2:
              piVar15 = (int *)(iVar14 + -8);
              if (piVar15 != &DAT_00bfe124) {
                LOCK();
                iVar14 = *piVar15;
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (iVar14 == 0) {
                  FID_conflict__free(piVar15);
                }
              }
              iVar14 = local_3c;
              piVar15 = (int *)(local_3c + 0xa0);
              if (*(int *)(local_3c + 0xa4) < *(int *)(local_3c + 0xa8) + 1) {
                FUN_00409cf0();
              }
              iVar10 = *(int *)(iVar14 + 0xa8);
              *(int *)(iVar14 + 0xa8) = iVar10 + 1;
              *(LPCWSTR *)(*piVar15 + iVar10 * 4) = local_68;
              piVar15 = (int *)(local_84 + -8);
              if (piVar15 != &DAT_00bfe124) {
                LOCK();
                iVar14 = *piVar15;
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (iVar14 == 0) {
                  FID_conflict__free(piVar15);
                }
              }
              local_8._0_1_ = 10;
              piVar15 = (int *)(local_bc + -8);
              if (piVar15 != &DAT_00bfe124) {
                LOCK();
                iVar14 = *piVar15;
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (iVar14 == 0) {
                  FID_conflict__free(piVar15);
                  local_7c = local_c4._4_4_;
                  local_6c = (uint)local_c4;
                  goto LAB_0059df76;
                }
              }
              local_7c = local_c4._4_4_;
              local_6c = (uint)local_c4;
              goto LAB_0059df76;
            }
            puVar21 = (undefined4 *)FUN_00458890();
            DVar12 = GetFileAttributesW((LPCWSTR)*puVar21);
            uVar8 = (undefined1)local_8;
            if ((DVar12 & 0x10) != 0) goto LAB_0059de54;
            if (*(int *)(local_3c + 0x80) == 1) {
              local_68 = (LPCWSTR)FUN_0053d3e0();
              if (local_68 == (LPCWSTR)0x0) {
                FUN_0059c9c0(0xb);
                FUN_0045c990();
                p_Var17 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
                local_b8 = CONCAT44(p_Var17,(uint)local_b8);
                EnterCriticalSection(p_Var17);
                local_8 = CONCAT31(local_8._1_3_,0x2f);
                goto LAB_0059ea1d;
              }
              piVar15 = (int *)(local_60 + -8);
              if (piVar15 != &DAT_00bfe124) {
                LOCK();
                *piVar15 = *piVar15 + 1;
                UNLOCK();
              }
              FUN_00637730();
              local_8 = CONCAT31(local_8._1_3_,0x30);
              FUN_0053b730(*(undefined4 *)(local_3c + 0x9c),&local_8c);
              iVar14 = local_148;
              goto LAB_0059dea2;
            }
            FUN_0059c9c0(3);
            FUN_0045c990();
            p_Var17 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
            local_b8 = CONCAT44(p_Var17,(uint)local_b8);
            EnterCriticalSection(p_Var17);
            local_8 = CONCAT31(local_8._1_3_,0x32);
LAB_0059ea1d:
            if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
              FUN_005891b0();
              FUN_0062f940();
            }
            LeaveCriticalSection(p_Var17);
            piVar15 = (int *)(local_38 + -8);
            if (piVar15 != &DAT_00bfe124) {
              LOCK();
              iVar14 = *piVar15;
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (iVar14 == 0) {
                FID_conflict__free(piVar15);
              }
            }
            piVar15 = (int *)(local_84 + -8);
            local_cc = local_bc;
            if (piVar15 != &DAT_00bfe124) {
              LOCK();
              iVar14 = *piVar15;
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (iVar14 == 0) {
                FID_conflict__free(piVar15);
                local_cc = local_bc;
              }
            }
LAB_0059e906:
            piVar15 = (int *)(local_cc + -8);
            puVar21 = local_50;
            if (piVar15 != &DAT_00bfe124) {
              LOCK();
              iVar14 = *piVar15;
              *piVar15 = *piVar15 + -1;
              UNLOCK();
              if (iVar14 == 0) {
                FID_conflict__free(piVar15);
                puVar21 = local_50;
              }
            }
            goto LAB_0059e92a;
          }
LAB_0059df76:
          FUN_0045c990();
          local_8._0_1_ = 0x34;
          FUN_005899e0();
          local_8._0_1_ = 10;
          piVar15 = (int *)(local_f0 + -8);
          if (piVar15 != &DAT_00bfe124) {
            LOCK();
            iVar14 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar14 == 0) {
              FID_conflict__free(piVar15);
            }
          }
          local_64 = local_a4 - local_b0;
          local_5c = (LPCRITICAL_SECTION)((local_a0 - local_ac) - (uint)(local_a4 < local_b0));
          if ((local_90 != 0) || (local_80 != 0)) {
            uVar20 = (int)&local_5c->DebugInfo + CARRY4(local_64,local_6c) + local_7c;
            if ((local_90 <= uVar20) && ((local_90 < uVar20 || (local_80 <= local_64 + local_6c))))
            {
              local_64 = local_80 - local_6c;
              local_5c = (LPCRITICAL_SECTION)((local_90 - local_7c) - (uint)(local_80 < local_6c));
            }
          }
          if ((local_5c != (LPCRITICAL_SECTION)0x0) || (0x10000 < local_64)) {
            local_64 = 0x10000;
            local_5c = (LPCRITICAL_SECTION)0x0;
          }
          uVar20 = puVar11[6] - local_9c;
          p_Var17 = (LPCRITICAL_SECTION)
                    ((puVar11[7] - (int)local_98) - (uint)((uint)puVar11[6] < local_9c));
          if ((p_Var17 <= local_5c) && ((p_Var17 < local_5c || (uVar20 < local_64)))) {
            local_64 = uVar20;
            local_5c = p_Var17;
          }
          FUN_0045c990();
          p_Var17 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
          local_44 = CONCAT44(p_Var17,(uint)local_44);
          EnterCriticalSection(p_Var17);
          local_8._0_1_ = 0x36;
          if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
            FUN_005891b0();
            FUN_0062f940();
          }
          LeaveCriticalSection(p_Var17);
          local_8._0_1_ = 10;
          piVar15 = (int *)(local_f4 + -8);
          if (piVar15 != &DAT_00bfe124) {
            LOCK();
            iVar14 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar14 == 0) {
              FID_conflict__free(piVar15);
            }
          }
          FUN_0045c990();
          local_8._0_1_ = 0x37;
          FUN_005899e0();
          local_8._0_1_ = 10;
          piVar15 = (int *)(local_f8 + -8);
          if (piVar15 != &DAT_00bfe124) {
            LOCK();
            iVar14 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar14 == 0) {
              FID_conflict__free(piVar15);
            }
          }
          puVar24 = local_114;
          local_45 = FUN_006031f0(local_114[5],*(undefined4 *)(*(int *)(local_3c + 0x98) + 100),
                                  local_9c,local_98);
          FUN_0045c990();
          local_54 = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
          EnterCriticalSection(local_54);
          local_8._0_1_ = 0x39;
          if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
            FUN_005891b0();
            FUN_0062f940();
          }
          LeaveCriticalSection(local_54);
          local_8._0_1_ = 10;
          piVar15 = (int *)(local_fc + -8);
          if (piVar15 != &DAT_00bfe124) {
            LOCK();
            iVar14 = *piVar15;
            *piVar15 = *piVar15 + -1;
            UNLOCK();
            if (iVar14 == 0) {
              FID_conflict__free(piVar15);
            }
          }
          local_54 = *(LPCRITICAL_SECTION *)(*(int *)(local_3c + 0x98) + 100);
          iVar14 = *(int *)(*(int *)(local_3c + 0x98) + 0x3c);
          local_c4 = CONCAT44(iVar14,(uint)local_c4);
          local_44._4_4_ = *(LPCRITICAL_SECTION *)(*(int *)(local_3c + 8) + 0x18);
          uVar28 = __allmul(iVar14,iVar14 >> 0x1f);
          __allmul(uVar28);
          (*(code *)(local_44._4_4_)->DebugInfo->ContentionCount)();
          puVar21 = local_50;
          if (local_45 == '\0') {
            FUN_00410ea0();
            local_8._0_1_ = 0x3a;
            FUN_0059c9c0(4);
            local_8._0_1_ = 10;
            ppvVar18 = &local_4c[-1].LockSemaphore;
            if (ppvVar18 != (HANDLE *)&DAT_00bfe124) {
              LOCK();
              pvVar4 = *ppvVar18;
              *ppvVar18 = (HANDLE)((int)*ppvVar18 + -1);
              UNLOCK();
              if (pvVar4 == (HANDLE)0x0) {
                FID_conflict__free(ppvVar18);
              }
            }
            FUN_0045c990();
            local_4c = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
            EnterCriticalSection(local_4c);
            local_8 = CONCAT31(local_8._1_3_,0x3c);
            goto LAB_0059e74a;
          }
          local_44._4_4_ = (LPCRITICAL_SECTION)0x0;
          p_Var17 = local_44._4_4_;
          if (0 < local_70) {
            do {
              FUN_0045c990();
              local_8._0_1_ = 0x3d;
              FUN_005899e0();
              local_8._0_1_ = 10;
              piVar15 = (int *)(local_100 + -8);
              if (piVar15 != &DAT_00bfe124) {
                LOCK();
                iVar14 = *piVar15;
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (iVar14 == 0) {
                  FID_conflict__free(piVar15);
                }
              }
              local_158 = operator_new(0x24);
              puVar21 = (undefined4 *)FUN_004110e0();
              local_8 = CONCAT31(local_8._1_3_,0x3f);
              local_44 = CONCAT44(local_c8,(uint)local_44) | 0x100000000;
              local_c8 = local_c8 | 1;
              uVar13 = FUN_0059b9e0(*puVar21,puVar24,p_Var17,local_3c,*(undefined4 *)(local_3c + 8))
              ;
              local_c4 = CONCAT44(uVar13,(uint)local_c4);
              local_8 = 10;
              local_c8 = local_c8 & 0xfffffffe;
              if (local_4c != (LPCRITICAL_SECTION)0x0) {
                LOCK();
                pLVar3 = &local_4c->LockCount;
                iVar14 = *pLVar3;
                *pLVar3 = *pLVar3 + -1;
                UNLOCK();
                if (iVar14 == 1) {
                  (**(code **)local_4c->DebugInfo)();
                }
              }
              FUN_0045c990();
              local_44 = CONCAT44((LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28),(uint)local_44);
              EnterCriticalSection((LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28));
              local_8._0_1_ = 0x42;
              if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
                FUN_005891b0();
                FUN_0062f940();
              }
              LeaveCriticalSection(local_44._4_4_);
              local_8._0_1_ = 10;
              piVar15 = (int *)(local_104 + -8);
              if (piVar15 != &DAT_00bfe124) {
                LOCK();
                iVar14 = *piVar15;
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (iVar14 == 0) {
                  FID_conflict__free(piVar15);
                }
              }
              FUN_0045c990();
              local_8._0_1_ = 0x43;
              FUN_005899e0();
              local_8._0_1_ = 10;
              piVar15 = (int *)(local_108 + -8);
              if (piVar15 != &DAT_00bfe124) {
                LOCK();
                iVar14 = *piVar15;
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (iVar14 == 0) {
                  FID_conflict__free(piVar15);
                }
              }
              FUN_0059af50();
              FUN_0045c990();
              local_44._4_4_ = (LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28);
              EnterCriticalSection((LPCRITICAL_SECTION)(DAT_00c8a5d8 + 0x28));
              local_8._0_1_ = 0x45;
              if (*(char *)(DAT_00c8a5d8 + 0x20) != '\0') {
                FUN_005891b0();
                FUN_0062f940();
              }
              LeaveCriticalSection(local_44._4_4_);
              local_8._0_1_ = 10;
              piVar15 = (int *)(local_38 + -8);
              if (piVar15 != &DAT_00bfe124) {
                LOCK();
                iVar14 = *piVar15;
                *piVar15 = *piVar15 + -1;
                UNLOCK();
                if (iVar14 == 0) {
                  FID_conflict__free(piVar15);
                }
              }
              p_Var17 = (LPCRITICAL_SECTION)((int)&p_Var17->DebugInfo + 1);
              p_Var19 = local_94;
              puVar11 = local_dc;
            } while ((int)p_Var17 < local_70);
          }
          pWVar23 = local_68;
          bVar25 = CARRY4(local_b0,local_64);
          local_b0 = local_b0 + local_64;
          local_ac = (int)&local_5c->DebugInfo + bVar25 + local_ac;
          bVar25 = CARRY4(local_9c,local_64);
          local_9c = local_9c + local_64;
          local_98 = (LPCRITICAL_SECTION)
                     ((int)&local_5c->DebugInfo + (uint)bVar25 + (int)&local_98->DebugInfo);
          bVar25 = CARRY4(local_6c,local_64);
          local_6c = local_6c + local_64;
          local_7c = (int)&local_5c->DebugInfo + bVar25 + local_7c;
          bVar25 = local_e4 < local_64;
          local_e4 = local_e4 - local_64;
          local_e0 = (local_e0 - (int)local_5c) - (uint)bVar25;
          if ((((local_90 != 0) || (local_80 != 0)) && (local_90 <= local_7c)) &&
             ((local_90 < local_7c || (local_80 <= local_6c)))) {
            if (local_68 != (LPCWSTR)0x0) {
              FUN_006f56f0();
              iVar14 = FUN_005bdc20();
              local_68 = (LPCWSTR)0x0;
              dVar26 = dVar26 / (double)iVar14;
              *(double *)(pWVar23 + 0x1c) = dVar26;
            }
            FUN_00415180();
            if (local_74 != 0) {
              FID_conflict__free(local_78);
              local_78 = (void *)0x0;
              local_74 = 0;
            }
            local_a8 = local_a8 + 1;
          }
          puVar24 = puVar11;
          if (((LPCRITICAL_SECTION)puVar11[7] <= local_98) &&
             ((local_98 != (LPCRITICAL_SECTION)puVar11[7] || ((uint)puVar11[6] <= local_9c)))) {
            puVar24 = (undefined4 *)0x0;
            local_dc = (undefined4 *)0x0;
            if (puVar11 != (undefined4 *)0x0) {
              (**(code **)*puVar11)();
            }
          }
          Sleep(0);
          pWVar23 = local_68;
        } while ((local_ac < local_a0) || ((local_ac == local_a0 && (local_b0 < local_a4))));
        puVar21 = local_50;
        if (local_68 != (LPCWSTR)0x0) {
          FUN_006f56f0();
          iVar14 = FUN_005bdc20();
          dVar26 = dVar26 / (double)iVar14;
          *(double *)(pWVar23 + 0x1c) = dVar26;
          puVar21 = local_50;
        }
      }
      FUN_00415180();
      if (local_74 != 0) {
        FID_conflict__free(local_78);
        local_78 = (void *)0x0;
        local_74 = 0;
      }
      if ((((local_80 == 0) && (local_90 == 0)) || (local_e0 < local_90)) ||
         ((local_e0 == local_90 && (local_e4 < local_80)))) {
        local_a8 = 0;
      }
      else {
        local_a8 = 1;
      }
      piVar15 = (int *)(local_88 + -8);
      if (piVar15 != &DAT_00bfe124) {
        LOCK();
        iVar14 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar14 == 0) {
          FID_conflict__free(piVar15);
        }
      }
      piVar15 = (int *)(local_60 + -8);
      if (piVar15 != &DAT_00bfe124) {
        LOCK();
        iVar14 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar14 == 0) {
          FID_conflict__free(piVar15);
        }
      }
      piVar15 = (int *)((int)p_Var19 + -8);
      local_8 = CONCAT31(local_8._1_3_,5);
      if (piVar15 != &DAT_00bfe124) {
        LOCK();
        iVar14 = *piVar15;
        *piVar15 = *piVar15 + -1;
        UNLOCK();
        if (iVar14 == 0) {
          FID_conflict__free(piVar15);
        }
      }
      uVar20 = *(uint *)(*(int *)(local_3c + 0x98) + 0x34);
      puVar11 = puVar24;
    } while ((local_ac <= uVar20) &&
            ((local_ac < uVar20 || (local_b0 < *(uint *)(*(int *)(local_3c + 0x98) + 0x30)))));
  }
  FUN_0045c990();
  local_8 = CONCAT31(local_8._1_3_,0x46);
  FUN_00589130();
  piVar15 = (int *)((int)local_94 + -8);
  if (piVar15 != &DAT_00bfe124) {
    LOCK();
    iVar14 = *piVar15;
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (iVar14 == 0) {
      FID_conflict__free(piVar15);
    }
  }
LAB_0059ec02:
  if (local_114 != (undefined4 *)0x0) {
    LOCK();
    piVar15 = local_114 + 1;
    iVar14 = *piVar15;
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (iVar14 == 1) {
      (**(code **)*local_114)();
    }
  }
  FUN_00415180();
  FID_conflict__free(local_78);
  if (puVar11 != (undefined4 *)0x0) {
    (**(code **)*puVar11)();
  }
  if (puVar21 != (undefined4 *)0x0) {
    LOCK();
    piVar15 = puVar21 + 1;
    iVar14 = *piVar15;
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (iVar14 == 1) {
      (**(code **)*puVar21)();
    }
  }
  piVar15 = (int *)(local_8c + -8);
  if (piVar15 != &DAT_00bfe124) {
    LOCK();
    iVar14 = *piVar15;
    *piVar15 = *piVar15 + -1;
    UNLOCK();
    if (iVar14 == 0) {
      FID_conflict__free(piVar15);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

