// rea decompile_all
// name: FUN_004eade0
// address: 0x4eade0
// body: available
// range: 0x4eade0-0x4eb12f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eade0(int param_1,int param_2,undefined4 param_3,char param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  int iVar9;
  int in_ECX;
  int *piVar10;
  undefined4 uVar11;
  undefined1 **ppuVar12;
  undefined *puVar13;
  undefined1 *local_2c;
  char local_25;
  undefined **local_24 [2];
  int local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704ec0;
  local_10 = ExceptionList;
  uVar4 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar4;
  piVar5 = operator_new(0xe0);
  local_2c = &DAT_00bfe12c;
  local_8 = 1;
  FUN_006e3660(&local_2c);
  *piVar5 = (int)juce::ToggleButton::vftable;
  piVar5[0x1c] = (int)juce::ToggleButton::vftable;
  *(undefined1 *)((int)piVar5 + 0xd9) = 1;
  local_8 = 0xffffffff;
  FUN_006e54f0(param_3);
  local_24[0] = &PTR_vftable_00c7ed44;
  local_1c[0] = param_1;
  ppuVar12 = &local_2c;
  local_8 = 2;
  puVar13 = &DAT_00738be4;
  FUN_0061f730(ppuVar12,&DAT_00738be4,uVar4);
  FUN_0061fa00(ppuVar12,puVar13);
  local_8 = CONCAT31(local_8._1_3_,3);
  FUN_00637060(&local_2c,local_24);
  piVar10 = (int *)(local_2c + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  (**(code **)(*local_24[0] + 0x54))(local_1c);
  local_24[0] = &PTR_vftable_00c7ed44;
  local_1c[0] = param_2;
  ppuVar12 = &local_2c;
  local_8 = 4;
  puVar13 = &DAT_00738be8;
  FUN_0061f730(ppuVar12,&DAT_00738be8);
  FUN_0061fa00(ppuVar12,puVar13);
  local_8 = CONCAT31(local_8._1_3_,5);
  FUN_00637060(&local_2c,local_24);
  piVar10 = (int *)(local_2c + -8);
  if (piVar10 != &DAT_00bfe124) {
    LOCK();
    iVar6 = *piVar10;
    *piVar10 = *piVar10 + -1;
    UNLOCK();
    if (iVar6 == 0) {
      FID_conflict__free(piVar10);
    }
  }
  local_8 = 0xffffffff;
  (**(code **)(*local_24[0] + 0x54))(local_1c);
  uVar4 = -(uint)(in_ECX != 0) & in_ECX + 0x70U;
  if (uVar4 != 0) {
    FUN_004097d0(uVar4);
  }
  FUN_006e9790(piVar5[4],piVar5[5],0x1e,0x1e);
  iVar6 = FUN_006e9580();
  (**(code **)(*(int *)(iVar6 + 4) + 0x18))(piVar5);
  FUN_006e6260(-(uint)(in_ECX != 0) & in_ECX + 0x74U);
  FUN_004096e0(param_1,piVar5);
  if (param_2 < 0) {
    (**(code **)(*piVar5 + 0x28))(1);
    uVar11 = 0;
  }
  else {
    uVar4 = 0;
    local_25 = '\0';
    if (0 < *(int *)(in_ECX + 0x30)) {
      iVar6 = *(int *)ThreadLocalStoragePointer;
      do {
        if ((*(int *)(iVar6 + 4) < DAT_00cfff24) &&
           (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061fa00(&local_2c,&DAT_00738bf0);
        puVar3 = local_2c;
        if (uVar4 < *(uint *)(in_ECX + 0x30)) {
          iVar9 = *(int *)(*(int *)(in_ECX + 0x28) + uVar4 * 4);
        }
        else {
          iVar9 = 0;
        }
        puVar7 = *(undefined4 **)(iVar9 + 0x58);
        puVar1 = puVar7 + *(int *)(iVar9 + 0x60) * 6;
        for (; puVar7 != puVar1; puVar7 = puVar7 + 6) {
          if ((undefined1 *)*puVar7 == local_2c) {
            ppuVar8 = (undefined **)(puVar7 + 2);
            if (ppuVar8 != (undefined **)0x0) goto LAB_004eb07e;
            break;
          }
        }
        ppuVar8 = &PTR_PTR_00c7ed58;
LAB_004eb07e:
        iVar9 = (**(code **)(*(int *)*ppuVar8 + 4))(ppuVar8 + 2);
        piVar10 = (int *)(puVar3 + -8);
        if (piVar10 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar10;
          *piVar10 = *piVar10 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar10);
          }
        }
        if (iVar9 == param_2) {
          if (param_4 != '\0') {
            (**(code **)(*piVar5 + 0x28))(1);
          }
          FUN_006e5050(piVar5,uVar4);
          local_25 = '\x01';
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < *(int *)(in_ECX + 0x30));
      if (local_25 != '\0') goto LAB_004eb112;
    }
    if (param_4 != '\0') {
      (**(code **)(*piVar5 + 0x28))(1);
    }
    uVar11 = 0xffffffff;
  }
  FUN_006e5050(piVar5,uVar11);
LAB_004eb112:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

