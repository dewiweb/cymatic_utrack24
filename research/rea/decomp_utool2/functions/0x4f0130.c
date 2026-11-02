// rea decompile_all
// name: FUN_004f0130
// address: 0x4f0130
// body: available
// range: 0x4f0130-0x4f04ad inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f0130(void)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *in_ECX;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int local_3c;
  undefined1 *local_38;
  int local_34;
  int *local_30;
  int local_2c;
  uint local_28;
  undefined **local_24 [2];
  uint local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00705b31;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = in_ECX;
  local_14 = uVar2;
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
  if (in_ECX[0x20] == 1) {
    if (in_ECX[0x20] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)in_ECX[0x1e];
    }
    iVar5 = *(int *)(iVar5 + 0x40);
    if (iVar5 < 0x1007) {
      if (iVar5 == 0x1006) {
        FUN_004ee7e0();
      }
      else if (iVar5 == 0x1003) {
        FUN_004eed20();
      }
      else if (iVar5 == 0x1004) {
        FUN_004ef3f0();
      }
    }
  }
  else {
    in_ECX[0x13c] = 0;
  }
  local_28 = 1;
  local_34 = 0x10;
  piVar8 = in_ECX;
  do {
    if ((piVar8[0x13c] & local_28) != 0) {
      piVar3 = operator_new(0xe0);
      local_38 = &DAT_00bfe12c;
      local_8 = 1;
      FUN_006e3660(&local_38);
      *piVar3 = (int)juce::TextButton::vftable;
      piVar3[0x1c] = (int)juce::TextButton::vftable;
      local_8 = 0xffffffff;
      uVar4 = FUN_00530670();
      local_8 = 2;
      FUN_006e54f0(uVar4);
      local_8 = 0xffffffff;
      piVar6 = (int *)(local_3c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      uVar4 = FUN_006c65e0(0x14);
      FUN_006e9790(piVar3[4],piVar3[5],uVar4,0x14);
      uVar2 = -(uint)(piVar8 != (int *)0x0) & (uint)(piVar8 + 0x1c);
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
      FUN_0061fa00(&local_2c,&DAT_00738d80);
      local_8 = CONCAT31(local_8._1_3_,4);
      FUN_00637060(&local_2c,local_24);
      piVar6 = (int *)(local_2c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar5 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar5 == 0) {
          FID_conflict__free(piVar6);
        }
      }
      local_8 = 0xffffffff;
      (**(code **)(*local_24[0] + 0x54))(local_1c);
      (**(code **)(*piVar3 + 0x28))(1);
      FUN_006e5050(piVar3,0xffffffff);
      iVar5 = in_ECX[0x13f];
      iVar7 = iVar5 + 1;
      if (in_ECX[0x13e] < iVar7) {
        if (iVar7 < 0) {
          iVar7 = iVar5 + 2;
        }
        uVar2 = iVar5 + 9 + (iVar7 >> 1) & 0xfffffff8;
        piVar8 = local_30;
        if (in_ECX[0x13e] != uVar2) {
          if ((int)uVar2 < 1) {
            FID_conflict__free((void *)*piVar1);
            *piVar1 = 0;
          }
          else if (*piVar1 == 0) {
            iVar5 = FUN_004c554b();
            *piVar1 = iVar5;
          }
          else {
            iVar5 = FUN_004c553b(*piVar1,uVar2 * 4);
            *piVar1 = iVar5;
          }
          in_ECX[0x13e] = uVar2;
          piVar8 = local_30;
        }
      }
      iVar5 = in_ECX[0x13f];
      in_ECX[0x13f] = iVar5 + 1;
      *(int **)(*piVar1 + iVar5 * 4) = piVar3;
    }
    local_28 = local_28 * 2;
    local_34 = local_34 + -1;
  } while (local_34 != 0);
  (**(code **)(*piVar8 + 0x84))();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

