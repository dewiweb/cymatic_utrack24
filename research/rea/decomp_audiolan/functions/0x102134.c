// rea decompile_all
// name: FUN_00102134
// address: 0x102134
// body: available
// range: 0x102134-0x1025fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00102134(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  bool bVar10;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_158;
  int local_154;
  int iStack_150;
  undefined1 *puStack_14c;
  undefined1 *puStack_148;
  undefined1 auStack_144 [22];
  undefined2 local_12e;
  undefined1 auStack_12c [12];
  ushort local_120 [2];
  undefined1 auStack_11c [104];
  char local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined1 auStack_a4 [8];
  undefined1 auStack_9c [68];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [12];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  FUN_000f9b04(auStack_144,0);
  iVar3 = FUN_000ea3bc(auStack_144,param_3);
  if (iVar3 != 0) {
    FUN_0010f5fc(auStack_58,auStack_12c);
    if ((((short)local_120[0] < 0) && ((local_120[0] & 0xff) == 2 || (local_120[0] & 0xff) == 3)) &&
       (iVar3 = FUN_0015e90c(auStack_11c), iVar3 == 0)) {
      iVar3 = *(int *)(*param_1 + 4);
      if (*(int *)(*param_1 + 4) != 0) {
        do {
          iVar4 = FUN_0010f598(auStack_11c,iVar3);
          bVar9 = iVar4 < 0;
          bVar10 = iVar4 == 0;
          if (0 < iVar4) {
            iVar4 = 1;
          }
          if (bVar9) {
            iVar4 = 0;
          }
          if (bVar10) {
            if (iVar3 != 0) {
              iVar3 = FUN_00108648(*param_1,local_120);
              if (iVar3 != 0) {
                FUN_000eea30(&local_b0);
                thunk_FUN_000ea2a4(auStack_3c,param_1[1]);
                FUN_0015e148(auStack_30,param_1[1]);
                FUN_0010f5fc(auStack_48,param_2 + 0x1c);
                puStack_148 = auStack_3c;
                puStack_14c = auStack_30;
                iStack_150 = iVar3 + 0x4c;
                local_154 = iVar3 + 0x20;
                local_164 = *(undefined4 *)(iVar3 + 0x40);
                uStack_160 = *(undefined4 *)(iVar3 + 0x44);
                uStack_15c = *(undefined4 *)(iVar3 + 0x48);
                local_174 = *(undefined4 *)(iVar3 + 0x30);
                uStack_170 = *(undefined4 *)(iVar3 + 0x34);
                uStack_16c = *(undefined4 *)(iVar3 + 0x38);
                uStack_168 = *(undefined4 *)(iVar3 + 0x3c);
                iStack_158 = iVar3;
                FUN_000ee434(&local_b0,local_12e,auStack_58,auStack_48,*(undefined4 *)(iVar3 + 0x2c)
                            );
                FUN_0010e7f4(auStack_30);
                FUN_000ea314(auStack_3c);
                if (param_4 != 0) goto LAB_001022d8;
                goto LAB_001023a4;
              }
              FUN_000eea30(&local_b0);
              FUN_0010f5fc(&local_174,param_2 + 0x1c);
              FUN_000ee6cc(&local_b0,local_12e,auStack_58,&local_174,0);
              if (param_4 != 0) goto LAB_001022d8;
              piVar8 = (int *)param_1[2];
              FUN_0010f5fc(&uStack_168,param_2 + 0x1c);
              (**(code **)(*piVar8 + 8))(piVar8,&local_b0,&uStack_168);
              goto LAB_001023cc;
            }
            break;
          }
          iVar7 = *(int *)(iVar3 + iVar4 * 4 + 0x5c);
          if (iVar7 == 0) break;
          bVar2 = 0;
          if (iVar4 != 0) {
            bVar2 = *(byte *)(iVar3 + 100);
          }
          iVar3 = iVar7;
        } while (iVar4 == 0 || (bVar2 & 0x80) == 0);
      }
    }
    uVar1 = -((int)((uint)local_120[0] << 0x17) >> 0x1f);
    if ((param_4 == 0) || (iVar3 = FUN_0015e1e0(param_1[1]), iVar3 != 0 || uVar1 != 0)) {
      iVar3 = FUN_00108648(*param_1,local_120);
      if (iVar3 != 0) {
        FUN_000eea30(&local_b0);
        thunk_FUN_000ea2a4(auStack_48,param_1[1]);
        FUN_0015e148(auStack_38,param_1[1]);
        FUN_0010f5fc(auStack_30,param_2 + 0x1c);
        puStack_148 = auStack_48;
        puStack_14c = auStack_38;
        iStack_150 = iVar3 + 0x4c;
        local_154 = iVar3 + 0x20;
        local_164 = *(undefined4 *)(iVar3 + 0x40);
        uStack_160 = *(undefined4 *)(iVar3 + 0x44);
        uStack_15c = *(undefined4 *)(iVar3 + 0x48);
        local_174 = *(undefined4 *)(iVar3 + 0x30);
        uStack_170 = *(undefined4 *)(iVar3 + 0x34);
        uStack_16c = *(undefined4 *)(iVar3 + 0x38);
        uStack_168 = *(undefined4 *)(iVar3 + 0x3c);
        iStack_158 = iVar3;
        FUN_000ee434(&local_b0,local_12e,auStack_58,auStack_30,*(undefined4 *)(iVar3 + 0x2c));
        FUN_0010e7f4(auStack_38);
        FUN_000ea314(auStack_48);
        if (param_4 == 0) {
LAB_001023a4:
          piVar8 = (int *)param_1[2];
          FUN_0010f5fc(&local_174,param_2 + 0x1c);
          (**(code **)(*piVar8 + 8))(piVar8,&local_b0,&local_174);
        }
        else {
LAB_001022d8:
          (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2],&local_b0);
        }
LAB_001023cc:
        FUN_000ee880(&local_b0);
        FUN_000e9f98(auStack_9c);
        FUN_000e9f98(auStack_a4);
        local_ac = 0;
        local_b0 = 0;
        local_a8 = 0;
        goto LAB_0010254c;
      }
      FUN_000ea2e0(&uStack_170);
      uVar5 = FUN_0015e0d8(param_1[1],1,&uStack_170);
      if ((uVar5 & ~uVar1) == 0) {
        FUN_000eea30(&local_b0);
        FUN_0010f5fc(&local_164,param_2 + 0x1c);
        FUN_000ee6cc(&local_b0,local_12e,auStack_58,&local_164,0);
        if (param_4 == 0) {
          piVar8 = (int *)param_1[2];
          FUN_0010f5fc(&iStack_158,param_2 + 0x1c);
          (**(code **)(*piVar8 + 8))(piVar8,&local_b0,&iStack_158);
        }
        else {
          (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2],&local_b0);
        }
        FUN_000ee880(&local_b0);
        FUN_000e9f98(auStack_9c);
        FUN_000e9f98(auStack_a4);
        local_ac = 0;
        local_b0 = 0;
        local_a8 = 0;
      }
      else {
        (**(code **)(*(int *)param_1[2] + 0x10))((int *)param_1[2],param_2,&uStack_170);
      }
      puVar6 = &uStack_170;
    }
    else {
      FUN_000ea2e0(&local_174);
      if (local_b4 == '\0') {
        local_b4 = '\x01';
      }
      iVar3 = FUN_0015e1fc(param_1[1],local_b4,&local_174);
      if (iVar3 == 0) {
        FUN_000eea30(&local_b0);
        FUN_0010f5fc(&uStack_168,param_2 + 0x1c);
        FUN_000ee6cc(&local_b0,local_12e,auStack_58,&uStack_168,1);
        (**(code **)(*(int *)param_1[2] + 0x14))((int *)param_1[2],&local_b0);
        FUN_000ee880(&local_b0);
        FUN_000e9f98(auStack_9c);
        FUN_000e9f98(auStack_a4);
        local_ac = 0;
        local_b0 = 0;
        local_a8 = 0;
      }
      else {
        (**(code **)(*(int *)param_1[2] + 0x10))((int *)param_1[2],param_2,&local_174);
      }
      puVar6 = &local_174;
    }
    FUN_000ea314(puVar6);
  }
LAB_0010254c:
  FUN_000f9bac(auStack_144);
  return;
}

