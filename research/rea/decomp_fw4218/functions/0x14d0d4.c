// rea decompile_all
// name: FUN_0014d0d4
// address: 0x14d0d4
// body: available
// range: 0x14d0d4-0x14d3d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_0014d0d4(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  bool bVar10;
  int *local_28;
  
  uVar1 = *(ushort *)(param_1 + 0x13);
  local_28 = param_4;
  iVar3 = FUN_0014ed5c(param_1);
  puVar7 = (undefined4 *)0x0;
  if ((iVar3 != 0) &&
     (puVar4 = (undefined4 *)FUN_001c6b14(0x18,DAT_0014d3d8), puVar4 != (undefined4 *)0x0)) {
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = DAT_0014d3dc;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[3] = 0;
    FUN_000298e0(puVar4 + 3);
    puVar4[4] = iVar3;
    if (puVar4[5] != 0) {
      FUN_001c6a64();
    }
    uVar2 = DAT_0014d3d8;
    puVar4[5] = 0;
    puVar5 = (undefined2 *)FUN_001c6a94(iVar3,uVar2);
    puVar4[5] = puVar5;
    puVar7 = puVar4;
    if (puVar5 != (undefined2 *)0x0) {
      *puVar5 = 0x100;
      puVar5[1] = (short)param_1[0x13];
      piVar6 = (int *)(puVar5 + 2);
      if ((uVar1 & 0x100) != 0) {
        piVar6 = (int *)(puVar5 + 4);
        *(int *)(puVar5 + 2) = param_1[0x12];
      }
      local_28 = piVar6;
      if ((uVar1 & 0x200) != 0) {
        *(short *)piVar6 = (short)param_1[7];
        *(undefined2 *)((int)piVar6 + 2) = *(undefined2 *)((int)param_1 + 0x1e);
        *(short *)(piVar6 + 1) = (short)param_1[8];
        *(short *)((int)piVar6 + 6) = (short)((uint)param_1[8] >> 0x10);
        *(short *)(piVar6 + 2) = (short)param_1[9];
        *(short *)((int)piVar6 + 10) = (short)param_1[10];
        local_28 = piVar6 + 3;
        if ((*(byte *)(param_1 + 0x13) & 0x10) == 0) {
          uVar8 = 0;
          local_28 = (int *)((int)piVar6 + 0xe);
          *(undefined2 *)(piVar6 + 3) = *(undefined2 *)((int)param_1 + 0x1a);
          if (*(short *)((int)param_1 + 0x1a) != 0) {
            do {
              puVar5 = DAT_0014d3e0;
              if (uVar8 < *(ushort *)(param_1 + 6)) {
                puVar5 = (undefined2 *)(param_1[5] + uVar8 * 0x10);
              }
              uVar8 = uVar8 + 1;
              *(undefined2 *)local_28 = *puVar5;
              *(undefined2 *)((int)local_28 + 2) = puVar5[1];
              puVar9 = (undefined2 *)((int)local_28 + 10);
              *(undefined2 *)(local_28 + 1) = puVar5[2];
              *(short *)((int)local_28 + 6) = (short)((uint)*(undefined4 *)(puVar5 + 2) >> 0x10);
              *(undefined2 *)(local_28 + 2) = puVar5[4];
              local_28 = local_28 + 3;
              *puVar9 = puVar5[6];
            } while (uVar8 < *(ushort *)((int)param_1 + 0x1a));
          }
          uVar8 = 0;
          piVar6 = (int *)((int)local_28 + 2);
          *(undefined2 *)local_28 = *(undefined2 *)((int)param_1 + 0x12);
          local_28 = piVar6;
          if (*(short *)((int)param_1 + 0x12) != 0) {
            do {
              puVar5 = DAT_0014d3e0;
              if (uVar8 < *(ushort *)(param_1 + 4)) {
                puVar5 = (undefined2 *)(param_1[3] + uVar8 * 0x10);
              }
              uVar8 = uVar8 + 1;
              *(undefined2 *)local_28 = *puVar5;
              *(undefined2 *)((int)local_28 + 2) = puVar5[1];
              puVar9 = (undefined2 *)((int)local_28 + 10);
              *(undefined2 *)(local_28 + 1) = puVar5[2];
              *(short *)((int)local_28 + 6) = (short)((uint)*(undefined4 *)(puVar5 + 2) >> 0x10);
              *(undefined2 *)(local_28 + 2) = puVar5[4];
              local_28 = local_28 + 3;
              *puVar9 = puVar5[6];
            } while (uVar8 < *(ushort *)((int)param_1 + 0x12));
          }
        }
        local_28 = (int *)((int)local_28 + 3U & 0xfffffffc);
      }
      bVar10 = (uVar1 & 0x400) != 0;
      piVar6 = local_28;
      if (bVar10) {
        piVar6 = (int *)(uint)*(byte *)(param_1 + 0x13);
      }
      if (bVar10 && ((uint)piVar6 & 0x20) != 0) {
        *(char *)local_28 = (char)param_1[0x14];
        *(undefined1 *)((int)local_28 + 1) = 0;
        *(undefined2 *)((int)local_28 + 2) = 0;
        piVar6 = local_28 + 1;
        if ((*(byte *)(param_1 + 0x14) & 1) != 0) {
          local_28[1] = param_1[0xe];
          piVar6 = local_28 + 2;
        }
        local_28 = piVar6;
        if ((*(byte *)(param_1 + 0x14) & 2) != 0) {
          iVar3 = param_1[0xd];
          *local_28 = param_1[0xc];
          local_28[1] = iVar3;
          local_28 = local_28 + 2;
        }
      }
      *(undefined2 *)local_28 = *(undefined2 *)((int)param_1 + 0x4e);
      *(undefined2 *)((int)local_28 + 2) = 0;
      piVar6 = (int *)*param_1;
      local_28 = local_28 + 1;
      while (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 0xc))(piVar6,&local_28);
        local_28 = (int *)((int)local_28 + 3U & 0xfffffffc);
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)*param_1;
        }
        else {
          piVar6 = (int *)piVar6[3];
        }
      }
    }
  }
  return puVar7;
}

