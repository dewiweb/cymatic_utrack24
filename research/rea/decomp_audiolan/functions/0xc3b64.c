// rea decompile_all
// name: FUN_000c3b64
// address: 0xc3b64
// body: available
// range: 0xc3b64-0xc3e9b inclusive
// range: 0xc3eb4-0xc4107 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000c3b64(char *param_1,undefined4 param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40 [2];
  undefined4 local_38;
  undefined1 auStack_34 [4];
  ushort local_30;
  
  *param_1 = '\0';
  iVar3 = FUN_00047cf4(param_2,s_Bridge_000c3e9c,&local_38);
  if (iVar3 != 0) {
    iVar3 = FUN_00047cf4(local_38,&DAT_000c3ea4,local_40);
    if (iVar3 != 0) {
      FUN_000c4108(param_1,local_40[0],0,param_1 + 0x1c);
      FUN_00041dd4(local_40[0]);
      iVar3 = FUN_00047cf4(local_38,&DAT_000c3ea8,&local_48);
      if (iVar3 != 0) {
        FUN_000c4108(param_1,local_48,1,param_1 + 0x28);
        FUN_00041dd4(local_48);
        iVar3 = FUN_00047cf4(local_38,&DAT_000c3eac,&local_44);
        if (iVar3 != 0) {
          FUN_000c4108(param_1,local_44,2,param_1 + 0x34);
          FUN_00041dd4(local_44);
          *param_1 = '\x01';
        }
      }
    }
    FUN_00041dd4(local_38);
  }
  iVar3 = DAT_000c3eb0;
  if (*param_1 == '\0') {
    param_1[4] = '\0';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    param_1[0x10] = '\0';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    iVar10 = *(int *)(param_1 + 0x20);
    if (*(int *)(param_1 + 0x1c) != iVar10) {
      iVar11 = (int)((ulonglong)((longlong)iVar3 * (longlong)(iVar10 - *(int *)(param_1 + 0x1c))) >>
                    0x20);
      *(int *)(param_1 + 0x20) = iVar10 + (iVar11 - (iVar11 >> 0x1f)) * -6;
    }
    iVar10 = *(int *)(param_1 + 0x2c);
    if (*(int *)(param_1 + 0x28) != iVar10) {
      iVar11 = (int)((ulonglong)((longlong)iVar3 * (longlong)(iVar10 - *(int *)(param_1 + 0x28))) >>
                    0x20);
      *(int *)(param_1 + 0x2c) = iVar10 + (iVar11 - (iVar11 >> 0x1f)) * -6;
    }
    iVar10 = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x34) != iVar10) {
      iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(iVar10 - *(int *)(param_1 + 0x34))) >>
                   0x20);
      *(int *)(param_1 + 0x38) = iVar10 + (iVar3 - (iVar3 >> 0x1f)) * -6;
    }
    return 0;
  }
  iVar10 = *(int *)(param_1 + 0x1c);
  iVar11 = *(int *)(param_1 + 0x20);
  if (iVar10 != iVar11) {
    iVar4 = (int)((ulonglong)((longlong)DAT_000c3eb0 * (longlong)(iVar11 - iVar10)) >> 0x20);
    FUN_001e0e54(iVar10,iVar11,iVar4 - (iVar4 >> 0x1f));
    if (iVar11 - iVar10 < 0x66) {
      FUN_001e0be4(iVar10,iVar11);
    }
    else {
      FUN_001e0be4(iVar10,iVar10 + 0x60);
      iVar10 = iVar10 + 0x60;
      if (iVar10 != iVar11) {
        do {
          FUN_0016d9dc(auStack_34,iVar10);
          uVar2 = local_30;
          iVar4 = iVar10;
          while (uVar2 < *(ushort *)(iVar4 + -2)) {
            FUN_0016d9dc(iVar4,iVar4 + -6);
            iVar4 = iVar4 + -6;
          }
          FUN_0016d9dc(iVar4,auStack_34);
          iVar10 = iVar10 + 6;
        } while (iVar10 != iVar11);
      }
    }
  }
  iVar10 = *(int *)(param_1 + 0x28);
  iVar11 = *(int *)(param_1 + 0x2c);
  if (iVar10 != iVar11) {
    iVar4 = (int)((ulonglong)((longlong)iVar3 * (longlong)(iVar11 - iVar10)) >> 0x20);
    FUN_001e0e54(iVar10,iVar11,iVar4 - (iVar4 >> 0x1f));
    if (iVar11 - iVar10 < 0x66) {
      FUN_001e0be4(iVar10,iVar11);
    }
    else {
      FUN_001e0be4(iVar10,iVar10 + 0x60);
      iVar10 = iVar10 + 0x60;
      if (iVar10 != iVar11) {
        do {
          FUN_0016d9dc(auStack_34,iVar10);
          uVar2 = local_30;
          iVar4 = iVar10;
          while (uVar2 < *(ushort *)(iVar4 + -2)) {
            FUN_0016d9dc(iVar4,iVar4 + -6);
            iVar4 = iVar4 + -6;
          }
          FUN_0016d9dc(iVar4,auStack_34);
          iVar10 = iVar10 + 6;
        } while (iVar10 != iVar11);
      }
    }
  }
  iVar10 = *(int *)(param_1 + 0x34);
  iVar11 = *(int *)(param_1 + 0x38);
  if (iVar10 != iVar11) {
    iVar3 = (int)((ulonglong)((longlong)iVar3 * (longlong)(iVar11 - iVar10)) >> 0x20);
    FUN_001e0e54(iVar10,iVar11,iVar3 - (iVar3 >> 0x1f));
    if (iVar11 - iVar10 < 0x66) {
      FUN_001e0be4(iVar10,iVar11);
    }
    else {
      FUN_001e0be4(iVar10,iVar10 + 0x60);
      iVar10 = iVar10 + 0x60;
      if (iVar10 != iVar11) {
        do {
          FUN_0016d9dc(auStack_34,iVar10);
          uVar2 = local_30;
          iVar3 = iVar10;
          while (uVar2 < *(ushort *)(iVar3 + -2)) {
            FUN_0016d9dc(iVar3,iVar3 + -6);
            iVar3 = iVar3 + -6;
          }
          FUN_0016d9dc(iVar3,auStack_34);
          iVar10 = iVar10 + 6;
        } while (iVar10 != iVar11);
      }
    }
  }
  uVar8 = 0;
  for (pcVar5 = *(char **)(param_1 + 0x1c); *(char **)(param_1 + 0x20) != pcVar5;
      pcVar5 = pcVar5 + 6) {
    if (uVar8 < *(ushort *)(pcVar5 + 4) + 1) {
      uVar8 = *(ushort *)(pcVar5 + 4) + 1;
    }
    cVar1 = *pcVar5;
    uVar6 = *(ushort *)(pcVar5 + 2) + 1;
    if (cVar1 == '\0') {
      if (uVar6 <= *(uint *)(param_1 + 4)) {
        uVar6 = *(uint *)(param_1 + 4);
      }
      *(uint *)(param_1 + 4) = uVar6;
    }
    else if (cVar1 == '\x01') {
      if (uVar6 <= *(uint *)(param_1 + 0xc)) {
        uVar6 = *(uint *)(param_1 + 0xc);
      }
      *(uint *)(param_1 + 0xc) = uVar6;
    }
    else if (cVar1 == '\x02') {
      if (uVar6 <= *(uint *)(param_1 + 0x14)) {
        uVar6 = *(uint *)(param_1 + 0x14);
      }
      *(uint *)(param_1 + 0x14) = uVar6;
    }
  }
  *(uint *)(param_1 + 8) = uVar8;
  uVar8 = 0;
  for (pcVar5 = *(char **)(param_1 + 0x28); *(char **)(param_1 + 0x2c) != pcVar5;
      pcVar5 = pcVar5 + 6) {
    if (uVar8 < *(ushort *)(pcVar5 + 4) + 1) {
      uVar8 = *(ushort *)(pcVar5 + 4) + 1;
    }
    cVar1 = *pcVar5;
    uVar6 = *(ushort *)(pcVar5 + 2) + 1;
    if (cVar1 == '\0') {
      if (uVar6 <= *(uint *)(param_1 + 4)) {
        uVar6 = *(uint *)(param_1 + 4);
      }
      *(uint *)(param_1 + 4) = uVar6;
    }
    else if (cVar1 == '\x01') {
      if (uVar6 <= *(uint *)(param_1 + 0xc)) {
        uVar6 = *(uint *)(param_1 + 0xc);
      }
      *(uint *)(param_1 + 0xc) = uVar6;
    }
    else if (cVar1 == '\x02') {
      if (uVar6 <= *(uint *)(param_1 + 0x14)) {
        uVar6 = *(uint *)(param_1 + 0x14);
      }
      *(uint *)(param_1 + 0x14) = uVar6;
    }
  }
  *(uint *)(param_1 + 0x10) = uVar8;
  uVar6 = 0;
  for (pcVar5 = *(char **)(param_1 + 0x34); *(char **)(param_1 + 0x38) != pcVar5;
      pcVar5 = pcVar5 + 6) {
    if (uVar6 < *(ushort *)(pcVar5 + 4) + 1) {
      uVar6 = *(ushort *)(pcVar5 + 4) + 1;
    }
    cVar1 = *pcVar5;
    uVar9 = *(ushort *)(pcVar5 + 2) + 1;
    if (cVar1 == '\0') {
      uVar7 = *(uint *)(param_1 + 4);
      if (*(uint *)(param_1 + 4) < uVar9) {
        uVar7 = uVar9;
      }
      *(uint *)(param_1 + 4) = uVar7;
    }
    else if (cVar1 == '\x01') {
      if (uVar9 <= *(uint *)(param_1 + 0xc)) {
        uVar9 = *(uint *)(param_1 + 0xc);
      }
      *(uint *)(param_1 + 0xc) = uVar9;
    }
    else if (cVar1 == '\x02') {
      if (uVar9 <= *(uint *)(param_1 + 0x14)) {
        uVar9 = *(uint *)(param_1 + 0x14);
      }
      *(uint *)(param_1 + 0x14) = uVar9;
    }
  }
  bVar12 = (uVar8 & 1) != 0;
  if (bVar12) {
    pcVar5 = (char *)(uVar8 + 1);
  }
  *(uint *)(param_1 + 0x18) = uVar6;
  if (bVar12) {
    *(char **)(param_1 + 0x10) = pcVar5;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    param_1[0x10] = '\x02';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
  }
  uVar8 = *(uint *)(param_1 + 0xc);
  if ((uVar8 & 1) != 0) {
    uVar8 = uVar8 + 1;
    *(uint *)(param_1 + 0xc) = uVar8;
  }
  if (uVar8 == 0) {
    param_1[0xc] = '\x02';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  return 1;
}

