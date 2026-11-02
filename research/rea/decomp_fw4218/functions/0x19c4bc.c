// rea decompile_all
// name: FUN_0019c4bc
// address: 0x19c4bc
// body: available
// range: 0x19c4bc-0x19ca6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0019c4bc(int *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puStack_108;
  code *pcStack_104;
  int aiStack_100 [2];
  undefined1 auStack_f8 [4];
  undefined1 auStack_f4 [4];
  undefined1 auStack_f0 [4];
  undefined1 auStack_ec [8];
  undefined1 auStack_e4 [60];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [8];
  
  (**(code **)(*param_2 + 0x6c))(auStack_90);
  FUN_0019c444(param_1,auStack_90);
  iVar2 = param_1[9];
  uVar5 = *(uint *)(iVar2 + 0x5f0);
  *(uint *)(iVar2 + 0x5f0) = uVar5 + 1;
  *(uint *)(iVar2 + 0x5f4) = *(int *)(iVar2 + 0x5f4) + (uint)(0xfffffffe < uVar5);
  bVar1 = *(byte *)((int)param_2 + 0x6d);
  if (bVar1 == 0x83) {
    iVar2 = FUN_001beecc(param_1 + 0x3c);
    if (iVar2 != 0) {
      return;
    }
    FUN_001512cc(aiStack_100);
    iVar2 = param_1[9];
    (**(code **)(*param_1 + 0x74))(auStack_40,param_1);
    puStack_108 = (undefined1 *)(uint)*(byte *)(param_2 + 0x1c);
    pcStack_104 = (code *)0x1;
    iVar2 = FUN_001963b8(aiStack_100,auStack_40,param_1 + 0x3c,iVar2);
    if (iVar2 != 0) {
      FUN_001a2410(param_1[9] + 0x4a0,aiStack_100,0);
    }
LAB_0019c7c0:
    FUN_0015111c(aiStack_100);
    FUN_0014ca10(auStack_ec);
    FUN_0014ca10(auStack_f4);
    return;
  }
  if (bVar1 < 0x84) {
    if (bVar1 == 0) {
      iVar2 = param_2[0x37];
      (**(code **)(*param_2 + 0x6c))(&puStack_108,param_2);
      FUN_0018efc8(param_1 + 0x1b,&puStack_108,(char)iVar2);
      (**(code **)(*param_2 + 0x6c))(&puStack_108,param_2);
      (**(code **)(*param_1 + 0x74))(auStack_f8,param_1);
      FUN_00199370(param_1[9],auStack_f8,&puStack_108,param_1 + 0x1a);
      if ((char)param_2[0x37] != '\0') {
        FUN_00190c78(param_1 + 0x19);
      }
      return;
    }
    if (bVar1 == 2) {
      (**(code **)(*param_2 + 0x6c))(auStack_80,param_2);
      FUN_0019bca4(param_1,auStack_80,(short)param_2[0x1c],*(undefined1 *)((int)param_2 + 0x72));
      return;
    }
    if (bVar1 == 6) {
      (**(code **)(*(int *)param_1[0x18] + 0xd4))(auStack_60);
      FUN_0017274c(auStack_50,auStack_60,(short)param_1[0x24]);
      (**(code **)(*param_2 + 0x6c))(auStack_a0,param_2);
      iVar2 = FUN_001bef00(auStack_a0,param_1 + 0x3c);
      if (iVar2 != 0) {
        FUN_00172810(param_1 + 0x3c,DAT_0019ca70);
      }
      iVar2 = FUN_0018f83c(param_1 + 0x1b,auStack_a0);
      if (iVar2 == 0) {
        return;
      }
      uVar5 = 0;
      while ((uVar5 < *(ushort *)(param_1 + 0x11) &&
             (piVar3 = *(int **)(param_1[0x10] + uVar5 * 4), piVar3 != (int *)0x0))) {
        (**(code **)(*piVar3 + 4))(piVar3,*(int *)(*param_1 + -0x14) + (int)param_1,auStack_a0,1);
        uVar5 = uVar5 + 1 & 0xfffeffff;
      }
      FUN_00189a14(param_1[0x18]);
      return;
    }
    if (bVar1 != 0x81) {
      return;
    }
    FUN_00191070(param_1 + 0x19);
    iVar2 = param_1[0x28];
  }
  else {
    if (bVar1 == 0x84) {
      if (*(char *)((int)param_2 + 0x75) == '\0') {
        (**(code **)(*param_2 + 0x6c))(&puStack_108,param_2);
        FUN_0019bab8(param_1,(char)param_2[0x1d],&puStack_108,param_2[0x1c]);
        return;
      }
      iVar2 = FUN_001beecc(param_1 + 0x3c);
      if (iVar2 == 0) {
        FUN_001512cc(auStack_f8);
        iVar2 = param_1[9];
        (**(code **)(*param_1 + 0x74))(auStack_40,param_1);
        aiStack_100[0] = param_2[0x1c];
        puStack_108 = (undefined1 *)(uint)*(byte *)(param_2 + 0x1d);
        pcStack_104 = (code *)0x1;
        aiStack_100[1] = 1;
        iVar2 = FUN_00195bdc(auStack_f8,auStack_40,param_1 + 0x3c,iVar2);
        if (iVar2 != 0) {
          FUN_001a2410(param_1[9] + 0x4a0,auStack_f8,0);
        }
        FUN_0015111c(auStack_f8);
        FUN_0014ca10(auStack_e4);
        FUN_0014ca10(auStack_ec);
        return;
      }
      return;
    }
    if (bVar1 == 0x85) {
      if (*(short *)((int)param_2 + 0x72) == 0) {
        return;
      }
      uVar4 = FUN_00006604((uint)*(byte *)(param_1 + 0x25) * (uint)*(ushort *)(param_2 + 0x1d) *
                           0x18);
      (**(code **)(*(int *)param_1[0x18] + 0xd4))(aiStack_100);
      FUN_0017274c(auStack_f0,aiStack_100,(short)param_1[0x24]);
      uVar5 = 0;
      while( true ) {
        if (*(ushort *)(param_1 + 0x15) <= uVar5) {
          return;
        }
        piVar3 = *(int **)(param_1[0x14] + uVar5 * 4);
        if (piVar3 == (int *)0x0) break;
        (**(code **)(*param_2 + 0x6c))(auStack_70,param_2);
        puStack_108 = (undefined1 *)((uint)*(byte *)(param_1 + 0x25) * 0x18);
        pcStack_104 = (code *)(uVar4 & 0xffff);
        (**(code **)(*piVar3 + 4))
                  (piVar3,*(int *)(*param_1 + -0x14) + (int)param_1,auStack_70,(short)param_2[0x1c])
        ;
        uVar5 = uVar5 + 1 & 0xfffeffff;
      }
      return;
    }
    if (bVar1 == 0x87) {
      piVar3 = (int *)FUN_00190d0c(param_1 + 0x19,(short)param_2[0x1e],(short)param_2[0x1f],
                                   *(undefined2 *)((int)param_2 + 0x7e));
      if (piVar3 == (int *)0x0) {
        return;
      }
      FUN_001512cc(aiStack_100);
      (**(code **)(*piVar3 + 0x54))(auStack_a8,piVar3,*(undefined2 *)((int)param_2 + 0x7e));
      (**(code **)(*piVar3 + 0x4c))(auStack_20,piVar3);
      iVar2 = param_1[9];
      (**(code **)(*param_2 + 0x6c))(auStack_30,param_2);
      (**(code **)(*param_1 + 0x74))(auStack_40,param_1);
      puStack_108 = auStack_20;
      pcStack_104 = (code *)auStack_a8;
      iVar2 = FUN_001962a8(aiStack_100,auStack_40,auStack_30,iVar2);
      if (iVar2 != 0) {
        FUN_001a2410(param_1[9] + 0x4a0,aiStack_100,0);
      }
      FUN_00171ea4(auStack_a8);
      goto LAB_0019c7c0;
    }
    if (bVar1 != 0x88) {
      return;
    }
    iVar2 = FUN_00190d0c(param_1 + 0x19,(short)param_2[0x1e],(short)param_2[0x1f],
                         *(undefined2 *)((int)param_2 + 0x7e));
    if (iVar2 == 0) {
      return;
    }
    FUN_0017da64(iVar2,*(undefined2 *)((int)param_2 + 0x7e));
    iVar2 = param_1[0x28];
  }
  if (iVar2 != 0) {
    FUN_001a2410(param_1[9] + 0x4a0,param_1 + 0x26,0);
  }
  FUN_0015111c(param_1 + 0x26);
  return;
}

