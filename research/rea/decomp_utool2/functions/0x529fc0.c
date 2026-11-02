// rea decompile_all
// name: FUN_00529fc0
// address: 0x529fc0
// body: available
// range: 0x529fc0-0x52a43e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0052a0e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00529fc0(void)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  int *piVar6;
  int iVar7;
  int local_38;
  int local_34;
  int local_30;
  undefined1 *local_2c;
  uint local_28;
  undefined **local_24 [2];
  uint local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0070c236;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  if (in_ECX[0x141] != 0) {
    FID_conflict__free((void *)in_ECX[0x140]);
    in_ECX[0x140] = 0;
    in_ECX[0x141] = 0;
  }
  in_ECX[0x142] = 0;
  if (in_ECX[0x144] != 0) {
    FID_conflict__free((void *)in_ECX[0x143]);
    in_ECX[0x143] = 0;
    in_ECX[0x144] = 0;
  }
  in_ECX[0x145] = 0;
  FUN_006e4900(&PTR_DAT_00c7ed68,0);
  FUN_006e6350(uVar2);
  FUN_006e9790(in_ECX[0x5e],in_ECX[0x5f],in_ECX[0x60],100);
  piVar1 = in_ECX + 0x13d;
  FUN_00407fe0();
  if (in_ECX[0x13e] != 0) {
    FID_conflict__free((void *)*piVar1);
    *piVar1 = 0;
    in_ECX[0x13e] = 0;
  }
  in_ECX[0x13f] = 0;
  iVar7 = in_ECX[0x20];
  in_ECX[0x13c] = 0;
  if (iVar7 == 1) {
    iVar7 = *(int *)(*(int *)in_ECX[0x1e] + 0x40);
    if (iVar7 < 0x3005) {
      if (iVar7 == 0x3004) {
        FUN_00529860();
      }
      else if (iVar7 == 0x1003) {
        FUN_00527b30();
      }
      else if (iVar7 == 0x1006) {
        FUN_00527500();
      }
      else if (iVar7 == 0x2001) {
        FUN_00529c50();
      }
    }
    else if (iVar7 == 0x3007) {
      FUN_00528e40();
    }
    else if (iVar7 == 0x7002) {
      FUN_00529a60();
    }
    else if (iVar7 == 0x7005) {
      FUN_00529040();
    }
  }
  else if (1 < iVar7) {
    if (iVar7 == 0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *(int *)in_ECX[0x1e];
    }
    iVar7 = *(int *)(iVar7 + 0x40);
    if (iVar7 < 0x3005) {
      if (iVar7 == 0x3004) {
        FUN_00529230();
      }
      else if (iVar7 == 0x1003) {
        FUN_00529520();
      }
      else if (iVar7 == 0x1006) {
        FUN_005271d0();
      }
    }
    else if (iVar7 == 0x3007) {
      FUN_00526ee0();
    }
  }
  local_28 = 1;
  local_34 = 0x10;
  do {
    if ((in_ECX[0x13c] & local_28) != 0) {
      piVar3 = operator_new(0xe0);
      local_2c = &DAT_00bfe12c;
      local_8 = 1;
      FUN_006e3660(&local_2c);
      *piVar3 = (int)juce::TextButton::vftable;
      piVar3[0x1c] = (int)juce::TextButton::vftable;
      local_8 = 0xffffffff;
      uVar4 = FUN_0051bf80();
      local_8 = 2;
      FUN_006e54f0(uVar4);
      local_8 = 0xffffffff;
      piVar6 = (int *)(local_38 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      uVar4 = FUN_006c65e0(0x14);
      FUN_006e9790(piVar3[4],piVar3[5],uVar4,0x14);
      uVar2 = -(uint)(in_ECX != (int *)0x0) & (uint)(in_ECX + 0x1c);
      if (uVar2 != 0) {
        FUN_004097d0(uVar2);
      }
      local_24[0] = &PTR_vftable_00c7ed44;
      local_1c[0] = local_28;
      local_8 = 3;
      if ((*(int *)(*(int *)ThreadLocalStoragePointer + 4) < DAT_00cfff24) &&
         (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
        DAT_00cfff50 = 0;
        _DAT_00cfff54 = 0;
        _DAT_00cfff58 = 0;
        InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
        _DAT_00cfff74 = 0;
        _atexit((_func_4879 *)&LAB_0072a350);
        FUN_004c0352(&DAT_00cfff24);
      }
      FUN_0061fa00(&local_30,&DAT_0073b36c);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_00637060(&local_30,local_24);
      piVar6 = (int *)(local_30 + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar7 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar7 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_8 = 0xffffffff;
      (**(code **)(*local_24[0] + 0x54))(local_1c);
      (**(code **)(*piVar3 + 0x28))(1);
      FUN_006e5050(piVar3,0xffffffff);
      iVar7 = in_ECX[0x13f] + 1;
      if (in_ECX[0x13e] < iVar7) {
        iVar5 = iVar7;
        if (iVar7 < 0) {
          iVar5 = in_ECX[0x13f] + 2;
        }
        local_2c = (undefined1 *)((iVar5 >> 1) + 8 + iVar7 & 0xfffffff8);
        if ((undefined1 *)in_ECX[0x13e] != local_2c) {
          if ((int)local_2c < 1) {
            FID_conflict__free((void *)*piVar1);
            *piVar1 = 0;
          }
          else if (*piVar1 == 0) {
            iVar7 = FUN_004c554b();
            *piVar1 = iVar7;
          }
          else {
            iVar7 = FUN_004c553b(*piVar1,(int)local_2c << 2);
            *piVar1 = iVar7;
          }
          in_ECX[0x13e] = (int)local_2c;
        }
      }
      iVar7 = in_ECX[0x13f];
      in_ECX[0x13f] = iVar7 + 1;
      *(int **)(*piVar1 + iVar7 * 4) = piVar3;
    }
    local_28 = local_28 * 2;
    local_34 = local_34 + -1;
  } while (local_34 != 0);
  (**(code **)(*in_ECX + 0x84))();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

