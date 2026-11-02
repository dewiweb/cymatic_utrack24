// rea decompile_all
// name: FUN_00496b80
// address: 0x496b80
// body: available
// range: 0x496b80-0x49713d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00496b80(int *param_1,int *param_2,int *param_3,undefined4 param_4,int *param_5,int param_6
                 )

{
  undefined4 *puVar1;
  byte bVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  DWORD DVar6;
  int *in_ECX;
  int *piVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  uint uVar11;
  undefined1 *local_4c;
  int local_48;
  undefined4 *local_44;
  undefined1 local_28 [8];
  int local_20;
  int local_1c;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007026e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  local_44 = (undefined4 *)0x496bc5;
  FUN_0045c990();
  local_44 = (undefined4 *)0x496bd3;
  FUN_006cfeb0();
  local_8 = 0;
  piVar7 = (int *)(local_14 + -8);
  if (piVar7 != &DAT_00bfe124) {
    LOCK();
    iVar5 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar5 == 0) {
      local_44 = (undefined4 *)0x496bfb;
      FID_conflict__free(piVar7);
    }
  }
  *in_ECX = (int)juce::PopupMenu::HelperClasses::MenuWindow::vftable;
  in_ECX[0x1c] = (int)param_2;
  in_ECX[0x1d] = *param_3;
  in_ECX[0x1e] = param_3[1];
  in_ECX[0x1f] = param_3[2];
  in_ECX[0x20] = param_3[3];
  in_ECX[0x21] = param_3[4];
  in_ECX[0x22] = param_3[5];
  in_ECX[0x23] = param_3[6];
  in_ECX[0x24] = param_3[7];
  in_ECX[0x25] = param_3[8];
  in_ECX[0x26] = param_3[9];
  in_ECX[0x27] = 0;
  in_ECX[0x28] = 0;
  in_ECX[0x29] = 0;
  piVar7 = in_ECX + 0x2b;
  local_8._0_1_ = 1;
  in_ECX[0x2a] = param_6;
  param_2 = piVar7;
  if (in_ECX[0x21] == 0) {
    iVar5 = 0;
  }
  else {
    local_44 = (undefined4 *)0x496c91;
    iVar5 = FUN_0040de70();
  }
  *piVar7 = iVar5;
  if (iVar5 != 0) {
    LOCK();
    *(int *)(iVar5 + 4) = *(int *)(iVar5 + 4) + 1;
    UNLOCK();
  }
  in_ECX[0x2c] = 0;
  in_ECX[0x2d] = 0;
  in_ECX[0x2e] = 0;
  in_ECX[0x2f] = 0;
  in_ECX[0x30] = 0;
  *(undefined2 *)(in_ECX + 0x31) = 0;
  *(undefined1 *)((int)in_ECX + 0xc6) = param_5._0_1_;
  *(undefined2 *)((int)in_ECX + 199) = 0;
  *(undefined1 *)((int)in_ECX + 0xc9) = 0;
  in_ECX[0x33] = 0;
  in_ECX[0x34] = 0;
  in_ECX[0x35] = 0;
  in_ECX[0x36] = 0;
  in_ECX[0x37] = 0;
  in_ECX[0x38] = 0;
  in_ECX[0x39] = 0;
  in_ECX[0x3a] = 0;
  DVar6 = timeGetTime();
  if ((DAT_00c8a644 <= DVar6) || (DVar6 < DAT_00c8a644 - 1000)) {
    DAT_00c8a644 = DVar6;
  }
  in_ECX[0x3b] = DVar6;
  in_ECX[0x3c] = DVar6;
  in_ECX[0x3d] = DVar6;
  in_ECX[0x3e] = 0;
  in_ECX[0x3f] = 0;
  in_ECX[0x40] = 0;
  local_8 = CONCAT31(local_8._1_3_,6);
  *(byte *)(in_ECX + 0x1a) = *(byte *)(in_ECX + 0x1a) & 0xdf | 0x80;
  local_44 = (undefined4 *)0x496da9;
  FUN_006d1c90();
  if (in_ECX[0x1c] == 0) {
    if (param_1[3] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1[3] + 8);
    }
  }
  else {
    iVar5 = FUN_006e9580();
  }
  if (in_ECX[0xd] != iVar5) {
    in_ECX[0xd] = iVar5;
    FUN_006e9490();
  }
  iVar5 = FUN_006e9580();
  param_5 = (int *)(iVar5 + 0x20);
  pcVar3 = *(code **)(*(int *)(iVar5 + 0x20) + 0x34);
  if (pcVar3 == FUN_006dbdd0) {
    iVar5 = in_ECX[0x22];
  }
  else {
    local_44 = (undefined4 *)0x496dfe;
    iVar5 = (*pcVar3)();
  }
  in_ECX[0x2c] = iVar5;
  local_44 = &param_2;
  local_48 = 0x496e14;
  iVar5 = FUN_006ab460();
  if ((*(char *)(iVar5 + 3) == -1) || (cVar4 = FUN_00687a20(), cVar4 == '\0')) {
    bVar9 = 1;
  }
  else {
    bVar9 = 0;
  }
  bVar2 = *(byte *)(in_ECX + 0x1a);
  if (bVar9 != (bVar2 >> 2 & 1)) {
    *(byte *)(in_ECX + 0x1a) = bVar2 & 0xfb | bVar9 << 2;
    if (((bVar2 & 1) != 0) && (iVar5 = FUN_0068db10(), iVar5 != 0)) {
      local_44 = *(undefined4 **)(iVar5 + 8);
      local_48 = 0x496e60;
      (**(code **)(*in_ECX + 0x30))();
    }
    FUN_006e6400(&local_4c);
    FUN_006ce9f0(1);
  }
  iVar10 = 0;
  iVar5 = param_1[2];
  if (0 < iVar5) {
    do {
      iVar8 = *(int *)(*param_1 + iVar10 * 4);
      if ((iVar10 < iVar5 + -1) || (*(char *)(iVar8 + 0x26) == '\0')) {
        local_44 = (undefined4 *)0x496ea4;
        param_3 = operator_new(0xa0);
        local_8._0_1_ = 7;
        local_44 = (undefined4 *)in_ECX[0x26];
        local_4c = (undefined1 *)0x496ebd;
        local_48 = iVar8;
        param_2 = (int *)FUN_004964a0();
        local_8 = CONCAT31(local_8._1_3_,6);
        iVar5 = in_ECX[0x29];
        iVar8 = iVar5 + 1;
        if (in_ECX[0x28] < iVar8) {
          if (iVar8 < 0) {
            iVar8 = iVar5 + 2;
          }
          uVar11 = iVar5 + 9 + (iVar8 >> 1) & 0xfffffff8;
          if (in_ECX[0x28] != uVar11) {
            if ((int)uVar11 < 1) {
              local_44 = (undefined4 *)0x496f2e;
              FID_conflict__free((void *)in_ECX[0x27]);
              in_ECX[0x27] = 0;
            }
            else {
              local_44 = (undefined4 *)in_ECX[0x27];
              if (local_44 == (undefined4 *)0x0) {
                local_44 = (undefined4 *)0x496f07;
                iVar5 = FUN_004c554b();
                in_ECX[0x27] = iVar5;
              }
              else {
                local_48 = 0x496f18;
                iVar5 = FUN_004c553b();
                in_ECX[0x27] = iVar5;
              }
            }
            in_ECX[0x28] = uVar11;
          }
        }
        iVar5 = in_ECX[0x29];
        in_ECX[0x29] = iVar5 + 1;
        *(int **)(in_ECX[0x27] + iVar5 * 4) = param_2;
      }
      iVar10 = iVar10 + 1;
      iVar5 = param_1[2];
    } while (iVar10 < iVar5);
  }
  local_4c = (undefined1 *)in_ECX[0x1d];
  local_48 = in_ECX[0x1e];
  local_44 = (undefined4 *)in_ECX[0x1f];
  FUN_00498110(param_4);
  local_44 = (undefined4 *)in_ECX[6];
  local_48 = in_ECX[0x2e];
  local_4c = (undefined1 *)in_ECX[0x2d];
  FUN_006e9790();
  FUN_004989e0();
  if (in_ECX[0x23] != 0) {
    local_44 = (undefined4 *)in_ECX[0x1d];
    if (in_ECX[0x2c] == 0) {
      local_1c = in_ECX[0x1e];
      local_20 = (int)local_44;
    }
    else {
      local_48 = 0;
      local_4c = local_28;
      FUN_006e1ae0();
    }
    local_44 = (undefined4 *)in_ECX[0x23];
    local_48 = 0x49701a;
    FUN_004987a0();
  }
  FUN_004988e0();
  if (in_ECX[0x2c] == 0) {
    if (*(code **)(*param_5 + 0x1c) == FUN_006dc050) {
      uVar11 = 0x100;
    }
    else {
      uVar11 = (**(code **)(*param_5 + 0x1c))();
    }
    local_44 = (undefined4 *)(uVar11 | 0x402);
    local_48 = 0x49705f;
    FUN_006e9aa0();
    piVar7 = (int *)FUN_00497ab0();
    iVar5 = piVar7[2] + 1;
    if ((piVar7[1] < iVar5) &&
       (uVar11 = piVar7[2] + 9 + iVar5 / 2 & 0xfffffff8, piVar7[1] != uVar11)) {
      if ((int)uVar11 < 1) {
        local_44 = (undefined4 *)0x4970b5;
        FID_conflict__free((void *)*piVar7);
        *piVar7 = 0;
      }
      else {
        local_44 = (undefined4 *)*piVar7;
        if (local_44 == (undefined4 *)0x0) {
          local_44 = (undefined4 *)0x49709a;
          iVar5 = FUN_004c554b();
          *piVar7 = iVar5;
        }
        else {
          local_48 = 0x4970a7;
          iVar5 = FUN_004c553b();
          *piVar7 = iVar5;
        }
      }
      piVar7[1] = uVar11;
    }
    iVar5 = piVar7[2];
    piVar7[2] = iVar5 + 1;
    puVar1 = (undefined4 *)(*piVar7 + iVar5 * 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = in_ECX;
    }
    if (DAT_00c8a67c == 0) {
      local_44 = (undefined4 *)0x4970e9;
      operator_new(0xd0);
      local_8._0_1_ = 8;
      DAT_00c8a67c = FUN_006cb960();
      local_8 = CONCAT31(local_8._1_3_,6);
    }
    local_44 = (undefined4 *)0x49710f;
    FUN_004097d0();
    FUN_006cb130();
  }
  else {
    local_48 = 0x497033;
    FUN_006e5050();
  }
  if (*(code **)(*param_5 + 0x38) != FUN_006dc040) {
    local_44 = (undefined4 *)0x497128;
    (**(code **)(*param_5 + 0x38))();
  }
  ExceptionList = local_10;
  return;
}

