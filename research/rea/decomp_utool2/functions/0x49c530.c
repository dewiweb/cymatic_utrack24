// rea decompile_all
// name: FUN_0049c530
// address: 0x49c530
// body: available
// range: 0x49c530-0x49caec inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049c530(int param_1)

{
  byte *pbVar1;
  code *pcVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int in_ECX;
  int iVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  int *piStack_60;
  undefined8 uStack_5c;
  int local_40;
  int *local_3c;
  undefined8 local_38;
  int local_30;
  code *local_2c;
  int *local_28;
  int *local_24;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702cf2;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_28 = (int *)0x0;
  puVar4 = *(undefined4 **)(in_ECX + 0x140);
  local_30 = param_1;
  if (*(int *)(in_ECX + 0x11c) == 0) {
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x140) = 0;
      uStack_5c = (double)CONCAT44(0x49c86c,(uint)uStack_5c);
      (**(code **)*puVar4)();
    }
  }
  else {
    if (puVar4 == (undefined4 *)0x0) {
      uStack_5c = (double)CONCAT44(0x49c5a0,(uint)uStack_5c);
      puVar4 = (undefined4 *)FUN_0063bf80();
      local_8 = 1;
      local_28 = (int *)0x2;
      uStack_5c = (double)CONCAT44(0x49c5bb,(uint)uStack_5c);
      fVar11 = (float10)(**(code **)(*(int *)*puVar4 + 0xc))();
      piStack_60 = &local_40;
      uStack_5c = (double)fVar11;
      local_38 = uStack_5c;
      piVar3 = (int *)(**(code **)(**(int **)(in_ECX + 0x14) + 0xc0))();
      piVar6 = (int *)0x6;
    }
    else {
      uStack_5c = (double)CONCAT44(&local_3c,0x49c58f);
      piVar3 = (int *)FUN_006e25d0();
      piVar6 = (int *)0x1;
    }
    iVar7 = *piVar3;
    local_38 = (double)CONCAT44(iVar7,(undefined4)local_38);
    *piVar3 = (int)&DAT_00bfe12c;
    local_8 = 2;
    if (((uint)piVar6 & 4) != 0) {
      local_28 = (int *)((uint)piVar6 & 0xfffffffb);
      piVar3 = (int *)(local_40 + -8);
      piVar6 = local_28;
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        iVar10 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          uStack_5c = (double)CONCAT44(0x49c61c,(uint)uStack_5c);
          FID_conflict__free(piVar3);
          piVar6 = local_28;
        }
      }
    }
    if (((uint)piVar6 & 2) != 0) {
      local_28 = (int *)((uint)piVar6 & 0xfffffffd);
      uStack_5c = (double)CONCAT44(0x49c639,(uint)uStack_5c);
      (**(code **)(*local_24 + 0x54))();
      piVar6 = local_28;
    }
    local_8 = CONCAT31(local_8._1_3_,4);
    if ((((uint)piVar6 & 1) != 0) && (piVar6 = local_3c + -2, piVar6 != &DAT_00bfe124)) {
      LOCK();
      iVar10 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar10 == 0) {
        uStack_5c = (double)CONCAT44(0x49c665,(uint)uStack_5c);
        FID_conflict__free(piVar6);
      }
    }
    puVar4 = *(undefined4 **)(in_ECX + 0x140);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x140) = 0;
      uStack_5c = (double)CONCAT44(0x49c682,(uint)uStack_5c);
      (**(code **)*puVar4)();
    }
    uStack_5c = (double)CONCAT44(0x49c690,(uint)uStack_5c);
    puVar5 = (undefined4 *)(**(code **)(*(int *)(local_30 + 0x2c) + 0x1c))();
    puVar4 = *(undefined4 **)(in_ECX + 0x140);
    if ((puVar4 != puVar5) &&
       (*(undefined4 **)(in_ECX + 0x140) = puVar5, puVar4 != (undefined4 *)0x0)) {
      uStack_5c = 2.124384591446e-314;
      (**(code **)*puVar4)();
    }
    local_28 = *(int **)(in_ECX + 0x140);
    local_2c = *(code **)(in_ECX + 0x14);
    if (local_28 != (int *)0x0) {
      uStack_5c = 2.1243846042917e-314;
      (**(code **)(*local_28 + 0x28))();
      uStack_5c = (double)CONCAT44(0xffffffff,local_28);
      piStack_60 = (int *)0x49c6d1;
      FUN_006e5050();
    }
    pbVar1 = (byte *)(*(int *)(in_ECX + 0x140) + 0x68);
    *pbVar1 = *pbVar1 & 0xdf;
    uStack_5c = (double)(ulonglong)((int)&local_38 + 4);
    piStack_60 = (int *)0x49c6ec;
    FUN_006e4900();
    local_2c = (code *)(*(int *)(in_ECX + 0x140) + 0x70);
    uStack_5c = (double)CONCAT44(&local_28,0x49c707);
    piVar6 = (int *)(**(code **)(*(int *)(*(int *)(in_ECX + 0x14) + 0x70) + 4))();
    local_8._0_1_ = 5;
    pcVar2 = *(code **)(*(int *)local_2c + 8);
    if (pcVar2 == FUN_0040a040) {
      piVar3 = (int *)(*piVar6 + -8);
      if (piVar3 != &DAT_00bfe124) {
        LOCK();
        *piVar3 = *piVar3 + 1;
        UNLOCK();
      }
      LOCK();
      iVar10 = *(int *)((int)local_2c + 4);
      *(int *)((int)local_2c + 4) = *piVar6;
      UNLOCK();
      piVar6 = (int *)(iVar10 + -8);
      local_2c = pcVar2;
      if (piVar6 != &DAT_00bfe124) {
        LOCK();
        iVar10 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (iVar10 == 0) {
          uStack_5c = (double)CONCAT44(0x49c753,(uint)uStack_5c);
          FID_conflict__free(piVar6);
        }
      }
    }
    else {
      uStack_5c = (double)CONCAT44(0x49c75e,(uint)uStack_5c);
      local_2c = pcVar2;
      (*pcVar2)();
    }
    local_8 = CONCAT31(local_8._1_3_,4);
    piVar6 = local_28 + -2;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar10 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar10 == 0) {
        uStack_5c = (double)CONCAT44(0x49c782,(uint)uStack_5c);
        FID_conflict__free(piVar6);
      }
    }
    FUN_0049c4b0();
    if ((-(uint)(in_ECX != 0) & in_ECX + 0xcU) != 0) {
      uStack_5c = (double)CONCAT44(0x49c7ab,(uint)uStack_5c);
      FUN_004097d0();
    }
    if ((*(int *)(in_ECX + 0x18) == 2) || (*(int *)(in_ECX + 0x18) == 3)) {
      uStack_5c = (double)CONCAT44(*(undefined4 *)(in_ECX + 0x14),0x49c7c8);
      FUN_006dfe90();
      piVar6 = (int *)FUN_00491210();
      local_8 = CONCAT31(local_8._1_3_,6);
      local_2c = *(code **)(in_ECX + 0x140);
      if (*(int **)(local_2c + 0x38) == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = **(int **)(local_2c + 0x38);
      }
      if (piVar6 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar6;
      }
      local_3c = piVar6;
      if (iVar10 != iVar8) {
        if (piVar6 != (int *)0x0) {
          LOCK();
          piVar6[1] = piVar6[1] + 1;
          UNLOCK();
        }
        if (*(int *)(local_2c + 0x38) != 0) {
          FUN_004912c0();
        }
        *(int **)(local_2c + 0x38) = piVar6;
        if (((byte)local_2c[0x68] & 2) != 0) {
          FUN_006cec20();
        }
      }
      if (piVar6 != (int *)0x0) {
        FUN_004912c0();
      }
    }
    piVar6 = (int *)(iVar7 + -8);
    local_8 = 0xffffffff;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        uStack_5c = (double)CONCAT44(0x49c853,(uint)uStack_5c);
        FID_conflict__free(piVar6);
      }
    }
  }
  if (*(int *)(in_ECX + 0x18) == 8) {
    piVar6 = (int *)(local_30 + 0x2c);
    uStack_5c._4_4_ = *(uint *)(in_ECX + 0x14);
    uStack_5c._0_4_ = 0x49c888;
    puVar5 = (undefined4 *)(**(code **)(*piVar6 + 0x18))();
    puVar4 = *(undefined4 **)(in_ECX + 0x144);
    if ((puVar4 != puVar5) &&
       (*(undefined4 **)(in_ECX + 0x144) = puVar5, puVar4 != (undefined4 *)0x0)) {
      uStack_5c._0_4_ = 1;
      piStack_60 = (int *)0x49c8a2;
      (**(code **)*puVar4)();
    }
    piVar3 = *(int **)(in_ECX + 0x144);
    local_38 = (double)CONCAT44(*(undefined4 *)(in_ECX + 0x14),(undefined4)local_38);
    if (piVar3 != (int *)0x0) {
      uStack_5c._0_4_ = 1;
      piStack_60 = (int *)0x49c8bb;
      (**(code **)(*piVar3 + 0x28))();
      uStack_5c._0_4_ = 0xffffffff;
      piStack_60 = piVar3;
      FUN_006e5050();
    }
    uStack_5c._0_4_ = -(uint)(in_ECX != 0) & in_ECX + 8U;
    if ((uint)uStack_5c != 0) {
      piStack_60 = (int *)0x49c8e5;
      FUN_004097d0();
    }
    uStack_5c = (double)((ulonglong)uStack_5c._4_4_ << 0x20);
    piStack_60 = *(int **)(in_ECX + 0x14);
    puVar5 = (undefined4 *)(**(code **)(*piVar6 + 0x18))();
    puVar4 = *(undefined4 **)(in_ECX + 0x148);
    if ((puVar4 != puVar5) &&
       (*(undefined4 **)(in_ECX + 0x148) = puVar5, puVar4 != (undefined4 *)0x0)) {
      (**(code **)*puVar4)(1);
    }
    piVar6 = *(int **)(in_ECX + 0x148);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 0x28))(1);
      FUN_006e5050(piVar6,0xffffffff);
    }
    uVar9 = -(uint)(in_ECX != 0) & in_ECX + 8U;
    if (uVar9 != 0) {
      FUN_004097d0(uVar9);
    }
    if (*(int *)(in_ECX + 0x130) == 0) {
      iVar7 = *(int *)(in_ECX + 0x144);
      *(undefined4 *)(iVar7 + 0xa8) = 300;
      *(undefined4 *)(iVar7 + 0xac) = 100;
      *(undefined4 *)(iVar7 + 0xb0) = 0x14;
      iVar7 = *(int *)(in_ECX + 0x148);
      *(undefined4 *)(iVar7 + 0xa8) = 300;
      *(undefined4 *)(iVar7 + 0xac) = 100;
      *(undefined4 *)(iVar7 + 0xb0) = 0x14;
    }
    else {
      FUN_006dfe90(*(undefined4 *)(in_ECX + 0x14),0);
      FUN_006dfe90(*(undefined4 *)(in_ECX + 0x14),0);
    }
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x14) + 0x70) + 4))(&local_28);
    local_8 = 7;
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x144) + 0x70) + 8))(&local_28);
    (**(code **)(*(int *)(*(int *)(in_ECX + 0x148) + 0x70) + 8))(&local_28);
    local_8 = 0xffffffff;
    piVar6 = local_28 + -2;
    if (piVar6 != &DAT_00bfe124) {
      LOCK();
      iVar7 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar7 == 0) {
        uStack_5c = (double)CONCAT44(0x49ca1f,(uint)uStack_5c);
        FID_conflict__free(piVar6);
      }
    }
  }
  else {
    puVar4 = *(undefined4 **)(in_ECX + 0x144);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x144) = 0;
      uStack_5c = (double)CONCAT44(0x49ca3e,(uint)uStack_5c);
      (**(code **)*puVar4)();
    }
    puVar4 = *(undefined4 **)(in_ECX + 0x148);
    if (puVar4 != (undefined4 *)0x0) {
      *(undefined4 *)(in_ECX + 0x148) = 0;
      uStack_5c = (double)CONCAT44(0x49ca58,(uint)uStack_5c);
      (**(code **)*puVar4)();
    }
  }
  pcVar2 = *(code **)(*(int *)(local_30 + 0x2c) + 0x20);
  if (pcVar2 == FUN_006dae10) {
    iVar7 = 0;
  }
  else {
    uStack_5c = (double)CONCAT44(0x49ca73,(uint)uStack_5c);
    iVar7 = (*pcVar2)();
  }
  if (*(int *)(*(int *)(in_ECX + 0x14) + 0x3c) != iVar7) {
    *(int *)(*(int *)(in_ECX + 0x14) + 0x3c) = iVar7;
    FUN_006e6400(&piStack_60);
    FUN_006ce9f0(1);
  }
  pcVar2 = *(code **)(**(int **)(in_ECX + 0x14) + 0x84);
  if (pcVar2 == FUN_006e12a0) {
    FUN_006e9580();
    uStack_5c = (double)CONCAT44(0x49cab4,(uint)uStack_5c);
    FUN_0049eb50();
  }
  else {
    (*pcVar2)();
  }
  FUN_006e6400(&piStack_60);
  FUN_006ce9f0(1);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

