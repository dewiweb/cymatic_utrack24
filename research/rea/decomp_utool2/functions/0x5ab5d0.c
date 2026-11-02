// rea decompile_all
// name: FUN_005ab5d0
// address: 0x5ab5d0
// body: available
// range: 0x5ab5d0-0x5ab9a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005ab5d0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int in_ECX;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  bool bVar13;
  undefined4 uVar14;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int *local_2c;
  char local_25;
  undefined **local_24 [2];
  int local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00717e77;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = param_1;
  iVar2 = *(int *)(in_ECX + 0x11e8);
  iVar3 = *(int *)(in_ECX + 0x1c0);
  iVar4 = *(int *)(in_ECX + 0x28);
  local_38 = in_ECX;
  cVar5 = FUN_005b0600(local_14);
  local_25 = cVar5 == '\0';
  local_3c = in_ECX + 0x1104;
  FUN_004f98b0();
  uVar11 = 0;
  if (0 < local_2c[2]) {
    bVar13 = local_2c[2] != 0;
    piVar9 = local_2c;
    do {
      if (bVar13) {
        iVar8 = *(int *)(*piVar9 + uVar11 * 4);
      }
      else {
        iVar8 = 0;
      }
      if (*(char *)(iVar8 + 8) != '\0') {
        puVar7 = operator_new(0xe0);
        local_8 = 0;
        if (uVar11 < (uint)piVar9[2]) {
          uVar14 = *(undefined4 *)(*piVar9 + uVar11 * 4);
        }
        else {
          uVar14 = 0;
        }
        FUN_006e3660(uVar14);
        *puVar7 = juce::ToggleButton::vftable;
        puVar7[0x1c] = juce::ToggleButton::vftable;
        *(undefined1 *)((int)puVar7 + 0xd9) = 1;
        if (uVar11 < (uint)piVar9[2]) {
          iVar8 = *(int *)(*piVar9 + uVar11 * 4);
        }
        else {
          iVar8 = 0;
        }
        local_24[0] = &PTR_vftable_00c7ed4c;
        local_1c[0] = *(int *)(iVar8 + 4);
        piVar9 = (int *)(local_1c[0] + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          *piVar9 = *piVar9 + 1;
          UNLOCK();
        }
        local_8 = 1;
        iVar8 = *(int *)ThreadLocalStoragePointer;
        if ((*(int *)(iVar8 + 4) < DAT_00cfff24) &&
           (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061fa00(&local_30,"DRIVE");
        local_8 = CONCAT31(local_8._1_3_,2);
        FUN_00637060(&local_30,local_24);
        piVar9 = (int *)(local_30 + -8);
        if (piVar9 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar9;
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar9);
          }
        }
        local_8 = 0xffffffff;
        (**(code **)(*local_24[0] + 0x54))(local_1c);
        FUN_006e9790(puVar7[4],puVar7[5],200,0x14);
        uVar10 = -(uint)(local_38 != 0x74) & local_38 - 4U;
        if (uVar10 != 0) {
          FUN_004097d0(uVar10);
        }
        *(undefined1 *)((int)puVar7 + 0xd9) = 1;
        FUN_004f9860(puVar7,1);
        if (local_25 == '\0') {
          if ((*(int *)(iVar8 + 4) < DAT_00cfff24) &&
             (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
            DAT_00cfff50 = 0;
            _DAT_00cfff54 = 0;
            _DAT_00cfff58 = 0;
            InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
            _DAT_00cfff74 = 0;
            _atexit((_func_4879 *)&LAB_0072a350);
            FUN_004c0352(&DAT_00cfff24);
          }
          FUN_0061fa00(&local_40,"DRIVE");
          iVar8 = local_40;
          local_8 = 3;
          piVar12 = (int *)puVar7[0x16];
          piVar9 = piVar12 + puVar7[0x18] * 6;
          for (; (piVar12 != piVar9 && (*piVar12 != local_40)); piVar12 = piVar12 + 6) {
          }
          FUN_006318f0(&local_34);
          uVar14 = 0;
          local_8 = CONCAT31(local_8._1_3_,4);
          uVar6 = FUN_005b0530(0);
          FUN_006e5380(uVar6,uVar14);
          piVar9 = (int *)(local_34 + -8);
          if (piVar9 != &DAT_00bfe124) {
            LOCK();
            iVar1 = *piVar9;
            *piVar9 = *piVar9 + -1;
            UNLOCK();
            if (iVar1 == 0) {
              FID_conflict__free(piVar9);
            }
          }
          piVar12 = (int *)(iVar8 + -8);
          local_8 = 0xffffffff;
          piVar9 = local_2c;
          if (piVar12 != &DAT_00bfe124) {
            LOCK();
            iVar8 = *piVar12;
            *piVar12 = *piVar12 + -1;
            UNLOCK();
            if (iVar8 == 0) {
              FID_conflict__free(piVar12);
              piVar9 = local_2c;
            }
          }
        }
        else {
          FUN_006e5380(1,0);
          piVar9 = local_2c;
        }
      }
      uVar11 = uVar11 + 1;
      bVar13 = uVar11 < (uint)piVar9[2];
      in_ECX = local_38;
    } while ((int)uVar11 < piVar9[2]);
  }
  FUN_006e9790(*(undefined4 *)(in_ECX + 0x1114),*(undefined4 *)(in_ECX + 0x1118),
               *(undefined4 *)(in_ECX + 0x111c),*(undefined4 *)(in_ECX + 0x1120));
  FUN_006e9790(*(undefined4 *)(in_ECX + -100),*(undefined4 *)(in_ECX + -0x60),
               *(undefined4 *)(in_ECX + -0x5c),
               *(int *)(in_ECX + 0x1120) + iVar2 + iVar3 + iVar4 + 0x8c);
  (**(code **)(*(int *)(in_ECX + -0x74) + 0x84))();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

