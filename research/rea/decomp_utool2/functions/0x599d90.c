// rea decompile_all
// name: FUN_00599d90
// address: 0x599d90
// body: available
// range: 0x599d90-0x59a523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00599ee5) */
/* WARNING: Removing unreachable block (ram,0x00599ef2) */
/* WARNING: Removing unreachable block (ram,0x00599f50) */
/* WARNING: Removing unreachable block (ram,0x00599f5d) */

void FUN_00599d90(undefined4 param_1)

{
  int *_Memory;
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *in_ECX;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  uint uVar12;
  int *piStack_118;
  int local_f8;
  void *local_e4;
  int local_dc;
  int local_70;
  uint local_6c;
  int local_60;
  int local_5c;
  int local_58;
  char acStack_1b [6];
  undefined1 uStack_15;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00715656;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_004eb7e0();
  *in_ECX = QueuedExportComponent::vftable;
  in_ECX[0x1c] = QueuedExportComponent::vftable;
  in_ECX[0x4c] = param_1;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  in_ECX[0x50] = &DAT_00bfe12c;
  in_ECX[0x51] = 0;
  in_ECX[0x52] = 1;
  in_ECX[0x53] = 1;
  in_ECX[0x54] = 0;
  in_ECX[0x55] = 0;
  in_ECX[0x56] = 0;
  in_ECX[0x57] = 0;
  in_ECX[0x58] = 0;
  in_ECX[0x59] = 0;
  in_ECX[0x5a] = 0;
  in_ECX[0x5b] = 0;
  in_ECX[0x5c] = 0;
  in_ECX[0x5d] = 9;
  local_8 = 5;
  FUN_006e8b40();
  local_8._0_1_ = 10;
  FUN_006e8b40();
  local_8._0_1_ = 0xd;
  FUN_0045c990();
  local_8._0_1_ = 0xe;
  piStack_118 = (int *)0x599fa9;
  FUN_004eabf0();
  local_8._0_1_ = 0xd;
  piVar3 = (int *)(local_58 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  FUN_0045c990();
  local_8._0_1_ = 0xf;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  piVar3 = (int *)(local_5c + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  if (in_ECX[0x85] != 0x22) {
    in_ECX[0x85] = 0x22;
    FUN_006e6400(&piStack_118);
    FUN_006ce9f0(1);
  }
  (**(code **)(in_ECX[0x5e] + 0x28))();
  piStack_118 = (int *)0x59a07f;
  FUN_006e5050();
  FUN_0045c990();
  local_8._0_1_ = 0x10;
  piStack_118 = (int *)0x59a0a4;
  FUN_006e4900();
  local_8 = CONCAT31(local_8._1_3_,0xd);
  piVar3 = (int *)(local_60 + -8);
  if (piVar3 != &DAT_00bfe124) {
    LOCK();
    iVar4 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if (iVar4 == 0) {
      FID_conflict__free(piVar3);
    }
  }
  (**(code **)(in_ECX[0x92] + 0x28))();
  piStack_118 = in_ECX + 0x92;
  FUN_006e5050();
  local_70 = 4;
  local_6c = 1;
  do {
    piStack_118 = (int *)0x59a10a;
    operator_new(0x2348);
    local_8 = CONCAT31(local_8._1_3_,0x11);
    pcVar11 = acStack_1b + 2;
    acStack_1b[2] = 0;
    uVar12 = local_6c;
    if ((int)local_6c < 0) {
      uVar12 = -local_6c;
      do {
        pcVar10 = pcVar11;
        pcVar11 = pcVar10 + -1;
        uVar9 = uVar12 / 10;
        *pcVar11 = (char)uVar12 + (char)uVar9 * -10 + '0';
        uVar12 = uVar9;
      } while (uVar9 != 0);
      pcVar11 = pcVar10 + -2;
      *pcVar11 = '-';
    }
    else {
      do {
        pcVar11 = pcVar11 + -1;
        uVar9 = uVar12 / 10;
        *pcVar11 = (char)uVar12 + (char)uVar9 * -10 + '0';
        uVar12 = uVar9;
      } while (uVar9 != 0);
    }
    pcVar10 = acStack_1b + -(int)pcVar11 + 2;
    piStack_118 = (int *)0x59a183;
    piVar3 = (int *)FUN_004bfe22();
    piVar3[1] = (uint)(&uStack_15 + -(int)pcVar11) & 0xfffffffc;
    *piVar3 = 0;
    while ((0 < (int)pcVar10 && (iVar4 = FUN_00443260(), iVar4 != 0))) {
      piStack_118 = (int *)0x59a1c5;
      FUN_0044ecc0();
      pcVar10 = pcVar10 + -1;
    }
    *(undefined1 *)(piVar3 + 2) = 0;
    local_8 = CONCAT31(local_8._1_3_,0x12);
    piStack_118 = (int *)0x59a1ee;
    FUN_00637690();
    local_8 = 0x13;
    piVar5 = (int *)FUN_00598890();
    _Memory = in_ECX + -2;
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar4 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar4 == 0) {
        piStack_118 = (int *)0x59a240;
        FID_conflict__free(_Memory);
      }
    }
    local_8 = 0xd;
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 0) {
        piStack_118 = (int *)0x59a27d;
        FID_conflict__free(piVar3);
      }
    }
    if (piVar5 != (int *)0x0) {
      piStack_118 = (int *)0x59a28d;
      (**(code **)(*piVar5 + 0x28))();
      piVar3 = (int *)0xffffffff;
      if ((undefined4 *)piVar5[3] != in_ECX) {
        if ((undefined4 *)piVar5[3] == (undefined4 *)0x0) {
          FUN_006cfd60();
        }
        else {
          piStack_118 = (int *)0x59a2a1;
          FUN_006cf2a0();
        }
        piVar5[3] = (int)in_ECX;
        if ((*(byte *)(piVar5 + 0x1a) & 2) != 0) {
          FUN_006ceba0();
        }
        if (((*(byte *)((int)piVar5 + 0x69) & 1) == 0) &&
           (piVar3 = (int *)in_ECX[0xc], 0 < (int)piVar3)) {
          do {
            if ((*(byte *)(*(int *)(in_ECX[10] + -4 + (int)piVar3 * 4) + 0x69) & 1) == 0) break;
            piVar3 = (int *)((int)piVar3 + -1);
          } while (0 < (int)piVar3);
        }
        piStack_118 = piVar3;
        FUN_00410380();
        FUN_006cedf0();
        FUN_006cef00();
      }
    }
    iVar4 = in_ECX[0x4f];
    iVar8 = iVar4 + 1;
    if ((int)in_ECX[0x4e] < iVar8) {
      if (iVar8 < 0) {
        iVar8 = iVar4 + 2;
      }
      uVar12 = iVar4 + 9 + (iVar8 >> 1) & 0xfffffff8;
      if (in_ECX[0x4e] != uVar12) {
        if ((int)uVar12 < 1) {
          piStack_118 = (int *)0x59a362;
          FID_conflict__free((void *)in_ECX[0x4d]);
          in_ECX[0x4d] = 0;
        }
        else {
          piStack_118 = (int *)in_ECX[0x4d];
          if (piStack_118 == (int *)0x0) {
            piStack_118 = (int *)0x59a33b;
            uVar6 = FUN_004c554b();
            in_ECX[0x4d] = uVar6;
          }
          else {
            uVar6 = FUN_004c553b();
            in_ECX[0x4d] = uVar6;
          }
        }
        in_ECX[0x4e] = uVar12;
      }
    }
    iVar4 = in_ECX[0x4f];
    in_ECX[0x4f] = iVar4 + 1;
    *(int **)(in_ECX[0x4d] + iVar4 * 4) = piVar5;
    local_6c = local_6c + 1;
    local_70 = local_70 + -1;
    if (local_70 == 0) {
      piStack_118 = (int *)&stack0xfffffeec;
      local_8._0_1_ = 0x16;
      operator_new(0x28);
      piStack_118 = (int *)FUN_00468a40(0);
      if (piStack_118 != (int *)0x0) {
        LOCK();
        piStack_118[1] = piStack_118[1] + 1;
        UNLOCK();
      }
      local_8 = CONCAT31(local_8._1_3_,0xd);
      puVar7 = (undefined4 *)FUN_0057fbe0();
      iVar4 = 0;
      uVar6 = in_ECX[0x50];
      in_ECX[0x50] = *puVar7;
      *puVar7 = uVar6;
      in_ECX[0x51] = puVar7[1];
      in_ECX[0x52] = puVar7[2];
      in_ECX[0x53] = puVar7[3];
      in_ECX[0x54] = puVar7[4];
      if (0 < (int)in_ECX[0x57]) {
        iVar8 = 0;
        do {
          puVar2 = *(undefined4 **)(in_ECX[0x55] + 8 + iVar8);
          if (puVar2 != (undefined4 *)0x0) {
            LOCK();
            piVar3 = puVar2 + 1;
            iVar1 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              piStack_118 = (int *)0x59a44f;
              (**(code **)*puVar2)();
            }
          }
          iVar4 = iVar4 + 1;
          iVar8 = iVar8 + 0x10;
        } while (iVar4 < (int)in_ECX[0x57]);
      }
      iVar4 = 0;
      uVar6 = in_ECX[0x55];
      in_ECX[0x55] = puVar7[5];
      puVar7[5] = uVar6;
      in_ECX[0x56] = puVar7[6];
      in_ECX[0x57] = puVar7[7];
      puVar7[7] = 0;
      if (0 < local_dc) {
        iVar8 = 0;
        do {
          puVar7 = *(undefined4 **)((int)local_e4 + iVar8 + 8);
          if (puVar7 != (undefined4 *)0x0) {
            LOCK();
            piVar3 = puVar7 + 1;
            iVar1 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (iVar1 == 1) {
              piStack_118 = (int *)0x59a4be;
              (**(code **)*puVar7)();
            }
          }
          iVar4 = iVar4 + 1;
          iVar8 = iVar8 + 0x10;
        } while (iVar4 < local_dc);
      }
      piStack_118 = (int *)0x59a4db;
      FID_conflict__free(local_e4);
      piVar3 = (int *)(local_f8 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          piStack_118 = (int *)0x59a501;
          FID_conflict__free(piVar3);
        }
      }
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  } while( true );
}

