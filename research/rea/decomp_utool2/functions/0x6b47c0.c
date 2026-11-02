// rea decompile_all
// name: FUN_006b47c0
// address: 0x6b47c0
// body: available
// range: 0x6b47c0-0x6b4a70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b47c0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_ECX;
  int *piVar5;
  int *piVar6;
  undefined4 **ppuStack_64;
  undefined4 *puStack_60;
  undefined4 **ppuStack_5c;
  undefined4 *local_38;
  int local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00723cb6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_0063eab0();
  puVar3 = *(undefined4 **)(in_ECX + 0x18);
  piVar6 = (int *)(in_ECX + 0x18);
  *piVar6 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    LOCK();
    piVar5 = puVar3 + 1;
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      ppuStack_5c = (undefined4 **)0x6b481a;
      (**(code **)*puVar3)();
    }
  }
  local_2c = in_ECX + 0x1c;
  piVar5 = (int *)(*(int *)(in_ECX + 0x1c) + -8);
  if (piVar5 != &DAT_00bfe124) {
    LOCK();
    iVar1 = *piVar5;
    *piVar5 = *piVar5 + -1;
    UNLOCK();
    if (iVar1 == 0) {
      ppuStack_5c = (undefined4 **)0x6b4840;
      FID_conflict__free(piVar5);
    }
  }
  *(undefined1 **)(in_ECX + 0x1c) = &DAT_00bfe12c;
  FUN_006e6400(&ppuStack_64);
  FUN_006ce9f0(1);
  local_24 = in_ECX + 0x14;
  puVar3 = (undefined4 *)FUN_006358c0();
  local_8 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    local_28 = (int *)FUN_00671ef0();
    if (local_28 != (int *)0x0) {
      ppuStack_5c = &local_20;
      puStack_60 = (undefined4 *)0x6b48a2;
      piVar5 = (int *)(**(code **)(*local_28 + 0x10))();
      iVar1 = *piVar6;
      *piVar6 = *piVar5;
      *piVar5 = iVar1;
      if (local_20 != (undefined4 *)0x0) {
        LOCK();
        piVar5 = local_20 + 1;
        iVar1 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar1 == 1) {
          ppuStack_5c = (undefined4 **)0x6b48c6;
          (**(code **)*local_20)();
        }
      }
      if (*piVar6 != 0) {
        local_20 = (undefined4 *)0x0;
        if (*piVar6 != 0) {
          local_20 = *(undefined4 **)(*piVar6 + 0xc);
        }
        local_1c = 0;
        if (*piVar6 != 0) {
          local_1c = *(undefined4 *)(*piVar6 + 0x10);
        }
        local_18 = local_1c;
        local_14 = local_20;
        ppuStack_5c = (undefined4 **)FUN_00636a40();
        puStack_60 = (undefined4 *)0x6b4901;
        local_24 = FUN_00636d50();
        local_8._0_1_ = 1;
        ppuStack_5c = (undefined4 **)0x6b4917;
        (**(code **)(*local_28 + 4))();
        local_8._0_1_ = 2;
        ppuStack_5c = (undefined4 **)0x6b4928;
        FUN_00636a10();
        local_8 = CONCAT31(local_8._1_3_,3);
        ppuStack_5c = (undefined4 **)0x6b4935;
        FUN_00636ec0();
        ppuStack_5c = (undefined4 **)0x6b4947;
        FUN_00621830();
        ppuStack_5c = (undefined4 **)0x6b494f;
        FUN_00636ec0();
        ppuStack_5c = (undefined4 **)0x6b4961;
        FUN_00621830();
        FUN_0045d120();
        ppuStack_5c = (undefined4 **)0x6b497d;
        FUN_00621830();
        FUN_0045d120();
        ppuStack_5c = (undefined4 **)0x6b4999;
        FUN_00621830();
        ppuStack_5c = (undefined4 **)0x6b49a3;
        FUN_00636ec0();
        piVar6 = (int *)(local_30 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            ppuStack_5c = (undefined4 **)0x6b49c5;
            FID_conflict__free(piVar6);
          }
        }
        piVar6 = (int *)(local_34 + -8);
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            ppuStack_5c = (undefined4 **)0x6b49e8;
            FID_conflict__free(piVar6);
          }
        }
        local_8 = local_8 & 0xffffff00;
        piVar6 = local_38 + -2;
        if (piVar6 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            ppuStack_5c = (undefined4 **)0x6b4a0f;
            FID_conflict__free(piVar6);
          }
        }
        ppuStack_5c = &local_20;
        puStack_60 = (undefined4 *)0x6b4a22;
        FUN_006b4b90();
        ppuStack_64 = &local_38;
        ppuStack_5c = (undefined4 **)local_1c;
        puStack_60 = local_20;
        puVar4 = (undefined4 *)FUN_006735f0();
        uVar2 = *(undefined4 *)(in_ECX + 0x18);
        *(undefined4 *)(in_ECX + 0x18) = *puVar4;
        *puVar4 = uVar2;
        if (local_38 != (undefined4 *)0x0) {
          LOCK();
          piVar6 = local_38 + 1;
          iVar1 = *piVar6;
          *piVar6 = *piVar6 + -1;
          UNLOCK();
          if (iVar1 == 1) {
            ppuStack_5c = (undefined4 **)0x6b4a57;
            (**(code **)*local_38)();
          }
        }
      }
    }
    ppuStack_5c = (undefined4 **)0x6b4a5f;
    (**(code **)*puVar3)();
  }
  ExceptionList = local_10;
  return;
}

