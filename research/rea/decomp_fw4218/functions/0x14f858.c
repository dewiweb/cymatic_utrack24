// rea decompile_all
// name: FUN_0014f858
// address: 0x14f858
// body: available
// range: 0x14f858-0x14fb07 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0014f858(int param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  byte *pbVar5;
  ushort *puVar6;
  ushort *puVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  ushort local_38;
  ushort local_36;
  undefined4 local_34;
  ushort local_30;
  ushort local_2c;
  uint local_28;
  
  iVar9 = 1;
  FUN_0015111c();
  *(int *)(param_1 + 0x3c) = param_2;
  iVar4 = *(int *)(param_2 + 0x14);
  pbVar10 = (byte *)(*(int *)(param_2 + 0x10) + iVar4);
  if ((int)pbVar10 - iVar4 < 4) {
    FUN_0015111c(param_1);
    return 0;
  }
  uVar2 = *(ushort *)(iVar4 + 2);
  local_28 = uVar2 & 0xff00;
  *(ushort *)(param_1 + 0x4c) = uVar2;
  pbVar5 = (byte *)(iVar4 + 4);
  if ((uVar2 & 0x100) != 0) {
    pbVar5 = (byte *)(iVar4 + 8);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar4 + 4);
  }
  if ((uVar2 & 0x200) == 0) goto LAB_0014fa88;
  *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)pbVar5;
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(pbVar5 + 2);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(pbVar5 + 4);
  *(undefined2 *)(param_1 + 0x24) = *(undefined2 *)(pbVar5 + 8);
  puVar6 = (ushort *)(pbVar5 + 0xc);
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(pbVar5 + 10);
  if ((uVar2 & 0x10) == 0) {
    FUN_001727f0(&local_38);
    puVar7 = (ushort *)(pbVar5 + 0xe);
    uVar11 = (uint)*puVar6;
    iVar4 = FUN_0014c98c(param_1 + 0x14,uVar11);
    puVar6 = puVar7;
    if ((iVar4 != 0) && (uVar11 * 0xc + 2 <= (uint)((int)pbVar10 - (int)puVar7))) {
      uVar12 = 0;
      if (uVar11 != 0) {
        do {
          local_38 = *puVar7;
          local_36 = puVar7[1];
          local_34 = *(undefined4 *)(puVar7 + 2);
          puVar6 = puVar7 + 5;
          local_30 = puVar7[4];
          puVar7 = puVar7 + 6;
          local_2c = *puVar6;
          FUN_001beecc(&local_38);
          uVar2 = *(ushort *)(param_1 + 0x1a);
          if ((uint)uVar2 < (uint)*(ushort *)(param_1 + 0x18)) {
            *(ushort *)(param_1 + 0x1a) = uVar2 + 1;
            FUN_00172810(*(int *)(param_1 + 0x14) + (uint)uVar2 * 0x10,&local_38);
          }
          uVar12 = uVar12 + 1 & 0xfffeffff;
        } while (uVar12 < uVar11);
      }
      puVar6 = puVar7 + 1;
      uVar11 = (uint)*puVar7;
      iVar4 = FUN_0014c98c(param_1 + 0xc,uVar11);
      if ((iVar4 != 0) && (uVar11 * 0xc + 2 <= (uint)((int)pbVar10 - (int)puVar6))) {
        uVar12 = 0;
        if (uVar11 != 0) {
          do {
            local_38 = *puVar6;
            local_36 = puVar6[1];
            local_34 = *(undefined4 *)(puVar6 + 2);
            puVar7 = puVar6 + 5;
            local_30 = puVar6[4];
            puVar6 = puVar6 + 6;
            local_2c = *puVar7;
            FUN_001beecc(&local_38);
            uVar2 = *(ushort *)(param_1 + 0x12);
            if ((uint)uVar2 < (uint)*(ushort *)(param_1 + 0x10)) {
              *(ushort *)(param_1 + 0x12) = uVar2 + 1;
              FUN_00172810(*(int *)(param_1 + 0xc) + (uint)uVar2 * 0x10,&local_38);
            }
            uVar12 = uVar12 + 1 & 0xfffeffff;
          } while (uVar12 < uVar11);
        }
        goto LAB_0014fa80;
      }
    }
    iVar9 = 0;
  }
LAB_0014fa80:
  pbVar5 = (byte *)((uint)((int)puVar6 + 3) & 0xfffffffc);
LAB_0014fa88:
  bVar13 = (local_28 & 0x400) != 0;
  uVar11 = local_28;
  if (bVar13) {
    uVar11 = (uint)*(byte *)(param_1 + 0x4c);
  }
  if ((bVar13 && (uVar11 & 0x20) != 0) && iVar9 != 0) {
    bVar1 = *pbVar5;
    *(byte *)(param_1 + 0x50) = bVar1;
    pbVar8 = pbVar5 + 4;
    if ((bVar1 & 1) != 0) {
      pbVar8 = pbVar5 + 8;
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(pbVar5 + 4);
    }
    pbVar5 = pbVar8;
    if ((bVar1 & 2) != 0) {
      pbVar5 = pbVar8 + 8;
      uVar3 = *(undefined4 *)(pbVar8 + 4);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)pbVar8;
      *(undefined4 *)(param_1 + 0x34) = uVar3;
    }
    if (pbVar10 < pbVar5) {
      iVar9 = 0;
    }
  }
  pbVar8 = pbVar5 + 4;
  if (pbVar10 < pbVar8) {
    iVar9 = 0;
  }
  *(undefined2 *)(param_1 + 0x4e) = *(undefined2 *)pbVar5;
  if ((pbVar10 < pbVar8) || (iVar9 == 0)) {
    FUN_0015111c(param_1);
  }
  else {
    *(byte **)(param_1 + 0x40) = pbVar8;
  }
  return iVar9;
}

