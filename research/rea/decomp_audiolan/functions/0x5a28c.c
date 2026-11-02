// rea decompile_all
// name: FUN_0005a28c
// address: 0x5a28c
// body: available
// range: 0x5a28c-0x5a56b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0005a28c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  undefined1 local_50 [4];
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  piVar7 = (int *)(param_1 + 4);
  local_50[0] = (undefined1)param_2;
  local_44 = param_5;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  puVar3 = *(undefined1 **)(param_1 + 8);
  local_4c = param_3;
  local_48 = param_4;
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  if (puVar3 == *(undefined1 **)(param_1 + 0xc)) {
    uVar10 = (int)*(undefined1 **)(param_1 + 0xc) - *piVar7;
    iVar11 = (int)((longlong)(int)uVar10 * (longlong)DAT_0005a56c + ((ulonglong)uVar10 << 0x20) >>
                  0x20);
    uVar10 = (int)puVar3 - *piVar7;
    iVar8 = (int)((longlong)(int)uVar10 * (longlong)DAT_0005a56c + ((ulonglong)uVar10 << 0x20) >>
                 0x20);
    if ((uint)((iVar8 >> 4) - (iVar8 >> 0x1f)) < (uint)((iVar11 >> 4) - (iVar11 >> 0x1f))) {
      *(undefined1 **)(param_1 + 8) = puVar3 + 0x1c;
      if (puVar3 != (undefined1 *)0x0) {
        FUN_00059efc(puVar3,puVar3 + -0x1c);
      }
      puVar9 = puVar3;
      puVar2 = puVar3 + -0x1c;
      while (puVar3 != puVar2) {
        puVar9[-0x1c] = puVar2[-0x1c];
        *(undefined4 *)(puVar9 + -0x18) = *(undefined4 *)(puVar2 + -0x18);
        *(undefined4 *)(puVar9 + -0x14) = *(undefined4 *)(puVar2 + -0x14);
        puVar9[-0x10] = puVar2[-0x10];
        FUN_001dfcfc(puVar9 + -0xc,puVar2 + -0xc);
        puVar9 = puVar9 + -0x1c;
        puVar2 = puVar2 + -0x1c;
      }
      *puVar3 = local_50[0];
      *(undefined4 *)(puVar3 + 4) = local_4c;
      *(undefined4 *)(puVar3 + 8) = local_48;
      puVar3[0xc] = local_44;
      FUN_001dfcfc(puVar3 + 0x10,&local_40);
    }
    else {
      iVar8 = (int)((longlong)(int)uVar10 * (longlong)DAT_0005a56c + ((ulonglong)uVar10 << 0x20) >>
                   0x20);
      uVar4 = (iVar8 >> 4) - (iVar8 >> 0x1f);
      uVar10 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
      if (uVar10 < uVar4 + 1) {
        uVar10 = uVar4 + 1;
      }
      iVar5 = FUN_0010f82c(uVar10 * 0x1c,0);
      iVar8 = iVar5;
      iVar11 = DAT_0005a56c;
      for (puVar9 = (undefined1 *)*piVar7; DAT_0005a56c = iVar11, puVar9 != puVar3;
          puVar9 = puVar9 + 0x1c) {
        if (iVar8 != 0) {
          FUN_00059efc(iVar8,puVar9);
        }
        iVar8 = iVar8 + 0x1c;
        iVar11 = DAT_0005a56c;
      }
      lVar1 = (longlong)((int)puVar3 - *piVar7) * (longlong)iVar11 +
              ((ulonglong)(uint)((int)puVar3 - *piVar7) << 0x20);
      iVar8 = (int)((ulonglong)lVar1 >> 0x20);
      iVar8 = iVar5 + ((iVar8 >> 4) - (iVar8 >> 0x1f)) * 0x1c;
      if (iVar8 != 0) {
        FUN_00059efc(iVar8,local_50,(int)lVar1);
      }
      puVar9 = *(undefined1 **)(param_1 + 8);
      iVar8 = (int)((longlong)((int)puVar3 - *piVar7) * (longlong)iVar11 +
                    ((ulonglong)(uint)((int)puVar3 - *piVar7) << 0x20) >> 0x20);
      iVar8 = iVar5 + ((iVar8 >> 4) - (iVar8 >> 0x1f)) * 0x1c;
      for (; puVar3 != puVar9; puVar3 = puVar3 + 0x1c) {
        iVar8 = iVar8 + 0x1c;
        if (iVar8 != 0) {
          FUN_00059efc(iVar8,puVar3);
        }
      }
      iVar8 = *piVar7;
      iVar6 = *(int *)(param_1 + 8);
      uVar4 = iVar6 - iVar8;
      iVar11 = (int)((longlong)(int)uVar4 * (longlong)DAT_0005a56c + ((ulonglong)uVar4 << 0x20) >>
                    0x20);
      for (; iVar8 != iVar6; iVar8 = iVar8 + 0x1c) {
        FUN_0010fa20(*(int *)(iVar8 + 0x10),*(int *)(iVar8 + 0x18) - *(int *)(iVar8 + 0x10) >> 2,0);
      }
      uVar4 = *(int *)(param_1 + 0xc) - *piVar7;
      iVar8 = (int)((longlong)(int)uVar4 * (longlong)DAT_0005a56c + ((ulonglong)uVar4 << 0x20) >>
                   0x20);
      FUN_0010fa20(*piVar7,(iVar8 >> 4) - (iVar8 >> 0x1f),0);
      *piVar7 = iVar5;
      *(int *)(param_1 + 8) = iVar5 + ((iVar11 >> 4) - (iVar11 >> 0x1f)) * 0x1c + 0x1c;
      *(uint *)(param_1 + 0xc) = iVar5 + uVar10 * 0x1c;
    }
  }
  else {
    *(undefined1 **)(param_1 + 8) = puVar3 + 0x1c;
    if (puVar3 != (undefined1 *)0x0) {
      FUN_00059efc(puVar3,local_50);
    }
  }
  FUN_0010fa20(local_40,local_38 - local_40 >> 2,0);
  if (param_2 == 0) {
    FUN_00003860(local_2c,uStack_28);
  }
  return 1;
}

