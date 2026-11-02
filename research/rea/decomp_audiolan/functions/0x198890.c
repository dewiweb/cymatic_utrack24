// rea decompile_all
// name: FUN_00198890
// address: 0x198890
// body: available
// range: 0x198890-0x198ca7 inclusive
// range: 0x198e14-0x199127 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00198890(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  undefined2 *puVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  undefined1 uVar15;
  int iVar16;
  int iVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  int *local_2c;
  
  piVar19 = DAT_00198d64;
  uVar9 = DAT_00198cac;
  sVar3 = *(short *)((int)param_2 + 6);
  if ((((sVar3 == 2) || (sVar3 == 5)) || (sVar3 == 0xc)) || (sVar3 == 0x27)) {
    puVar6 = (undefined1 *)(param_2[9] + 4);
  }
  else if (((sVar3 == 0xf) || (sVar3 == 0x12)) || ((sVar3 == 0x15 || (sVar3 == 0x24)))) {
    puVar6 = (undefined1 *)(param_2[9] + 6);
  }
  else if (sVar3 == 0x21) {
    puVar6 = (undefined1 *)(param_2[9] + 10);
  }
  else {
    puVar6 = (undefined1 *)0x0;
  }
  piVar21 = (int *)(param_1 + DAT_00198ca8);
  local_2c = (int *)(param_1 + DAT_00198ca8 + 4);
  iVar7 = param_1 + 0x37;
  if (param_2[3] < 1) {
    uVar8 = FUN_0002272c(param_2 + 1,param_2[9] + 4,iVar7);
    FUN_00024642(0,s_mDNS_Register_internal__TTL__X_s_00198cb0,param_2[3],uVar8);
    return uVar9;
  }
  if ((char)param_2[1] == '\0') {
    uVar8 = FUN_0002272c(param_2 + 1,param_2[9] + 4,iVar7);
    FUN_00024642(0,s_mDNS_Register_internal__RecordTy_00198d2c,uVar8);
    return uVar9;
  }
  if (*(int *)(param_1 + 0xe8) != 0) {
    uVar9 = FUN_0002272c(param_2 + 1,param_2[9] + 4,iVar7);
    FUN_00024642(0,s_mDNS_Register_internal__Shutting_00198cec,uVar9);
    return DAT_00198d28;
  }
  if ((*(int *)(param_1 + 0x10) != 0) &&
     (((param_2[7] != *DAT_00198d64 || (*(char *)((int)param_2 + 0x46) != '\0')) ||
      (iVar10 = FUN_00023df0(param_2[8]), iVar10 != 0)))) {
    piVar20 = DAT_00198d68;
    iVar10 = param_2[7];
    if ((iVar10 == *piVar19) || (iVar10 == *DAT_00198d6c)) {
      param_2[7] = *DAT_00198d68;
      *(undefined1 *)(param_2 + 0x1e) = 2;
    }
    if (param_2[7] != *piVar20) {
      for (puVar11 = *(undefined4 **)(&DAT_00001fcc + param_1); puVar11 != (undefined4 *)0x0;
          puVar11 = (undefined4 *)*puVar11) {
        if (puVar11[0x500] == param_2[7]) {
          if (*(char *)((int)puVar11 + 0x1472) == '\0') {
            param_2[7] = *piVar20;
            *(undefined1 *)(param_2 + 0x1e) = 2;
          }
          break;
        }
      }
    }
    if ((param_2[7] != iVar10) && (*_DAT_00198d70 != 0)) {
      uVar9 = FUN_0002272c(param_2 + 1,param_2[9] + 4,iVar7);
      FUN_00024642(3,s____mDNS_Register_internal__Diver_00198d71 + 3,uVar9);
    }
  }
  iVar10 = param_1 + DAT_00198db0;
  if (((char)param_2[0x1e] == '\x02') || ((char)param_2[0x1e] == '\x03')) {
    FUN_000209c2(param_2[8]);
    iVar12 = FUN_0016dc78();
    iVar16 = param_2[5];
    iVar17 = param_2[8];
    piVar19 = *(int **)(iVar12 * 4 + iVar10 + 0x14);
    while ((piVar19 != (int *)0x0 &&
           ((piVar19[1] != iVar16 || (iVar12 = FUN_0003b48a(piVar19[4],iVar17), iVar12 == 0))))) {
      piVar19 = (int *)*piVar19;
    }
    if (piVar19 != (int *)0x0) {
      piVar19 = piVar19 + 2;
      iVar12 = *piVar19;
      while (iVar12 != 0) {
        piVar19 = (int *)*piVar19;
        if (piVar19 == param_2) {
          if (piVar19 != (int *)0x0) {
            uVar9 = FUN_000203e4(*(undefined2 *)((int)param_2 + 6));
            FUN_00024642(0,DAT_00198db4,param_2,param_2[8],uVar9);
            return DAT_00198db8;
          }
          break;
        }
        iVar12 = *piVar19;
      }
    }
  }
  else {
    while (piVar19 = (int *)*piVar21, piVar19 != (int *)0x0) {
      piVar21 = piVar19;
      if (piVar19 == param_2) {
        uVar9 = FUN_000203e4(*(undefined2 *)((int)param_2 + 6));
        FUN_00024642(0,DAT_00198dbc,param_2,param_2[8],uVar9);
        return DAT_00198db8;
      }
    }
  }
  while (piVar19 = (int *)*local_2c, piVar19 != (int *)0x0) {
    local_2c = piVar19;
    if (piVar19 == param_2) {
      uVar9 = FUN_000203e4(*(undefined2 *)((int)param_2 + 6));
      FUN_00024642(0,DAT_00198dc0,param_2,param_2[8],uVar9);
      return DAT_00198db8;
    }
  }
  if (param_2[0xd] != 0) {
    if ((char)param_2[1] != '\x02') {
      uVar9 = FUN_000203e4(*(undefined2 *)((int)param_2 + 6));
      FUN_00024642(0,DAT_00198dc4,param_2[8],uVar9);
      return DAT_00198e10;
    }
    *(undefined1 *)(param_2 + 1) = 0x10;
    if ((*(byte *)(param_2[0xd] + 4) & 0x32) == 0) {
      uVar9 = FUN_000203e4(*(undefined2 *)((int)param_2 + 6));
      FUN_00024642(0,DAT_00198dc8,param_2[8],uVar9,*(undefined1 *)(param_2[0xd] + 4));
      return DAT_00198e10;
    }
  }
  if (((param_2[7] != 0) && ((char)param_2[0x1e] != '\x02')) && ((char)param_2[0x1e] != '\x03')) {
    puVar11 = *(undefined4 **)(&DAT_00001fcc + param_1);
    while( true ) {
      if (puVar11 == (undefined4 *)0x0) {
        return DAT_00198dd4;
      }
      if (puVar11[0x500] == param_2[7]) break;
      puVar11 = (undefined4 *)*puVar11;
    }
  }
  *param_2 = 0;
  if (((char)param_2[0x11] != '\0') && (puVar6 != (undefined1 *)0x0)) {
    *puVar6 = 0;
  }
  *(undefined1 *)((int)param_2 + 0x79) = 0;
  if ((char)param_2[1] == '\x02') {
    uVar15 = 3;
  }
  else {
    uVar15 = 0;
  }
  *(undefined1 *)((int)param_2 + 0x7a) = uVar15;
  *(undefined1 *)((int)param_2 + 0x7b) = 8;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  *(undefined1 *)((int)param_2 + 0x7d) = 0;
  *(undefined1 *)((int)param_2 + 0x7e) = 0;
  *(undefined1 *)((int)param_2 + 0x7f) = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  param_2[0x22] = 0;
  param_2[0x23] = 0;
  piVar19 = DAT_00198dd0;
  param_2[0x24] = *DAT_00198dcc;
  iVar12 = piVar19[1];
  iVar16 = piVar19[2];
  iVar17 = piVar19[3];
  param_2[0x25] = *piVar19;
  param_2[0x26] = iVar12;
  param_2[0x27] = iVar16;
  param_2[0x28] = iVar17;
  param_2[0x29] = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  if ((char)param_2[0x11] == '\0') {
    FUN_000236c0(param_1,param_2);
  }
  param_2[0x30] = 0;
  *(undefined2 *)(param_2 + 0x31) = 0;
  param_2[0x32] = 0;
  param_2[0x34] = 0;
  param_2[0x33] = 10;
  param_2[0x35] = 0;
  if ((*(int3 *)((int)param_2 + 0x49) != 0 || (char)param_2[0x13] != '\0') && (param_2[0x17] == 0))
  {
    *(undefined1 *)((int)param_2 + 0x7b) = 2;
  }
  *(undefined1 *)(param_2 + 0x36) = 0;
  param_2[0x37] = 0;
  puVar4 = _DAT_00198dd8;
  param_2[0x38] = 0;
  param_2[0x39] = 0;
  *(undefined2 *)(param_2 + 0x3a) = *puVar4;
  param_2[0x3c] = 0;
  param_2[0x3b] = param_2[8];
  param_2[0x3d] = 0;
  param_2[0x53] = 0;
  *(undefined2 *)(param_2 + 0x51) = 0;
  param_2[0x54] = 0;
  *(undefined2 *)((int)param_2 + 0x146) = 0;
  param_2[0x55] = 0;
  *(undefined2 *)(param_2 + 0x52) = 0;
  if ((*(short *)((int)param_2 + 6) == 0x10) && ((short)param_2[4] == 0)) {
    *(undefined2 *)(param_2 + 4) = 1;
    *(undefined1 *)(param_2[9] + 4) = 0;
  }
  if ((char)param_2[0x11] == '\0') {
    uVar5 = FUN_000225de(param_2 + 1,0);
    *(undefined2 *)(param_2 + 4) = uVar5;
    uVar5 = FUN_000225de(param_2 + 1,1);
    *(undefined2 *)((int)param_2 + 0x12) = uVar5;
  }
  else {
    FUN_0003f640(param_1,param_2);
  }
  uVar13 = FUN_00020a0a(param_2[8],param_2[8] + 0x100);
  if (0x100 < uVar13) {
    uVar9 = FUN_0002272c(param_2 + 1,param_2[9] + 4,iVar7);
    FUN_00024642(0,s___Attempt_to_register_record_wit_00198dda + 2,uVar9);
    return DAT_00198e10;
  }
  iVar12 = FUN_00040e24(*(undefined2 *)((int)param_2 + 6),(short)param_2[4],param_2[9]);
  if (iVar12 == 0) {
    uVar9 = FUN_0002272c(param_2 + 1,param_2[9] + 4,iVar7);
    FUN_00024642(0,s_Attempt_to_register_record_with_i_00199128,uVar9);
    return DAT_00198e10;
  }
  iVar12 = FUN_000209c2(param_2[8]);
  param_2[5] = iVar12;
  if (puVar6 == (undefined1 *)0x0) {
    iVar12 = FUN_000393b4(param_2 + 1);
  }
  else {
    iVar12 = FUN_000209c2();
  }
  param_2[6] = iVar12;
  if (((char)param_2[0x1e] == '\x02') || ((char)param_2[0x1e] == '\x03')) {
    if ((*(byte *)(param_2 + 1) & 0x32) != 0) {
      FUN_000209c2(param_2[8]);
      iVar12 = FUN_0016dc78();
      iVar16 = param_2[5];
      iVar17 = param_2[8];
      piVar19 = *(int **)(iVar12 * 4 + iVar10 + 0x14);
      while ((piVar19 != (int *)0x0 &&
             ((piVar19[1] != iVar16 || (iVar12 = FUN_0003b48a(piVar19[4],iVar17), iVar12 == 0))))) {
        piVar19 = (int *)*piVar19;
      }
      if (piVar19 != (int *)0x0) {
        piVar19 = piVar19 + 2;
        iVar12 = *piVar19;
        while (iVar12 != 0) {
          piVar20 = (int *)param_2[0xe];
          if ((int *)param_2[0xe] == (int *)0x0) {
            piVar20 = param_2;
          }
          piVar18 = (int *)*piVar19;
          piVar14 = (int *)piVar18[0xe];
          if ((int *)piVar18[0xe] == (int *)0x0) {
            piVar14 = piVar18;
          }
          if ((((piVar20 != piVar14) &&
               (*(short *)((int)piVar18 + 6) == *(short *)((int)param_2 + 6))) &&
              (iVar12 = FUN_0003b734(piVar18,param_2), iVar12 != 0)) &&
             (((iVar12 = *piVar19, *(short *)(iVar12 + 6) != *(short *)((int)param_2 + 6) ||
               (*(short *)(iVar12 + 8) != (short)param_2[2])) ||
              ((*(short *)(iVar12 + 0x10) != (short)param_2[4] ||
               ((*(int *)(iVar12 + 0x18) != param_2[6] ||
                (iVar12 = FUN_0003b600(iVar12 + 4,param_2[9] + 4,DAT_0019915c), iVar12 == 0))))))))
          {
            if (*_DAT_00199160 != 0) {
              uVar9 = FUN_0002272c(param_2 + 1,param_2[9] + 4,iVar7);
              FUN_00024642(3,s____mDNS_Register_internal__Name_c_00199161 + 3,uVar9,param_2,
                           param_2[7]);
            }
            return DAT_001991a4;
          }
          piVar19 = (int *)*piVar19;
          iVar12 = *piVar19;
        }
      }
    }
    if (((char)param_2[0x1e] == '\x02') || ((char)param_2[0x1e] == '\x03')) {
      *(undefined1 *)((int)param_2 + 0x7a) = 0;
      *(undefined1 *)((int)param_2 + 0x7b) = 0;
      FUN_000209c2(param_2[8]);
      iVar12 = FUN_0016dc78();
      iVar16 = param_2[5];
      iVar7 = param_2[8];
      piVar19 = *(int **)(iVar12 * 4 + iVar10 + 0x14);
      while ((piVar19 != (int *)0x0 &&
             ((piVar19[1] != iVar16 || (iVar12 = FUN_0003b48a(piVar19[4],iVar7), iVar12 == 0))))) {
        piVar19 = (int *)*piVar19;
      }
      if (piVar19 != (int *)0x0) {
        piVar19 = piVar19 + 2;
        iVar7 = *piVar19;
        while (iVar7 != 0) {
          if (*(int *)(iVar7 + 0x1c) == param_2[7]) {
            bVar1 = *(byte *)(iVar7 + 4);
            bVar2 = *(byte *)(param_2 + 1);
            if ((((((bVar1 != bVar2) && ((bVar1 | bVar2) != 0x12)) && (bVar1 != 1)) && (bVar2 != 1))
                || ((*(short *)(iVar7 + 6) != *(short *)((int)param_2 + 6) ||
                    (*(short *)(iVar7 + 8) != (short)param_2[2])))) ||
               ((((*(int *)(iVar7 + 0x14) != param_2[5] ||
                  ((*(short *)(iVar7 + 0x10) != (short)param_2[4] ||
                   (*(int *)(iVar7 + 0x18) != param_2[6])))) ||
                 (iVar7 = FUN_0003b600(iVar7 + 4,param_2[9] + 4,DAT_0019915c), iVar7 == 0)) ||
                (iVar7 = FUN_0003b48a(*(undefined4 *)(*piVar19 + 0x20),param_2[8]), iVar7 == 0))))
            goto LAB_00199018;
            piVar20 = (int *)*piVar19;
            if ((char)piVar20[1] != '\x01') goto LAB_00199076;
            *(undefined1 *)((int)piVar20 + 0x7b) = 0;
            piVar19 = (int *)*piVar19;
          }
          else {
LAB_00199018:
            piVar19 = (int *)*piVar19;
          }
          iVar7 = *piVar19;
        }
      }
      goto LAB_00199094;
    }
  }
  piVar20 = *(int **)(&DAT_00001fb8 + param_1);
  if (piVar20 != (int *)0x0) {
    do {
      if (piVar20[7] == param_2[7]) {
        bVar1 = *(byte *)(piVar20 + 1);
        bVar2 = *(byte *)(param_2 + 1);
        if ((((((bVar1 == bVar2) || ((bVar1 | bVar2) == 0x12)) || (bVar1 == 1)) || (bVar2 == 1)) &&
            ((((*(short *)((int)piVar20 + 6) == *(short *)((int)param_2 + 6) &&
               ((short)piVar20[2] == (short)param_2[2])) &&
              ((piVar20[5] == param_2[5] &&
               (((short)piVar20[4] == (short)param_2[4] && (piVar20[6] == param_2[6])))))) &&
             (iVar7 = FUN_0003b600(piVar20 + 1,param_2[9] + 4,DAT_0019915c), iVar7 != 0)))) &&
           (iVar7 = FUN_0003b48a(piVar20[8],param_2[8]), iVar7 != 0)) {
          if ((char)piVar20[1] != '\x01') goto LAB_00199076;
          *(undefined1 *)((int)piVar20 + 0x7b) = 0;
        }
      }
      piVar20 = (int *)*piVar20;
    } while (piVar20 != (int *)0x0);
    goto LAB_00199094;
  }
