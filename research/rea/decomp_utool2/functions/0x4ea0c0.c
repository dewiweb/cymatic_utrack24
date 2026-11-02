// rea decompile_all
// name: FUN_004ea0c0
// address: 0x4ea0c0
// body: available
// range: 0x4ea0c0-0x4ea482 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ea0c0(void)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined **ppuVar9;
  uint uVar10;
  undefined4 *puVar11;
  int in_ECX;
  int *piVar12;
  int *piVar13;
  uint uVar14;
  bool bVar15;
  int local_38;
  int local_34;
  uint local_30;
  int local_2c;
  int local_28;
  int *local_24 [2];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00704d86;
  local_10 = ExceptionList;
  uVar6 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 0;
  local_14 = uVar6;
  if (0 < *(int *)(in_ECX + 0x30)) {
    bVar15 = *(int *)(in_ECX + 0x30) != 0;
    local_28 = in_ECX;
    do {
      if (bVar15) {
        uVar7 = *(undefined4 *)(*(int *)(local_28 + 0x28) + local_30 * 4);
      }
      else {
        uVar7 = 0;
      }
      iVar8 = FUN_006f6dd6(uVar7,0,&juce::Component::RTTI_Type_Descriptor,
                           &juce::ToggleButton::RTTI_Type_Descriptor,0,uVar6);
      if (iVar8 != 0) {
        iVar2 = *(int *)ThreadLocalStoragePointer;
        if ((*(int *)(iVar2 + 4) < DAT_00cfff24) &&
           (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
          DAT_00cfff50 = 0;
          _DAT_00cfff54 = 0;
          _DAT_00cfff58 = 0;
          InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
          _DAT_00cfff74 = 0;
          _atexit((_func_4879 *)&LAB_0072a350);
          FUN_004c0352(&DAT_00cfff24);
        }
        FUN_0061fa00(&local_34,&DAT_00738c04);
        iVar1 = local_34;
        piVar12 = *(int **)(iVar8 + 0x58);
        piVar13 = piVar12 + *(int *)(iVar8 + 0x60) * 6;
        for (; piVar12 != piVar13; piVar12 = piVar12 + 6) {
          if (*piVar12 == local_34) {
            ppuVar9 = (undefined **)(piVar12 + 2);
            if (ppuVar9 != (undefined **)0x0) goto LAB_004ea1f0;
            break;
          }
        }
        ppuVar9 = &PTR_PTR_00c7ed58;
LAB_004ea1f0:
        uVar10 = (**(code **)(*(int *)*ppuVar9 + 4))(ppuVar9 + 2);
        piVar13 = (int *)(iVar1 + -8);
        if (piVar13 != &DAT_00bfe124) {
          LOCK();
          iVar1 = *piVar13;
          *piVar13 = *piVar13 + -1;
          UNLOCK();
          if (iVar1 == 0) {
            FID_conflict__free(piVar13);
          }
        }
        if (-1 < (int)uVar10) {
          if ((*(int *)(iVar2 + 4) < DAT_00cfff24) &&
             (FUN_004c0391(&DAT_00cfff24), DAT_00cfff24 == -1)) {
            DAT_00cfff50 = 0;
            _DAT_00cfff54 = 0;
            _DAT_00cfff58 = 0;
            InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_00cfff5c);
            _DAT_00cfff74 = 0;
            _atexit((_func_4879 *)&LAB_0072a350);
            FUN_004c0352(&DAT_00cfff24);
          }
          FUN_0061fa00(&local_38,&DAT_00738c0c);
          iVar2 = local_38;
          local_2c = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f);
          for (puVar3 = *(uint **)(*(int *)(local_28 + 0x80) +
                                  (local_2c % *(int *)(local_28 + 0x88)) * 4); puVar3 != (uint *)0x0
              ; puVar3 = (uint *)puVar3[2]) {
            if (*puVar3 == uVar10) {
              uVar14 = puVar3[1];
              goto LAB_004ea2dd;
            }
          }
          uVar14 = 0;
LAB_004ea2dd:
          piVar12 = *(int **)(uVar14 + 0x58);
          piVar13 = piVar12 + *(int *)(uVar14 + 0x60) * 6;
          for (; piVar12 != piVar13; piVar12 = piVar12 + 6) {
            if (*piVar12 == local_38) {
              ppuVar9 = (undefined **)(piVar12 + 2);
              if (ppuVar9 != (undefined **)0x0) goto LAB_004ea315;
              break;
            }
          }
          ppuVar9 = &PTR_PTR_00c7ed58;
LAB_004ea315:
          bVar4 = (**(code **)(*(int *)*ppuVar9 + 0x14))(ppuVar9 + 2);
          piVar13 = (int *)(iVar2 + -8);
          if (piVar13 != &DAT_00bfe124) {
            LOCK();
            iVar2 = *piVar13;
            *piVar13 = *piVar13 + -1;
            UNLOCK();
            if (iVar2 == 0) {
              FID_conflict__free(piVar13);
            }
          }
          if ((*(byte *)(iVar8 + 0x68) & 2) == 0) {
            for (puVar3 = *(uint **)(*(int *)(local_28 + 0x80) +
                                    (local_2c % *(int *)(local_28 + 0x88)) * 4);
                puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[2]) {
              if (*puVar3 == uVar10) {
                uVar10 = puVar3[1];
                goto LAB_004ea40d;
              }
            }
            uVar10 = 0;
LAB_004ea40d:
            if ((*(byte *)(uVar10 + 0x69) >> 4 & 1) != bVar4) goto LAB_004ea44f;
            *(byte *)(uVar10 + 0x69) = (bVar4 == 0) << 4 | *(byte *)(uVar10 + 0x69) & 0xef;
          }
          else {
            if (bVar4 == 0) {
LAB_004ea396:
              bVar4 = 0;
            }
            else {
              local_8 = 0;
              puVar11 = (undefined4 *)FUN_0063bf80(local_24);
              cVar5 = (**(code **)(*(int *)*puVar11 + 0x14))(puVar11 + 2);
              (**(code **)(*local_24[0] + 0x54))(local_1c);
              local_8 = 0xffffffff;
              if (cVar5 == '\0') goto LAB_004ea396;
              bVar4 = 1;
            }
            for (puVar3 = *(uint **)(*(int *)(local_28 + 0x80) +
                                    (local_2c % *(int *)(local_28 + 0x88)) * 4);
                puVar3 != (uint *)0x0; puVar3 = (uint *)puVar3[2]) {
              if (*puVar3 == uVar10) {
                uVar10 = puVar3[1];
                goto LAB_004ea3bf;
              }
            }
            uVar10 = 0;
LAB_004ea3bf:
            if ((*(byte *)(uVar10 + 0x69) >> 4 & 1) != bVar4) goto LAB_004ea44f;
            *(byte *)(uVar10 + 0x69) = (bVar4 ^ 1) << 4 | *(byte *)(uVar10 + 0x69) & 0xef;
          }
          iVar8 = *(int *)(uVar10 + 0xc);
          if ((iVar8 == 0) ||
             (((*(byte *)(iVar8 + 0x69) & 0x10) == 0 &&
              ((*(int *)(iVar8 + 0xc) == 0 || (cVar5 = FUN_006e6320(), cVar5 != '\0')))))) {
            FUN_006cc240();
          }
        }
      }
LAB_004ea44f:
      local_30 = local_30 + 1;
      bVar15 = local_30 < *(uint *)(local_28 + 0x30);
    } while ((int)local_30 < (int)*(uint *)(local_28 + 0x30));
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

