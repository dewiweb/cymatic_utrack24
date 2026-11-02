// rea decompile_all
// name: FUN_00188834
// address: 0x188834
// body: available
// range: 0x188834-0x18932b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00188834(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  bool bVar5;
  ushort uVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint extraout_r1;
  code *pcVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint local_a8;
  uint uStack_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  undefined4 local_94 [17];
  undefined1 auStack_50 [32];
  undefined1 auStack_30 [16];
  
  iVar7 = DAT_00189334;
  bVar1 = *(byte *)(param_4 + 0x10);
  uVar3 = *DAT_0018932c;
  uVar4 = *DAT_00189330;
  iVar15 = param_4 + 0x20;
  if (bVar1 == 0x81) {
    iVar7 = FUN_001bed18(param_1 + 0x10,uVar4,uVar3);
    local_98 = param_4 + 0x28;
    if (iVar7 != 0) {
      local_9c = FUN_001beccc(iVar15);
      local_a0 = (uint)*(ushort *)(param_4 + 0x1e);
      uStack_a4 = (uint)*(ushort *)(param_4 + 0x1c);
      local_a8 = (uint)*(ushort *)(param_4 + 0x1a);
      local_94[0] = param_3;
      FUN_0017f8a8(*(int *)param_1[0x1f] + 0x1e0,*(undefined2 *)(param_2 + 8),
                   *(undefined2 *)(param_4 + 0x16),*(undefined2 *)(param_4 + 0x18));
      return;
    }
    local_a0 = (uint)*(ushort *)(param_4 + 0x1e);
    uStack_a4 = (uint)*(ushort *)(param_4 + 0x1c);
    local_a8 = (uint)*(ushort *)(param_4 + 0x1a);
    local_9c = iVar15;
    FUN_00187484(param_1,*(undefined2 *)(param_4 + 0x16),param_3,*(undefined2 *)(param_4 + 0x18));
    return;
  }
  if (0x81 < bVar1) {
    if (bVar1 == 0x90) {
      cVar2 = *(char *)(param_4 + 0x16);
      if (cVar2 == '\x01') {
        iVar7 = FUN_0018c118(param_1 + 0x24,param_3);
        iVar15 = FUN_001868a8(param_1 + 0x26,param_3);
        if (iVar15 != 0 || iVar7 != 0) {
          return;
        }
        FUN_001512cc(&local_a8);
        FUN_0014f23c(&local_a8,*(undefined4 *)(*(int *)param_1[0x1f] + 0x188),4,param_1 + 0x10);
        iVar7 = FUN_0014d51c(&local_a8,1);
      }
      else {
        if (cVar2 != '\x02') {
          if (cVar2 == '\x03') {
            FUN_001855a0(param_1[0x1f],param_3,0);
            FUN_00192fcc(*(int *)param_1[0x1f] + 0x6a8,param_3);
            return;
          }
          if (cVar2 != '\x04') {
            return;
          }
          FUN_001855a0(param_1[0x1f],param_3,1);
          return;
        }
        iVar7 = FUN_001bed48(param_3);
        if (iVar7 != 0) {
          return;
        }
        FUN_001512cc(&local_a8);
        FUN_0014f23c(&local_a8,*(undefined4 *)(*(int *)param_1[0x1f] + 0x188),3,param_1 + 0x10);
        iVar7 = FUN_0014d51c(&local_a8,1);
      }
      if (iVar7 == 0) {
        uVar8 = FUN_0017274c(auStack_30,param_3,0);
        FUN_0014d48c(&local_a8,uVar8);
      }
      FUN_001a2410(*(int *)param_1[0x1f] + 0x4a0,&local_a8,0);
      FUN_0015111c(&local_a8);
      FUN_0014ca10(local_94);
      FUN_0014ca10(&local_9c);
      return;
    }
    if (bVar1 < 0x91) {
      if (bVar1 == 0x82) {
        iVar7 = FUN_001bed18(param_1 + 0x10,uVar4,uVar3);
        if (iVar7 != 0) {
          local_a8 = (uint)*(ushort *)(param_4 + 0x1c);
          uStack_a4 = param_3;
          FUN_0017fe50(*(int *)param_1[0x1f] + 0x1e0,*(undefined2 *)(param_2 + 8),
                       *(undefined2 *)(param_4 + 0x16),*(undefined4 *)(param_4 + 0x18));
          return;
        }
        uVar3 = *(undefined2 *)(param_4 + 0x16);
        uVar8 = *(undefined4 *)(param_4 + 0x18);
        uVar14 = 0;
        while( true ) {
          if (*(ushort *)(param_1 + 0x3e) <= uVar14) {
            return;
          }
          piVar10 = *(int **)(param_1[0x3d] + uVar14 * 4);
          if (piVar10 == (int *)0x0) break;
          (**(code **)(*piVar10 + 4))(piVar10,*(int *)(*param_1 + -0x14) + (int)param_1,uVar3,uVar8)
          ;
          uVar14 = uVar14 + 1 & 0xfffeffff;
        }
        return;
      }
      if (bVar1 != 0x83) {
        return;
      }
      iVar7 = FUN_001bed18(param_1 + 0x10,uVar4,uVar3);
      if (iVar7 != 0) {
        FUN_0017fe50(*(int *)param_1[0x1f] + 0x1e0,*(undefined2 *)(param_2 + 8),
                     *(undefined2 *)(param_4 + 0x16),*(undefined4 *)(param_4 + 0x18));
        return;
      }
      uVar3 = *(undefined2 *)(param_4 + 0x16);
      uVar8 = *(undefined4 *)(param_4 + 0x18);
      uVar14 = 0;
      while( true ) {
        if (*(ushort *)(param_1 + 0x3e) <= uVar14) {
          return;
        }
        piVar10 = *(int **)(param_1[0x3d] + uVar14 * 4);
        if (piVar10 == (int *)0x0) break;
        (**(code **)(*piVar10 + 4))(piVar10,*(int *)(*param_1 + -0x14) + (int)param_1,uVar3,uVar8);
        uVar14 = uVar14 + 1 & 0xfffeffff;
      }
      return;
    }
    if (bVar1 == 0x91) {
      cVar2 = *(char *)(param_4 + 0x16);
      if (cVar2 == '\0') {
        uVar3 = *(undefined2 *)(param_4 + 0x18);
        iVar7 = FUN_001727f0(auStack_50);
        FUN_00172810(iVar7,param_4 + 0x1c);
        *(undefined2 *)(iVar7 + 0x10) = *(undefined2 *)(param_4 + 0x2c);
        *(undefined2 *)(iVar7 + 0x12) = *(undefined2 *)(param_4 + 0x2e);
        *(undefined2 *)(iVar7 + 0x14) = *(undefined2 *)(param_4 + 0x30);
        *(undefined2 *)(iVar7 + 0x16) = *(undefined2 *)(param_4 + 0x32);
        *(undefined2 *)(iVar7 + 0x18) = *(undefined2 *)(param_4 + 0x34);
        *(undefined2 *)(iVar7 + 0x1a) = *(undefined2 *)(param_4 + 0x36);
        *(undefined2 *)(iVar7 + 0x1c) = *(undefined2 *)(param_4 + 0x38);
        *(undefined2 *)(iVar7 + 0x1e) = *(undefined2 *)(param_4 + 0x3a);
        iVar15 = FUN_0018e874(param_1 + 0x22,uVar3);
        if (iVar15 == 0) {
          return;
        }
        if (*(short *)(iVar7 + 0x10) != 0) {
          FUN_00180368(iVar15,iVar7,3);
          return;
        }
      }
      else {
        if (cVar2 != '\x01') {
          if (cVar2 == '\x02') {
            (**(code **)(*param_1 + 0x18c))(param_1,0);
            return;
          }
          if (cVar2 != '\x03') {
            return;
          }
          (**(code **)(*param_1 + 0x18c))(param_1,1);
          return;
        }
        iVar15 = FUN_0018e874(param_1 + 0x22,*(undefined2 *)(param_4 + 0x18));
        if (iVar15 == 0) {
          return;
        }
        if (*(short *)(iVar7 + 0x10) != 0) {
          FUN_00180368(iVar15,iVar7,4);
          return;
        }
      }
      FUN_001801ac();
      return;
    }
    if (bVar1 != 0x92) {
      return;
    }
    if (*(short *)(param_4 + 0x16) == 0) {
      if (param_1[0x50] == 0) {
        return;
      }
      (**(code **)(*param_1 + 400))(param_1);
      return;
    }
    piVar10 = (int *)FUN_0018e874(param_1 + 0x22,*(undefined2 *)(param_4 + 0x18));
    if (piVar10 == (int *)0x0) {
      return;
    }
    pcVar12 = *(code **)(*piVar10 + 0x110);
LAB_00188b30:
    (*pcVar12)();
    return;
  }
  if (bVar1 == 0x60) {
    if (*(char *)(param_4 + 0x16) == '\x01') {
LAB_00188d78:
      FUN_0018dc2c(param_1 + 0x20);
      FUN_0018dc2c(param_1 + 0x22);
      return;
    }
    if (*(char *)(param_4 + 0x16) != '\x02') {
      return;
    }
  }
  else {
    if (bVar1 < 0x61) {
      if (bVar1 == 0x40) {
        return;
      }
      if (bVar1 == 0x51) {
        uVar6 = *(ushort *)(param_4 + 0x16);
        if ((uVar6 & 0x100) == 0) {
          if (uVar6 == 5) {
            uVar8 = 1;
            uVar13 = 0;
            param_1 = param_1 + 0x20;
          }
          else {
            if (uVar6 == 6) {
              FUN_0018e2f8(param_1 + 0x20,1,0);
              iVar7 = param_1[0x44];
              if (iVar7 == 0) {
                return;
              }
              do {
                FUN_0018adec(iVar7,1,0,1);
                iVar7 = *(int *)(iVar7 + 0x114);
              } while (iVar7 != 0);
              return;
            }
            if (uVar6 != 0x85) {
              if (uVar6 != 0x86) {
                return;
              }
              FUN_0018e2f8(param_1 + 0x20,0,1);
              FUN_0018e2f8(param_1 + 0x22,0,1);
              iVar7 = param_1[0x44];
              if (iVar7 == 0) {
                return;
              }
              do {
                FUN_0018adec(iVar7,0,1,1);
                iVar7 = *(int *)(iVar7 + 0x114);
              } while (iVar7 != 0);
              return;
            }
            FUN_0018e2f8(param_1 + 0x20,0,1);
            uVar13 = 1;
            uVar8 = 0;
            param_1 = param_1 + 0x22;
          }
          FUN_0018e2f8(param_1,uVar8,uVar13);
          return;
        }
        if (*(short *)(param_4 + 0x18) == -1) {
          for (iVar7 = FUN_0018db88(param_1 + 0x20); iVar7 != 0;
              iVar7 = FUN_0018d8c8(param_1 + 0x20,iVar7)) {
            FUN_0018ab00(param_1,param_4,iVar7);
          }
          iVar7 = FUN_0018db88(param_1 + 0x22);
          if (iVar7 == 0) {
            return;
          }
          do {
            FUN_0018ab00(param_1,param_4,iVar7);
            iVar7 = FUN_0018d8c8(param_1 + 0x22,iVar7);
          } while (iVar7 != 0);
          return;
        }
        iVar7 = FUN_00172274();
        if (iVar7 == 3) {
          uVar8 = FUN_0018e874(param_1 + 0x20,*(undefined2 *)(param_4 + 0x18));
          FUN_0018ab00(param_1,param_4,uVar8);
          return;
        }
        if (iVar7 != 6) {
          return;
        }
        uVar8 = FUN_0018e874(param_1 + 0x22,*(undefined2 *)(param_4 + 0x18));
        FUN_0018ab00(param_1,param_4,uVar8);
        return;
      }
      if (bVar1 != 0x52) {
        return;
      }
      uVar14 = param_1[0x1e];
      bVar5 = false;
      if ((uVar14 & 4) != 0) {
        iVar7 = FUN_001beaec(param_1 + 0x16);
        if (iVar7 != 0) {
          uVar8 = FUN_001beccc(param_4 + 0x18);
          (**(code **)(*param_1 + 0xf8))(param_1,uVar8);
          bVar5 = true;
          FUN_00188330(param_1,6);
        }
      }
      if ((uVar14 & 8) != 0) {
        uVar11 = *(uint *)(param_4 + 0x20);
        if (param_1[0x11] != uVar11) {
          FUN_001512cc(&local_a8);
          FUN_0014f07c(&local_a8,param_1 + 0x10);
          FUN_001a2410(*(int *)param_1[0x1f] + 0x4a0,&local_a8,0);
          FUN_00184dac(param_1[0x1f],param_1 + 0x10);
          FUN_001853e8(param_1[0x1f],param_1,*(undefined4 *)(param_4 + 0x20));
          bVar5 = true;
          *(undefined1 *)((int)param_1 + 0x4d) = 0;
          FUN_00188330(param_1,0);
          FUN_0015111c(&local_a8);
          FUN_0014ca10(local_94);
          FUN_0014ca10(&local_9c);
          uVar11 = extraout_r1;
        }
        bVar1 = *(byte *)(param_4 + 0x28);
        uVar9 = (uint)bVar1;
        if (uVar9 != 0xff) {
          uVar11 = (uint)*(byte *)(param_1 + 0x13);
        }
        if (uVar9 != 0xff && uVar9 != uVar11) {
          *(byte *)(param_1 + 0x13) = bVar1;
          FUN_00188330(param_1,7);
        }
      }
      if (((uVar14 & 0x10) != 0) &&
         (iVar7 = (**(code **)(**(int **)param_1[0x1f] + 0x110))(),
         iVar7 != *(int *)(param_4 + 0x24))) {
        FUN_0019fa58(*(undefined4 *)param_1[0x1f]);
        return;
      }
      if (!bVar5) {
        return;
      }
      pcVar12 = *(code **)(**(int **)param_1[0x1f] + 0xd0);
      goto LAB_00188b30;
    }
    if (bVar1 != 0x61) {
      if (bVar1 != 0x80) {
        return;
      }
      if (*(short *)(param_4 + 0x16) == 0x1203) {
        FUN_001917d4(param_1 + 0x30,param_3,*(undefined2 *)(param_4 + 0x18));
        return;
      }
      iVar7 = FUN_001bed18(param_1 + 0x10,uVar4,uVar3);
      if (iVar7 != 0) {
        FUN_001beccc(iVar15);
        FUN_0017f8a8(*(int *)param_1[0x1f] + 0x1e0,*(undefined2 *)(param_2 + 8),
                     *(undefined2 *)(param_4 + 0x16),*(undefined2 *)(param_4 + 0x18));
        return;
      }
      FUN_00187484(param_1,*(undefined2 *)(param_4 + 0x16),param_3,*(undefined2 *)(param_4 + 0x18));
      return;
    }
    if ((*(ushort *)(param_4 + 0x16) & 4) != 0) {
      iVar7 = FUN_00172274(*(undefined2 *)(param_4 + 0x18));
      if (iVar7 == 3) {
        uVar3 = *(undefined2 *)(param_4 + 0x18);
        param_1 = param_1 + 0x20;
      }
      else {
        if (iVar7 != 6) {
          return;
        }
        uVar3 = *(undefined2 *)(param_4 + 0x18);
        param_1 = param_1 + 0x22;
      }
      iVar7 = FUN_0018e874(param_1,uVar3);
      if (iVar7 == 0) {
        return;
      }
      if (*(char *)(param_4 + 0x16) != '\x05') {
        if (*(char *)(param_4 + 0x16) == '\x06') {
          FUN_0017e474();
        }
        return;
      }
      FUN_0017e2e8();
      return;
    }
    uVar6 = *(ushort *)(param_4 + 0x16) & 0xff;
    if (uVar6 == 1) goto LAB_00188d78;
    if (uVar6 != 2) {
      return;
    }
  }
  FUN_0018dd74(param_1 + 0x20);
  FUN_0018dd74(param_1 + 0x22);
  return;
}

