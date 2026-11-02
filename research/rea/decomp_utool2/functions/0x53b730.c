// rea decompile_all
// name: FUN_0053b730
// address: 0x53b730
// body: available
// range: 0x53b730-0x53baed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0053b730(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  bool bVar9;
  int *piStack_40;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070df90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*(int *)(in_ECX + 0x24) < (int)param_4) {
    *(uint *)(in_ECX + 0x24) = param_4;
  }
  param_4 = 0;
  if (0 < *(int *)(param_1 + 0x5c)) {
    bVar9 = *(int *)(param_1 + 0x5c) != 0;
    do {
      if (bVar9) {
        if (*(int *)(*(int *)(param_1 + 0x54) + param_4 * 4) != 0) {
          if (param_4 < *(uint *)(param_1 + 0x5c)) {
            iVar3 = *(int *)(*(int *)(param_1 + 0x54) + param_4 * 4);
          }
          else {
            iVar3 = 0;
          }
          piVar7 = (int *)0x0;
          local_14 = (int *)0xffffffff;
          if (0 < *(int *)(in_ECX + 0x5c)) {
            bVar9 = *(int *)(in_ECX + 0x5c) != 0;
            do {
              if (bVar9) {
                iVar2 = *(int *)(*(int *)(in_ECX + 0x54) + (int)piVar7 * 4);
              }
              else {
                iVar2 = 0;
              }
              if (*(int *)(iVar2 + 8) == *(int *)(iVar3 + 8)) {
                local_14 = (int *)&stack0xffffffc4;
                if (param_4 < *(uint *)(param_1 + 0x5c)) {
                  piStack_40 = *(int **)(*(int *)(param_1 + 0x54) + param_4 * 4);
                }
                else {
                  piStack_40 = (int *)0x0;
                }
                FUN_00411300(&piStack_40);
                FUN_00637730();
                piStack_40 = (int *)0x53b840;
                FUN_006377c0();
                local_8 = 0;
                piStack_40 = &local_18;
                piVar5 = (int *)FUN_00635a10();
                if (piVar7 < *(int **)(in_ECX + 0x5c)) {
                  iVar3 = *(int *)(*(int *)(in_ECX + 0x54) + (int)piVar7 * 4);
                }
                else {
                  iVar3 = 0;
                }
                piVar7 = (int *)(*piVar5 + -8);
                if (piVar7 != &DAT_00bfe124) {
                  LOCK();
                  *piVar7 = *piVar7 + 1;
                  UNLOCK();
                }
                LOCK();
                iVar2 = *(int *)(iVar3 + 0xc);
                *(int *)(iVar3 + 0xc) = *piVar5;
                UNLOCK();
                piVar7 = (int *)(iVar2 + -8);
                if (piVar7 != &DAT_00bfe124) {
                  LOCK();
                  iVar2 = *piVar7;
                  *piVar7 = *piVar7 + -1;
                  UNLOCK();
                  if (iVar2 == 0) {
                    piStack_40 = (int *)0x53b89f;
                    FID_conflict__free(piVar7);
                  }
                }
                puVar1 = *(undefined4 **)(iVar3 + 0x10);
                if (puVar1 != (undefined4 *)0x0) {
                  *(undefined4 *)(iVar3 + 0x10) = 0;
                  LOCK();
                  piVar7 = puVar1 + 1;
                  iVar2 = *piVar7;
                  *piVar7 = *piVar7 + -1;
                  UNLOCK();
                  if (iVar2 == 1) {
                    piStack_40 = (int *)0x53b8c6;
                    (**(code **)*puVar1)();
                  }
                }
                *(undefined4 *)(iVar3 + 0x18) = 0;
                *(undefined4 *)(iVar3 + 0x1c) = 0;
                *(undefined4 *)(iVar3 + 0x20) = 6;
                piVar7 = (int *)(local_18 + -8);
                if (piVar7 != &DAT_00bfe124) {
                  LOCK();
                  iVar3 = *piVar7;
                  *piVar7 = *piVar7 + -1;
                  UNLOCK();
                  if (iVar3 == 0) {
                    piStack_40 = (int *)0x53b8fc;
                    FID_conflict__free(piVar7);
                  }
                }
                local_8 = 0xffffffff;
                piVar7 = (int *)(local_1c + -8);
                if (piVar7 != &DAT_00bfe124) {
                  LOCK();
                  iVar3 = *piVar7;
                  *piVar7 = *piVar7 + -1;
                  UNLOCK();
                  if (iVar3 == 0) {
                    piStack_40 = (int *)0x53b92f;
                    FID_conflict__free(piVar7);
                  }
                }
                goto LAB_0053bacd;
              }
              if (piVar7 < *(int **)(in_ECX + 0x5c)) {
                iVar2 = *(int *)(*(int *)(in_ECX + 0x54) + (int)piVar7 * 4);
              }
              else {
                iVar2 = 0;
              }
              if (*(int *)(iVar3 + 8) < *(int *)(iVar2 + 8)) {
                local_14 = piVar7;
                if ((int)piVar7 < -1) goto LAB_0053bacd;
                break;
              }
              piVar7 = (int *)((int)piVar7 + 1);
              bVar9 = piVar7 < *(int **)(in_ECX + 0x5c);
            } while ((int)piVar7 < (int)*(int **)(in_ECX + 0x5c));
          }
          iVar3 = FUN_0053b3a0();
          FUN_00411300(&piStack_40);
          FUN_00637730();
          piStack_40 = (int *)0x53b965;
          FUN_006377c0();
          local_8 = 1;
          piStack_40 = &local_20;
          piVar7 = (int *)FUN_00635a10();
          piVar5 = (int *)(*piVar7 + -8);
          if (piVar5 != &DAT_00bfe124) {
            LOCK();
            *piVar5 = *piVar5 + 1;
            UNLOCK();
          }
          LOCK();
          iVar2 = *(int *)(iVar3 + 0xc);
          *(int *)(iVar3 + 0xc) = *piVar7;
          UNLOCK();
          piVar7 = (int *)(iVar2 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar2 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar2 == 0) {
              piStack_40 = (int *)0x53b9b4;
              FID_conflict__free(piVar7);
            }
          }
          puVar1 = *(undefined4 **)(iVar3 + 0x10);
          if (puVar1 != (undefined4 *)0x0) {
            *(undefined4 *)(iVar3 + 0x10) = 0;
            LOCK();
            piVar7 = puVar1 + 1;
            iVar2 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              piStack_40 = (int *)0x53b9db;
              (**(code **)*puVar1)();
            }
          }
          piVar7 = (int *)(local_20 + -8);
          *(undefined4 *)(iVar3 + 0x18) = 0;
          *(undefined4 *)(iVar3 + 0x1c) = 0;
          *(undefined4 *)(iVar3 + 0x20) = 6;
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar2 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar2 == 0) {
              piStack_40 = (int *)0x53ba11;
              FID_conflict__free(piVar7);
            }
          }
          local_8 = 0xffffffff;
          piVar7 = (int *)(local_24 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar2 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar2 == 0) {
              piStack_40 = (int *)0x53ba3c;
              FID_conflict__free(piVar7);
            }
          }
          if (local_14 == (int *)0xffffffff) {
            iVar2 = *(int *)(in_ECX + 0x5c);
            iVar6 = iVar2 + 1;
            if ((int)*(uint *)(in_ECX + 0x58) < iVar6) {
              if (iVar6 < 0) {
                iVar6 = iVar2 + 2;
              }
              uVar8 = iVar2 + 9 + (iVar6 >> 1) & 0xfffffff8;
              if (*(uint *)(in_ECX + 0x58) != uVar8) {
                if ((int)uVar8 < 1) {
                  piStack_40 = (int *)0x53ba9f;
                  FID_conflict__free(*(void **)(in_ECX + 0x54));
                  *(undefined4 *)(in_ECX + 0x54) = 0;
                }
                else {
                  piStack_40 = *(int **)(in_ECX + 0x54);
                  if (piStack_40 == (int *)0x0) {
                    piStack_40 = (int *)0x53ba81;
                    uVar4 = FUN_004c554b();
                    *(undefined4 *)(in_ECX + 0x54) = uVar4;
                  }
                  else {
                    uVar4 = FUN_004c553b();
                    *(undefined4 *)(in_ECX + 0x54) = uVar4;
                  }
                }
                *(uint *)(in_ECX + 0x58) = uVar8;
              }
            }
            iVar2 = *(int *)(in_ECX + 0x5c);
            *(int *)(in_ECX + 0x5c) = iVar2 + 1;
            *(int *)(*(int *)(in_ECX + 0x54) + iVar2 * 4) = iVar3;
          }
          else {
            piStack_40 = local_14;
            FUN_00411110();
          }
        }
      }
LAB_0053bacd:
      param_4 = param_4 + 1;
      bVar9 = param_4 < *(uint *)(param_1 + 0x5c);
    } while ((int)param_4 < (int)*(uint *)(param_1 + 0x5c));
  }
  ExceptionList = local_10;
  return;
}

