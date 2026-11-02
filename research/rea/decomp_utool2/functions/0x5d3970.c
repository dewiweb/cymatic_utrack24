// rea decompile_all
// name: FUN_005d3970
// address: 0x5d3970
// body: available
// range: 0x5d3970-0x5d3e4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x005d3c7f) */

int FUN_005d3970(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,longlong param_5,
                undefined4 param_6,int param_7,uint *param_8,int param_9,int param_10)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  void *_Memory;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int *in_ECX;
  uint in_EDX;
  int iVar12;
  bool bVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  void *local_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c [2];
  uint local_24;
  undefined8 local_20;
  uint local_18;
  int local_14;
  uint local_10;
  int local_c;
  
  uVar8 = param_4;
  lVar6 = CONCAT44(local_20._4_4_,(undefined4)local_20);
  local_40 = 0xffffffff;
  local_3c = 0xffffffff;
  uVar3 = in_ECX[0x72];
  puVar2 = param_8;
  iVar10 = param_9;
  local_30 = uVar3;
  if (param_8 != (uint *)0x0) {
    while (iVar10 != 0) {
      local_14 = param_5._4_4_;
      local_c = param_5._4_4_;
      local_24 = (uint)param_5;
      local_18 = (uint)param_5;
      iVar12 = param_10;
      if (*puVar2 == in_EDX) {
        while (param_10 = iVar12, in_EDX != uVar3) {
          local_2c[0] = uVar3;
          uVar16 = FUN_005d43d0(param_9,local_2c,&param_6);
          *(undefined8 *)(in_ECX + 2) = uVar16;
          iVar12 = param_10;
          in_EDX = local_2c[0];
        }
        in_ECX[0xd] = iVar12 + 1;
        if ((void *)in_ECX[0xe] != (void *)0x0) {
          FID_conflict__free((void *)in_ECX[0xe]);
        }
        if ((void *)in_ECX[0x10] != (void *)0x0) {
          FID_conflict__free((void *)in_ECX[0x10]);
        }
        if ((void *)in_ECX[0xf] != (void *)0x0) {
          FID_conflict__free((void *)in_ECX[0xf]);
        }
        iVar10 = FUN_004c554b(in_ECX[0xd] * 8 + 8);
        in_ECX[0xe] = iVar10;
        iVar10 = FUN_004c553b(in_ECX[0x12],in_ECX[0xd] << 5);
        in_ECX[0x12] = iVar10;
        iVar10 = FUN_004c553b(in_ECX[0x13],in_ECX[0xd] << 4);
        in_ECX[0x13] = iVar10;
        iVar10 = FUN_004c554b(in_ECX[0xd] << 2);
        in_ECX[0x10] = iVar10;
        iVar10 = FUN_004c554b(in_ECX[0xd] << 3);
        in_ECX[0xf] = iVar10;
        iVar10 = FUN_004c554b(in_ECX[0xd] << 4);
        in_ECX[0x11] = iVar10;
        iVar10 = in_ECX[0xe];
        *(uint *)(iVar10 + 8 + iVar12 * 8) = (uint)param_5;
        *(int *)(iVar10 + 0xc + iVar12 * 8) = param_5._4_4_;
        iVar10 = in_ECX[0xe];
        *(undefined4 *)(iVar10 + iVar12 * 8) = param_1;
        *(undefined4 *)(iVar10 + 4 + iVar12 * 8) = param_2;
        if ((param_7 < 1) && (param_7 < 0)) {
          param_7 = 0;
          param_6 = 0;
        }
        iVar10 = in_ECX[0x11];
        *(undefined4 *)(iVar10 + 8 + iVar12 * 0x10) = param_6;
        *(int *)(iVar10 + 0xc + iVar12 * 0x10) = param_7;
        return 0;
      }
      puVar2 = puVar2 + 1;
      iVar10 = iVar10 + -1;
    }
  }
  local_38 = (void *)0x0;
  local_34 = 0;
  local_10 = param_4;
  lVar14 = param_5;
  lVar15 = lVar6;
  lVar7 = param_5;
  if (((int)param_4 <= param_5._4_4_) &&
     ((param_4 = param_3, lVar5 = param_5, lVar15 = CONCAT44(local_20._4_4_,(undefined4)local_20),
      (int)uVar8 < param_5._4_4_ || (lVar15 = lVar6, param_3 < (uint)param_5)))) {
    do {
      local_c = (int)((ulonglong)lVar7 >> 0x20);
      local_18 = (uint)lVar7;
      local_14 = (int)((ulonglong)lVar5 >> 0x20);
      local_24 = (uint)lVar5;
      bVar13 = -1 < (int)((local_14 - local_10) - (uint)(local_24 < param_4));
      if ((local_14 - local_10 != (uint)(local_24 < param_4) && bVar13) ||
         ((lVar14 = CONCAT44(local_10,param_4), bVar13 &&
          (lVar14 = CONCAT44(local_10,param_4), 0xffff < local_24 - param_4)))) {
        local_20 = lVar15;
        lVar14 = __alldiv(lVar5 + CONCAT44(local_10,param_4),2,0);
        lVar7 = CONCAT44(local_c,local_18);
        lVar5 = CONCAT44(local_14,local_24);
        lVar15 = local_20;
      }
      local_c = (int)((ulonglong)lVar7 >> 0x20);
      local_18 = (uint)lVar7;
      local_14 = (int)((ulonglong)lVar5 >> 0x20);
      local_24 = (uint)lVar5;
      if (((int)lVar14 != in_ECX[2]) || ((int)((ulonglong)lVar14 >> 0x20) != in_ECX[3])) {
        if (*in_ECX == 0) {
          iVar10 = -0x81;
        }
        else {
          if ((code *)in_ECX[0xb1] != (code *)0x0) {
            local_20 = lVar15;
            iVar10 = (*(code *)in_ECX[0xb1])(*in_ECX,lVar14,0);
            lVar7 = CONCAT44(local_c,local_18);
            lVar5 = CONCAT44(local_14,local_24);
            lVar15 = local_20;
            if (iVar10 != -1) {
              iVar10 = 0;
              *(longlong *)(in_ECX + 2) = lVar14;
              in_ECX[8] = 0;
              in_ECX[9] = 0;
              in_ECX[10] = 0;
              in_ECX[0xb] = 0;
              in_ECX[0xc] = 0;
              goto LAB_005d3bcc;
            }
          }
          iVar10 = -0x80;
        }
LAB_005d3bcc:
        if (iVar10 != 0) {
          return iVar10;
        }
      }
      local_c = (int)((ulonglong)lVar7 >> 0x20);
      local_18 = (uint)lVar7;
      local_14 = (int)((ulonglong)lVar5 >> 0x20);
      local_24 = (uint)lVar5;
      local_20 = lVar15;
      lVar15 = FUN_005d4950(0xffffffff,0xffffffff);
      if (lVar15 == -0x80) {
        return -0x80;
      }
      if ((-1 < lVar15) && (puVar2 = param_8, iVar10 = param_9, param_8 != (uint *)0x0)) {
        while (iVar10 != 0) {
          if (*puVar2 == *(uint *)(local_50 + 0xe)) {
            param_4 = in_ECX[2];
            local_10 = in_ECX[3];
            lVar14 = CONCAT44(local_14,local_24);
            lVar7 = CONCAT44(local_c,local_18);
            goto LAB_005d3c72;
          }
          puVar2 = puVar2 + 1;
          iVar10 = iVar10 + -1;
        }
      }
      lVar7 = CONCAT44(local_c,local_18);
      if (-1 < lVar15) {
        lVar7 = lVar15;
      }
LAB_005d3c72:
      lVar5 = lVar14;
    } while (CONCAT44(local_10,param_4) < lVar14);
  }
  uVar8 = local_30;
  local_18 = (uint)lVar7;
  uVar9 = local_18;
  *(longlong *)(in_ECX + 2) = lVar7;
  local_20 = lVar15;
  uVar3 = local_30 + 1;
  while( true ) {
    local_24 = (uint)lVar14;
    local_14 = (int)((ulonglong)lVar14 >> 0x20);
    local_18 = (uint)lVar7;
    local_c = (int)((ulonglong)lVar7 >> 0x20);
    if (uVar3 == uVar8) break;
    param_4 = uVar8;
    uVar16 = FUN_005d43d0(param_9,&param_4,&local_40);
    lVar7 = CONCAT44(local_c,local_18);
    lVar14 = CONCAT44(local_14,local_24);
    *(undefined8 *)(in_ECX + 2) = uVar16;
    uVar3 = param_4;
  }
  if ((in_ECX[2] != uVar9) || (in_ECX[3] != local_c)) {
    iVar10 = FUN_005d4a10(uVar9,local_c);
    lVar7 = CONCAT44(local_c,local_18);
    lVar14 = CONCAT44(local_14,local_24);
    if (iVar10 != 0) {
      return iVar10;
    }
  }
  local_c = (int)((ulonglong)lVar7 >> 0x20);
  local_18 = (uint)lVar7;
  local_14 = (int)((ulonglong)lVar14 >> 0x20);
  local_24 = (uint)lVar14;
  iVar10 = FUN_005d40a0(&local_50,&local_38,&local_34,0);
  if (iVar10 == 0) {
    param_9 = in_ECX[0x72];
    param_8 = (uint *)in_ECX[2];
    param_4 = in_ECX[3];
    uVar16 = FUN_005d3e50();
    _Memory = local_38;
    iVar12 = param_10;
    local_24 = (uint)((ulonglong)uVar16 >> 0x20);
    local_30 = (uint)uVar16;
    iVar10 = FUN_005d3970(local_18,local_c,in_ECX[2],in_ECX[3],(uint)param_5,param_5._4_4_,param_6,
                          param_7,local_38,local_34,param_10 + 1);
    if (iVar10 == 0) {
      if (_Memory != (void *)0x0) {
        FID_conflict__free(_Memory);
      }
      iVar10 = in_ECX[0xe];
      *(uint *)(iVar10 + 8 + iVar12 * 8) = local_18;
      *(int *)(iVar10 + 0xc + iVar12 * 8) = local_c;
      *(int *)(in_ECX[0x10] + 4 + iVar12 * 4) = param_9;
      iVar10 = in_ECX[0xf];
      *(uint **)(iVar10 + 8 + iVar12 * 8) = param_8;
      *(uint *)(iVar10 + 0xc + iVar12 * 8) = param_4;
      puVar11 = (undefined4 *)((iVar12 + 1) * 0x20 + in_ECX[0x12]);
      iVar12 = iVar12 * 0x10;
      *puVar11 = local_70;
      puVar11[1] = uStack_6c;
      puVar11[2] = uStack_68;
      puVar11[3] = uStack_64;
      puVar11[4] = local_60;
      puVar11[5] = uStack_5c;
      puVar11[6] = uStack_58;
      puVar11[7] = uStack_54;
      piVar1 = (int *)(in_ECX[0x13] + 0x10 + iVar12);
      *piVar1 = local_50;
      piVar1[1] = iStack_4c;
      piVar1[2] = iStack_48;
      piVar1[3] = iStack_44;
      iVar10 = in_ECX[0x11];
      *(undefined4 *)(iVar12 + 8 + iVar10) = local_40;
      *(undefined4 *)(iVar12 + 0xc + iVar10) = local_3c;
      iVar10 = in_ECX[0x11];
      *(uint *)(iVar12 + 0x10 + iVar10) = local_30;
      *(uint *)(iVar12 + 0x14 + iVar10) = local_24;
      iVar10 = in_ECX[0x11];
      puVar2 = (uint *)(iVar12 + 0x18 + iVar10);
      uVar3 = *puVar2;
      *puVar2 = *puVar2 - local_30;
      piVar1 = (int *)(iVar12 + 0x1c + iVar10);
      *piVar1 = (*piVar1 - local_24) - (uint)(uVar3 < local_30);
      iVar10 = in_ECX[0x11];
      iVar4 = *(int *)(iVar12 + 0x1c + iVar10);
      if ((iVar4 < 1) && (iVar4 < 0)) {
        *(undefined4 *)(iVar12 + 0x18 + iVar10) = 0;
        *(undefined4 *)(iVar12 + 0x1c + iVar10) = 0;
      }
      iVar10 = 0;
    }
  }
  return iVar10;
}

