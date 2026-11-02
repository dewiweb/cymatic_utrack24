// rea decompile_all
// name: FUN_0004fb98
// address: 0x4fb98
// body: available
// range: 0x4fb98-0x4fd9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0004fb98(undefined4 param_1,int param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint *local_24;
  uint *local_20;
  uint *local_1c;
  
  if (param_3 == 0) {
    return 0;
  }
  local_24 = (uint *)0x0;
  local_20 = (uint *)0x0;
  local_1c = (uint *)0x0;
  iVar2 = *(int *)(*(int *)(param_3 + 0x34) + 0xc);
  uVar4 = 0xffffffff;
  if (*(int *)(*(int *)(param_3 + 0x34) + 0x10) != iVar2) {
    do {
      for (puVar3 = local_24; (puVar3 != local_20 && (*puVar3 != (uint)*(byte *)(iVar2 + 4)));
          puVar3 = puVar3 + 1) {
      }
      if (puVar3 == local_20) {
        local_30 = (uint)*(byte *)(iVar2 + 4);
        if (local_20 == local_1c) {
          FUN_001e0740(&local_24,local_20,&local_30);
          puVar3 = local_20;
        }
        else {
          puVar3 = local_20 + 1;
          if (local_20 != (uint *)0x0) {
            *local_20 = local_30;
          }
        }
        local_20 = puVar3;
        if ((int)uVar4 < (int)(uint)*(byte *)(iVar2 + 4)) {
          uVar4 = (uint)*(byte *)(iVar2 + 4);
        }
      }
      iVar2 = iVar2 + 0x10;
    } while (*(int *)(*(int *)(param_3 + 0x34) + 0x10) != iVar2);
  }
  if (uVar4 < (uint)((*(int **)(param_3 + 0x34))[1] - **(int **)(param_3 + 0x34) >> 2)) {
    (**(code **)(**(int **)(param_2 + 4) + 0x10c))
              (*(int **)(param_2 + 4),(int)local_20 - (int)local_24 >> 2);
    puVar3 = *(uint **)(*(int *)(param_3 + 0x34) + 0xc);
    if (*(uint **)(*(int *)(param_3 + 0x34) + 0x10) != puVar3) {
      do {
        uStack_2c = (uint)(byte)puVar3[3];
        uStack_28 = (uint)*(byte *)((int)puVar3 + 0xd);
        local_30 = *(uint *)(**(int **)(param_3 + 0x34) + (uint)(byte)puVar3[1] * 4) & 0xff;
        iVar2 = (**(code **)(**(int **)(param_2 + 4) + 0x110))
                          (*(int **)(param_2 + 4),*puVar3 & 0xff,(uint)(byte)puVar3[1],
                           puVar3[2] & 0xff);
        puVar1 = local_24;
        if (iVar2 == 0) {
          for (; puVar1 != local_20; puVar1 = puVar1 + 1) {
          }
          FUN_0010fa20(local_24,(int)local_1c - (int)local_24 >> 2,0);
          return 0;
        }
        puVar3 = puVar3 + 4;
      } while (*(uint **)(*(int *)(param_3 + 0x34) + 0x10) != puVar3);
    }
    FUN_0010fa20(local_24,(int)local_1c - (int)local_24 >> 2,0);
    return 1;
  }
  FUN_0010fa20(local_24,(int)local_1c - (int)local_24 >> 2,0);
  return 0;
}

