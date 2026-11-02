// rea decompile_all
// name: FUN_00593f50
// address: 0x593f50
// body: available
// range: 0x593f50-0x594184 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00593f50(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int *_Memory;
  int *piVar5;
  uint uVar6;
  bool bVar7;
  void *local_48 [2];
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  undefined4 *local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00714b5c;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_3c = in_ECX + 0x1a30;
  local_1c = in_ECX;
  FUN_00517cc0(local_48);
  local_8 = 0;
  uVar4 = 0;
  uVar6 = 0xffffffff;
  if (0 < (int)local_40) {
    bVar7 = local_40 != 0;
    do {
      if (bVar7) {
        iVar3 = *(int *)((int)local_48[0] + uVar4 * 4);
      }
      else {
        iVar3 = 0;
      }
      uVar6 = uVar4;
      if (iVar3 == *(int *)(in_ECX + 0x2718)) break;
      uVar4 = uVar4 + 1;
      bVar7 = uVar4 < local_40;
      uVar6 = 0xffffffff;
    } while ((int)uVar4 < (int)local_40);
  }
  *(undefined4 *)(in_ECX + 0x2718) = 0;
  local_18 = 0;
  if (local_40 != 0xffffffff && -1 < (int)(local_40 + 1)) {
    local_20 = in_ECX + 0x98;
    local_28 = in_ECX + 0x19d0;
    local_2c = in_ECX + 0x2018;
    local_34 = uVar6 + 1;
    do {
      local_38 = (local_34 + local_18) % (int)local_40;
      if (local_38 < local_40) {
        piVar5 = *(int **)((int)local_48[0] + local_38 * 4);
      }
      else {
        piVar5 = (int *)0x0;
      }
      uVar2 = FUN_00592010(&local_24);
      local_8._0_1_ = 1;
      FUN_0051ba00(&local_14,uVar2);
      local_8._0_1_ = 3;
      _Memory = (int *)(local_24 + -8);
      if (_Memory != &DAT_00bfe124) {
        LOCK();
        iVar3 = *_Memory;
        *_Memory = *_Memory + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(_Memory);
        }
      }
      FUN_00550e70(&local_30,&local_14);
      local_8 = CONCAT31(local_8._1_3_,4);
      iVar3 = *piVar5;
      uVar2 = FUN_006e85c0();
      puVar1 = local_30;
      iVar3 = (**(code **)(iVar3 + 0x88))(*(undefined4 *)(local_1c + 0x2714),local_30,uVar2);
      if (iVar3 != 0) {
        if (local_38 < local_40) {
          uVar2 = *(undefined4 *)((int)local_48[0] + local_38 * 4);
        }
        else {
          uVar2 = 0;
        }
        *(undefined4 *)(local_1c + 0x2718) = uVar2;
        FUN_006dff00(1,1,local_1c);
        FUN_006e08e0(piVar5);
        if (puVar1 != (undefined4 *)0x0) {
          LOCK();
          piVar5 = puVar1 + 1;
          iVar3 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)*puVar1)(1);
          }
        }
        piVar5 = (int *)(local_14 + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar3 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar3 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        break;
      }
      if (puVar1 != (undefined4 *)0x0) {
        LOCK();
        piVar5 = puVar1 + 1;
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*puVar1)(1);
        }
      }
      local_8 = local_8 & 0xffffff00;
      piVar5 = (int *)(local_14 + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar3 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar3 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      local_18 = local_18 + 1;
    } while (local_18 < (int)(local_40 + 1));
  }
  FID_conflict__free(local_48[0]);
  ExceptionList = local_10;
  return;
}

