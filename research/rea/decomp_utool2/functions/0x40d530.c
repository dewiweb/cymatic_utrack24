// rea decompile_all
// name: FUN_0040d530
// address: 0x40d530
// body: available
// range: 0x40d530-0x40d84c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0040d530(uint param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  int *piVar3;
  undefined1 *puVar4;
  int extraout_EDX;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_98;
  int local_94;
  int local_90;
  void *local_80;
  undefined1 *local_5c;
  undefined1 local_58 [20];
  uint local_44;
  undefined1 local_3c;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined1 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fc843;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 < *(uint *)(in_ECX + 0xcc)) {
    FUN_005ced70(local_14);
    local_8 = 0;
    FUN_0040da30(*(int *)(extraout_EDX + 0xb0) + 0x38);
    local_34 = (undefined4 *)0x0;
    local_20 = 4;
    local_1c = -1;
    local_18 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_8 = CONCAT31(local_8._1_3_,1);
    uVar6 = 0;
    uVar7 = 1;
    do {
      if (((int)local_44 < (int)uVar6) || ((int)uVar6 < 0)) {
LAB_0040d603:
        iVar8 = uVar6 + 1;
        if ((iVar8 <= (int)local_44) && (-1 < iVar8)) {
          puVar1 = local_58;
          if (local_5c != (undefined1 *)0x0) {
            puVar1 = local_5c;
          }
          if ((*(uint *)(puVar1 + (iVar8 >> 5) * 4) & uVar7 << 1) != 0) goto LAB_0040d622;
        }
        uVar2 = 0;
      }
      else {
        puVar1 = local_58;
        if (local_5c != (undefined1 *)0x0) {
          puVar1 = local_5c;
        }
        if ((*(uint *)(puVar1 + ((int)uVar6 >> 5) * 4) & uVar7) == 0) goto LAB_0040d603;
LAB_0040d622:
        uVar2 = 1;
      }
      FUN_00637400(uVar6 >> 1,uVar2);
      uVar6 = uVar6 + 2;
      uVar7 = uVar7 << 2 | uVar7 >> 0x1e;
    } while ((int)uVar6 < 0x100);
    local_3c = 0;
    FUN_0040d850(*(int *)(in_ECX + 0xb4) / 2,*(int *)(in_ECX + 0xb8) / 2);
    uVar7 = 0;
    puVar1 = local_5c;
    uVar6 = local_44;
    do {
      local_98 = uVar7 >> 1;
      iVar8 = (int)uVar7 >> 5;
      if (local_1c < (int)local_98) {
LAB_0040d7d3:
        if ((-1 < (int)uVar7) && ((int)uVar7 <= (int)uVar6)) {
          puVar4 = local_58;
          if (puVar1 != (undefined1 *)0x0) {
            puVar4 = puVar1;
          }
          *(uint *)(puVar4 + iVar8 * 4) = *(uint *)(puVar4 + iVar8 * 4) & ~(1 << (uVar7 & 0x1f));
          puVar1 = local_5c;
          uVar6 = local_44;
          if (uVar7 == local_44) {
            puVar4 = local_58;
            if (local_5c != (undefined1 *)0x0) {
              puVar4 = local_5c;
            }
            iVar8 = (int)local_44 >> 5;
            if (-1 < iVar8) {
LAB_0040d820:
              uVar6 = *(uint *)(puVar4 + iVar8 * 4);
              if (uVar6 == 0) goto code_r0x0040d827;
              local_98 = 0x1f;
              if (uVar6 != 0) {
                for (; uVar6 >> local_98 == 0; local_98 = local_98 - 1) {
                }
              }
              local_44 = iVar8 * 0x20 + local_98;
              uVar6 = local_44;
              goto LAB_0040d6f8;
            }
LAB_0040d82c:
            local_44 = 0xffffffff;
            uVar6 = 0xffffffff;
          }
        }
      }
      else {
        puVar5 = &local_30;
        if (local_34 != (undefined4 *)0x0) {
          puVar5 = local_34;
        }
        if ((puVar5[(int)local_98 >> 5] & 1 << ((byte)local_98 & 0x1f)) == 0) goto LAB_0040d7d3;
        if (-1 < (int)uVar7) {
          if ((int)uVar6 < (int)uVar7) {
            FUN_006264b0(iVar8 + 1);
            local_44 = uVar7;
            puVar1 = local_5c;
          }
          puVar4 = local_58;
          if (puVar1 != (undefined1 *)0x0) {
            puVar4 = puVar1;
          }
          *(uint *)(puVar4 + iVar8 * 4) = *(uint *)(puVar4 + iVar8 * 4) | 1 << (uVar7 & 0x1f);
          puVar1 = local_5c;
          uVar6 = local_44;
        }
      }
LAB_0040d6f8:
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 0x100);
    FUN_005cf320(&local_98,&local_94,1);
    piVar3 = (int *)(local_98 - 8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    FID_conflict__free(local_34);
    FID_conflict__free(local_5c);
    FID_conflict__free(local_80);
    piVar3 = (int *)(local_90 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar3);
      }
    }
    piVar3 = (int *)(local_94 + -8);
    if (piVar3 != &DAT_00bfe124) {
      LOCK();
      iVar8 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar8 == 0) {
        FID_conflict__free(piVar3);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
code_r0x0040d827:
  iVar8 = iVar8 + -1;
  if (iVar8 < 0) goto LAB_0040d82c;
  goto LAB_0040d820;
}

