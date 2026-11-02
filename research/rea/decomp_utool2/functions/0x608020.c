// rea decompile_all
// name: FUN_00608020
// address: 0x608020
// body: available
// range: 0x608020-0x60852d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00608020(void)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int in_ECX;
  int iVar10;
  int iVar11;
  void *pvVar12;
  int iVar13;
  uint uVar14;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined8 uVar15;
  void *local_a4;
  void *local_98;
  undefined4 local_90;
  void *local_8c;
  int local_84;
  void *local_80;
  void *local_74;
  undefined1 local_64 [4];
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined1 local_4c;
  void *local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  void *local_2c;
  uint local_28;
  uint local_24;
  LPCRITICAL_SECTION local_20;
  int local_1c;
  void *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071c2f7;
  local_10 = ExceptionList;
  uVar5 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = (undefined4 *)0x0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  local_14 = in_ECX;
  local_4c = FUN_0063d4d0(in_ECX,0);
  local_2c = (void *)0x0;
  local_28 = 0;
  local_24 = 0;
  local_8._0_1_ = 3;
  FUN_00445800(in_ECX + 0xac);
  local_8._0_1_ = 4;
  local_20 = (LPCRITICAL_SECTION)0x0;
  if (0 < *(int *)(in_ECX + 0xa8)) {
    do {
      uVar15 = FUN_004179c0(&local_60,local_20);
      iVar11 = *(int *)uVar15;
      local_1c = iVar11;
      if (local_60 != (undefined4 *)0x0) {
        LOCK();
        piVar2 = local_60 + 1;
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + (int)((ulonglong)uVar15 >> 0x20);
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)*local_60)(1,uVar5);
        }
      }
      FUN_00608870(*(undefined4 *)(in_ECX + 0x40),in_ECX,*(undefined4 *)(in_ECX + 0x4c));
      local_30 = 0;
      local_18 = local_2c;
      if (0 < (int)local_24) {
        do {
          uVar3 = *(uint *)(iVar11 + 8);
          local_38 = local_40;
          iVar6 = FUN_00445950(*(undefined4 *)(*(int *)((int)local_18 + local_30 * 4) + 8),local_64)
          ;
          local_34 = iVar6;
          if (iVar6 != 0) {
            local_3c = *(int *)(iVar6 + 0xc);
            if (0 < local_3c) {
              iVar11 = 0;
              iVar13 = local_3c;
              do {
                if (uVar3 == *(uint *)(*(int *)(iVar6 + 4) + iVar11 * 4)) goto LAB_0060817a;
                iVar7 = (iVar13 + iVar11) / 2;
                if (iVar7 == iVar11) break;
                iVar10 = iVar7;
                if (uVar3 < *(uint *)(*(int *)(iVar6 + 4) + iVar7 * 4)) {
                  iVar10 = iVar11;
                  iVar13 = iVar7;
                }
                iVar11 = iVar10;
              } while (iVar10 < iVar13);
            }
            iVar11 = -1;
LAB_0060817a:
            in_ECX = local_14;
            if (-1 < iVar11) break;
            local_38 = local_38 + -1;
            iVar11 = local_1c;
            if ((-1 < local_38) && (iVar13 = 0, 0 < local_3c)) {
              do {
                cVar4 = FUN_004458d0(uVar3,*(undefined4 *)(*(int *)(iVar6 + 4) + iVar13 * 4),
                                     local_38);
                in_ECX = local_14;
                if (cVar4 != '\0') goto LAB_006081d7;
                iVar13 = iVar13 + 1;
                iVar11 = local_1c;
              } while (iVar13 < *(int *)(iVar6 + 0xc));
            }
          }
          local_30 = local_30 + 1;
          in_ECX = local_14;
        } while ((int)local_30 < (int)local_24);
      }
