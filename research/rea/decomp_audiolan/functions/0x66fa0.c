// rea decompile_all
// name: FUN_00066fa0
// address: 0x66fa0
// body: available
// range: 0x66fa0-0x673a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00066fa0(int *param_1)

{
  ushort *puVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  uint *local_30;
  undefined1 auStack_2c [4];
  ushort local_28 [2];
  
  if (*(char *)((int)param_1 + 0xd3) != '\0') {
    return;
  }
  do {
    while( true ) {
      uVar4 = (uint)*(byte *)((int)param_1 + 0xd5);
      bVar11 = uVar4 == 0;
      bVar13 = param_1 == (int *)0xffffff28;
      if (!bVar11 && !bVar13) {
        uVar4 = param_1[0x36];
      }
      bVar12 = (bVar11 || bVar13) || uVar4 == 0;
      if ((bVar11 || bVar13) || uVar4 == 0) {
        bVar12 = *(char *)((int)param_1 + 0xd3) == '\0';
      }
      if (!bVar12) break;
      (**(code **)(*param_1 + 0x1c))(param_1,500);
    }
    *(undefined1 *)(param_1 + 0x35) = 0;
    iVar5 = FUN_0019dc00(0x10,0);
    param_1[0x31] = iVar5;
    if (iVar5 == 0) {
      uVar2 = *(undefined1 *)((int)param_1 + 0xd2);
      uVar6 = DAT_000673a4;
LAB_00067088:
      FUN_000028a4(uVar6,uVar2);
LAB_0006708c:
      *(undefined1 *)(param_1 + 0x35) = 1;
    }
    else {
      *(undefined4 *)(iVar5 + 0xb0) = 500;
      *(byte *)(*(int *)(param_1[0x31] + 4) + 8) = *(byte *)(*(int *)(param_1[0x31] + 4) + 8) | 4;
      iVar5 = FUN_0019d4b4(param_1[0x31],DAT_000673a8,(short)param_1[0x33]);
      if (iVar5 != 0) {
        FUN_000028a4(DAT_000673ac,*(undefined1 *)((int)param_1 + 0xd2),(short)param_1[0x33]);
        goto LAB_0006708c;
      }
      iVar5 = FUN_0019db5c(param_1[0x31],5);
      if (iVar5 != 0) {
        uVar2 = *(undefined1 *)((int)param_1 + 0xd2);
        uVar6 = DAT_000673b0;
        goto LAB_00067088;
      }
    }
    while( true ) {
      bVar11 = true;
      do {
        cVar3 = *(char *)((int)param_1 + 0xd3);
        bVar13 = cVar3 == '\0';
        if (bVar13) {
          cVar3 = (char)param_1[0x35];
        }
        if (!bVar13 || cVar3 != '\0') goto LAB_00067348;
        if (bVar11) {
          bVar11 = false;
        }
        iVar5 = FUN_0019d27c(param_1[0x31],param_1 + 0x32);
      } while (iVar5 == -4);
      if (iVar5 != 0) {
        uVar2 = *(undefined1 *)((int)param_1 + 0xd2);
        uVar6 = DAT_000673b4;
        goto LAB_000670f4;
      }
      iVar5 = FUN_0019d880(param_1[0x32],auStack_2c,local_28,0);
      if (iVar5 != 0) break;
      *(undefined4 *)(param_1[0x32] + 0xb0) = 500;
      local_30 = (uint *)(uint)local_28[0];
      (**(code **)(*(int *)param_1[0x30] + 0x110))
                ((int *)param_1[0x30],*(undefined1 *)((int)param_1 + 0xd2),1,auStack_2c);
LAB_00067190:
      cVar3 = *(char *)((int)param_1 + 0xd3);
      bVar11 = cVar3 == '\0';
      if (bVar11) {
        cVar3 = (char)param_1[0x35];
      }
      if (bVar11 && cVar3 == '\0') {
        iVar5 = FUN_0019e0a8(param_1[0x32],&local_30);
        if (iVar5 == -4) {
          if (param_1[0x37] != 0) {
            (**(code **)(*(int *)param_1[0x30] + 0x114))
                      ((int *)param_1[0x30],*(undefined1 *)((int)param_1 + 0xd2),
                       param_1[0x37] & 0xffff,param_1 + 0x38);
            param_1[0x37] = 0;
          }
          iVar5 = param_1[0x32];
          uVar4 = 500;
          goto LAB_0006718c;
        }
        if (iVar5 == 0) goto LAB_00067214;
        param_1[0x37] = 0;
      }
      local_30 = (uint *)(uint)local_28[0];
      (**(code **)(*(int *)param_1[0x30] + 0x110))
                ((int *)param_1[0x30],*(undefined1 *)((int)param_1 + 0xd2),0,auStack_2c);
      iVar5 = param_1[0x32];
      if (iVar5 != 0) {
        param_1[0x32] = 0;
        iVar7 = FUN_0019d558(iVar5);
        if (iVar7 != 0) {
          FUN_000028a4(DAT_000673bc,*(undefined1 *)((int)param_1 + 0xd2));
        }
        iVar5 = FUN_0019d660(iVar5);
        if (iVar5 != 0) {
          FUN_000028a4(DAT_000673c0,*(undefined1 *)((int)param_1 + 0xd2));
        }
      }
    }
    uVar2 = *(undefined1 *)((int)param_1 + 0xd2);
    uVar6 = DAT_000673b8;
LAB_000670f4:
    FUN_000028a4(uVar6,uVar2);
LAB_00067348:
    iVar5 = param_1[0x31];
    if (iVar5 != 0) {
      param_1[0x31] = 0;
      iVar7 = FUN_0019d558(iVar5);
      if (iVar7 != 0) {
        FUN_000028a4(DAT_000673c4,*(undefined1 *)((int)param_1 + 0xd2));
      }
      iVar5 = FUN_0019d660(iVar5);
      if (iVar5 != 0) {
        FUN_000028a4(DAT_000673c8,*(undefined1 *)((int)param_1 + 0xd2));
      }
    }
    if (*(char *)((int)param_1 + 0xd3) != '\0') {
      return;
    }
  } while( true );
LAB_00067214:
  if (local_30 != (uint *)0x0) {
    iVar5 = 0;
    puVar9 = local_30;
    do {
      uVar4 = (uint)*(ushort *)((int)puVar9 + 10);
      iVar7 = param_1[0x37];
      if (iVar7 + uVar4 < 0x801) {
        FUN_00003628((int)param_1 + iVar7 + 0xe0,puVar9[1]);
        iVar7 = (uint)*(ushort *)((int)puVar9 + 10) + param_1[0x37];
      }
      else {
        uVar10 = puVar9[1];
        uVar8 = uVar4;
        if (0x800U - iVar7 < uVar4) {
          uVar8 = 0x800 - iVar7;
        }
        FUN_00003628((int)param_1 + iVar7 + 0xe0,uVar10,uVar8);
        iVar7 = param_1[0x37];
        param_1[0x37] = iVar7 + uVar8;
        (**(code **)(*(int *)param_1[0x30] + 0x114))
                  ((int *)param_1[0x30],*(undefined1 *)((int)param_1 + 0xd2),iVar7 + uVar8 & 0xffff,
                   param_1 + 0x38);
        param_1[0x37] = 0;
        FUN_00003628(param_1 + 0x38,uVar10 + uVar8,uVar4 - uVar8);
        iVar7 = param_1[0x37] + (uVar4 - uVar8);
      }
      param_1[0x37] = iVar7;
      puVar1 = (ushort *)((int)puVar9 + 10);
      puVar9 = (uint *)*puVar9;
      iVar5 = iVar5 + (uint)*puVar1;
    } while (puVar9 != (uint *)0x0);
    FUN_001aa008(local_30);
    FUN_0019e124(param_1[0x32],iVar5);
    if ((uint)param_1[0x37] < (uint)*(ushort *)(param_1 + 0x34)) {
      uVar4 = (uint)*(ushort *)((int)param_1 + 0xce);
      iVar5 = param_1[0x32];
LAB_0006718c:
      *(uint *)(iVar5 + 0xb0) = uVar4;
    }
    else {
      (**(code **)(*(int *)param_1[0x30] + 0x114))
                ((int *)param_1[0x30],*(undefined1 *)((int)param_1 + 0xd2),param_1[0x37] & 0xffff,
                 param_1 + 0x38);
      param_1[0x37] = 0;
    }
  }
  goto LAB_00067190;
}

