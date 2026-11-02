// rea decompile_all
// name: FUN_000c1fb0
// address: 0xc1fb0
// body: available
// range: 0xc1fb0-0xc23f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_000c1fb0(int *param_1,undefined4 param_2,uint param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9,undefined4 param_10,undefined4 param_11,
            undefined4 param_12)

{
  undefined2 uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  int *piVar7;
  undefined1 uVar8;
  int aiStack_58 [5];
  byte *pbStack_44;
  undefined4 uStack_40;
  byte abStack_3c [4];
  int iStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  int iStack_28;
  
  piStack_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  if (param_9 != -1) {
    if (param_8 == 0) {
      return 0;
    }
    if (param_8 == 1) {
      iVar3 = (**(code **)(*param_1 + 0x6c))(param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    else if ((param_8 == 2 || param_8 == 3) &&
            (iVar3 = (**(code **)(*param_1 + 0x6c))(param_1), iVar3 != 0)) {
      return 0;
    }
  }
  if (0xf < param_3) {
    return 0;
  }
  if (param_3 == 0) {
    if (param_5 != 2) {
      return 0;
    }
  }
  else if (param_5 == 2) {
    return 0;
  }
  if (param_5 == 0) {
    iVar3 = param_1[param_3 + 0x14d];
  }
  else {
    if (param_5 != 1 && param_5 != 2) {
      return 0;
    }
    iVar3 = param_1[param_3 + 0x13d];
  }
  FUN_001f00bc(iVar3);
  uVar6 = 0;
  pbStack_44 = abStack_3c;
  abStack_3c[0] = 0xff;
  uStack_40 = param_12;
  aiStack_58[0] = param_5;
  aiStack_58[2] = 0xffffffff;
  aiStack_58[3] = 0;
  aiStack_58[4] = 0;
  aiStack_58[1] = 0;
  iVar3 = FUN_000c2ed0(param_1,uStack_30,param_3,param_4);
  if (iVar3 == 0) {
    if (param_5 == 0) {
LAB_000c2174:
      iVar3 = param_1[param_3 + 0x14d];
      goto LAB_000c2148;
    }
    if (param_5 != 1 && param_5 != 2) {
      return 0;
    }
  }
  else {
    aiStack_58[0] = param_6;
    iVar3 = FUN_000c1b0c(param_1,abStack_3c[0],param_4,param_5);
    if (iVar3 != 0) {
      piVar7 = param_1 + 0x132;
      bVar2 = (byte)((uint)param_6 >> 8);
      if (param_5 != 0) {
        if (param_5 != 1) {
          if (param_5 == 2) {
            FUN_001fe1e4(aiStack_58);
            iVar3 = param_1[0x132];
            uVar1 = *(undefined2 *)(iVar3 + 6);
            *(byte *)(iVar3 + 6) = (byte)uVar1 | 1;
            *(char *)(iVar3 + 7) = (char)((ushort)uVar1 >> 8);
            FUN_001fe1f8(aiStack_58[0]);
            return 1;
          }
          return 0;
        }
        uVar8 = 0;
        uVar5 = uVar6;
        if (param_1[0xc5] == 1) {
          uVar5 = (char)param_7;
          if ((param_7 == 0) &&
             ((param_4 == 1 || ((uVar5 = uVar6, param_4 != 2 && (param_4 == 3)))))) {
            uVar5 = 1;
          }
        }
        else if (param_1[0xc5] == 0) {
          if (param_4 == 1) {
            uVar8 = 0x40;
          }
          else {
            uVar8 = 0;
          }
        }
        FUN_001fe1e4(aiStack_58);
        iVar3 = param_1[0x132];
        *(undefined1 *)(iVar3 + 0x16) = 0;
        *(undefined1 *)(iVar3 + 0x17) = uVar8;
        *(undefined1 *)(*piVar7 + 0x1d) = uVar5;
        iVar3 = *piVar7;
        *(char *)(iVar3 + 0x14) = (char)param_6;
        *(byte *)(iVar3 + 0x15) = bVar2 & 7;
        iVar3 = *piVar7;
        uVar4 = *(ushort *)(iVar3 + 8) & 0xfffff001 |
                (1 << (abStack_3c[0] - 1 & 0xff) & 0x7fff87ffU |
                (*(ushort *)(iVar3 + 8) & 0xfff) >> 1) << 1;
        *(char *)(iVar3 + 8) = (char)uVar4;
        *(char *)(iVar3 + 9) = (char)(uVar4 >> 8);
        iStack_38 = aiStack_58[0];
        goto LAB_000c2398;
      }
      uVar5 = uVar6;
      if ((param_1[0xc5] == 1) && (uVar5 = (char)param_7, param_7 == 0)) {
        if (param_4 == 1) {
          uVar6 = 1;
          goto LAB_000c227c;
        }
        if ((param_4 != 2) && (param_4 == 3)) {
          uVar6 = 1;
        }
LAB_000c21c0:
        uVar5 = 0;
      }
      else {
        uVar6 = uVar5;
        if (param_4 != 1) goto LAB_000c21c0;
LAB_000c227c:
        uVar5 = 0x40;
      }
      FUN_001fe1e4(&iStack_38);
      iVar3 = param_1[0x132];
      *(undefined1 *)(iVar3 + 0x12) = 0;
      *(undefined1 *)(iVar3 + 0x13) = uVar5;
      *(undefined1 *)(*piVar7 + 0x1b) = uVar6;
      iVar3 = *piVar7;
      *(char *)(iVar3 + 0x10) = (char)param_6;
      *(byte *)(iVar3 + 0x11) = bVar2 & 7;
      iVar3 = *piVar7;
      uVar4 = *(ushort *)(iVar3 + 6) & 0xfffff001 |
              (1 << (uint)abStack_3c[0] & 0x7fff87ffU | (*(ushort *)(iVar3 + 6) & 0xfff) >> 1) << 1;
      *(char *)(iVar3 + 6) = (char)uVar4;
      *(char *)(iVar3 + 7) = (char)(uVar4 >> 8);
LAB_000c2398:
      FUN_001fe1f8(iStack_38);
      return 1;
    }
    if (param_5 == 0) goto LAB_000c2174;
    if (param_5 != 1 && param_5 != 2) {
      return 0;
    }
  }
  iVar3 = param_1[param_3 + 0x13d];
LAB_000c2148:
  FUN_001f06d4(iVar3);
  return 0;
}

