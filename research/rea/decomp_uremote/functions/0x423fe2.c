// rea decompile_all
// name: FUN_00423fe2
// address: 0x423fe2
// body: available
// range: 0x423fe2-0x424666 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00423fe2(undefined4 param_1,int param_2,undefined4 param_3,uint param_4,int param_5)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  undefined2 *puVar13;
  bool bVar14;
  undefined8 uVar15;
  ushort local_34;
  ushort local_32;
  int local_20;
  uint local_18;
  uint local_14;
  int local_10;
  int local_c;
  char local_6;
  char local_5;
  
  iVar8 = 0;
  iVar3 = *(int *)(param_2 + 0x214);
  local_5 = '\0';
  local_6 = '\0';
  if (0 < (int)param_4) {
    do {
      iVar4 = *(int *)(param_5 + iVar8 * 8);
      if (iVar4 == 0x69677066) {
        local_5 = '\x01';
      }
      else if (iVar4 == 0x69677073) {
        local_6 = '\x01';
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < (int)param_4);
  }
  if ((*(int *)(*(int *)(param_2 + 0x80) + 0x34) == 0) &&
     (iVar8 = FUN_0041fbdc(0x676c7966), iVar8 == 0)) {
    iVar8 = FUN_0041fbdc(0x43464620);
    bVar6 = false;
    if (iVar8 != 0) goto LAB_0042405b;
  }
  else {
LAB_0042405b:
    bVar6 = true;
  }
  bVar14 = false;
  if ((bVar6) || (*(code **)(iVar3 + 0x54) == (code *)0x0)) {
LAB_00424085:
    local_c = (**(code **)(iVar3 + 0x20))(param_2,param_1);
    if (local_c != 0) {
      return local_c;
    }
  }
  else {
    iVar8 = (**(code **)(iVar3 + 0x54))(param_2,param_1);
    bVar14 = iVar8 == 0;
    if (!bVar14) goto LAB_00424085;
  }
  if (*(short *)(param_2 + 0xb2) == 0) {
    return 8;
  }
  (**(code **)(iVar3 + 0x2c))(param_2,param_1);
  (**(code **)(iVar3 + 0x28))(param_2,param_1);
  (**(code **)(iVar3 + 0x38))(param_2,param_1);
  local_18 = (**(code **)(iVar3 + 0x34))(param_2,param_1);
  if (bVar14) goto LAB_004241a6;
  local_c = (**(code **)(iVar3 + 0x24))(param_2,param_1,0);
  if (local_c == 0) {
    local_c = (**(code **)(iVar3 + 0x88))(param_2,param_1,0);
    if (local_c == 0x8e) {
      local_c = 0x93;
LAB_00424123:
      piVar5 = *(int **)(*(int *)(param_2 + 0x80) + 0x34);
      if (piVar5 == (int *)0x0) {
        return local_c;
      }
      if (*(int *)(*piVar5 + 8) == 0) {
        return local_c;
      }
      local_c = 0;
      *(undefined2 *)(param_2 + 0xfa) = 0;
    }
LAB_0042414c:
    if (local_c != 0) {
      return local_c;
    }
  }
  else {
    if (local_c != 0x8e) goto LAB_0042414c;
    if (*(int *)(param_2 + 0x94) != 0x74727565) {
      local_c = 0x8f;
      goto LAB_00424123;
    }
    bVar6 = false;
  }
  local_c = (**(code **)(iVar3 + 0x24))(param_2,param_1,1);
  if ((local_c == 0) && (local_c = (**(code **)(iVar3 + 0x88))(param_2,param_1,1), local_c == 0)) {
    *(undefined1 *)(param_2 + 0x128) = 1;
  }
  else if (local_c != 0x8e) {
    return local_c;
  }
  iVar8 = (**(code **)(iVar3 + 0x30))(param_2,param_1);
  if (iVar8 != 0) {
    *(undefined2 *)(param_2 + 0x170) = 0xffff;
  }
LAB_004241a6:
  if (((*(code **)(iVar3 + 0x8c) == (code *)0x0) ||
      (local_c = (**(code **)(iVar3 + 0x8c))(param_2,param_1), local_c == 0)) || (local_c == 0x8e))
  {
    local_c = (**(code **)(iVar3 + 0x50))(param_2,param_1);
    if (local_c != 0) {
      if (local_c != 0x8e) {
        return local_c;
      }
      *(undefined4 *)(param_2 + 0x22c) = 0;
    }
    (**(code **)(iVar3 + 0x4c))(param_2,param_1);
    local_c = (**(code **)(iVar3 + 0x48))(param_2,param_1);
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(uint *)(param_2 + 0x10) = (uint)*(ushort *)(param_2 + 0x108);
    piVar5 = (int *)(param_2 + 0x14);
    *piVar5 = 0;
    if ((*(short *)(param_2 + 0x170) == -1) || ((*(ushort *)(param_2 + 0x1b0) & 0x100) == 0)) {
      local_c = FUN_00423bac(0x15,piVar5);
      if (local_c != 0) {
        return local_c;
      }
      iVar8 = 0;
      if (*piVar5 == 0) {
        if ((local_5 == '\0') && (iVar8 = FUN_00423bac(0x10,piVar5), iVar8 != 0)) {
          return iVar8;
        }
        local_c = iVar8;
        iVar8 = local_c;
        if ((*piVar5 == 0) && (iVar8 = FUN_00423bac(1,piVar5), iVar8 != 0)) {
          return iVar8;
        }
      }
      local_c = iVar8;
      local_c = FUN_00423bac(0x16,param_2 + 0x18);
      if (local_c != 0) {
        return local_c;
      }
      iVar8 = 0;
      if (((*(int *)(param_2 + 0x18) == 0) && (local_6 == '\0')) &&
         (iVar8 = FUN_00423bac(0x11,(int *)(param_2 + 0x18)), iVar8 != 0)) {
        return iVar8;
      }
      local_c = iVar8;
      iVar8 = *(int *)(param_2 + 0x18);
    }
    else {
      if ((local_5 == '\0') && (local_c = FUN_00423bac(0x10,piVar5), local_c != 0)) {
        return local_c;
      }
      if ((*piVar5 == 0) && (local_c = FUN_00423bac(1,piVar5), local_c != 0)) {
        return local_c;
      }
      if ((local_6 == '\0') && (local_c = FUN_00423bac(0x11,param_2 + 0x18), local_c != 0)) {
        return local_c;
      }
      iVar8 = *(int *)(param_2 + 0x18);
    }
    if ((iVar8 != 0) || (local_c = FUN_00423bac(2,param_2 + 0x18), local_c == 0)) {
      uVar11 = *(uint *)(param_2 + 8);
      if (bVar6) {
        uVar11 = uVar11 | 1;
      }
      uVar12 = uVar11 | 0x18;
      if ((local_18 == 0) && (*(int *)(param_2 + 0x1d4) != 0x30000)) {
        uVar12 = uVar11 | 0x218;
      }
      if (*(int *)(param_2 + 0x1e0) != 0) {
        uVar12 = uVar12 | 4;
      }
      if (*(char *)(param_2 + 0x128) != '\0') {
        uVar12 = uVar12 | 0x20;
      }
      if (*(int *)(param_2 + 0x310) != 0) {
        uVar12 = uVar12 | 0x40;
      }
      iVar8 = FUN_0041fbdc(0x676c7966);
      if (((iVar8 != 0) && (iVar8 = FUN_0041fbdc(0x66766172), iVar8 != 0)) &&
         (iVar8 = FUN_0041fbdc(0x67766172), iVar8 != 0)) {
        uVar12 = uVar12 | 0x100;
      }
      uVar11 = 0;
      *(uint *)(param_2 + 8) = uVar12;
      if ((bVar6) && (*(short *)(param_2 + 0x170) != -1)) {
        uVar1 = *(ushort *)(param_2 + 0x1b0);
        if (((uVar1 & 0x200) != 0) || ((uVar1 & 1) != 0)) {
          uVar11 = 1;
        }
        if ((uVar1 & 0x20) != 0) {
          uVar11 = uVar11 | 2;
        }
      }
      else {
        if ((*(ushort *)(param_2 + 0xcc) & 1) != 0) {
          uVar11 = 2;
        }
        if ((*(ushort *)(param_2 + 0xcc) & 2) != 0) {
          uVar11 = uVar11 | 1;
        }
      }
      *(uint *)(param_2 + 0xc) = uVar11;
      FUN_004234c6(param_2);
      iVar8 = 0;
      if (0 < *(int *)(param_2 + 0x24)) {
        do {
          iVar4 = *(int *)(*(int *)(param_2 + 0x28) + iVar8 * 4);
          uVar15 = FUN_00423d99(*(undefined2 *)(iVar4 + 8),*(undefined2 *)(iVar4 + 10));
          iVar8 = iVar8 + 1;
          *(int *)((int)((ulonglong)uVar15 >> 0x20) + 4) = (int)uVar15;
        } while (iVar8 < *(int *)(param_2 + 0x24));
      }
      uVar11 = *(uint *)(param_2 + 0x264);
      if (uVar11 != 0) {
        local_14 = (uint)*(ushort *)(param_2 + 0xb2);
        local_18 = (uint)*(ushort *)(param_2 + 0x172);
        if ((*(ushort *)(param_2 + 0xb2) == 0) || (*(short *)(param_2 + 0x170) == -1)) {
          local_18 = 0;
          local_14 = 1;
        }
        uVar9 = FUN_00411976(0x10,0,&local_c);
        *(undefined4 *)(param_2 + 0x20) = uVar9;
        if (local_c != 0) {
          return local_c;
        }
        param_4 = 0;
        if (uVar11 != 0) {
          local_10 = 0;
          iVar8 = local_c;
          do {
            local_c = iVar8;
            puVar13 = (undefined2 *)(*(int *)(param_2 + 0x20) + local_10);
            iVar8 = (**(code **)(iVar3 + 0x98))(param_2,param_4,&local_34);
            if (iVar8 != 0) {
              return iVar8;
            }
            *puVar13 = (short)(local_20 >> 6);
            local_10 = local_10 + 0x10;
            puVar13[1] = (short)((int)((uint)local_34 * (int)(short)local_18 +
                                      (local_14 >> 1 & 0x7fff)) / (int)(local_14 & 0xffff));
            *(uint *)(puVar13 + 4) = (uint)local_34 << 6;
            *(uint *)(puVar13 + 6) = (uint)local_32 << 6;
            param_4 = param_4 + 1;
            *(uint *)(puVar13 + 2) = (uint)local_32 << 6;
            local_c = 0;
            iVar8 = 0;
          } while (param_4 < uVar11);
        }
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 2;
        *(uint *)(param_2 + 0x1c) = uVar11;
      }
      if ((*(uint *)(param_2 + 8) & 3) == 0) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 1;
      }
      if ((*(byte *)(param_2 + 8) & 1) != 0) {
        sVar2 = *(short *)(param_2 + 0xde);
        *(int *)(param_2 + 0x34) = (int)*(short *)(param_2 + 0xc4);
        *(int *)(param_2 + 0x38) = (int)*(short *)(param_2 + 0xc6);
        *(int *)(param_2 + 0x3c) = (int)*(short *)(param_2 + 200);
        *(int *)(param_2 + 0x40) = (int)*(short *)(param_2 + 0xca);
        *(undefined2 *)(param_2 + 0x44) = *(undefined2 *)(param_2 + 0xb2);
        sVar10 = *(short *)(param_2 + 0xdc);
        *(short *)(param_2 + 0x46) = sVar10;
        *(short *)(param_2 + 0x48) = sVar2;
        *(short *)(param_2 + 0x4a) = (*(short *)(param_2 + 0xe0) - sVar2) + sVar10;
        if (((sVar10 == 0) && (sVar2 == 0)) && (*(short *)(param_2 + 0x170) != -1)) {
          sVar2 = *(short *)(param_2 + 0x1b6);
          if ((sVar2 == 0) && (*(short *)(param_2 + 0x1b8) == 0)) {
            sVar10 = -*(short *)(param_2 + 0x1be);
            *(short *)(param_2 + 0x46) = *(short *)(param_2 + 0x1bc);
            *(short *)(param_2 + 0x4a) = *(short *)(param_2 + 0x1bc) + *(short *)(param_2 + 0x1be);
          }
          else {
            sVar10 = *(short *)(param_2 + 0x1b8);
            *(short *)(param_2 + 0x46) = sVar2;
            *(short *)(param_2 + 0x4a) = (*(short *)(param_2 + 0x1ba) - sVar10) + sVar2;
          }
          *(short *)(param_2 + 0x48) = sVar10;
        }
        *(undefined2 *)(param_2 + 0x4c) = *(undefined2 *)(param_2 + 0xe2);
        if (*(char *)(param_2 + 0x128) == '\0') {
          uVar7 = *(undefined2 *)(param_2 + 0x4a);
        }
        else {
          uVar7 = *(undefined2 *)(param_2 + 0x136);
        }
        *(undefined2 *)(param_2 + 0x4e) = uVar7;
        *(short *)(param_2 + 0x50) = *(short *)(param_2 + 0x1dc) - *(short *)(param_2 + 0x1de) / 2;
        *(short *)(param_2 + 0x52) = *(short *)(param_2 + 0x1de);
      }
    }
  }
  return local_c;
}

