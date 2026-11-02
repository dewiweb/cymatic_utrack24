// rea decompile_all
// name: FUN_0040a484
// address: 0x40a484
// body: available
// range: 0x40a484-0x40ac21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040a484(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                undefined4 param_5)

{
  char cVar1;
  char cVar2;
  short sVar3;
  undefined4 uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  int *piVar15;
  bool bVar16;
  int *local_24;
  int local_1c;
  uint local_10;
  int local_c;
  char local_5;
  
  uVar11 = *(undefined4 *)(param_2[0x18] + 4);
  bVar16 = true;
  local_5 = '\0';
  iVar6 = FUN_0040ffb6(&DAT_0090ed4c);
  if (iVar6 == 0) {
    return 0xb;
  }
  iVar7 = FUN_0040ffcd("postscript-cmaps");
  uVar8 = FUN_0040ffb6("pshinter");
  local_c = FUN_0041106d();
  if (local_c != 0) {
    return local_c;
  }
  iVar9 = (**(code **)(iVar6 + 4))(param_1,param_2,param_3,param_4,param_5);
  if (iVar9 == 0) {
    if (param_2[0x25] != 0x4f54544f) {
      return 2;
    }
    if (param_3 < 0) {
      return 0;
    }
    if (0 < param_3) {
      return 6;
    }
    local_5 = '\x01';
    iVar9 = (*(code *)param_2[0x7f])(param_2,0x68656164,param_1,0);
    bVar16 = iVar9 != 0;
    if (bVar16) {
      local_c = (**(code **)(iVar6 + 0x28))(param_2,param_1);
    }
    else {
      local_c = (**(code **)(iVar6 + 8))(param_1,param_2,0,param_4,param_5);
    }
    if (local_c != 0) {
      return local_c;
    }
    local_c = (*(code *)param_2[0x7f])(param_2,0x43464620,param_1,0);
    if (local_c != 0) {
      return local_c;
    }
  }
  else {
    iVar6 = FUN_0041106d();
    if (iVar6 != 0) {
      return iVar6;
    }
    local_c = 0;
  }
  uVar4 = param_2[0x19];
  iVar6 = FUN_00411912(0xb9c,&local_c);
  if (local_c != 0) {
    return local_c;
  }
  param_2[0xad] = iVar6;
  local_c = FUN_00409a1a(uVar11,param_1,param_3,iVar6,bVar16);
  if (local_c != 0) {
    return local_c;
  }
  *(undefined4 *)(iVar6 + 0xb88) = uVar8;
  *(int *)(iVar6 + 0xb8c) = iVar7;
  param_2[1] = param_3;
  param_2[4] = *(undefined4 *)(iVar6 + 0xc);
  if ((*(int *)(iVar6 + 0x5b0) == 0xffff) && (iVar7 == 0)) {
    return 0xb;
  }
  if (*(char *)(iVar6 + 0x56c) == '\0') {
    uVar10 = 1000;
    if (bVar16 == false) {
      uVar10 = (uint)*(ushort *)(param_2 + 0x11);
    }
    *(uint *)(iVar6 + 0x570) = uVar10;
  }
  iVar7 = *(int *)(iVar6 + 0x568);
  if (iVar7 < 0) {
    iVar7 = -iVar7;
  }
  if (iVar7 != 0x10000) {
    uVar11 = FUN_0040d2d8();
    *(undefined4 *)(iVar6 + 0x570) = uVar11;
    uVar11 = FUN_0040d2d8();
    *(undefined4 *)(iVar6 + 0x55c) = uVar11;
    uVar11 = FUN_0040d2d8();
    *(undefined4 *)(iVar6 + 0x564) = uVar11;
    uVar11 = FUN_0040d2d8();
    *(undefined4 *)(iVar6 + 0x560) = uVar11;
    uVar11 = FUN_0040d2d8();
    *(undefined4 *)(iVar6 + 0x568) = uVar11;
    uVar11 = FUN_0040d2d8();
    *(undefined4 *)(iVar6 + 0x574) = uVar11;
    uVar11 = FUN_0040d2d8();
    *(undefined4 *)(iVar6 + 0x578) = uVar11;
  }
  *(int *)(iVar6 + 0x574) = (int)*(short *)(iVar6 + 0x576);
  *(int *)(iVar6 + 0x578) = (int)*(short *)(iVar6 + 0x57a);
  local_1c = *(int *)(iVar6 + 0x768);
  if (local_1c != 0) {
    local_24 = (int *)(iVar6 + 0x768 + local_1c * 4);
    do {
      iVar7 = *local_24;
      if (*(char *)(iVar7 + 0x40) == '\0') {
        *(undefined4 *)(iVar7 + 0x30) = *(undefined4 *)(iVar6 + 0x55c);
        *(undefined4 *)(iVar7 + 0x34) = *(undefined4 *)(iVar6 + 0x560);
        *(undefined4 *)(iVar7 + 0x38) = *(undefined4 *)(iVar6 + 0x564);
        *(undefined4 *)(iVar7 + 0x3c) = *(undefined4 *)(iVar6 + 0x568);
        *(undefined4 *)(iVar7 + 0x48) = *(undefined4 *)(iVar6 + 0x574);
        *(undefined4 *)(iVar7 + 0x4c) = *(undefined4 *)(iVar6 + 0x578);
        *(undefined4 *)(iVar7 + 0x44) = *(undefined4 *)(iVar6 + 0x570);
      }
      else if (*(char *)(iVar6 + 0x56c) != '\0') {
        FUN_0040d398();
        FUN_0040d469();
        uVar11 = FUN_0040d230(*(undefined4 *)(iVar6 + 0x570));
        *(undefined4 *)(iVar7 + 0x44) = uVar11;
      }
      iVar9 = *(int *)(iVar7 + 0x3c);
      if (iVar9 < 0) {
        iVar9 = -iVar9;
      }
      if (iVar9 != 0x10000) {
        uVar11 = FUN_0040d2d8();
        *(undefined4 *)(iVar7 + 0x44) = uVar11;
        uVar11 = FUN_0040d2d8();
        *(undefined4 *)(iVar7 + 0x30) = uVar11;
        uVar11 = FUN_0040d2d8();
        *(undefined4 *)(iVar7 + 0x38) = uVar11;
        uVar11 = FUN_0040d2d8();
        *(undefined4 *)(iVar7 + 0x34) = uVar11;
        uVar11 = FUN_0040d2d8();
        *(undefined4 *)(iVar7 + 0x3c) = uVar11;
        uVar11 = FUN_0040d2d8();
        *(undefined4 *)(iVar7 + 0x48) = uVar11;
        uVar11 = FUN_0040d2d8();
        *(undefined4 *)(iVar7 + 0x4c) = uVar11;
      }
      local_1c = local_1c + -1;
      local_24 = local_24 + -1;
      *(int *)(iVar7 + 0x48) = (int)*(short *)(iVar7 + 0x4a);
      *(int *)(iVar7 + 0x4c) = (int)*(short *)(iVar7 + 0x4e);
    } while (local_1c != 0);
  }
  if (bVar16 == false) goto LAB_0040aa47;
  *param_2 = *(undefined4 *)(iVar6 + 8);
  if (*(int *)(iVar6 + 0x5b0) == 0xffff) {
    iVar7 = *(int *)(iVar6 + 0x4a0);
  }
  else {
    iVar7 = *(int *)(iVar6 + 0x490) + 1;
  }
  param_2[4] = iVar7;
  param_2[0xd] = (int)*(short *)(iVar6 + 0x582);
  param_2[0xe] = (int)*(short *)(iVar6 + 0x586);
  param_2[0xf] = *(int *)(iVar6 + 0x588) + 0xffff >> 0x10;
  iVar7 = *(int *)(iVar6 + 0x58c) + 0xffff;
  param_2[0x10] = iVar7 >> 0x10;
  *(undefined2 *)(param_2 + 0x11) = *(undefined2 *)(iVar6 + 0x570);
  *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(param_2 + 0xe);
  sVar3 = (short)((uint)iVar7 >> 0x10);
  *(short *)((int)param_2 + 0x46) = sVar3;
  sVar5 = (short)((ulonglong)((uint)*(ushort *)(param_2 + 0x11) * 0xc) / 10);
  *(short *)((int)param_2 + 0x4a) = sVar5;
  if ((int)sVar5 < (int)sVar3 - (int)*(short *)(param_2 + 0xe)) {
    *(short *)((int)param_2 + 0x4a) = sVar3 - *(short *)(param_2 + 0xe);
  }
  *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)(iVar6 + 0x54e);
  *(undefined2 *)((int)param_2 + 0x52) = *(undefined2 *)(iVar6 + 0x552);
  iVar7 = FUN_00409035(param_3);
  param_2[5] = iVar7;
  if (iVar7 == 0) {
    iVar7 = FUN_004090bf();
    if (iVar7 == 0) goto LAB_0040a982;
    uVar11 = FUN_0040a394(uVar4,iVar7);
    iVar7 = 0;
    param_2[5] = uVar11;
LAB_0040abd3:
    if (iVar7 == 0) goto LAB_0040a982;
    param_2[6] = iVar7;
  }
  else {
    pcVar12 = (char *)FUN_004090bf();
    pcVar14 = (char *)param_2[5];
    FUN_0040a3ac();
    if ((*(int *)(iVar6 + 0x53c) != 0) && (pcVar13 = (char *)FUN_004090bf(), pcVar13 != (char *)0x0)
       ) {
      pcVar14 = pcVar13;
    }
    if ((pcVar12 != (char *)0x0) && (pcVar14 != (char *)0x0)) {
      while (*pcVar12 != '\0') {
        cVar1 = *pcVar12;
        cVar2 = *pcVar14;
        if (cVar1 == cVar2) {
          pcVar14 = pcVar14 + 1;
LAB_0040ab5d:
          pcVar12 = pcVar12 + 1;
        }
        else {
          if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_0040ab5d;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if ((*pcVar14 == '\0') && (*pcVar12 != '\0')) {
              iVar7 = FUN_0040a394(uVar4,pcVar12);
              FUN_0040a415();
              goto LAB_0040abd3;
            }
            break;
          }
          pcVar14 = pcVar14 + 1;
        }
      }
    }
