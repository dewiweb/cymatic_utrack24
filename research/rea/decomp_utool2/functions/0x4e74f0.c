// rea decompile_all
// name: FUN_004e74f0
// address: 0x4e74f0
// body: available
// range: 0x4e74f0-0x4e795b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004e74f0(undefined4 *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  uint uVar5;
  int extraout_ECX;
  int extraout_ECX_00;
  uint uVar6;
  int iVar7;
  bool bVar8;
  float in_XMM0_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_38 [3];
  LPCRITICAL_SECTION local_2c;
  uint local_28;
  float local_24;
  float local_20;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007048fb;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = (LPCRITICAL_SECTION)(in_ECX + 0xf5);
  EnterCriticalSection(local_2c);
  iVar7 = 0;
  local_8 = 0;
  piVar4 = (int *)*param_1;
  if (0 < *piVar4) {
    do {
      if ((char)piVar4[0x25] == '\0') {
        _memset(*(void **)(piVar4[3] + iVar7 * 4),0,param_1[2] << 2);
      }
      piVar4 = (int *)*param_1;
      iVar7 = iVar7 + 1;
    } while (iVar7 < *piVar4);
  }
  local_18 = 0;
  if (0 < *(int *)(in_ECX + 0x1c0)) {
    do {
      if (*(char *)(in_ECX + 0x1a4) == '\0') {
        iVar7 = 0;
        if (0 < *(int *)(in_ECX + 0x110)) {
          do {
            _memset(*(void **)(*(int *)(in_ECX + 0x11c) + iVar7 * 4),0,*(int *)(in_ECX + 0x114) << 2
                   );
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(in_ECX + 0x110));
        }
        *(undefined1 *)(in_ECX + 0x1a4) = 1;
      }
      local_38[0] = in_ECX + 0x110;
      local_38[2] = param_1[2];
      local_38[1] = 0;
      if (local_18 < *(uint *)(in_ECX + 0x1c0)) {
        iVar7 = *(int *)(*(int *)(in_ECX + 0x1b8) + local_18 * 4);
      }
      else {
        iVar7 = 0;
      }
      piVar4 = *(int **)(iVar7 + 0x10);
      if (piVar4 == (int *)0x0) {
        piVar4 = *(int **)(iVar7 + 0xc);
      }
      (**(code **)(*piVar4 + 0xc))(local_38,uVar2);
      local_28 = 0;
      if (0 < *(int *)(in_ECX + 0x1d0)) {
        bVar8 = *(int *)(in_ECX + 0x1d0) != 0;
        do {
          if (bVar8) {
            uVar6 = *(uint *)(*(int *)(in_ECX + 0x1c8) + local_28 * 4);
          }
          else {
            uVar6 = 0;
          }
          local_1c = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
          for (puVar1 = *(uint **)(*(int *)(in_ECX + 0x1f0) +
                                  (local_1c % *(int *)(in_ECX + 0x1f8)) * 4); puVar1 != (uint *)0x0;
              puVar1 = (uint *)puVar1[2]) {
            if (*puVar1 == uVar6) {
              local_14 = puVar1[1];
              goto LAB_004e7662;
            }
          }
          local_14 = 0;
LAB_004e7662:
          for (puVar1 = *(uint **)(*(int *)(in_ECX + 0x1d8) +
                                  (local_1c % *(int *)(in_ECX + 0x1e0)) * 4); puVar1 != (uint *)0x0;
              puVar1 = (uint *)puVar1[2]) {
            if (*puVar1 == uVar6) {
              uVar5 = puVar1[1];
              goto LAB_004e7685;
            }
          }
          uVar5 = 0;
LAB_004e7685:
          if (local_18 < *(uint *)(in_ECX + 0x1c0)) {
            uVar3 = *(uint *)(*(int *)(in_ECX + 0x1b8) + local_18 * 4);
          }
          else {
            uVar3 = 0;
          }
          if (uVar5 == uVar3) {
            if (*(char *)(in_ECX + 0x1b4) != '\0') {
              FUN_00409840(local_14,uVar5,local_38[2]);
              for (puVar1 = *(uint **)(*(int *)(in_ECX + 0x250) +
                                      (local_1c % *(int *)(in_ECX + 600)) * 4);
                  puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
                if (*puVar1 == uVar6) {
                  fVar9 = (float)puVar1[1];
                  goto LAB_004e76f2;
                }
              }
              fVar9 = 0.0;
LAB_004e76f2:
              if (fVar9 < in_XMM0_Da) {
                FUN_004095f0(uVar6);
              }
            }
            for (puVar1 = *(uint **)(*(int *)(in_ECX + 0x238) +
                                    (local_1c % *(int *)(in_ECX + 0x240)) * 4);
                puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
              if (*puVar1 == uVar6) {
                fVar9 = (float)puVar1[1];
                if (fVar9 <= 0.0) goto LAB_004e7727;
                local_20 = (1.0 - fVar9) * 0.5;
                goto LAB_004e773c;
              }
            }
            fVar9 = 0.0;
LAB_004e7727:
            local_20 = 1.0;
LAB_004e773c:
            fVar11 = 0.0;
            if (fVar9 < 0.0) {
              fVar9 = (fVar9 + 1.0) * 0.5;
              local_24 = fVar9;
            }
            else {
              local_24 = 1.0;
            }
            for (puVar1 = *(uint **)(*(int *)(in_ECX + 0x220) +
                                    (local_1c % *(int *)(in_ECX + 0x228)) * 4); fVar10 = fVar11,
                puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
              if (*puVar1 == uVar6) {
                if ((char)puVar1[1] != '\0') goto LAB_004e77de;
                break;
              }
            }
            for (puVar1 = *(uint **)(*(int *)(in_ECX + 0x208) +
                                    (local_1c % *(int *)(in_ECX + 0x210)) * 4);
                puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
              if (*puVar1 == uVar6) {
                fVar10 = (float)puVar1[1];
                break;
              }
            }
LAB_004e77de:
            iVar7 = local_1c;
            if ((fVar10 != 1.0) && (*(char *)(in_ECX + 0x1a4) == '\0')) {
              if (fVar10 == 0.0) {
                _memset(*(void **)(*(int *)(in_ECX + 0x11c) + local_14 * 4),0,local_38[2] << 2);
                fVar11 = 0.0;
                iVar7 = extraout_ECX;
              }
              else {
                FUN_005c70f0();
                iVar7 = extraout_ECX_00;
              }
            }
            in_XMM0_Da = fVar9;
            if (*(char *)(in_ECX + 0x1b4) == '\0') {
              in_XMM0_Da = fVar11;
              FUN_00409840(local_14,iVar7,local_38[2]);
              for (puVar1 = *(uint **)(*(int *)(in_ECX + 0x250) +
                                      (local_1c % *(int *)(in_ECX + 600)) * 4);
                  puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
                if (*puVar1 == uVar6) {
                  in_XMM0_Da = (float)puVar1[1];
                  break;
                }
              }
              if (in_XMM0_Da < fVar9) {
                FUN_004095f0(uVar6);
              }
            }
            if (*(char *)(in_ECX + 0xf4) == '\0') {
              if ((int)uVar6 < *(int *)*param_1) {
                in_XMM0_Da = local_20;
                FUN_004098c0(uVar6,param_1[1],
                             *(undefined4 *)(*(int *)(in_ECX + 0x11c) + local_14 * 4),param_1[2],
                             local_20);
              }
            }
            else {
              uVar6 = 0;
              if (0 < *(int *)*param_1) {
                do {
                  in_XMM0_Da = local_24;
                  if ((uVar6 & 1) == 0) {
                    in_XMM0_Da = local_20;
                  }
                  FUN_004098c0(uVar6,param_1[1],
                               *(undefined4 *)(*(int *)(in_ECX + 0x11c) + local_14 * 4),param_1[2],
                               in_XMM0_Da);
                  uVar6 = uVar6 + 1;
                } while ((int)uVar6 < *(int *)*param_1);
              }
            }
          }
          local_28 = local_28 + 1;
          bVar8 = local_28 < *(uint *)(in_ECX + 0x1d0);
        } while ((int)local_28 < (int)*(uint *)(in_ECX + 0x1d0));
      }
      local_18 = local_18 + 1;
    } while ((int)local_18 < *(int *)(in_ECX + 0x1c0));
  }
  if (*(int *)(in_ECX + 0xf0) != 0) {
    *(undefined1 *)(*(int *)(in_ECX + 0xf0) + 0x110c) = 1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xf5));
  ExceptionList = local_10;
  return;
}

