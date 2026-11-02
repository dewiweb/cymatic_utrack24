// rea decompile_all
// name: FUN_006933f0
// address: 0x6933f0
// body: available
// range: 0x6933f0-0x6937c5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006933f0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  DWORD DVar5;
  undefined4 *puVar6;
  int *in_ECX;
  int iVar7;
  undefined4 uVar8;
  void *local_30;
  int local_2c;
  int local_28;
  undefined4 *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00721bbc;
  local_10 = ExceptionList;
  uVar1 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_3 != param_4) {
    local_24 = (undefined4 *)0x0;
    local_18 = (int *)0x0;
    local_1c = in_ECX;
    if (0 < in_ECX[0x47]) {
      local_14 = 1;
      do {
        local_20 = (int)local_18 << 2;
        iVar2 = FUN_004a07b0(uVar1);
        iVar2 = iVar2 + (int)local_24;
        if (((int)local_24 < param_3) && (param_3 < iVar2)) {
          iVar7 = param_3 - (int)local_24;
          iVar2 = in_ECX[0x4a];
LAB_0069349e:
          uVar3 = FUN_004a01f0(iVar7,iVar2);
          FUN_00411110(local_14,uVar3);
          local_18 = (int *)((int)local_18 + -1);
          local_14 = local_14 + -1;
        }
        else {
          if (((int)local_24 < param_4) && (param_4 < iVar2)) {
            iVar7 = param_4 - (int)local_24;
            iVar2 = in_ECX[0x4a];
            goto LAB_0069349e;
          }
          local_24 = (undefined4 *)iVar2;
          if (param_4 < iVar2) break;
        }
        local_14 = local_14 + 1;
        local_18 = (int *)((int)local_18 + 1);
      } while ((int)local_18 < in_ECX[0x47]);
    }
    local_14 = 0;
    if (param_1 != 0) {
      local_30 = (void *)0x0;
      local_2c = 0;
      local_28 = 0;
      local_8 = 0;
      local_20 = 0;
      if (0 < in_ECX[0x47]) {
        do {
          if (param_4 <= param_3) break;
          local_1c = *(int **)(in_ECX[0x45] + local_20 * 4);
          iVar2 = FUN_004a07b0(uVar1);
          local_24 = (undefined4 *)(iVar2 + local_14);
          if ((param_3 <= local_14) && ((int)local_24 <= param_4)) {
            uVar8 = 0x14;
            uVar3 = 0x693563;
            piVar4 = operator_new(0x14);
            iVar2 = *local_1c;
            *piVar4 = iVar2;
            if (iVar2 != 0) {
              LOCK();
              *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
              UNLOCK();
            }
            piVar4[1] = local_1c[1];
            piVar4[2] = 0;
            piVar4[3] = 0;
            piVar4[4] = 0;
            local_8._0_1_ = 3;
            local_18 = piVar4;
            FUN_004b1fb0(local_1c + 2,uVar3,uVar8);
            local_8 = (uint)local_8._1_3_ << 8;
            iVar2 = local_28 + 1;
            if (local_2c < iVar2) {
              if (iVar2 < 0) {
                iVar2 = local_28 + 2;
              }
              FUN_00409cf0((iVar2 >> 1) + local_28 + 9 & 0xfffffff8);
            }
            iVar2 = local_28 + 1;
            puVar6 = (undefined4 *)((int)local_30 + local_28 * 4);
            local_28 = iVar2;
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = piVar4;
            }
          }
          local_20 = local_20 + 1;
          local_14 = (int)local_24;
        } while (local_20 < in_ECX[0x47]);
      }
      if ((((*(char *)(param_1 + 0x48) == '\0') &&
           (uVar1 = *(int *)(param_1 + 0x44) - 1, uVar1 < *(uint *)(param_1 + 0x24))) &&
          (iVar2 = *(int *)(*(int *)(param_1 + 0x1c) + uVar1 * 4), iVar2 != 0)) &&
         (100 < *(int *)(iVar2 + 8))) {
        if ((DAT_00c8a644 == 0) &&
           ((DVar5 = timeGetTime(), DAT_00c8a644 <= DVar5 || (DVar5 < DAT_00c8a644 - 1000)))) {
          DAT_00c8a644 = DVar5;
        }
        in_ECX[0x41] = DAT_00c8a644;
        *(undefined1 *)(in_ECX + 0x3b) = 1;
        LOCK();
        iVar2 = in_ECX[0x36];
        in_ECX[0x36] = (int)&DAT_00bfe12c;
        UNLOCK();
        piVar4 = (int *)(iVar2 + -8);
        if (piVar4 != &DAT_00bfe124) {
          LOCK();
          iVar2 = *piVar4;
          *piVar4 = *piVar4 + -1;
          UNLOCK();
          if (iVar2 == 0) {
            FID_conflict__free(piVar4);
          }
        }
      }
      uVar3 = 0x24;
      puVar6 = operator_new(0x24);
      iVar2 = in_ECX[0x44];
      *puVar6 = juce::TextEditor::RemoveAction::vftable;
      puVar6[1] = in_ECX;
      puVar6[2] = param_3;
      puVar6[3] = param_4;
      puVar6[4] = iVar2;
      puVar6[5] = param_2;
      puVar6[6] = 0;
      puVar6[7] = 0;
      puVar6[8] = 0;
      local_24 = puVar6;
      FUN_004b2060(&local_30,puVar6 + 6,uVar3);
      FUN_0063ba90(puVar6);
      FID_conflict__free(local_30);
      ExceptionList = local_10;
      return;
    }
    iVar2 = 0;
    if (0 < local_1c[0x47]) {
      do {
        iVar7 = FUN_004a07b0(uVar1);
        local_24 = (undefined4 *)(iVar7 + local_14);
        iVar7 = (int)local_24;
        if ((param_3 <= local_14) && (iVar7 = (int)local_24, (int)local_24 <= param_4)) {
          FUN_004ae750(iVar2,local_14);
          param_4 = (param_4 - (int)local_24) + local_14;
          if ((param_4 < param_3) || (param_3 == param_4)) break;
          iVar2 = iVar2 + -1;
          iVar7 = local_14;
        }
        local_14 = iVar7;
        iVar2 = iVar2 + 1;
      } while (iVar2 < local_1c[0x47]);
    }
    FUN_00692ac0();
    local_1c[0x43] = -1;
    *(undefined1 *)(local_1c + 0x28) = 1;
    FUN_00696020(param_2,0);
    iVar7 = FUN_00693140();
    iVar2 = param_3;
    if (param_3 < iVar7) {
      iVar2 = iVar7;
    }
    FUN_00696620(param_3,iVar2);
  }
  ExceptionList = local_10;
  return;
}