LAB_0040a982:
    uVar11 = FUN_0040a394(uVar4,"Regular");
    param_2[6] = uVar11;
  }
  uVar10 = 0x811;
  if (local_5 != '\0') {
    uVar10 = 0x819;
  }
  if (*(char *)(iVar6 + 0x544) != '\0') {
    uVar10 = uVar10 | 4;
  }
  param_2[2] = uVar10;
  local_10 = (uint)(*(int *)(iVar6 + 0x548) != 0);
  pcVar14 = (char *)FUN_004090bf();
  if ((pcVar14 != (char *)0x0) &&
     ((iVar7 = _strcmp(pcVar14,"Bold"), iVar7 == 0 || (iVar7 = _strcmp(pcVar14,"Black"), iVar7 == 0)
      ))) {
    local_10 = local_10 | 2;
  }
  if ((((local_10 & 2) == 0) && ((char *)param_2[6] != (char *)0x0)) &&
     ((iVar7 = _strncmp((char *)param_2[6],"Bold",4), iVar7 == 0 ||
      (iVar7 = _strncmp((char *)param_2[6],"Black",5), iVar7 == 0)))) {
    local_10 = local_10 | 2;
  }
  param_2[3] = local_10;
LAB_0040aa47:
  if (((*(int *)(iVar6 + 0x5b0) != 0xffff) ||
      (param_2[2] = param_2[2] | 0x200, *(int *)(iVar6 + 0x5b0) != 0xffff)) && (bVar16 != false)) {
    param_2[2] = param_2[2] | 0x1000;
  }
  uVar10 = 0;
  if (param_2[9] != 0) {
    piVar15 = (int *)param_2[10];
    do {
      sVar3 = *(short *)(*piVar15 + 8);
      if (((sVar3 == 3) && (*(short *)(*piVar15 + 10) == 1)) || (sVar3 == 0)) goto LAB_0040ab1d;
      uVar10 = uVar10 + 1;
      piVar15 = piVar15 + 1;
    } while (uVar10 < (uint)param_2[9]);
  }
  if (((bVar16 == false) || (*(int *)(iVar6 + 0x5b0) == 0xffff)) && (uVar10 + 1 < 0x10)) {
    uVar10 = param_2[9];
    local_c = FUN_0040f8e2(&DAT_008fb3d0,0,0);
    if ((local_c == 0) || (local_c == 0xa3)) {
      local_c = 0;
      if ((param_2[0x17] == 0) && (uVar10 != param_2[9])) {
        param_2[0x17] = *(undefined4 *)(param_2[10] + uVar10 * 4);
      }
LAB_0040ab1d:
      if ((uVar10 < 0x10) && (*(int *)(iVar6 + 0x7c) != 0)) {
        local_c = FUN_0040f8e2(&DAT_008fb3a8,0,0);
      }
    }
  }
  return local_c;
}