LAB_006081d7:
      uVar3 = local_30;
      iVar11 = local_24 + 1;
      pvVar12 = local_18;
      if ((int)local_28 < iVar11) {
        if (iVar11 < 0) {
          iVar11 = local_24 + 2;
        }
        uVar14 = local_24 + 9 + (iVar11 >> 1) & 0xfffffff8;
        if (local_28 != uVar14) {
          if ((int)uVar14 < 1) {
            FID_conflict__free(local_18);
            local_2c = (void *)0x0;
            pvVar12 = (void *)0x0;
            local_28 = uVar14;
          }
          else if (local_18 == (void *)0x0) {
            local_2c = (void *)FUN_004c554b();
            pvVar12 = local_2c;
            local_28 = uVar14;
          }
          else {
            local_2c = (void *)FUN_004c553b(local_18,uVar14 * 4);
            pvVar12 = local_2c;
            local_28 = uVar14;
          }
        }
      }
      if (uVar3 < local_24) {
        piVar2 = (int *)((int)pvVar12 + uVar3 * 4);
        if (0 < (int)(local_24 - uVar3)) {
          FUN_004c1df0(piVar2 + 1,piVar2,(local_24 - uVar3) * 4);
        }
        if (piVar2 != (int *)0x0) {
          *piVar2 = local_1c;
        }
        local_24 = local_24 + 1;
      }
      else {
        piVar2 = (int *)((int)pvVar12 + local_24 * 4);
        local_24 = local_24 + 1;
        if (piVar2 != (int *)0x0) {
          *piVar2 = local_1c;
        }
      }
      local_20 = (LPCRITICAL_SECTION)((int)local_20 + 1);
    } while ((int)local_20 < *(int *)(in_ECX + 0xa8));
  }
  local_8 = CONCAT31(local_8._1_3_,3);
  while (0 < local_40) {
    local_40 = local_40 + -1;
    iVar11 = *(int *)((int)local_48 + local_40 * 4);
    if (iVar11 != 0) {
      FID_conflict__free(*(void **)(iVar11 + 4));
      FUN_004bfe14(iVar11,0x10);
    }
  }
  FID_conflict__free(local_48);
  FUN_004438f0(in_ECX,&local_2c,&local_5c);
  local_34 = local_90;
  local_3c = local_84;
  FID_conflict__free(local_74);
  FID_conflict__free(local_80);
  FID_conflict__free(local_8c);
  FID_conflict__free(local_98);
  FID_conflict__free(local_a4);
  FID_conflict__free(local_2c);
  puVar8 = local_50;
  iVar11 = DAT_00c8a658;
  if (local_50 != (undefined4 *)0x0) {
    SetEvent((HANDLE)local_50[3]);
    local_50 = (undefined4 *)0x0;
    if (puVar8 != (undefined4 *)0x0) {
      LOCK();
      piVar2 = puVar8 + 1;
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar6 == 1) {
        (**(code **)*puVar8)(1);
      }
    }
    in_ECX = local_14;
    if (iVar11 != 0) {
      *(undefined4 *)(iVar11 + 0xc) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(iVar11 + 0x10));
      in_ECX = local_14;
    }
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(in_ECX + 0x50);
  local_20 = lpCriticalSection;
  EnterCriticalSection(lpCriticalSection);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_004459e0(local_34,*(undefined4 *)(in_ECX + 0x40));
  iVar11 = *(int *)(in_ECX + 0xc4);
  while (iVar11 = iVar11 + -1, -1 < iVar11) {
    *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0xbc) + iVar11 * 4) + 8) = 0;
  }
  if (*(int *)(in_ECX + 0xc4) < local_84) {
    do {
      puVar8 = operator_new(0xc);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      iVar11 = *(int *)(in_ECX + 0xc4);
      puVar1 = (uint *)(in_ECX + 0xc0);
      iVar6 = iVar11 + 1;
      if ((int)*puVar1 < iVar6) {
        if (iVar6 < 0) {
          iVar6 = iVar11 + 2;
        }
        uVar5 = iVar11 + 9 + (iVar6 >> 1) & 0xfffffff8;
        in_ECX = local_14;
        if (*puVar1 != uVar5) {
          if ((int)uVar5 < 1) {
            FID_conflict__free(*(void **)(local_14 + 0xbc));
            *(undefined4 *)(local_14 + 0xbc) = 0;
          }
          else if (*(int *)(local_14 + 0xbc) == 0) {
            uVar9 = FUN_004c554b();
            *(undefined4 *)(local_14 + 0xbc) = uVar9;
          }
          else {
            uVar9 = FUN_004c553b(*(int *)(local_14 + 0xbc),uVar5 * 4);
            *(undefined4 *)(local_14 + 0xbc) = uVar9;
          }
          *(uint *)(local_14 + 0xc0) = uVar5;
          in_ECX = local_14;
        }
      }
      iVar11 = *(int *)(in_ECX + 0xc4);
      *(int *)(in_ECX + 0xc4) = iVar11 + 1;
      *(undefined4 **)(*(int *)(in_ECX + 0xbc) + iVar11 * 4) = puVar8;
      lpCriticalSection = local_20;
    } while (*(int *)(in_ECX + 0xc4) < local_3c);
  }
  pvVar12 = *(void **)(in_ECX + 200);
  *(undefined4 *)(in_ECX + 200) = local_5c;
  *(undefined4 *)(in_ECX + 0xcc) = local_58;
  iVar11 = *(int *)(in_ECX + 0xd0);
  *(undefined4 *)(local_14 + 0xd0) = local_54;
  LeaveCriticalSection(lpCriticalSection);
  while (iVar11 = iVar11 + -1, -1 < iVar11) {
    puVar8 = *(undefined4 **)((int)pvVar12 + iVar11 * 4);
    if (puVar8 != (undefined4 *)0x0) {
      (**(code **)*puVar8)(1);
    }
  }
  FID_conflict__free(pvVar12);
  ExceptionList = local_10;
  return;
}

