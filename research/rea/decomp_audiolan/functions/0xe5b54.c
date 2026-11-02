// rea decompile_all
// name: FUN_000e5b54
// address: 0xe5b54
// body: available
// range: 0xe5b54-0xe5fcb inclusive
// range: 0xe5ff0-0xe6303 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e5b54(int param_1,int param_2,uint param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ushort uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  code *pcVar14;
  bool bVar15;
  byte local_8c [4];
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  byte bStack_54;
  byte bStack_53;
  byte bStack_52;
  byte bStack_51;
  undefined1 auStack_48 [36];
  
  iVar2 = FUN_000b9aac();
  iVar6 = DAT_000e5fd0;
  iVar13 = DAT_000e5fcc;
  if (param_2 == 1) {
    if (param_4 != 0x1000) {
      return;
    }
    iVar6 = *(int *)(iVar2 + 0x158);
    piVar11 = *(int **)(param_1 + 0x90);
    uVar8 = *(int *)(iVar2 + 0x15c) - iVar6;
    if (uVar8 < 0x200) {
      uVar8 = FUN_00006158((uint)((*(int *)(param_1 + 0x44) - iVar6) * -0x10000) >> 0x10,uVar8);
    }
    else {
      if (uVar8 < 0x600) {
        uVar7 = 0x100;
      }
      else {
        uVar7 = 0x200;
      }
      uVar5 = *(int *)(param_1 + 0x44) - iVar6;
      if (uVar5 < uVar7) {
        uVar8 = FUN_00006158(uVar5 * 0x7fff);
        uVar8 = uVar8 & 0xffff;
      }
      else {
        lVar1 = (ulonglong)DAT_000e5fd8 * (ulonglong)(uVar5 - uVar7);
        uVar8 = FUN_0000243c((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),uVar8 - uVar7,0);
        uVar8 = (uVar8 & 0xffff) + 0x8000 & 0xfffeffff;
      }
    }
    (**(code **)(*piVar11 + 0x208))(piVar11,0,0x1000,uVar8);
    FUN_000028d8(auStack_70,&DAT_000e5fdc,*(undefined4 *)(param_1 + 0x44));
    (**(code **)(**(int **)(param_1 + 0x90) + 0x210))(*(int **)(param_1 + 0x90),0,iVar13,auStack_70)
    ;
    FUN_000be010(&uStack_78,iVar2,*(undefined4 *)(param_1 + 0x44));
    (**(code **)(**(int **)(param_1 + 0x90) + 0x210))(*(int **)(param_1 + 0x90),0,0x1000,uStack_78);
    puVar10 = &uStack_78;
  }
  else {
    iVar13 = DAT_000e5fcc + 0x2f;
    iVar12 = DAT_000e5fcc + 0x30;
    if (param_2 == 2) {
      iVar6 = param_4 - DAT_000e5fe0;
      if (param_4 == DAT_000e5fe0) {
        (**(code **)(**(int **)(param_1 + 0x90) + 0x20c))(*(int **)(param_1 + 0x90),0);
        return;
      }
      if (DAT_000e5fe0 <= param_4) {
        if (iVar6 == 1) {
          (**(code **)(**(int **)(param_1 + 0x90) + 0x20c))
                    (*(int **)(param_1 + 0x90),0,DAT_000e5fe8);
          return;
        }
        if (iVar6 == 0x2e) {
          local_8c[0] = 0;
          FUN_00035bcc(1,local_8c);
          piVar11 = *(int **)(param_1 + 0x90);
          uVar9 = (ushort)local_8c[0];
          pcVar14 = *(code **)(*piVar11 + 0x20c);
        }
        else {
          if (iVar6 != 0x2f) {
            return;
          }
          piVar11 = *(int **)(param_1 + 0x90);
          FUN_00159d68(iVar2);
          uVar9 = *(ushort *)(param_1 + 0x4c);
          pcVar14 = *(code **)(*piVar11 + 0x20c);
          iVar13 = iVar12;
        }
        (*pcVar14)(piVar11,0,iVar13,uVar9);
        return;
      }
      if (param_4 == 0x500) {
        (**(code **)(**(int **)(param_1 + 0x90) + 0x20c))(*(int **)(param_1 + 0x90),0,0x500);
        return;
      }
      if (param_4 == 0x1000) {
        (**(code **)(**(int **)(param_1 + 0x90) + 0x20c))(*(int **)(param_1 + 0x90),0,0x1000);
        return;
      }
      if (param_4 == 0x1001) {
        (**(code **)(**(int **)(param_1 + 0x90) + 0x20c))(*(int **)(param_1 + 0x90),0,DAT_000e5fcc);
        return;
      }
      return;
    }
    if (param_2 != 4) {
      return;
    }
    iVar3 = param_4 - DAT_000e5fd0;
    if (param_4 == DAT_000e5fd0) {
      if (param_3 == 0) {
        return;
      }
      iVar13 = (int)((ulonglong)
                     ((longlong)_DAT_000e6308 *
                     (longlong)(*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78))) >> 0x20);
      if (param_3 <= (uint)((iVar13 >> 2) - (iVar13 >> 0x1f))) {
        FUN_0010e7e0(&uStack_88);
        puVar10 = (undefined4 *)(*(int *)(param_1 + 0x78) + (param_3 - 1) * 0x18);
        if (*(char *)(puVar10 + 5) == '\0') {
          uVar4 = FUN_00159c48(iVar2,*puVar10);
          FUN_00156a04(&uStack_58,uVar4);
          uVar4 = FUN_0010e728(&uStack_80,uStack_58);
          FUN_0010e820(&uStack_88,uVar4);
          FUN_0010e7f4(&uStack_80);
          FUN_001da44c(&uStack_58);
        }
        else {
          FUN_00159fa0(&uStack_58,iVar2);
          uVar4 = FUN_0010e728(&uStack_80,uStack_58);
          FUN_0010e820(&uStack_88,uVar4);
          FUN_0010e7f4(&uStack_80);
          FUN_001da44c(&uStack_58);
        }
        piVar11 = *(int **)(param_1 + 0x90);
        FUN_0015e7f0(&uStack_88,puVar10 + 3);
        uVar4 = FUN_0015e6f4(puVar10 + 3);
        (**(code **)(*piVar11 + 0x210))(piVar11,param_3,iVar6,uVar4);
        FUN_0010e7f4(&uStack_88);
        return;
      }
      return;
    }
    if (DAT_000e5fd0 <= param_4) {
      if (iVar3 == 0x1e) {
        FUN_00035b6c(&uStack_58);
        uStack_88 = (uint)bStack_54;
        uStack_84 = (uint)bStack_53;
        uStack_7c = (uint)bStack_51;
        uStack_80 = (uint)bStack_52;
        FUN_000028d8(auStack_48,s___02X__02X__02X__02X__02X__02X___000e630b + 1,
                     (undefined1)uStack_58,uStack_58._1_1_);
        (**(code **)(**(int **)(param_1 + 0x90) + 0x210))
                  (*(int **)(param_1 + 0x90),0,iVar13,auStack_48);
        return;
      }
      if (iVar3 == 0x1f) {
        uStack_88 = 0;
        uStack_84 = 0;
        FUN_00035aec(&uStack_88);
        FUN_000028d8(&uStack_58,&LAB_000e6334,uStack_88 >> 0x10 | uStack_84 << 0x10,
                     (int)uStack_84 >> 0x10);
        (**(code **)(**(int **)(param_1 + 0x90) + 0x210))
                  (*(int **)(param_1 + 0x90),0,iVar12,&uStack_58);
        return;
      }
      if (iVar3 == 0x20) {
        FUN_000028d8(&uStack_58,&DAT_000e5fdc,*(undefined2 *)(param_1 + 0x4a));
        (**(code **)(**(int **)(param_1 + 0x90) + 0x210))
                  (*(int **)(param_1 + 0x90),0,DAT_000e5fec,&uStack_58);
        return;
      }
      return;
    }
    if (param_4 == 0x500) {
      piVar11 = *(int **)(param_1 + 0x90);
      bVar15 = *(short *)(param_1 + 0x42) == 0;
      if (bVar15) {
        FUN_00159a7c(&uStack_74,iVar2);
        FUN_0015e784(param_1 + 0x24,uStack_74);
      }
      uVar4 = FUN_0015e6f4(param_1 + 0x24);
      (**(code **)(*piVar11 + 0x210))(piVar11,0,0x500,uVar4);
      if (!bVar15) {
        return;
      }
      puVar10 = &uStack_74;
    }
    else if (param_4 == 0x501) {
      piVar11 = *(int **)(param_1 + 0x90);
      bVar15 = *(short *)(param_1 + 0x42) == 0;
      if (bVar15) {
        FUN_0015a278(&uStack_60,iVar2);
        FUN_0015e784(param_1 + 0x2c,uStack_60);
      }
      uVar4 = FUN_0015e6f4(param_1 + 0x2c);
      (**(code **)(*piVar11 + 0x210))(piVar11,0,DAT_000e6304,uVar4);
      if (!bVar15) {
        return;
      }
      puVar10 = &uStack_60;
    }
    else {
      if (param_4 != 0x504) {
        return;
      }
      piVar11 = *(int **)(param_1 + 0x90);
      bVar15 = *(short *)(param_1 + 0x42) == 0;
      if (bVar15) {
        FUN_00159ac8(&uStack_5c,iVar2);
        FUN_0015e784(param_1 + 0x34,uStack_5c);
      }
      uVar4 = FUN_0015e6f4(param_1 + 0x34);
      (**(code **)(*piVar11 + 0x210))(piVar11,0,DAT_000e5fd4,uVar4);
      if (!bVar15) {
        return;
      }
      puVar10 = &uStack_5c;
    }
  }
  FUN_001da44c(puVar10);
  return;
}

