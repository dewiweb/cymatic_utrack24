// rea decompile_all
// name: FUN_0044c3b0
// address: 0x44c3b0
// body: available
// range: 0x44c3b0-0x44c67c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0044c3b0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  void **ppvVar4;
  int *piVar5;
  undefined4 *puVar6;
  void **ppvVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_9c;
  int local_98;
  int local_94;
  int local_90;
  void *local_80 [8];
  undefined1 local_60;
  void *local_5c [8];
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
  puStack_c = &LAB_006ff89b;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_1 < *(uint *)(in_ECX + 0xd8)) {
    local_98 = in_ECX;
    FUN_005ced70(local_14);
    local_8 = 0;
    FUN_0040da30(*(int *)(in_ECX + 0xb0) + 0x38);
    if (*(char *)(in_ECX + 0xc4) == '\0') {
      if (*(int *)(in_ECX + 200) == 0) {
        uVar11 = *(undefined4 *)(in_ECX + 0xb8);
        local_60 = 0;
        uVar10 = *(undefined4 *)(in_ECX + 0xb4);
      }
      else {
        uVar11 = *(undefined4 *)(in_ECX + 0xc0);
        local_3c = 0;
        uVar10 = *(undefined4 *)(in_ECX + 0xbc);
      }
      FUN_0040d850(uVar10,uVar11);
    }
    else {
      local_34 = (undefined4 *)0x0;
      ppvVar7 = local_80;
      if (*(int *)(in_ECX + 200) != 0) {
        ppvVar7 = local_5c;
      }
      local_20 = 4;
      local_1c = -1;
      uVar8 = 0;
      local_18 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      uVar9 = 1;
      do {
        if (((int)ppvVar7[6] < (int)uVar8) || ((int)uVar8 < 0)) {
LAB_0044c48e:
          uVar2 = uVar8 + 1;
          if (((int)uVar2 <= (int)ppvVar7[6]) && (-1 < (int)uVar2)) {
            ppvVar4 = *ppvVar7;
            if (ppvVar4 == (void **)0x0) {
              ppvVar4 = ppvVar7 + 1;
            }
            uVar2 = (int)uVar2 >> 5;
            if (((uint)ppvVar4[uVar2] & uVar9 << 1) != 0) goto LAB_0044c4af;
          }
          uVar2 = uVar2 & 0xffffff00;
        }
        else {
          ppvVar4 = *ppvVar7;
          if (ppvVar4 == (void **)0x0) {
            ppvVar4 = ppvVar7 + 1;
          }
          uVar2 = (int)uVar8 >> 5;
          if (((uint)ppvVar4[uVar2] & uVar9) == 0) goto LAB_0044c48e;
LAB_0044c4af:
          uVar2 = CONCAT31((int3)(uVar2 >> 8),1);
        }
        FUN_00637400(uVar8 >> 1,uVar2);
        uVar8 = uVar8 + 2;
        uVar9 = uVar9 << 2 | uVar9 >> 0x1e;
      } while ((int)uVar8 < 0x100);
      if (*(int *)(local_98 + 200) == 0) {
        iVar1 = *(int *)(local_98 + 0xb8);
        local_60 = 0;
        iVar3 = *(int *)(local_98 + 0xb4);
      }
      else {
        iVar1 = *(int *)(local_98 + 0xc0);
        local_3c = 0;
        iVar3 = *(int *)(local_98 + 0xbc);
      }
      FUN_0040d850(iVar3 / 2,iVar1 / 2);
      uVar8 = 0;
      do {
        uVar9 = uVar8 >> 1;
        if (local_1c < (int)uVar9) {
LAB_0044c553:
          local_9c = 0;
        }
        else {
          local_9c = 1;
          puVar6 = &local_30;
          if (local_34 != (undefined4 *)0x0) {
            puVar6 = local_34;
          }
          if ((puVar6[(int)uVar9 >> 5] & 1 << ((byte)uVar9 & 0x1f)) == 0) goto LAB_0044c553;
        }
        FUN_00637400(uVar8,local_9c);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < 0x100);
      FID_conflict__free(local_34);
    }
    FUN_005cf320(&local_98,&local_94,1);
    piVar5 = (int *)(local_98 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    FID_conflict__free(local_5c[0]);
    FID_conflict__free(local_80[0]);
    piVar5 = (int *)(local_90 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar5);
      }
    }
    piVar5 = (int *)(local_94 + -8);
    if (piVar5 != &DAT_00bfe124) {
      LOCK();
      iVar3 = *piVar5;
      *piVar5 = *piVar5 + -1;
      UNLOCK();
      if (iVar3 == 0) {
        FID_conflict__free(piVar5);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

