// rea decompile_all
// name: FUN_0001941c
// address: 0x1941c
// body: available
// range: 0x1941c-0x19883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0001941c(int param_1,int param_2,uint *param_3,int *param_4,int param_5)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  uint uVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  byte bVar11;
  undefined4 *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined4 local_48;
  undefined4 local_44 [2];
  undefined4 local_3c;
  int *local_38;
  
  local_38 = (int *)(param_1 + 0x4c8);
  if (param_2 == 0) {
    FUN_001b714c(&local_3c);
    *param_3 = *(byte *)(*(int *)(param_1 + 0x4c8) + 0x18) & 0x7f;
    local_48 = local_3c;
  }
  else {
    FUN_001b714c(&local_48);
    *param_3 = *(ushort *)(*(int *)(param_1 + 0x4c8) + 0x18) & 0xffff1fff;
  }
  FUN_001b7160(local_48);
  piVar3 = DAT_00019884;
  uVar13 = *param_3 & 3;
  puVar12 = (undefined4 *)(*(int *)(param_1 + 0x4c8) + param_2 * 4 + 0x20);
  uVar4 = *param_3 >> 2;
  if ((param_5 == 0) || (uVar4 < 0x10)) {
    puVar14 = (undefined4 *)*param_4;
    if (((uint)puVar14 & 3) == 0) {
      if (uVar4 < 0x80000000) {
        iVar9 = 1;
        if (1 < uVar4 + 1) {
          do {
            iVar9 = iVar9 + 1;
            *puVar14 = *puVar12;
            puVar14 = puVar14 + 1;
          } while (iVar9 < (int)(uVar4 + 1));
        }
      }
      else {
        do {
          uVar4 = uVar4 - 1;
          *puVar14 = *puVar12;
          puVar14 = puVar14 + 1;
        } while (uVar4 != 0);
      }
    }
    else if (uVar4 < 0x80000000) {
      iVar9 = 1;
      if (1 < uVar4 + 1) {
        do {
          uVar8 = *puVar12;
          iVar9 = iVar9 + 1;
          *(char *)puVar14 = (char)uVar8;
          *(char *)((int)puVar14 + 1) = (char)((uint)uVar8 >> 8);
          *(char *)((int)puVar14 + 2) = (char)((uint)uVar8 >> 0x10);
          *(char *)((int)puVar14 + 3) = (char)((uint)uVar8 >> 0x18);
          puVar14 = puVar14 + 1;
        } while (iVar9 < (int)(uVar4 + 1));
      }
    }
    else {
      do {
        uVar8 = *puVar12;
        uVar4 = uVar4 - 1;
        *(char *)puVar14 = (char)uVar8;
        *(char *)((int)puVar14 + 1) = (char)((uint)uVar8 >> 8);
        *(char *)((int)puVar14 + 2) = (char)((uint)uVar8 >> 0x10);
        *(char *)((int)puVar14 + 3) = (char)((uint)uVar8 >> 0x18);
        puVar14 = puVar14 + 1;
      } while (uVar4 != 0);
    }
  }
  else {
    iVar9 = *(int *)(param_1 + 0x340);
    *(undefined4 **)(iVar9 + 0x18) = puVar12;
    *(undefined4 **)(*piVar3 + *(int *)(iVar9 + 4) * 0x40 + 0xc) = puVar12;
    iVar9 = *param_4;
    iVar10 = *(int *)(param_1 + 0x340);
    *(int *)(iVar10 + 0x1c) = iVar9;
    *(int *)(*piVar3 + *(int *)(iVar10 + 4) * 0x40 + 8) = iVar9;
    iVar9 = *(int *)(param_1 + 0x340);
    uVar4 = uVar4 << 2;
    if (*(char *)(iVar9 + 0xc) == '\x01') {
      FUN_0018a24c(*(undefined4 *)(iVar9 + 0x18),uVar4);
    }
    if (*(char *)(iVar9 + 0xd) == '\x01') {
      FUN_0018a24c(*(undefined4 *)(iVar9 + 0x1c),uVar4);
    }
    *(uint *)(*DAT_00019888 + *(int *)(iVar9 + 4) * 4 + 0x400) =
         uVar4 >> *(sbyte *)(iVar9 + 0x20) & 0xffff | *(int *)(iVar9 + 0x14) << 0x10;
    iVar9 = thunk_EXT_FUN_004001ec(param_1 + 0x36c,5);
    if (iVar9 != 0) {
      *(int *)(param_1 + 0x460) = *(int *)(param_1 + 0x460) + 1;
      return 1;
    }
    thunk_EXT_FUN_00400100(param_1 + 0x36c);
    *(int *)(param_1 + 0x45c) = *(int *)(param_1 + 0x45c) + 1;
  }
  puVar5 = (undefined1 *)((*param_3 - uVar13) + *param_4);
  if (uVar13 < 0x80000000) {
    iVar9 = 1;
    if (1 < uVar13 + 1) {
      do {
        iVar9 = iVar9 + 1;
        *puVar5 = *(undefined1 *)puVar12;
        puVar5 = puVar5 + 1;
      } while (iVar9 < (int)(uVar13 + 1));
    }
  }
  else {
    do {
      uVar13 = uVar13 - 1;
      *puVar5 = *(undefined1 *)puVar12;
      puVar5 = puVar5 + 1;
    } while (uVar13 != 0);
  }
  if (param_2 != 0) {
    uVar2 = *(undefined2 *)(*(int *)(param_1 + 0x4c8) + 0x16);
    FUN_001b714c(local_44);
    iVar9 = *local_38;
    *(byte *)(iVar9 + 0x16) = (byte)uVar2 & 0xfe;
    *(char *)(iVar9 + 0x17) = (char)((ushort)uVar2 >> 8);
    FUN_001b7160(local_44[0]);
    goto LAB_00019730;
  }
  if (*(int *)(param_1 + 0x314) == 1) {
    FUN_001b714c(local_44);
    iVar9 = *(int *)(param_1 + 0x4c8);
    *(undefined1 *)(iVar9 + 0x12) = 0;
    *(undefined1 *)(iVar9 + 0x13) = 0;
    FUN_001b7160(local_44[0]);
    goto LAB_00019730;
  }
  cVar1 = *(char *)(param_1 + 0xcd);
  bVar11 = 0;
  if (cVar1 == '\0') {
LAB_000197bc:
    pbVar6 = (byte *)*param_4;
    if (*param_3 == 8) {
      if (*(short *)(pbVar6 + 6) == 0) {
        bVar11 = 8;
      }
      else {
        if ((*pbVar6 & 0x80) == 0) {
          uVar7 = 1;
        }
        else {
          uVar7 = 2;
        }
        *(undefined1 *)(param_1 + 0xcd) = uVar7;
        bVar11 = 0;
      }
      *(uint *)(param_1 + 0xd0) = (uint)*(ushort *)(pbVar6 + 6);
    }
  }
  else if (cVar1 == '\x01') {
    iVar9 = *(int *)(param_1 + 0xd0) - *param_3;
    *(int *)(param_1 + 0xd0) = iVar9;
    if (iVar9 == 0) {
      bVar11 = 8;
      *(undefined1 *)(param_1 + 0xcd) = 0;
    }
  }
  else if (cVar1 == '\x02') goto LAB_000197bc;
  FUN_001b714c(local_44);
  iVar9 = *(int *)(param_1 + 0x4c8);
  *(byte *)(iVar9 + 0x12) = bVar11 | 0x40;
  *(undefined1 *)(iVar9 + 0x13) = 0;
  FUN_001b7160(local_44[0]);
LAB_00019730:
  *(int *)(param_1 + 0x454) = *(int *)(param_1 + 0x454) + 1;
  return 0;
}

