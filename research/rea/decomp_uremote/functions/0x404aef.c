// rea decompile_all
// name: FUN_00404aef
// address: 0x404aef
// body: available
// range: 0x404aef-0x405246 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00404aef(int *param_1,int param_2,undefined4 param_3,uint param_4,int param_5)

{
  int *piVar1;
  int *piVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  int local_68;
  undefined2 local_58;
  int local_54;
  uint local_4c;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  int local_18;
  
  piVar4 = (int *)param_1[0x21];
  iVar5 = *(int *)(*param_1 + 0x54);
  iVar13 = param_1[2];
  piVar6 = *(int **)(iVar5 + 0x9c);
  iVar8 = FUN_0040ddcc(param_3,param_4 | 0x2000);
  if (iVar8 != 0) {
    return iVar8;
  }
  iVar8 = piVar6[2];
  *(char *)(param_1 + 0x22) = (char)iVar8;
  if ((char)iVar8 != '\0') {
    param_1[0x23] = piVar6[3];
    param_1[0x24] = piVar6[4];
    param_1[0x25] = piVar6[5];
    param_1[0x26] = piVar6[6];
    param_1[0x27] = piVar6[7];
    local_2c = param_1[0x23];
    local_28 = param_1[0x24];
    local_24 = param_1[0x25];
    local_20 = param_1[0x26];
    param_1[0x28] = piVar6[8];
    FUN_0040d32e();
    FUN_00410783();
  }
  if (*(int *)(iVar5 + 0x48) == 0x636f6d70) {
    uVar15 = *(uint *)(iVar5 + 0x80);
    sVar3 = *(short *)(iVar13 + 0x16);
    iVar8 = FUN_0040d839(uVar15);
    if (iVar8 != 0) {
      return iVar8;
    }
    _memcpy(*(void **)(iVar13 + 0x58),*(void **)(iVar5 + 0x84),uVar15 << 5);
    local_4c = 0;
    *(uint *)(iVar13 + 0x54) = uVar15;
    local_68 = 0;
    if (uVar15 != 0) {
      local_54 = *(int *)(iVar13 + 0x30) << 5;
      do {
        iVar8 = param_1[0x29];
        iVar12 = param_1[0x2a];
        local_2c = param_1[0x2b];
        local_28 = param_1[0x2c];
        uVar17 = (uint)*(short *)(iVar13 + 0x16);
        iVar9 = FUN_00404aef(param_1,param_2,*(undefined4 *)(*(int *)(iVar13 + 0x34) + local_54),
                             param_4,param_5 + 1);
        if (iVar9 != 0) {
          return iVar9;
        }
        iVar9 = *(int *)(iVar13 + 0x34) + local_54;
        if ((*(ushort *)(iVar9 + 4) & 0x200) == 0) {
          param_1[0x29] = iVar8;
          param_1[0x2a] = iVar12;
          param_1[0x2b] = local_2c;
          param_1[0x2c] = local_28;
        }
        uVar10 = (int)*(short *)(iVar13 + 0x16) - uVar17;
        if ((*(byte *)(iVar9 + 4) & 200) != 0) {
          uVar16 = *(int *)(iVar13 + 0x18) + uVar17 * 8;
          uVar11 = uVar16 + uVar10 * 8;
          for (; uVar16 < uVar11; uVar16 = uVar16 + 8) {
            FUN_00410783();
          }
        }
        if ((*(byte *)(iVar9 + 4) & 2) == 0) {
          uVar16 = *(int *)(iVar9 + 8) + (int)sVar3;
          if ((uVar17 <= uVar16) || (uVar10 <= *(uint *)(iVar9 + 0xc))) {
            return 0x15;
          }
          piVar1 = (int *)(*(int *)(iVar13 + 0x18) + uVar16 * 8);
          piVar2 = (int *)(*(int *)(iVar13 + 0x18) +
                          (*(uint *)(iVar9 + 0xc) + uVar17 + (int)sVar3) * 8);
          uVar16 = *piVar1 - *piVar2;
          uVar11 = piVar1[1] - piVar2[1];
        }
        else {
          iVar8 = FUN_00401000(*(undefined4 *)(iVar9 + 8),param_1[4]);
          uVar16 = iVar8 + param_1[5] + 0x20U & 0xffffffc0;
          iVar8 = FUN_00401000(*(undefined4 *)(iVar9 + 0xc),param_1[6]);
          uVar11 = iVar8 + 0x20 + param_1[7] & 0xffffffc0;
        }
        puVar19 = (undefined4 *)(iVar13 + 0x14);
        puVar20 = &local_1c;
        for (iVar8 = 5; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar20 = *puVar19;
          puVar19 = puVar19 + 1;
          puVar20 = puVar20 + 1;
        }
        local_18 = local_18 + uVar17 * 8;
        local_58 = (undefined2)uVar10;
        local_1c._2_2_ = local_58;
        FUN_00410751(uVar16,uVar11);
        local_54 = local_54 + 0x20;
        local_4c = local_4c + 1;
        local_68 = 0;
      } while (local_4c < uVar15);
    }
  }
  else if (*(int *)(iVar5 + 0x48) == 0x6f75746c) {
    if ((char)param_1[0x22] != '\0') {
      FUN_00410751(param_1[0x27],param_1[0x28]);
    }
    iVar8 = *(short *)(iVar5 + 0x6e) + 4;
    if (((iVar8 == 0) ||
        ((uint)(*(short *)(iVar13 + 0x16) + 4 +
               (int)*(short *)(iVar13 + 0x3a) + (int)*(short *)(iVar5 + 0x6e)) <=
         *(uint *)(iVar13 + 4))) &&
       ((*(short *)(iVar5 + 0x6c) == 0 ||
        ((uint)((int)*(short *)(iVar13 + 0x38) + (int)*(short *)(iVar13 + 0x14) +
               (int)*(short *)(iVar5 + 0x6c)) <= *(uint *)(iVar13 + 8))))) {
      local_68 = 0;
    }
    else {
      local_68 = FUN_0040d706(iVar8,(int)*(short *)(iVar5 + 0x6c));
    }
    if (local_68 != 0) {
      return local_68;
    }
    _memcpy(*(void **)(iVar13 + 0x3c),*(void **)(iVar5 + 0x70),(int)*(short *)(iVar5 + 0x6e) << 3);
    _memcpy(*(void **)(iVar13 + 0x44),*(void **)(iVar5 + 0x78),*(short *)(iVar5 + 0x6c) * 2);
    _memcpy(*(void **)(iVar13 + 0x40),*(void **)(iVar5 + 0x74),(int)*(short *)(iVar5 + 0x6e));
    *(undefined2 *)(iVar13 + 0x3a) = *(undefined2 *)(iVar5 + 0x6e);
    *(undefined2 *)(iVar13 + 0x38) = *(undefined2 *)(iVar5 + 0x6c);
    param_1[0x29] = param_1[5];
    param_1[0x2a] = param_1[7];
    iVar8 = FUN_00401000(*(undefined4 *)(iVar5 + 0x28),param_1[4]);
    param_1[0x2b] = iVar8 + param_1[5];
    param_1[0x2c] = param_1[7];
    if (*(short *)(iVar5 + 0x6e) != 0) {
      if (*(code **)(*piVar4 + 0x1c) != (code *)0x0) {
        (**(code **)(*piVar4 + 0x1c))(param_1 + 3,iVar13 + 0x38,piVar4);
      }
      if (*(int *)(param_2 + 0x14) == 1) {
        iVar8 = param_1[0x29];
        iVar13 = param_1[0x2b];
        param_1[0x29] = param_1[0x1f] + 0x20 + iVar8 & 0xffffffc0;
        param_1[0x2b] = param_1[0x20] + 0x20 + iVar13 & 0xffffffc0;
        *(int *)(iVar5 + 0x90) = param_1[0x29] - iVar8;
        iVar13 = param_1[0x2b] - iVar13;
LAB_00404e3e:
        *(int *)(iVar5 + 0x94) = iVar13;
      }
      else {
        iVar8 = param_1[0x13];
        iVar13 = param_1[0x11] * 0x30 + -0x30 + iVar8;
        if ((param_1[0x11] < 2) || ((*(byte *)(param_1 + 0x1c) & 4) != 0)) {
          iVar8 = param_1[0x29];
          iVar13 = param_1[0x2b];
          uVar15 = iVar8 + 0x20U & 0xffffffc0;
          param_1[0x29] = uVar15;
          param_1[0x2b] = iVar13 + 0x20U & 0xffffffc0;
          *(uint *)(iVar5 + 0x90) = uVar15 - iVar8;
          iVar13 = param_1[0x2b] - iVar13;
          goto LAB_00404e3e;
        }
        iVar12 = *(int *)(iVar8 + 4);
        iVar8 = *(int *)(iVar8 + 8);
        iVar14 = param_1[0x2b] - *(int *)(iVar13 + 4);
        iVar18 = iVar8 - iVar12;
        iVar9 = *(int *)(iVar13 + 8) + iVar14;
        if (iVar12 < 0x18) {
          iVar18 = iVar18 + -8;
        }
        if (iVar14 < 0x18) {
          iVar9 = iVar9 + 8;
        }
        uVar15 = iVar18 + 0x20U & 0xffffffc0;
        uVar17 = iVar9 + 0x20U & 0xffffffc0;
        param_1[0x29] = uVar15;
        param_1[0x2b] = uVar17;
        if ((iVar8 <= (int)uVar15) && (0 < iVar12)) {
          param_1[0x29] = uVar15 - 0x40;
        }
        if (((int)uVar17 <= *(int *)(iVar13 + 8)) && (0 < iVar14)) {
          param_1[0x2b] = uVar17 + 0x40;
        }
        *(int *)(iVar5 + 0x90) = param_1[0x29] - iVar18;
        *(int *)(iVar5 + 0x94) = param_1[0x2b] - iVar9;
      }
      FUN_0040d89f();
    }
  }
  else {
    local_68 = 7;
  }
  if (param_5 != 0) {
    return local_68;
  }
  iVar13 = *(int *)(iVar5 + 0x30);
  iVar8 = *(int *)(iVar5 + 0x24);
  iVar12 = FUN_00401000(*(int *)(iVar5 + 0x2c) - *(int *)(iVar5 + 0x20),piVar4[2]);
  iVar13 = FUN_00401000(iVar13 - iVar8,piVar4[3]);
  if ((char)param_1[0x22] != '\0') {
    FUN_004107d0();
    FUN_00410783();
  }
  if (param_1[0x29] != 0) {
    FUN_00410751(-param_1[0x29],0);
  }
  FUN_004106d2();
  uVar17 = local_2c & 0xffffffc0;
  uVar15 = local_20 + 0x3fU & 0xffffffc0;
  *(uint *)(iVar5 + 0x18) = (local_24 + 0x3fU & 0xffffffc0) - uVar17;
  *(uint *)(iVar5 + 0x20) = uVar17;
  *(uint *)(iVar5 + 0x1c) = uVar15 - (local_28 & 0xffffffc0);
  *(uint *)(iVar5 + 0x24) = uVar15;
  *(uint *)(iVar5 + 0x2c) = uVar17 + iVar12 & 0xffffffc0;
  *(uint *)(iVar5 + 0x30) = uVar15 + iVar13 & 0xffffffc0;
  if ((*(int *)(param_2 + 0x14) == 1) ||
     (((*(byte *)(*(int *)(iVar5 + 4) + 8) & 4) == 0 &&
      ((cVar7 = FUN_00401340(), cVar7 == '\0' || ((char)piVar4[8] == '\0')))))) {
    if (*(int *)(iVar5 + 0x28) == 0) goto LAB_004051c3;
    iVar13 = param_1[0x2b] - param_1[0x29];
  }
  else {
    iVar13 = FUN_00401000(*(undefined4 *)(iVar5 + 0x28),piVar4[2]);
    *(undefined4 *)(iVar5 + 0x90) = 0;
    *(undefined4 *)(iVar5 + 0x94) = 0;
  }
  *(int *)(iVar5 + 0x28) = iVar13;
LAB_004051c3:
  iVar13 = FUN_00401000(*(undefined4 *)(iVar5 + 0x34),piVar4[3]);
  *(uint *)(iVar5 + 0x34) = iVar13 + 0x20U & 0xffffffc0;
  *(uint *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + 0x20U & 0xffffffc0;
  FUN_0040d5dd();
  iVar13 = FUN_0040d8e5();
  if (iVar13 == 0) {
    *(undefined2 *)(iVar5 + 0x6c) = *(undefined2 *)(*piVar6 + 0x14);
    *(undefined2 *)(iVar5 + 0x6e) = *(undefined2 *)(*piVar6 + 0x16);
    *(undefined4 *)(iVar5 + 0x70) = *(undefined4 *)(*piVar6 + 0x18);
    *(undefined4 *)(iVar5 + 0x74) = *(undefined4 *)(*piVar6 + 0x1c);
    *(undefined4 *)(iVar5 + 0x78) = *(undefined4 *)(*piVar6 + 0x20);
    *(undefined4 *)(iVar5 + 0x48) = 0x6f75746c;
  }
  return iVar13;
}

