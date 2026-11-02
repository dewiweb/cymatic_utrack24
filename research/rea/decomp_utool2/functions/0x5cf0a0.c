// rea decompile_all
// name: FUN_005cf0a0
// address: 0x5cf0a0
// body: available
// range: 0x5cf0a0-0x5cf31c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005cf0a0(int *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int in_ECX;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined8 local_6c;
  int local_64;
  void *local_60;
  undefined1 local_40;
  void *local_3c;
  undefined1 local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071b442;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_7c = 0;
  local_14 = uVar3;
  if (0 < *(int *)(in_ECX + 0x24)) {
    do {
      iVar6 = *param_1;
      iVar5 = iVar6;
      if (*(int *)(*(int *)(*(int *)(in_ECX + 0x1c) + local_7c * 4) + 4) == iVar6) {
LAB_005cf128:
        if (*(int *)(in_ECX + 0xb0) == iVar6) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_00448730(*(undefined4 *)(in_ECX + 0xb0),iVar6);
        }
        if (iVar6 != 0) {
          if (*(int **)(in_ECX + 0x98) != (int *)0x0) {
            (**(code **)(**(int **)(in_ECX + 0x98) + 0x28))();
            puVar1 = *(undefined4 **)(in_ECX + 0x98);
            if (puVar1 != (undefined4 *)0x0) {
              *(undefined4 *)(in_ECX + 0x98) = 0;
              (**(code **)*puVar1)(1);
            }
            Sleep(0x5dc);
          }
          piVar7 = (int *)(*param_1 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            *piVar7 = *piVar7 + 1;
            UNLOCK();
          }
          LOCK();
          iVar6 = *(int *)(in_ECX + 0xb0);
          *(int *)(in_ECX + 0xb0) = *param_1;
          UNLOCK();
          piVar7 = (int *)(iVar6 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar7);
            }
          }
          piVar7 = *(int **)(*(int *)(in_ECX + 0x28) + local_7c * 4);
          local_74 = *piVar7;
          piVar8 = (int *)(local_74 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            *piVar8 = *piVar8 + 1;
            UNLOCK();
          }
          local_70 = piVar7[1];
          piVar8 = (int *)(local_70 + -8);
          if (piVar8 != &DAT_00bfe124) {
            LOCK();
            *piVar8 = *piVar8 + 1;
            UNLOCK();
          }
          local_6c = *(undefined8 *)(piVar7 + 2);
          local_64 = piVar7[4];
          FUN_006375e0(piVar7 + 5);
          local_40 = (undefined1)piVar7[0xd];
          FUN_006375e0(piVar7 + 0xe);
          local_1c = (undefined1)piVar7[0x16];
          local_8 = 0;
          FUN_005ccb20(&local_74);
          FUN_005cf320(&local_78,&local_74,1);
          piVar7 = (int *)(local_78 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar7);
            }
          }
          if (0 < *(int *)(in_ECX + 0x18)) {
            piVar7 = (int *)(*(int *)(in_ECX + 8) + 0xc);
            LOCK();
            iVar6 = *piVar7;
            if (iVar6 == 0) {
              *piVar7 = 1;
              iVar6 = 0;
            }
            UNLOCK();
            if ((iVar6 == 0) && (cVar2 = FUN_0063e270(), cVar2 == '\0')) {
              LOCK();
              *(undefined4 *)(*(int *)(in_ECX + 8) + 0xc) = 0;
              UNLOCK();
            }
          }
          FID_conflict__free(local_3c);
          FID_conflict__free(local_60);
          piVar7 = (int *)(local_70 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar7);
            }
          }
          piVar7 = (int *)(local_74 + -8);
          if (piVar7 != &DAT_00bfe124) {
            LOCK();
            iVar6 = *piVar7;
            *piVar7 = *piVar7 + -1;
            UNLOCK();
            if (iVar6 == 0) {
              FID_conflict__free(piVar7);
            }
          }
          break;
        }
      }
      else {
        do {
          local_78 = iVar5;
          iVar4 = FUN_00443260(uVar3);
          iVar5 = FUN_00443260();
          if ((iVar4 - iVar5 != 0) &&
             (iVar5 = (iVar4 - iVar5 >> 0x1f & 0xfffffffeU) + 1, iVar5 != 0)) goto LAB_005cf121;
          iVar5 = local_78;
        } while (iVar4 != 0);
        iVar5 = 0;
LAB_005cf121:
        if (iVar5 == 0) goto LAB_005cf128;
      }
      local_7c = local_7c + 1;
    } while (local_7c < *(int *)(in_ECX + 0x24));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

