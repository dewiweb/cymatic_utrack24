// rea decompile_all
// name: FUN_0004efb0
// address: 0x4efb0
// body: available
// range: 0x4efb0-0x4f1bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0004efb0(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  
  if (param_3 == 0) {
    return 0;
  }
  local_20 = (uint *)0x0;
  local_1c = (uint *)0x0;
  local_18 = (uint *)0x0;
  iVar3 = *(int *)(*(int *)(param_3 + 0x2c) + 0xc);
  uVar5 = 0xffffffff;
  if (*(int *)(*(int *)(param_3 + 0x2c) + 0x10) != iVar3) {
    do {
      for (puVar4 = local_20; (puVar4 != local_1c && (*puVar4 != (uint)*(byte *)(iVar3 + 5)));
          puVar4 = puVar4 + 1) {
      }
      if (puVar4 == local_1c) {
        local_30 = (uint)*(byte *)(iVar3 + 5);
        if (local_1c == local_18) {
          FUN_001e0740(&local_20,local_1c,&local_30);
          puVar4 = local_1c;
        }
        else {
          puVar4 = local_1c + 1;
          if (local_1c != (uint *)0x0) {
            *local_1c = local_30;
          }
        }
        local_1c = puVar4;
        if ((int)uVar5 < (int)(uint)*(byte *)(iVar3 + 5)) {
          uVar5 = (uint)*(byte *)(iVar3 + 5);
        }
      }
      iVar3 = iVar3 + 0x10;
    } while (*(int *)(*(int *)(param_3 + 0x2c) + 0x10) != iVar3);
  }
  uVar1 = (*(int **)(param_3 + 0x2c))[1] - **(int **)(param_3 + 0x2c) >> 2;
  if ((uVar1 != 0) && (uVar1 <= uVar5)) {
    FUN_0010fa20(local_20,(int)local_18 - (int)local_20 >> 2,0);
    return 0;
  }
  (**(code **)(**(int **)(param_2 + 4) + 0x174))
            (*(int **)(param_2 + 4),(int)local_1c - (int)local_20 >> 2);
  puVar4 = *(uint **)(*(int *)(param_3 + 0x2c) + 0xc);
  if (*(uint **)(*(int *)(param_3 + 0x2c) + 0x10) != puVar4) {
    do {
      uStack_2c = (uint)(byte)puVar4[1];
      uStack_24 = (uint)*(byte *)((int)puVar4 + 0xd);
      local_28 = (uint)(byte)puVar4[3];
      local_30 = *(uint *)(**(int **)(param_3 + 0x2c) + (uint)*(byte *)((int)puVar4 + 5) * 4) & 0xff
      ;
      iVar3 = (**(code **)(**(int **)(param_2 + 4) + 0x178))
                        (*(int **)(param_2 + 4),(uint)*(byte *)((int)puVar4 + 5),puVar4[2] & 0xff,
                         *puVar4 & 0xff);
      puVar2 = local_20;
      if (iVar3 == 0) {
        for (; puVar2 != local_1c; puVar2 = puVar2 + 1) {
        }
        FUN_0010fa20(local_20,(int)local_18 - (int)local_20 >> 2,0);
        return 0;
      }
      puVar4 = puVar4 + 4;
    } while (*(uint **)(*(int *)(param_3 + 0x2c) + 0x10) != puVar4);
  }
  FUN_0010fa20(local_20,(int)local_18 - (int)local_20 >> 2,0);
  return 1;
}

