// rea decompile_all
// name: FUN_0009c5d8
// address: 0x9c5d8
// body: available
// range: 0x9c5d8-0x9c9fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0009c5d8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint local_50;
  uint local_4c;
  undefined4 *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  iVar2 = DAT_0009c9fc;
  local_50 = 10;
  iVar6 = (int)((ulonglong)
                ((longlong)DAT_0009c9fc *
                (longlong)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28))) >> 0x20);
  piVar10 = (int *)(param_1 + 0x28);
  if ((uint)((iVar6 >> 2) - (iVar6 >> 0x1f)) < 10) {
    iVar6 = (int)((ulonglong)
                  ((longlong)DAT_0009c9fc *
                  (longlong)(*(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x28))) >> 0x20);
    uVar7 = (iVar6 >> 2) - (iVar6 >> 0x1f);
    local_4c = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
    if (local_4c < uVar7 + 1) {
      local_4c = uVar7 + 1;
    }
    puVar8 = &local_4c;
    if (local_4c < 0xb) {
      puVar8 = &local_50;
    }
    uVar7 = *puVar8;
    iVar1 = FUN_0010f82c(uVar7 * 0x18,0);
    iVar12 = *(int *)(param_1 + 0x2c);
    iVar9 = iVar1;
    for (iVar6 = *piVar10; iVar6 != iVar12; iVar6 = iVar6 + 0x18) {
      if (iVar9 != 0) {
        FUN_001dc4ac(iVar9,iVar6);
      }
      iVar9 = iVar9 + 0x18;
    }
    FUN_001e065c(piVar10,*piVar10,*(undefined4 *)(param_1 + 0x2c));
    iVar6 = (int)((ulonglong)((longlong)iVar2 * (longlong)(*(int *)(param_1 + 0x30) - *piVar10)) >>
                 0x20);
    FUN_0010fa20(*piVar10,(iVar6 >> 2) - (iVar6 >> 0x1f),0);
    iVar6 = *piVar10;
    *piVar10 = iVar1;
    iVar2 = (int)((ulonglong)((longlong)iVar2 * (longlong)(*(int *)(param_1 + 0x2c) - iVar6)) >>
                 0x20);
    *(int *)(param_1 + 0x2c) = iVar1 + ((iVar2 >> 2) - (iVar2 >> 0x1f)) * 0x18;
    *(uint *)(param_1 + 0x30) = iVar1 + uVar7 * 0x18;
  }
  iVar2 = 0;
  do {
    *(undefined4 *)(param_1 + iVar2 * 4) = 0;
    local_48 = (undefined4 *)0x0;
    local_44 = (int *)0x0;
    local_40 = (int *)0x0;
    local_3c = (int *)0x0;
    local_38 = (int *)0x0;
    local_34 = 0;
    piVar10 = (int *)(param_1 + 0x28);
    puVar3 = (undefined4 *)FUN_0010f82c(0xc,0);
    uVar4 = FUN_0010f82c(0x10,0);
    puVar3[2] = uVar4;
    *puVar3 = local_48;
    puVar3[1] = 1;
    local_38 = (int *)puVar3[2];
    local_40 = local_38 + 4;
    *local_38 = (int)local_38;
    local_38[1] = (int)local_38;
    iVar6 = *(int *)(param_1 + 0x2c);
    local_48 = puVar3;
    local_3c = local_40;
    if (iVar6 == *(int *)(param_1 + 0x30)) {
      iVar1 = (int)((ulonglong)
                    ((longlong)DAT_0009c9fc * (longlong)(*(int *)(param_1 + 0x30) - *piVar10)) >>
                   0x20);
      iVar9 = (int)((ulonglong)((longlong)DAT_0009c9fc * (longlong)(iVar6 - *piVar10)) >> 0x20);
      uVar7 = (iVar9 >> 2) - (iVar9 >> 0x1f);
      if (uVar7 < (uint)((iVar1 >> 2) - (iVar1 >> 0x1f))) {
        *(int *)(param_1 + 0x2c) = iVar6 + 0x18;
        iVar9 = iVar6;
        iVar1 = iVar6;
        if (iVar6 != 0) {
          FUN_001dc4ac(iVar6,iVar6 + -0x18);
        }
        while (iVar6 != iVar1 + -0x18) {
          FUN_001dc620(iVar9 + -0x18);
          iVar9 = iVar9 + -0x18;
          iVar1 = iVar1 + -0x18;
        }
        FUN_001dc620(iVar6,&local_48);
      }
      else {
        uVar13 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
        if (uVar13 < uVar7 + 1) {
          uVar13 = uVar7 + 1;
        }
        iVar12 = FUN_0010f82c(uVar13 * 0x18,0);
        iVar1 = iVar12;
        for (iVar9 = *piVar10; iVar9 != iVar6; iVar9 = iVar9 + 0x18) {
          if (iVar1 != 0) {
            FUN_001dc4ac(iVar1,iVar9);
          }
          iVar1 = iVar1 + 0x18;
        }
        iVar9 = (int)((ulonglong)((longlong)DAT_0009c9fc * (longlong)(iVar6 - *piVar10)) >> 0x20);
        iVar9 = iVar12 + ((iVar9 >> 2) - (iVar9 >> 0x1f)) * 0x18;
        if (iVar9 != 0) {
          FUN_001dc4ac(iVar9,&local_48);
        }
        iVar11 = *(int *)(param_1 + 0x2c);
        iVar9 = (int)((ulonglong)((longlong)DAT_0009c9fc * (longlong)(iVar6 - *piVar10)) >> 0x20);
        iVar9 = iVar12 + ((iVar9 >> 2) - (iVar9 >> 0x1f)) * 0x18;
        iVar1 = DAT_0009c9fc;
        for (; DAT_0009c9fc = iVar1, iVar6 != iVar11; iVar6 = iVar6 + 0x18) {
          iVar9 = iVar9 + 0x18;
          if (iVar9 != 0) {
            FUN_001dc4ac(iVar9,iVar6);
          }
          iVar1 = DAT_0009c9fc;
        }
        iVar6 = (int)((ulonglong)((longlong)iVar1 * (longlong)(*(int *)(param_1 + 0x2c) - *piVar10))
                     >> 0x20);
        FUN_001e065c(piVar10);
        iVar9 = (int)((ulonglong)((longlong)iVar1 * (longlong)(*(int *)(param_1 + 0x30) - *piVar10))
                     >> 0x20);
        FUN_0010fa20(*piVar10,(iVar9 >> 2) - (iVar9 >> 0x1f),0);
        *piVar10 = iVar12;
        *(int *)(param_1 + 0x2c) = iVar12 + ((iVar6 >> 2) - (iVar6 >> 0x1f)) * 0x18 + 0x18;
        *(uint *)(param_1 + 0x30) = iVar12 + uVar13 * 0x18;
      }
    }
    else {
      *(int *)(param_1 + 0x2c) = iVar6 + 0x18;
      if (iVar6 != 0) {
        FUN_001dc4ac(iVar6,&local_48);
      }
    }
    if (local_38 != (int *)0x0) {
      piVar10 = (int *)*local_38;
      while (piVar5 = piVar10, piVar5 != local_38) {
        piVar10 = local_38;
        if (piVar5 != local_38) {
          piVar10 = (int *)*piVar5;
          *(int *)piVar5[1] = *piVar5;
          *(int *)(*piVar5 + 4) = piVar5[1];
          local_34 = local_34 + -1;
          *piVar5 = (int)local_44;
          local_44 = piVar5;
        }
      }
      *local_38 = (int)local_44;
      local_44 = local_38;
      FUN_001dc44c(&local_48);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 10);
  return param_1;
}