LAB_0019909e:
  if (*(int *)(param_1 + 0x1fc0) == 0) {
    *(int *)(param_1 + 0x1fc0) = (int)param_2;
  }
  *piVar21 = (int)param_2;
LAB_001990ee:
  if (((param_2[7] != *DAT_001991a8) || (*(char *)((int)param_2 + 0x46) != '\0')) ||
     (iVar7 = FUN_00023df0(param_2[8]), iVar7 != 0)) {
    if (((char)param_2[1] != '\x02') && ((char)param_2[1] != '\x01')) {
      FUN_0001a4e0(param_1,param_2);
    }
    FUN_0019a8dc(param_1);
  }
  return 0;
LAB_00199076:
  if (piVar20 != (int *)0x0) {
    *local_2c = (int)param_2;
    if (((char)param_2[1] == '\x02') && ((char)piVar20[1] == '\x10')) {
      *(undefined1 *)((int)param_2 + 0x7a) = 0;
    }
    goto LAB_001990ee;
  }
LAB_00199094:
  if (((char)param_2[0x1e] == '\x02') || ((char)param_2[0x1e] == '\x03')) {
    iVar7 = FUN_00023888(param_1,iVar10,param_2);
    if ((iVar7 != 0) && (*(int *)(iVar7 + 0x14) == 0)) {
      *(undefined4 *)(&DAT_00001fc8 + param_1) = 1;
      *(int **)(iVar7 + 0x14) = param_2;
    }
    if ((char)param_2[1] == '\x02') {
      *(undefined1 *)(param_2 + 1) = 0x10;
    }
    FUN_0001a4e0(param_1,param_2);
    return 0;
  }
  goto LAB_0019909e;
}

