// rea decompile_all
// name: FUN_00003628
// address: 0x3628
// body: available
// range: 0x3628-0x36fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00003628(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  byte *pbVar4;
  uint *puVar5;
  byte bVar6;
  undefined2 uVar7;
  byte bVar8;
  uint in_r12;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  if (3 < param_3) {
    uVar9 = (uint)param_1 & 3;
    in_r12 = uVar9;
    if (uVar9 != 0) {
      bVar6 = (byte)*param_2;
      puVar3 = (uint *)((int)param_2 + 1);
      if (uVar9 < 3) {
        puVar3 = (uint *)((int)param_2 + 2);
        in_r12 = (uint)*(byte *)((int)param_2 + 1);
      }
      *(byte *)param_1 = bVar6;
      param_2 = puVar3;
      if (uVar9 < 2) {
        param_2 = (uint *)((int)puVar3 + 1);
        bVar6 = (byte)*puVar3;
      }
      puVar3 = (uint *)((int)param_1 + 1);
      if (uVar9 < 3) {
        puVar3 = (uint *)((int)param_1 + 2);
        *(byte *)((int)param_1 + 1) = (byte)in_r12;
      }
      param_3 = (param_3 + uVar9) - 4;
      param_1 = puVar3;
      if (uVar9 < 2) {
        param_1 = (uint *)((int)puVar3 + 1);
        *(byte *)puVar3 = bVar6;
      }
    }
    param_4 = (uint)param_2 & 3;
    if (param_4 == 0) {
      uVar9 = 0;
      while (uVar1 = param_3 - 0x20, 0x1f < param_3) {
        uVar9 = param_2[1];
        uVar10 = param_2[2];
        uVar11 = param_2[3];
        *param_1 = *param_2;
        param_1[1] = uVar9;
        param_1[2] = uVar10;
        param_1[3] = uVar11;
        uVar9 = param_2[4];
        uVar10 = param_2[5];
        uVar11 = param_2[6];
        uVar12 = param_2[7];
        param_2 = param_2 + 8;
        param_1[4] = uVar9;
        param_1[5] = uVar10;
        param_1[6] = uVar11;
        param_1[7] = uVar12;
        param_1 = param_1 + 8;
        param_3 = uVar1;
      }
      if ((bool)((byte)(uVar1 >> 4) & 1)) {
        uVar9 = *param_2;
        uVar10 = param_2[1];
        uVar11 = param_2[2];
        uVar12 = param_2[3];
        param_2 = param_2 + 4;
        *param_1 = uVar9;
        param_1[1] = uVar10;
        param_1[2] = uVar11;
        param_1[3] = uVar12;
        param_1 = param_1 + 4;
      }
      if ((int)(param_3 << 0x1c) < 0) {
        uVar9 = *param_2;
        uVar10 = param_2[1];
        param_2 = param_2 + 2;
        *param_1 = uVar9;
        param_1[1] = uVar10;
        param_1 = param_1 + 2;
      }
      puVar2 = param_1;
      puVar3 = param_2;
      if ((bool)((byte)(uVar1 >> 2) & 1)) {
        puVar3 = param_2 + 1;
        uVar9 = *param_2;
        puVar2 = param_1 + 1;
        *param_1 = uVar9;
      }
      uVar7 = (undefined2)uVar9;
      if ((uVar1 & 3) == 0) {
        return CONCAT44(puVar3,puVar2);
      }
      bVar14 = (bool)((byte)(uVar1 >> 1) & 1);
      param_3 = param_3 << 0x1f;
      bVar13 = (int)param_3 < 0;
      puVar5 = puVar3;
      if (bVar14) {
        puVar5 = (uint *)((int)puVar3 + 2);
        uVar7 = (undefined2)*puVar3;
      }
      puVar3 = puVar5;
      if (bVar13) {
        puVar3 = (uint *)((int)puVar5 + 1);
        param_3 = (uint)(byte)*puVar5;
      }
      puVar5 = puVar2;
      if (bVar14) {
        puVar5 = (uint *)((int)puVar2 + 2);
        *(undefined2 *)puVar2 = uVar7;
      }
      puVar2 = puVar5;
      if (bVar13) {
        puVar2 = (uint *)((int)puVar5 + 1);
        *(byte *)puVar5 = (byte)param_3;
      }
      return CONCAT44(puVar3,puVar2);
    }
    bVar13 = 3 < param_3;
    param_3 = param_3 - 4;
    if (bVar13) {
      param_2 = (uint *)((int)param_2 - param_4);
      in_r12 = *param_2;
      puVar3 = param_1;
      if (param_4 == 2) {
        do {
          puVar2 = param_2;
          param_4 = in_r12 >> 0x10;
          param_2 = puVar2 + 1;
          in_r12 = *param_2;
          bVar13 = 3 < param_3;
          param_3 = param_3 - 4;
          param_4 = param_4 | in_r12 << 0x10;
          param_1 = puVar3 + 1;
          *puVar3 = param_4;
          puVar3 = param_1;
        } while (bVar13);
        param_2 = (uint *)((int)puVar2 + 6);
      }
      else if (param_4 < 3) {
        do {
          puVar2 = param_2;
          param_4 = in_r12 >> 8;
          param_2 = puVar2 + 1;
          in_r12 = *param_2;
          bVar13 = 3 < param_3;
          param_3 = param_3 - 4;
          param_4 = param_4 | in_r12 << 0x18;
          param_1 = puVar3 + 1;
          *puVar3 = param_4;
          puVar3 = param_1;
        } while (bVar13);
        param_2 = (uint *)((int)puVar2 + 5);
      }
      else {
        do {
          puVar2 = param_2;
          param_4 = in_r12 >> 0x18;
          param_2 = puVar2 + 1;
          in_r12 = *param_2;
          bVar13 = 3 < param_3;
          param_3 = param_3 - 4;
          param_4 = param_4 | in_r12 << 8;
          param_1 = puVar3 + 1;
          *puVar3 = param_4;
          puVar3 = param_1;
        } while (bVar13);
        param_2 = (uint *)((int)puVar2 + 7);
      }
    }
  }
  bVar8 = (byte)in_r12;
  bVar6 = (byte)param_4;
  bVar14 = (bool)((byte)(param_3 >> 1) & 1);
  param_3 = param_3 << 0x1f;
  bVar13 = (int)param_3 < 0;
  if (bVar14) {
    pbVar4 = (byte *)((int)param_2 + 1);
    bVar6 = (byte)*param_2;
    param_2 = (uint *)((int)param_2 + 2);
    bVar8 = *pbVar4;
  }
  puVar3 = param_2;
  if (bVar13) {
    puVar3 = (uint *)((int)param_2 + 1);
    param_3 = (uint)(byte)*param_2;
  }
  if (bVar14) {
    pbVar4 = (byte *)((int)param_1 + 1);
    *(byte *)param_1 = bVar6;
    param_1 = (uint *)((int)param_1 + 2);
    *pbVar4 = bVar8;
  }
  puVar2 = param_1;
  if (bVar13) {
    puVar2 = (uint *)((int)param_1 + 1);
    *(byte *)param_1 = (byte)param_3;
  }
  return CONCAT44(puVar3,puVar2);
}

