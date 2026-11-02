// rea decompile_all
// name: FUN_00003ab4
// address: 0x3ab4
// body: available
// range: 0x3ab4-0x3b87 inclusive
// range: 0x4fec-0x503f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00003ab4(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  byte *pbVar3;
  uint *puVar4;
  byte bVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  uint in_r12;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  uVar7 = (int)param_1 - (int)param_2;
  bVar13 = uVar7 == 0;
  if (param_2 <= param_1) {
    bVar13 = param_3 == uVar7;
  }
  if ((param_2 > param_1 || param_3 < uVar7) || bVar13) {
    if (3 < param_3) {
      uVar7 = (uint)param_1 & 3;
      in_r12 = uVar7;
      if (uVar7 != 0) {
        bVar5 = (byte)*param_2;
        puVar2 = (uint *)((int)param_2 + 1);
        if (uVar7 < 3) {
          puVar2 = (uint *)((int)param_2 + 2);
          in_r12 = (uint)*(byte *)((int)param_2 + 1);
        }
        *(byte *)param_1 = bVar5;
        param_2 = puVar2;
        if (uVar7 < 2) {
          param_2 = (uint *)((int)puVar2 + 1);
          bVar5 = (byte)*puVar2;
        }
        puVar2 = (uint *)((int)param_1 + 1);
        if (uVar7 < 3) {
          puVar2 = (uint *)((int)param_1 + 2);
          *(byte *)((int)param_1 + 1) = (byte)in_r12;
        }
        param_3 = (param_3 + uVar7) - 4;
        param_1 = puVar2;
        if (uVar7 < 2) {
          param_1 = (uint *)((int)puVar2 + 1);
          *(byte *)puVar2 = bVar5;
        }
      }
      uVar7 = (uint)param_2 & 3;
      if (uVar7 == 0) {
        uVar7 = 0;
        while (uVar8 = param_3 - 0x20, 0x1f < param_3) {
          uVar7 = param_2[1];
          uVar9 = param_2[2];
          uVar11 = param_2[3];
          *param_1 = *param_2;
          param_1[1] = uVar7;
          param_1[2] = uVar9;
          param_1[3] = uVar11;
          uVar7 = param_2[4];
          uVar9 = param_2[5];
          uVar11 = param_2[6];
          uVar12 = param_2[7];
          param_2 = param_2 + 8;
          param_1[4] = uVar7;
          param_1[5] = uVar9;
          param_1[6] = uVar11;
          param_1[7] = uVar12;
          param_1 = param_1 + 8;
          param_3 = uVar8;
        }
        if ((bool)((byte)(uVar8 >> 4) & 1)) {
          uVar7 = *param_2;
          uVar9 = param_2[1];
          uVar11 = param_2[2];
          uVar12 = param_2[3];
          param_2 = param_2 + 4;
          *param_1 = uVar7;
          param_1[1] = uVar9;
          param_1[2] = uVar11;
          param_1[3] = uVar12;
          param_1 = param_1 + 4;
        }
        if ((int)(param_3 << 0x1c) < 0) {
          uVar7 = *param_2;
          uVar9 = param_2[1];
          param_2 = param_2 + 2;
          *param_1 = uVar7;
          param_1[1] = uVar9;
          param_1 = param_1 + 2;
        }
        puVar1 = param_1;
        puVar2 = param_2;
        if ((bool)((byte)(uVar8 >> 2) & 1)) {
          puVar2 = param_2 + 1;
          uVar7 = *param_2;
          puVar1 = param_1 + 1;
          *param_1 = uVar7;
        }
        uVar6 = (undefined2)uVar7;
        if ((uVar8 & 3) != 0) {
          bVar14 = (bool)((byte)(uVar8 >> 1) & 1);
          param_3 = param_3 << 0x1f;
          bVar13 = (int)param_3 < 0;
          puVar4 = puVar2;
          if (bVar14) {
            puVar4 = (uint *)((int)puVar2 + 2);
            uVar6 = (undefined2)*puVar2;
          }
          puVar2 = puVar4;
          if (bVar13) {
            puVar2 = (uint *)((int)puVar4 + 1);
            param_3 = (uint)(byte)*puVar4;
          }
          puVar4 = puVar1;
          if (bVar14) {
            puVar4 = (uint *)((int)puVar1 + 2);
            *(undefined2 *)puVar1 = uVar6;
          }
          puVar1 = puVar4;
          if (bVar13) {
            puVar1 = (uint *)((int)puVar4 + 1);
            *(byte *)puVar4 = (byte)param_3;
          }
          return CONCAT44(puVar2,puVar1);
        }
        return CONCAT44(puVar2,puVar1);
      }
      bVar13 = 3 < param_3;
      param_3 = param_3 - 4;
      if (bVar13) {
        param_2 = (uint *)((int)param_2 - uVar7);
        in_r12 = *param_2;
        puVar2 = param_1;
        if (uVar7 == 2) {
          do {
            puVar1 = param_2;
            uVar7 = in_r12 >> 0x10;
            param_2 = puVar1 + 1;
            in_r12 = *param_2;
            bVar13 = 3 < param_3;
            param_3 = param_3 - 4;
            uVar7 = uVar7 | in_r12 << 0x10;
            param_1 = puVar2 + 1;
            *puVar2 = uVar7;
            puVar2 = param_1;
          } while (bVar13);
          param_2 = (uint *)((int)puVar1 + 6);
        }
        else if (uVar7 < 3) {
          do {
            puVar1 = param_2;
            uVar7 = in_r12 >> 8;
            param_2 = puVar1 + 1;
            in_r12 = *param_2;
            bVar13 = 3 < param_3;
            param_3 = param_3 - 4;
            uVar7 = uVar7 | in_r12 << 0x18;
            param_1 = puVar2 + 1;
            *puVar2 = uVar7;
            puVar2 = param_1;
          } while (bVar13);
          param_2 = (uint *)((int)puVar1 + 5);
        }
        else {
          do {
            puVar1 = param_2;
            uVar7 = in_r12 >> 0x18;
            param_2 = puVar1 + 1;
            in_r12 = *param_2;
            bVar13 = 3 < param_3;
            param_3 = param_3 - 4;
            uVar7 = uVar7 | in_r12 << 8;
            param_1 = puVar2 + 1;
            *puVar2 = uVar7;
            puVar2 = param_1;
          } while (bVar13);
          param_2 = (uint *)((int)puVar1 + 7);
        }
      }
    }
    bVar10 = (byte)in_r12;
    bVar5 = (byte)uVar7;
    bVar14 = (bool)((byte)(param_3 >> 1) & 1);
    param_3 = param_3 << 0x1f;
    bVar13 = (int)param_3 < 0;
    if (bVar14) {
      pbVar3 = (byte *)((int)param_2 + 1);
      bVar5 = (byte)*param_2;
      param_2 = (uint *)((int)param_2 + 2);
      bVar10 = *pbVar3;
    }
    puVar2 = param_2;
    if (bVar13) {
      puVar2 = (uint *)((int)param_2 + 1);
      param_3 = (uint)(byte)*param_2;
    }
    if (bVar14) {
      pbVar3 = (byte *)((int)param_1 + 1);
      *(byte *)param_1 = bVar5;
      param_1 = (uint *)((int)param_1 + 2);
      *pbVar3 = bVar10;
    }
    puVar1 = param_1;
    if (bVar13) {
      puVar1 = (uint *)((int)param_1 + 1);
      *(byte *)param_1 = (byte)param_3;
    }
    return CONCAT44(puVar2,puVar1);
  }
  param_1 = (uint *)((int)param_1 + param_3);
  param_2 = (uint *)((int)param_2 + param_3);
  if (3 < param_3) {
    bVar13 = ((uint)param_1 & 3) == 0;
    do {
      if (!bVar13) {
        param_2 = (uint *)((int)param_2 + -1);
        param_3 = param_3 - 1;
        param_1 = (uint *)((int)param_1 + -1);
        *(byte *)param_1 = *(byte *)param_2;
      }
      bVar13 = ((uint)param_1 & 3) == 0;
    } while (!bVar13);
    uVar7 = (uint)param_2 & 3;
    if (uVar7 == 0) {
      while (uVar7 = param_3 - 0x10, 0xf < param_3) {
        puVar2 = param_2 + -1;
        uVar11 = param_2[-2];
        uVar9 = param_2[-3];
        param_2 = param_2 + -4;
        uVar8 = *param_2;
        param_1[-1] = *puVar2;
        param_1[-2] = uVar11;
        param_1[-3] = uVar9;
        param_1 = param_1 + -4;
        *param_1 = uVar8;
        param_3 = uVar7;
      }
      uVar8 = param_3 << 0x1d;
      bVar13 = (int)uVar8 < 0;
      if ((bool)((byte)(uVar7 >> 3) & 1)) {
        puVar2 = param_2 + -1;
        param_2 = param_2 + -2;
        uVar8 = *param_2;
        param_1[-1] = *puVar2;
        param_1 = param_1 + -2;
        *param_1 = uVar8;
      }
      if (bVar13) {
        param_2 = param_2 + -1;
        uVar8 = *param_2;
        param_1 = param_1 + -1;
        *param_1 = uVar8;
      }
      uVar6 = (undefined2)uVar8;
      if ((uVar7 & 3) != 0) {
        bVar14 = (bool)((byte)(uVar7 >> 1) & 1);
        param_3 = param_3 << 0x1f;
        bVar13 = (int)param_3 < 0;
        if (bVar14) {
          param_2 = (uint *)((int)param_2 + -2);
          uVar6 = *(undefined2 *)param_2;
        }
        if (bVar13) {
          param_3 = (uint)*(byte *)((int)param_2 + -1);
        }
        if (bVar14) {
          param_1 = (uint *)((int)param_1 + -2);
          *(undefined2 *)param_1 = uVar6;
        }
        if (bVar13) {
          *(byte *)((int)param_1 + -1) = (byte)param_3;
        }
        return CONCAT44(param_2,param_1);
      }
      return CONCAT44(param_2,param_1);
    }
    bVar13 = 3 < param_3;
    param_3 = param_3 - 4;
    if (bVar13) {
      param_2 = (uint *)((int)param_2 - uVar7);
      in_r12 = *param_2;
      if (uVar7 < 2) {
        do {
          puVar2 = param_2;
          uVar7 = in_r12 << 0x18;
          param_2 = puVar2 + -1;
          in_r12 = *param_2;
          bVar13 = 3 < param_3;
          param_3 = param_3 - 4;
          uVar7 = uVar7 | in_r12 >> 8;
          param_1 = param_1 + -1;
          *param_1 = uVar7;
        } while (bVar13);
        param_2 = (uint *)((int)puVar2 + -3);
      }
      else if (uVar7 < 3) {
        do {
          puVar2 = param_2;
          uVar7 = in_r12 << 0x10;
          param_2 = puVar2 + -1;
          in_r12 = *param_2;
          bVar13 = 3 < param_3;
          param_3 = param_3 - 4;
          uVar7 = uVar7 | in_r12 >> 0x10;
          param_1 = param_1 + -1;
          *param_1 = uVar7;
        } while (bVar13);
        param_2 = (uint *)((int)puVar2 + -2);
      }
      else {
        do {
          puVar2 = param_2;
          uVar7 = in_r12 << 8;
          param_2 = puVar2 + -1;
          in_r12 = *param_2;
          bVar13 = 3 < param_3;
          param_3 = param_3 - 4;
          uVar7 = uVar7 | in_r12 >> 0x18;
          param_1 = param_1 + -1;
          *param_1 = uVar7;
        } while (bVar13);
        param_2 = (uint *)((int)puVar2 + -1);
      }
    }
  }
  bVar10 = (byte)in_r12;
  bVar5 = (byte)uVar7;
  bVar14 = (bool)((byte)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar13 = (int)param_3 < 0;
  if (bVar14) {
    bVar5 = *(byte *)((int)param_2 + -1);
    param_2 = (uint *)((int)param_2 + -2);
    bVar10 = *(byte *)param_2;
  }
  if (bVar13) {
    param_3 = (uint)*(byte *)((int)param_2 + -1);
  }
  if (bVar14) {
    *(byte *)((int)param_1 + -1) = bVar5;
    param_1 = (uint *)((int)param_1 + -2);
    *(byte *)param_1 = bVar10;
  }
  if (bVar13) {
    *(byte *)((int)param_1 + -1) = (byte)param_3;
  }
  return CONCAT44(param_2,param_1);
}

