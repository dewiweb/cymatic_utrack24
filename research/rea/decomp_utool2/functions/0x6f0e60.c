// rea decompile_all
// name: FUN_006f0e60
// address: 0x6f0e60
// body: available
// range: 0x6f0e60-0x6f1183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006f0e60(void)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_ECX;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 ***pppuStack_7c;
  undefined4 ***local_60;
  int local_5c;
  int local_58;
  char local_54;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_007297a6;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  LOCK();
  *(undefined4 *)(*(int *)(*(int *)(in_ECX + 0x2f4) + 0x18) + 0xc) = 0;
  UNLOCK();
  local_18 = *(int *)(in_ECX + 0x94);
  iVar7 = 0;
  local_1c = local_18 + 1;
  iVar5 = in_ECX;
  local_14 = local_1c;
  if (local_1c != *(int *)(in_ECX + 0x318)) {
    piVar1 = (int *)(in_ECX + 0x310);
    local_20 = in_ECX;
    FUN_004b6e60();
    if (*(int *)(in_ECX + 0x314) != 0) {
      pppuStack_7c = (undefined4 ***)0x6f0ed4;
      FID_conflict__free((void *)*piVar1);
      *piVar1 = 0;
      *(undefined4 *)(in_ECX + 0x314) = 0;
    }
    *(undefined4 *)(in_ECX + 0x318) = 0;
    iVar7 = local_1c;
    while (local_1c = iVar7, -1 < local_18) {
      pppuStack_7c = (undefined4 ***)0x6f0eef;
      puVar4 = operator_new(0x14);
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      puVar4[4] = 0;
      iVar5 = *(int *)(in_ECX + 0x318);
      iVar7 = iVar5 + 1;
      if ((int)*(uint *)(in_ECX + 0x314) < iVar7) {
        if (iVar7 < 0) {
          iVar7 = iVar5 + 2;
        }
        uVar8 = iVar5 + 9 + (iVar7 >> 1) & 0xfffffff8;
        if (*(uint *)(in_ECX + 0x314) != uVar8) {
          if ((int)uVar8 < 1) {
            pppuStack_7c = (undefined4 ***)0x6f0f6a;
            FID_conflict__free((void *)*piVar1);
            *piVar1 = 0;
          }
          else {
            pppuStack_7c = (undefined4 ***)*piVar1;
            if (pppuStack_7c == (undefined4 ***)0x0) {
              pppuStack_7c = (undefined4 ***)0x6f0f4f;
              iVar5 = FUN_004c554b();
              *piVar1 = iVar5;
            }
            else {
              uStack_80 = 0x6f0f5c;
              iVar5 = FUN_004c553b();
              *piVar1 = iVar5;
            }
          }
          *(uint *)(in_ECX + 0x314) = uVar8;
        }
      }
      local_18 = local_18 + -1;
      iVar5 = *(int *)(in_ECX + 0x318);
      *(int *)(in_ECX + 0x318) = iVar5 + 1;
      *(undefined4 **)(*piVar1 + iVar5 * 4) = puVar4;
      iVar5 = local_20;
      iVar7 = local_1c;
    }
    local_14 = 0;
  }
  piVar1 = *(int **)(iVar5 + 0x7c);
  iVar6 = *(int *)(iVar5 + 0x84);
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_54 = '\0';
  local_5c = piVar1[2];
  if (local_5c == 0) {
    pppuStack_7c = (undefined4 ****)0x0;
    local_5c = 0;
    local_58 = 0;
  }
  else {
    if (iVar6 < local_5c) {
      local_5c = 0;
      if (0 < iVar6) {
        local_5c = iVar6;
      }
      iVar6 = *(int *)(*piVar1 + local_5c * 4);
      iVar2 = *(int *)(iVar6 + 0xc);
      local_58 = 0;
      if ((0 < iVar2) && (iVar2 < 0)) {
        local_58 = iVar2;
      }
      iVar6 = *(int *)(iVar6 + 4);
    }
    else {
      local_5c = local_5c + -1;
      iVar6 = *(int *)(*piVar1 + local_5c * 4);
      local_58 = *(int *)(iVar6 + 0xc);
      iVar6 = *(int *)(iVar6 + 4);
    }
    pppuStack_7c = (undefined4 ***)(iVar6 + local_58);
  }
  local_8 = 0;
  uStack_80 = 0x6f1036;
  local_60 = pppuStack_7c;
  local_30 = piVar1;
  FUN_006ecd50();
  local_8 = 0xffffffff;
  if ((local_54 != '\0') && (local_54 = '\0', piVar1 != (int *)0x0)) {
    pppuStack_7c = (undefined4 ****)0x6f105a;
    FUN_00415ff0();
  }
  iVar6 = 0;
  if (0 < local_1c) {
    do {
      pppuStack_7c = (undefined4 ***)(iVar5 + 0xc4);
      uStack_80 = *(undefined4 *)(iVar5 + 0x88);
      uStack_84 = *(undefined4 *)(iVar5 + 0x300);
      cVar3 = FUN_004b45d0(*(undefined4 *)(iVar5 + 0x7c),*(int *)(iVar5 + 0x84) + iVar6,&local_30);
      if (cVar3 != '\0') {
        if (iVar6 < local_14) {
          local_14 = iVar6;
        }
        if (iVar7 < iVar6) {
          iVar7 = iVar6;
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_1c);
  }
  if (local_14 <= iVar7) {
    local_40 = 0;
    local_3c = *(int *)(iVar5 + 0x90) * local_14 + -1;
    local_34 = ((iVar7 - local_14) + 1) * *(int *)(iVar5 + 0x90) + 2;
    local_38 = *(undefined4 *)(iVar5 + 0x100);
    pppuStack_7c = (undefined4 ***)0x6f10ff;
    FUN_006e6400();
    pppuStack_7c = &local_60;
    uStack_80 = 0x6f110c;
    puVar4 = (undefined4 *)FUN_0044db90();
    if ((0 < (int)puVar4[2]) && (0 < (int)puVar4[3])) {
      uStack_84 = *puVar4;
      uStack_80 = puVar4[1];
      pppuStack_7c = (undefined4 ****)puVar4[2];
      FUN_006ce9f0(0);
    }
  }
  iVar7 = *(int *)(iVar5 + 0x2f8);
  if (iVar7 != 0) {
    iVar6 = *(int *)(*(int *)(iVar5 + 0x7c) + 8);
    if ((iVar6 != *(int *)(iVar7 + 0x74)) || (*(int *)(iVar7 + 0x70) != *(int *)(iVar5 + 0x84))) {
      *(int *)(iVar7 + 0x70) = *(int *)(iVar5 + 0x84);
      *(int *)(iVar7 + 0x74) = iVar6;
      FUN_006e6400(&uStack_84);
      FUN_006ce9f0(1);
    }
  }
  ExceptionList = local_10;
  return;
}

