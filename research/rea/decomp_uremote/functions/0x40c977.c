// rea decompile_all
// name: FUN_0040c977
// address: 0x40c977
// body: available
// range: 0x40c977-0x40d014 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040c977(int param_1,int *param_2,uint param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 local_3ec;
  undefined4 uStack_3e8;
  undefined2 *puStack_3e4;
  int local_3e0;
  uint uStack_3dc;
  uint uStack_3d8;
  int iStack_3d4;
  int local_3d0;
  int iStack_3cc;
  int iStack_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  uint uStack_3bc;
  int iStack_3b8;
  int iStack_3b4;
  int iStack_3b0;
  int iStack_3ac;
  undefined1 auStack_3a8 [32];
  int iStack_388;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined1 uStack_366;
  int iStack_364;
  undefined4 uStack_c0;
  undefined1 uStack_b7;
  
  local_3d0 = *(int *)(param_1 + 4);
  iVar3 = *(int *)(local_3d0 + 0x2b4);
  bVar7 = false;
  local_3e0 = iVar3;
  if ((*(int *)(iVar3 + 0x5b0) == 0xffff) || (*(int *)(iVar3 + 0x48c) == 0)) {
    if (*(uint *)(iVar3 + 0xc) <= param_3) {
      return 6;
    }
  }
  else if ((param_3 != 0) && (param_3 = FUN_00409282(), param_3 == 0)) {
    return 6;
  }
  if ((param_4 & 0x400) != 0) {
    param_4 = param_4 | 3;
  }
  *(undefined4 *)(param_1 + 0xa4) = 0x10000;
  *(undefined4 *)(param_1 + 0xa8) = 0x10000;
  if (param_2 != (int *)0x0) {
    *(int *)(param_1 + 0xa4) = param_2[4];
    *(int *)(param_1 + 0xa8) = param_2[5];
    iVar9 = *(int *)(*param_2 + 0x214);
    if ((((param_2[0xb] != -1) && (*(int *)(iVar9 + 0x8c) != 0)) && ((param_4 & 8) == 0)) &&
       (iVar9 = (**(code **)(iVar9 + 0x68))
                          (local_3d0,param_2[0xb],param_3,param_4,*(undefined4 *)(*param_2 + 0x68),
                           param_1 + 0x4c,&local_3ec), iVar9 == 0)) {
      *(undefined2 *)(param_1 + 0x6e) = 0;
      *(undefined2 *)(param_1 + 0x6c) = 0;
      *(uint *)(param_1 + 0x18) = (local_3ec >> 8 & 0xff) << 6;
      *(uint *)(param_1 + 0x1c) = (local_3ec & 0xff) << 6;
      *(int *)(param_1 + 0x20) = (int)local_3ec._2_1_ << 6;
      *(int *)(param_1 + 0x24) = (int)local_3ec._3_1_ << 6;
      *(uint *)(param_1 + 0x28) = (uStack_3e8 & 0xff) << 6;
      *(int *)(param_1 + 0x2c) = (int)uStack_3e8._1_1_ << 6;
      *(int *)(param_1 + 0x30) = (int)uStack_3e8._2_1_ << 6;
      *(uint *)(param_1 + 0x34) = (uStack_3e8 >> 0x18) << 6;
      *(undefined4 *)(param_1 + 0x48) = 0x62697473;
      if ((param_4 & 0x10) == 0) {
        *(int *)(param_1 + 100) = (int)local_3ec._2_1_;
        *(int *)(param_1 + 0x68) = (int)local_3ec._3_1_;
      }
      else {
        *(int *)(param_1 + 100) = (int)uStack_3e8._1_1_;
        *(int *)(param_1 + 0x68) = (int)uStack_3e8._2_1_;
      }
      return 0;
    }
  }
  if ((param_4 & 0x4000) != 0) {
    return 6;
  }
  if (*(int *)(iVar3 + 0x768) == 0) {
    local_3ec = *(int *)(local_3e0 + 0x574);
    uStack_3e8 = *(int *)(local_3e0 + 0x578);
    iStack_3b8 = *(int *)(iVar3 + 0x55c);
    iStack_3b4 = *(int *)(iVar3 + 0x560);
    iStack_3b0 = *(int *)(iVar3 + 0x564);
    iStack_3ac = *(int *)(iVar3 + 0x568);
  }
  else {
    uVar10 = FUN_00409179(param_3);
    if (*(uint *)(iVar3 + 0x768) <= (uVar10 & 0xff)) {
      uVar10 = (uint)(byte)(*(char *)(iVar3 + 0x768) - 1);
    }
    uStack_3d8 = *(uint *)(iVar3 + 0x570);
    iVar3 = *(int *)(iVar3 + 0x76c + (uVar10 & 0xff) * 4);
    puStack_3e4 = *(undefined2 **)(iVar3 + 0x44);
    iStack_3b8 = *(int *)(iVar3 + 0x30);
    iStack_3b4 = *(int *)(iVar3 + 0x34);
    local_3ec = *(int *)(iVar3 + 0x48);
    uStack_3e8 = *(int *)(iVar3 + 0x4c);
    iStack_3b0 = *(int *)(iVar3 + 0x38);
    iStack_3ac = *(int *)(iVar3 + 0x3c);
    if ((undefined2 *)uStack_3d8 != puStack_3e4) {
      uVar11 = FUN_0040d230(uStack_3d8);
      *(undefined4 *)(param_1 + 0xa4) = uVar11;
      uVar11 = FUN_0040d230(uStack_3d8);
      *(undefined4 *)(param_1 + 0xa8) = uVar11;
      bVar7 = true;
    }
  }
  *(undefined2 *)(param_1 + 0x6e) = 0;
  puStack_3e4 = (undefined2 *)(param_1 + 0x6c);
  *puStack_3e4 = 0;
  uStack_3bc = param_4 & 1;
  if (uStack_3bc == 0) {
    uStack_3dc = CONCAT31(uStack_3dc._1_3_,1);
    if ((param_4 & 2) == 0) goto LAB_0040cbf9;
  }
  uStack_3dc = uStack_3dc & 0xffffff00;
