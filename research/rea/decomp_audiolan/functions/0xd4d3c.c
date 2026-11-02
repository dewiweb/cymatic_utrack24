// rea decompile_all
// name: FUN_000d4d3c
// address: 0xd4d3c
// body: available
// range: 0xd4d3c-0xd4fd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000d4d3c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,
                 int param_6,int param_7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  short *psVar5;
  uint uVar6;
  uint uVar7;
  undefined4 unaff_r7;
  uint uVar8;
  bool bVar9;
  undefined4 local_9c [4];
  char local_8a;
  ushort local_80;
  ushort local_7e;
  byte local_7c;
  short local_7a [13];
  short *local_60;
  undefined4 local_58;
  char local_54 [4];
  byte local_50;
  byte local_4f;
  short local_4e;
  byte local_4c;
  byte local_4b;
  byte local_4a;
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint local_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  puVar1 = (undefined4 *)FUN_0009b63c();
  uVar2 = (**(code **)*puVar1)();
  iVar3 = FUN_000ce99c(param_1,uVar2,param_3,&local_58,local_54);
  if (iVar3 == 0) {
    (**(code **)(**(int **)(param_1 + 0x118) + 0xc))
              (*(int **)(param_1 + 0x118),local_30,local_54[0]);
    return;
  }
  if (param_5 != 0) {
    unaff_r7 = DAT_000d4fd8;
  }
  uVar8 = 0;
  uVar6 = 0;
  if (param_5 != 0) {
    do {
      FUN_000c4d50(local_9c,param_1 + 0x14c,uVar2,local_58);
      piVar4 = (int *)FUN_0009b63c();
      (**(code **)(*piVar4 + 8))(piVar4,local_9c,0xffffffff);
      local_54[0] = local_8a;
      if (local_8a != '\0') {
        FUN_000d7e18(&local_50,param_1 + 0x14c,uVar2,local_58);
        piVar4 = (int *)FUN_0009b63c();
        iVar3 = (**(code **)(*piVar4 + 8))(piVar4,&local_50,0xffffffff);
        if (iVar3 != 0) {
          thunk_FUN_000028a4(DAT_000d4fdc);
        }
        (**(code **)(**(int **)(param_1 + 0x118) + 0xc))
                  (*(int **)(param_1 + 0x118),local_30,local_54[0]);
        local_9c[0] = unaff_r7;
        FUN_0019f30c(local_60);
        return;
      }
      psVar5 = local_60;
      if (*local_60 == 0) {
        psVar5 = local_7a;
      }
      if (*psVar5 == 0) {
        (**(code **)(**(int **)(param_1 + 0x118) + 0x14))(*(int **)(param_1 + 0x118),local_30);
        local_9c[0] = unaff_r7;
        FUN_0019f30c(local_60);
        break;
      }
      bVar9 = (local_7c & 0x10) != 0;
      iVar3 = param_7;
      if (bVar9) {
        iVar3 = param_6;
      }
      uVar7 = uVar6;
      if (iVar3 != 0) {
        if (local_28 <= uVar8) {
          local_50 = (byte)local_80 & 0x1f;
          local_4e = (short)DAT_000d4fe0 + (local_80 >> 9);
          local_4f = (byte)(((uint)local_80 << 0x17) >> 0x1c);
          local_4c = (byte)(local_7e >> 0xb);
          local_4b = (byte)(((uint)local_7e << 0x15) >> 0x1a);
          local_4a = (byte)(((uint)local_7e << 0x1b) >> 0x1a);
          psVar5 = local_60;
          if (*local_60 == 0) {
            psVar5 = local_7a;
          }
          uVar7 = uVar6 + 1 & 0xfffeffff;
          (**(code **)(**(int **)(param_1 + 0x118) + 0x10))
                    (*(int **)(param_1 + 0x118),local_30,uVar6,psVar5,&local_50,&local_4c,bVar9);
        }
        uVar8 = uVar8 + 1 & 0xfffeffff;
      }
      local_9c[0] = unaff_r7;
      FUN_0019f30c(local_60);
      uVar6 = uVar7;
    } while (uVar7 < param_5);
  }
  FUN_000d7e18(&local_50,param_1 + 0x14c,uVar2,local_58);
  piVar4 = (int *)FUN_0009b63c();
  iVar3 = (**(code **)(*piVar4 + 8))(piVar4,&local_50,0xffffffff);
  if (iVar3 != 0) {
    thunk_FUN_000028a4(DAT_000d4fdc);
  }
  return;
}

