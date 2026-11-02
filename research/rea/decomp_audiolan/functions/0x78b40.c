// rea decompile_all
// name: FUN_00078b40
// address: 0x78b40
// body: available
// range: 0x78b40-0x78f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00078b40(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  undefined2 local_90;
  undefined2 local_8e;
  undefined1 auStack_8c [4];
  undefined2 local_88;
  undefined1 auStack_84 [4];
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 auStack_70 [4];
  int local_6c;
  char local_68 [3];
  undefined1 local_65;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
  undefined2 local_5a;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  
  FUN_000a65fc(&local_a0);
  bVar1 = false;
  puVar11 = (undefined4 *)0x0;
  iVar4 = FUN_0017bfc0();
  FUN_001a0700(param_1 + 0x124);
  iVar5 = *(int *)(*(int *)(param_1 + 0x1a0) + 8);
  uVar10 = 0;
  if (iVar5 != *(int *)(param_1 + 0x1a0)) {
    do {
      uVar8 = iVar4 - *(int *)(iVar5 + 0x18);
      uVar6 = uVar10;
      if (uVar10 < uVar8) {
        uVar6 = uVar8;
      }
      if (uVar10 < uVar8) {
        puVar11 = (undefined4 *)(iVar5 + 0x14);
      }
      iVar9 = *(int *)(iVar5 + 0xc);
      if (*(int *)(iVar5 + 0xc) == 0) {
        for (iVar9 = *(int *)(iVar5 + 4); iVar5 == *(int *)(iVar9 + 0xc);
            iVar9 = *(int *)(iVar9 + 4)) {
          iVar5 = iVar9;
        }
        if (*(int *)(iVar5 + 0xc) != iVar9) {
          iVar5 = iVar9;
        }
      }
      else {
        do {
          iVar5 = iVar9;
          iVar9 = *(int *)(iVar5 + 8);
        } while (*(int *)(iVar5 + 8) != 0);
      }
      uVar10 = uVar6;
    } while (iVar5 != *(int *)(param_1 + 0x1a0));
    if ((puVar11 != (undefined4 *)0x0) && (*(uint *)(param_1 + 0x2d4) < uVar6)) {
      if (&local_a0 != puVar11) {
        local_a0 = *puVar11;
        local_9c = puVar11[1];
        FUN_001da4a8(&local_98,puVar11 + 2);
        FUN_001da4a8(&local_94,puVar11 + 3);
        local_90 = *(undefined2 *)(puVar11 + 4);
        local_8e = *(undefined2 *)((int)puVar11 + 0x12);
        FUN_001da4a8(auStack_8c,puVar11 + 5);
        local_88 = *(undefined2 *)(puVar11 + 6);
        FUN_001da4a8(auStack_84,puVar11 + 7);
        local_80 = puVar11[8];
        local_7c = *(undefined1 *)(puVar11 + 9);
        local_7b = *(undefined1 *)((int)puVar11 + 0x25);
        local_78 = puVar11[10];
        local_74 = *(undefined1 *)(puVar11 + 0xb);
        FUN_001da4a8(auStack_70,puVar11 + 0xc);
      }
      bVar1 = true;
    }
  }
  FUN_001a0d18(param_1 + 0x124);
  local_6c = DAT_00078f18;
  if (bVar1) {
    local_34 = FUN_0018e274(local_94);
    FUN_00078f1c(local_68,param_1,auStack_38,&local_a0);
    FUN_001a0700(param_1 + 0x124);
    iVar5 = *(int *)(*(int *)(param_1 + 0x1a0) + 8);
    if (iVar5 != *(int *)(param_1 + 0x1a0)) {
      do {
        uVar6 = *(uint *)(*(int *)(iVar5 + 0x1c) + -4);
        uVar10 = *(uint *)(local_98 + -4);
        if (uVar6 <= *(uint *)(local_98 + -4)) {
          uVar10 = uVar6;
        }
        iVar4 = FUN_0000339c(*(int *)(iVar5 + 0x1c),local_98,uVar10);
        if ((iVar4 == 0) && (*(int *)(*(int *)(iVar5 + 0x1c) + -4) == *(int *)(local_98 + -4))) {
          iVar4 = FUN_000a63a8(iVar5 + 0x14,local_68);
          if (iVar4 == 0) {
            uVar7 = FUN_0017bfc0();
            *(undefined4 *)(iVar5 + 0x18) = uVar7;
            if (local_68[0] != '\0') {
              uVar3 = FUN_00153704(local_68);
              *(undefined2 *)(iVar5 + 0x26) = uVar3;
              FUN_001da458(iVar5 + 0x28,local_58);
              *(undefined2 *)(iVar5 + 0x2c) = local_5a;
              uVar7 = FUN_001536d0(local_68);
              FUN_001da458(iVar5 + 0x30,uVar7);
              *(undefined4 *)(iVar5 + 0x34) = local_64;
              uVar2 = FUN_001536ec(local_68);
              *(undefined1 *)(iVar5 + 0x38) = uVar2;
              *(undefined1 *)(iVar5 + 0x39) = local_5c;
              *(undefined4 *)(iVar5 + 0x3c) = local_60;
              *(undefined1 *)(iVar5 + 0x40) = local_65;
              FUN_001da458(iVar5 + 0x44,local_54);
              FUN_001da4a8(&local_6c,(int *)(iVar5 + 0x1c));
            }
          }
          break;
        }
        iVar4 = *(int *)(iVar5 + 0xc);
        if (*(int *)(iVar5 + 0xc) == 0) {
          iVar4 = *(int *)(iVar5 + 4);
          while (iVar9 = iVar4, iVar5 == *(int *)(iVar9 + 0xc)) {
            iVar5 = iVar9;
            iVar4 = *(int *)(iVar9 + 4);
          }
          if (*(int *)(iVar5 + 0xc) != iVar9) {
            iVar5 = iVar9;
          }
        }
        else {
          do {
            iVar5 = iVar4;
            iVar4 = *(int *)(iVar5 + 8);
          } while (*(int *)(iVar5 + 8) != 0);
        }
      } while (iVar5 != *(int *)(param_1 + 0x1a0));
    }
    FUN_001a0d18(param_1 + 0x124);
    FUN_00056e64(local_68);
  }
  if (*(int *)(local_6c + -4) != 0) {
    FUN_001a0700(param_1 + 0x148);
    piVar12 = (int *)**(int **)(param_1 + 0x2e8);
    if (piVar12 != *(int **)(param_1 + 0x2e8)) {
      do {
        (*(code *)**(undefined4 **)piVar12[2])((undefined4 *)piVar12[2],&local_6c);
        piVar12 = (int *)*piVar12;
      } while (piVar12 != (int *)*(int *)(param_1 + 0x2e8));
    }
    FUN_001a0d18(param_1 + 0x148);
  }
  FUN_001da44c(&local_6c);
  iVar5 = FUN_001da44c(auStack_70);
  iVar5 = FUN_001da44c(iVar5 + -0x14);
  iVar5 = FUN_001da44c(iVar5 + -8);
  iVar5 = FUN_001da44c(iVar5 + -8);
  FUN_001da44c(iVar5 + -4);
  return;
}