LAB_0040cbf9:
  *(undefined4 *)(param_1 + 0x48) = 0x6f75746c;
  FUN_0040ad10(local_3d0,uStack_3dc,(int)param_4 >> 0x10 & 0xf);
  iVar3 = local_3d0;
  if ((param_4 & 0x100) != 0) {
    uStack_b7 = 1;
  }
  uStack_366 = 0;
  iStack_3d4 = FUN_0040b00b(param_3);
  if (iStack_3d4 != 0) {
    return iStack_3d4;
  }
  iStack_3d4 = FUN_0040ad78(param_2,param_3);
  iVar9 = iStack_3cc;
  if (iStack_3d4 != 0) {
    return iStack_3d4;
  }
  iStack_3d4 = FUN_0040b297(auStack_3a8,uStack_3d8,iStack_3cc);
  FUN_0040b057(iVar9);
  if (iStack_3d4 == 0) {
    if (*(int *)(*(int *)(iVar3 + 0x80) + 0x34) == 0) {
      if (*(int *)(local_3e0 + 0x4b0) != 0) {
        iVar4 = *(int *)(*(int *)(local_3e0 + 0x4b0) + param_3 * 4);
        iVar5 = *(int *)(local_3e0 + 0x4b4);
        *(int *)(param_1 + 0x8c) = iVar9;
        *(int *)(param_1 + 0x88) = iVar4 + -1 + iVar5;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
    FUN_0040accc();
    piVar6 = *(int **)(*(int *)(iVar3 + 0x80) + 0x34);
    if ((piVar6 != (int *)0x0) && (*(int *)(*piVar6 + 8) != 0)) {
      iStack_3cc = iStack_388;
      uStack_3c4 = uStack_380;
      uStack_3c0 = uStack_37c;
      iStack_3c8 = 0;
      piVar6 = *(int **)(*(int *)(iVar3 + 0x80) + 0x34);
      iStack_3d4 = (**(code **)(*piVar6 + 8))(piVar6[1],param_3,0,&iStack_3cc);
      iStack_388 = iStack_3cc;
      uStack_380 = uStack_3c4;
      uStack_37c = uStack_3c0;
      if (iStack_3d4 != 0) {
        return iStack_3d4;
      }
    }
    if ((param_4 & 0x400) == 0) {
      *(undefined4 *)(param_1 + 0x28) = uStack_c0;
      *(undefined4 *)(param_1 + 0x38) = uStack_c0;
      *(undefined1 *)(*(int *)(param_1 + 0x9c) + 8) = 0;
      if (((*(char *)(local_3d0 + 0x128) == '\0') || (*(short *)(local_3d0 + 0x14e) == 0)) ||
         (*(int *)(local_3d0 + 0x150) == 0)) {
        bVar8 = false;
        if (*(short *)(local_3d0 + 0x170) == -1) {
          sVar1 = *(short *)(local_3d0 + 0xde);
          sVar2 = *(short *)(local_3d0 + 0xdc);
        }
        else {
          sVar1 = *(short *)(local_3d0 + 0x1b8);
          sVar2 = *(short *)(local_3d0 + 0x1b6);
        }
        uVar10 = (int)sVar2 - (int)sVar1;
      }
      else {
        local_3e0 = 0;
        uStack_3d8 = 0;
        bVar8 = true;
        (**(code **)(*(int *)(local_3d0 + 0x214) + 0x9c))
                  (local_3d0,1,param_3,&local_3e0,&uStack_3d8);
        *(int *)(param_1 + 0x30) = (int)(short)local_3e0;
        uVar10 = uStack_3d8 & 0xffff;
      }
      *(uint *)(param_1 + 0x34) = uVar10;
      *(uint *)(param_1 + 0x3c) = uVar10;
      *(undefined4 *)(param_1 + 0x48) = 0x6f75746c;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      if ((param_2 != (int *)0x0) && (*(ushort *)((int)param_2 + 0xe) < 0x18)) {
        *(undefined4 *)(param_1 + 0x7c) = 0x100;
      }
      *(uint *)(param_1 + 0x7c) = *(uint *)(param_1 + 0x7c) | 4;
      if ((((iStack_3b8 != 0x10000) || (iStack_3ac != 0x10000)) || (iStack_3b4 != 0)) ||
         (iStack_3b0 != 0)) {
        FUN_004107d0();
      }
      if ((local_3ec != 0) || (uStack_3e8 != 0)) {
        FUN_00410751(local_3ec,uStack_3e8);
      }
      iStack_3cc = *(int *)(param_1 + 0x28);
      iStack_3c8 = 0;
      FUN_00410783();
      iVar3 = iStack_3cc;
      iStack_3cc = 0;
      *(uint *)(param_1 + 0x28) = iVar3 + local_3ec;
      iStack_3c8 = *(int *)(param_1 + 0x34);
      FUN_00410783();
      *(uint *)(param_1 + 0x34) = iStack_3c8 + uStack_3e8;
      if ((uStack_3bc == 0) || (bVar7)) {
        uVar11 = *(undefined4 *)(param_1 + 0xa4);
        local_3e0 = *(int *)(param_1 + 0xa8);
        puVar13 = *(undefined4 **)(puStack_3e4 + 2);
        if (((char)uStack_3dc == '\0') || (iStack_364 == 0)) {
          uStack_3dc = (uint)(short)puStack_3e4[1];
          while (0 < (int)uStack_3dc) {
            uVar12 = FUN_00401000(*puVar13,uVar11);
            *puVar13 = uVar12;
            uVar12 = FUN_00401000(puVar13[1],local_3e0);
            uStack_3dc = uStack_3dc - 1;
            puVar13[1] = uVar12;
            puVar13 = puVar13 + 2;
          }
        }
        uVar11 = FUN_00401000(*(undefined4 *)(param_1 + 0x28),uVar11);
        *(undefined4 *)(param_1 + 0x28) = uVar11;
        uVar11 = FUN_00401000(*(undefined4 *)(param_1 + 0x34),local_3e0);
        *(undefined4 *)(param_1 + 0x34) = uVar11;
      }
      FUN_004106d2();
      *(int *)(param_1 + 0x18) = iStack_3b0 - iStack_3b8;
      *(int *)(param_1 + 0x1c) = iStack_3ac - iStack_3b4;
      *(int *)(param_1 + 0x20) = iStack_3b8;
      *(int *)(param_1 + 0x24) = iStack_3ac;
      if (!bVar8) {
        if ((param_4 & 0x10) != 0) {
          FUN_0040f2e7();
          return iStack_3d4;
        }
        return iStack_3d4;
      }
      *(int *)(param_1 + 0x2c) = iStack_3b8 - *(int *)(param_1 + 0x28) / 2;
      return iStack_3d4;
    }
    iVar3 = *(int *)(param_1 + 0x9c);
    *(int *)(param_1 + 0x20) = iStack_388;
    *(undefined4 *)(param_1 + 0x28) = uStack_c0;
    *(int *)(iVar3 + 0xc) = iStack_3b8;
    *(int *)(iVar3 + 0x10) = iStack_3b4;
    *(int *)(iVar3 + 0x14) = iStack_3b0;
    *(uint *)(iVar3 + 0x1c) = local_3ec;
    *(int *)(iVar3 + 0x18) = iStack_3ac;
    *(uint *)(iVar3 + 0x20) = uStack_3e8;
    *(undefined1 *)(iVar3 + 8) = 1;
    return iStack_3d4;
  }
  return iStack_3d4;
}

