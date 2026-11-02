// rea decompile_all
// name: FUN_00451670
// address: 0x451670
// body: available
// range: 0x451670-0x451952 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00451670(char *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *_Memory;
  undefined4 *in_EDX;
  int iVar7;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44 [4];
  undefined4 *local_40;
  char *local_3c;
  int *local_38;
  undefined1 local_30 [8];
  undefined **local_28;
  undefined4 *local_24;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006ffcc0;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_3c = param_1;
  local_24 = (undefined4 *)0x0;
  local_20 = 0;
  local_1c = 0;
  local_8 = 0;
  local_18 = uVar3;
  puVar4 = (undefined4 *)FUN_00628e40(&local_24);
  uVar1 = *(undefined4 *)param_1;
  *(undefined4 *)param_1 = *puVar4;
  *puVar4 = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 8) = puVar4[2];
  *(undefined4 *)(param_1 + 0xc) = puVar4[3];
  puVar4[3] = uVar2;
  puVar4[2] = uVar1;
  (**(code **)(*local_38 + 0x54))(local_30,uVar3);
  local_8 = 0xffffffff;
  puVar4 = local_24;
  iVar7 = local_1c;
  if (0 < local_1c) {
    do {
      (**(code **)(*(int *)*puVar4 + 0x54))(puVar4 + 2);
      iVar7 = iVar7 + -1;
      puVar4 = puVar4 + 4;
    } while (iVar7 != 0);
  }
  FID_conflict__free(local_24);
  piVar5 = (int *)(**(code **)(**(int **)local_3c + 0x1c))(local_3c + 8);
  do {
    FUN_0045c2c0(*in_EDX);
    *in_EDX = local_48;
    iVar7 = FUN_00443260();
    if (iVar7 == 0x5d) {
LAB_004518cf:
      FUN_0044eef0();
LAB_004518d9:
      ExceptionList = local_10;
      __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
      return;
    }
    if (iVar7 == 0) {
      FUN_00450f80(0);
      goto LAB_004518d9;
    }
    *in_EDX = local_48;
    iVar7 = piVar5[2] + 1;
    local_28 = &PTR_vftable_00c7ed38;
    if (piVar5[1] < iVar7) {
      iVar6 = iVar7;
      if (iVar7 < 0) {
        iVar6 = piVar5[2] + 2;
      }
      uVar3 = (iVar6 >> 1) + 8 + iVar7 & 0xfffffff8;
      if (piVar5[1] != uVar3) {
        if ((int)uVar3 < 1) {
          FID_conflict__free((void *)*piVar5);
          *piVar5 = 0;
        }
        else if (*piVar5 == 0) {
          iVar7 = FUN_004c554b();
          *piVar5 = iVar7;
        }
        else {
          iVar7 = FUN_004c553b(*piVar5,uVar3 << 4);
          *piVar5 = iVar7;
        }
        piVar5[1] = uVar3;
      }
    }
    iVar7 = piVar5[2];
    piVar5[2] = iVar7 + 1;
    puVar4 = (undefined4 *)(iVar7 * 0x10 + *piVar5);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = local_28;
      puVar4[2] = local_20;
      puVar4[3] = local_1c;
      local_28 = &PTR_vftable_00c7ed38;
    }
    (**(code **)(*local_28 + 0x54))(&local_20);
    FUN_00450c20(*piVar5 + piVar5[2] * 0x10 + -0x10);
    local_8 = 1;
    if (*local_3c != '\0') {
      *local_40 = local_3c;
      goto LAB_004518d9;
    }
    FUN_0045c2c0(*in_EDX);
    *in_EDX = local_4c;
    iVar7 = FUN_00443260();
    if (iVar7 != 0x2c) {
      if (iVar7 != 0x5d) {
        FUN_00450f80(local_44);
        piVar5 = (int *)(local_3c + -8);
        if (piVar5 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar5;
          *piVar5 = *piVar5 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar5);
          }
        }
        goto LAB_004518d9;
      }
      piVar5 = (int *)(local_3c + -8);
      if (piVar5 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar5;
        *piVar5 = *piVar5 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar5);
        }
      }
      goto LAB_004518cf;
    }
    local_8 = 0xffffffff;
    _Memory = (int *)(local_3c + -8);
    if (_Memory != &DAT_00bfe124) {
      LOCK();
      iVar7 = *_Memory;
      *_Memory = *_Memory + -1;
      UNLOCK();
      if (iVar7 == 0) {
        FID_conflict__free(_Memory);
      }
    }
  } while( true );
}

