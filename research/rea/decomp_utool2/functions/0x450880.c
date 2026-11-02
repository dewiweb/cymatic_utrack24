// rea decompile_all
// name: FUN_00450880
// address: 0x450880
// body: available
// range: 0x450880-0x450be3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00450880(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  void *pvVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 extraout_ECX;
  uint in_EDX;
  int local_40;
  void **local_3c;
  void *local_38 [4];
  void *local_28;
  undefined4 local_20;
  int local_1c;
  uint local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006ffc38;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_20 = 0;
  local_18 = in_EDX;
  FUN_0062cb00(0x100);
  local_8 = 0;
  do {
    uVar3 = FUN_00443260(uVar2);
    if (uVar3 == in_EDX) {
      puVar9 = (undefined4 *)FUN_00622880(&local_1c);
      puVar1 = param_2 + 2;
      (**(code **)(*(int *)*param_2 + 0x54))(puVar1);
      *param_2 = &PTR_vftable_00c7ed4c;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar9;
        *puVar9 = &DAT_00bfe12c;
      }
      piVar10 = (int *)(local_1c + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar10);
        }
      }
      uVar6 = local_14;
      FUN_0044eef0();
      if (((local_3c != local_38) && (local_3c != (void **)0x0)) &&
         (uVar6 = extraout_ECX, local_3c[1] != local_28)) {
        if (local_28 == (void *)0x0) {
          FID_conflict__free(*local_3c);
          *local_3c = (void *)0x0;
          local_3c[1] = (void *)0x0;
          uVar6 = local_14;
        }
        else if (*local_3c == (void *)0x0) {
          FID_conflict__free((void *)0x0);
          pvVar8 = (void *)FUN_004c554b(local_28);
          *local_3c = pvVar8;
          local_3c[1] = local_28;
          uVar6 = local_14;
        }
        else {
          pvVar8 = (void *)FUN_004c553b(*local_3c,local_28);
          *local_3c = pvVar8;
          local_3c[1] = local_28;
          uVar6 = local_14;
        }
      }
      FID_conflict__free(local_38[0]);
      piVar10 = (int *)(local_40 + -8);
      if (piVar10 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar10;
        *piVar10 = *piVar10 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar10);
        }
      }
      ExceptionList = local_10;
      return uVar6;
    }
    if (uVar3 == 0x5c) {
      uVar3 = FUN_00443260(uVar2);
      switch(uVar3) {
      case 0x61:
        uVar3 = 7;
        uVar6 = 1;
        break;
      case 0x62:
        uVar3 = 8;
        uVar6 = 1;
        break;
      case 0x66:
        uVar3 = 0xc;
        uVar6 = 1;
        break;
      case 0x6e:
        uVar3 = 10;
        uVar6 = 1;
        break;
      case 0x72:
        uVar3 = 0xd;
        uVar6 = 1;
        break;
      case 0x74:
        uVar3 = 9;
        uVar6 = 1;
        break;
      case 0x75:
        uVar3 = 0;
        iVar7 = 3;
        do {
          iVar4 = FUN_00443260();
          uVar5 = iVar4 - 0x30;
          if (9 < uVar5) {
            uVar5 = iVar4 - 0x61;
            if ((uVar5 < 6) || (uVar5 = iVar4 - 0x41, uVar5 < 6)) {
              uVar5 = uVar5 + 10;
              goto LAB_00450982;
            }
LAB_004509ea:
            FUN_00450f80(0);
            FUN_00622b80();
            uVar6 = local_14;
            goto LAB_00450a0d;
          }
LAB_00450982:
          if ((int)uVar5 < 0) goto LAB_004509ea;
          uVar3 = uVar3 * 0x10 + uVar5;
          iVar7 = iVar7 + -1;
          in_EDX = local_18;
        } while (-1 < iVar7);
      default:
        goto LAB_00450998;
      }
    }
    else {
LAB_00450998:
      if (uVar3 == 0) {
        FUN_00450f80(0);
        uVar6 = local_14;
        if (((local_3c != local_38) && (local_3c != (void **)0x0)) && (local_3c[1] != local_28)) {
          if (local_28 == (void *)0x0) {
            FID_conflict__free(*local_3c);
            *local_3c = (void *)0x0;
            local_3c[1] = (void *)0x0;
          }
          else if (*local_3c == (void *)0x0) {
            FID_conflict__free((void *)0x0);
            pvVar8 = (void *)FUN_004c554b(local_28);
            *local_3c = pvVar8;
            local_3c[1] = local_28;
          }
          else {
            pvVar8 = (void *)FUN_004c553b(*local_3c,local_28);
            *local_3c = pvVar8;
            local_3c[1] = local_28;
          }
        }
LAB_00450a0d:
        FID_conflict__free(local_38[0]);
        piVar10 = (int *)(local_40 + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar7 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar7 == 0) {
            FID_conflict__free(piVar10);
          }
        }
        ExceptionList = local_10;
        return uVar6;
      }
      uVar6 = 1;
      if (((0x7f < uVar3) && (uVar6 = 2, 0x7ff < uVar3)) && (uVar6 = 3, 0xffff < uVar3)) {
        uVar6 = 4;
      }
    }
    iVar7 = FUN_00622a60(uVar6);
    if (iVar7 != 0) {
      local_1c = iVar7;
      FUN_0044ecc0(uVar3);
    }
  } while( true );
}

