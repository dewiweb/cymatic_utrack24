// rea decompile_all
// name: FUN_0049f3c0
// address: 0x49f3c0
// body: available
// range: 0x49f3c0-0x49f70b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049f3c0(int param_1,char param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined **ppuVar3;
  int iVar4;
  undefined4 *puVar5;
  int in_ECX;
  int *piVar6;
  uint uVar7;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  int *piStack_88;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  int local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  int local_30;
  int local_2c;
  int *local_28;
  undefined **local_24;
  int local_1c;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_00703040;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c = in_ECX;
  if ((param_1 != *(int *)(in_ECX + 0x84)) || (param_2 != *(char *)(in_ECX + 0x88))) {
    *(int *)(in_ECX + 0x84) = param_1;
    *(char *)(in_ECX + 0x88) = param_2;
    FUN_006e6400(&puStack_90);
    FUN_006ce9f0(1);
  }
  iVar4 = *(int *)(in_ECX + 0x74);
  local_38 = *(int **)(iVar4 + 0xb8);
  if (local_38 != (int *)0x0) {
    pcVar1 = *(code **)(*(int *)(iVar4 + 0xac) + 4);
    if (pcVar1 == FUN_00697700) {
      piVar6 = *(int **)(iVar4 + 0xb8);
      if (piVar6 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        pcVar1 = *(code **)(*piVar6 + 4);
        if (pcVar1 != FUN_0052c2c0) goto LAB_0049f46f;
        iVar4 = piVar6[0x10c];
      }
    }
    else {
LAB_0049f46f:
      iVar4 = (*pcVar1)();
    }
    if (*(int *)(in_ECX + 0x84) < iVar4) {
      piStack_88 = &local_3c;
      puStack_8c = (undefined1 *)0x49f48b;
      FUN_0061f730();
      puStack_8c = (undefined1 *)0x49f492;
      FUN_0061fa00();
      local_8 = 0;
      piStack_88 = (int *)0x49f4a8;
      local_40 = FUN_006d78e0();
      uVar7 = 0;
      iVar4 = in_ECX;
      if (0 < local_40) {
        do {
          local_28 = *(int **)(*(int *)(local_2c + 0x74) + 0xb4);
          piStack_88 = (int *)0x49f4cf;
          uVar2 = FUN_00697d20();
          if ((uVar2 < *(uint *)((int)local_28 + 0x80)) &&
             (iVar4 = *(int *)(*(int *)((int)local_28 + 0x78) + uVar2 * 4), iVar4 != 0)) {
            local_30 = *(int *)(iVar4 + 4);
          }
          else {
            local_30 = 0;
          }
          if ((uVar7 < *(uint *)(in_ECX + 0x80)) &&
             (local_28 = *(int **)(*(int *)(in_ECX + 0x78) + uVar7 * 4), local_28 != (int *)0x0)) {
            local_34 = (int *)(*(int *)((int)local_28 + 0x58) +
                              *(int *)((int)local_28 + 0x60) * 0x18);
            for (piVar6 = *(int **)((int)local_28 + 0x58); piVar6 != local_34; piVar6 = piVar6 + 6)
            {
              if (*piVar6 == local_3c) {
                ppuVar3 = (undefined **)(piVar6 + 2);
                if (ppuVar3 != (undefined **)0x0) goto LAB_0049f53d;
                break;
              }
            }
            ppuVar3 = &PTR_PTR_00c7ed58;
LAB_0049f53d:
            piStack_88 = (int *)0x49f548;
            iVar4 = (**(code **)(*(int *)*ppuVar3 + 4))();
            if (local_30 != iVar4) {
              piStack_88 = (int *)0x0;
              puStack_90 = (undefined1 *)0x49f55a;
              puStack_8c = (undefined1 *)uVar7;
              FUN_004ae5d0();
            }
          }
          piStack_88 = (int *)(uint)*(byte *)(local_2c + 0x88);
          puStack_8c = (undefined1 *)local_30;
          puStack_90 = *(undefined1 **)(local_2c + 0x84);
          local_28 = (int *)(**(code **)(*local_38 + 0x10))();
          if (-1 < (int)uVar7) {
            if ((int)uVar7 < *(int *)(in_ECX + 0x80)) {
              *(int **)(*(int *)(in_ECX + 0x78) + uVar7 * 4) = local_28;
            }
            else {
              if (*(int *)(in_ECX + 0x7c) < *(int *)(in_ECX + 0x80) + 1) {
                piStack_88 = (int *)0x49f5c0;
                FUN_00409cf0();
              }
              iVar4 = *(int *)(in_ECX + 0x80);
              *(int *)(in_ECX + 0x80) = iVar4 + 1;
              *(int **)(*(int *)(in_ECX + 0x78) + iVar4 * 4) = local_28;
            }
          }
          if (local_28 != (int *)0x0) {
            local_24 = &PTR_vftable_00c7ed44;
            local_1c = local_30;
            local_8._0_1_ = 1;
            piStack_88 = &local_3c;
            puStack_8c = (undefined1 *)0x49f603;
            FUN_00637060();
            local_8 = (uint)local_8._1_3_ << 8;
            piStack_88 = (int *)0x49f613;
            (**(code **)(*local_24 + 0x54))();
            piStack_88 = (int *)0x1;
            puStack_8c = (undefined1 *)0x49f61d;
            (**(code **)(*local_28 + 0x28))();
            piStack_88 = local_28;
            puStack_8c = (undefined1 *)0x49f62b;
            FUN_006e5050();
            local_34 = *(int **)(*(int *)(in_ECX + 0x78) + uVar7 * 4);
            if (local_34 != (int *)0x0) {
              puStack_8c = local_50;
              puStack_90 = local_60;
              piStack_88 = (int *)puStack_8c;
              FUN_006d7870(local_70,uVar7);
              FUN_004afaf0();
              puStack_8c = (undefined1 *)0x49f668;
              puVar5 = (undefined4 *)FUN_0040ddb0();
              piStack_88 = (int *)puVar5[2];
              puStack_8c = (undefined1 *)puVar5[1];
              puStack_90 = (undefined1 *)*puVar5;
              FUN_006e9790();
            }
          }
          uVar7 = uVar7 + 1;
          iVar4 = local_2c;
        } while ((int)uVar7 < local_40);
      }
      piStack_88 = *(int **)(iVar4 + 0x80);
      puStack_90 = (undefined1 *)0x49f69a;
      puStack_8c = (undefined1 *)local_40;
      FUN_004ade20();
      piVar6 = (int *)(local_3c + -8);
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar4 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar4 == 0) {
          piStack_88 = (int *)0x49f6b8;
          FID_conflict__free(piVar6);
        }
      }
      goto LAB_0049f6ee;
    }
  }
  FUN_00407fe0();
  if (*(int *)(in_ECX + 0x7c) != 0) {
    piStack_88 = (int *)0x49f6d3;
    FID_conflict__free(*(void **)(in_ECX + 0x78));
    *(undefined4 *)(in_ECX + 0x78) = 0;
    *(undefined4 *)(in_ECX + 0x7c) = 0;
  }
  *(undefined4 *)(in_ECX + 0x80) = 0;
LAB_0049f6ee:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

