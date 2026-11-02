// rea decompile_all
// name: FUN_0005d234
// address: 0x5d234
// body: available
// range: 0x5d234-0x5d4df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0005d234(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  int *piVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  uint uVar10;
  int *local_64;
  ushort local_60 [2];
  int *local_5c;
  uint local_58;
  int *local_54;
  int *local_50;
  undefined2 local_4c [2];
  int *local_48 [5];
  int *local_34;
  undefined4 local_30;
  int iStack_2c;
  uint uStack_28;
  
  local_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  if (param_4 < 4) goto LAB_0005d2d4;
  local_60[0] = 0;
  FUN_000777e0(local_4c,param_3,local_60);
  piVar5 = DAT_0005d4e0;
  bVar3 = *(byte *)(param_3 + (uint)local_60[0]);
  uVar10 = (uint)bVar3;
  uVar4 = local_60[0] + 1 & 0xfffeffff;
  local_58 = uVar10 & 1;
  local_60[0] = (ushort)uVar4;
  local_64 = DAT_0005d4e0;
  if ((bVar3 & 1) != 0) {
    FUN_00077c0c(&local_64,param_3,local_60,param_4 - uVar4 & 0xffff);
  }
  uVar4 = (uVar10 & 2) >> 1;
  local_50 = piVar5;
  if (uVar4 == 0) {
LAB_0005d314:
    uVar1 = (uVar10 & 4) >> 2;
    uVar8 = 0;
    if (uVar1 != 0) {
      if (param_4 <= local_60[0]) goto LAB_0005d2c4;
      uVar8 = *(undefined1 *)(param_3 + (uint)local_60[0]);
      local_60[0] = local_60[0] + 1;
    }
    local_48[0] = piVar5;
    uVar2 = (uVar10 & 8) >> 3;
    if (uVar2 == 0) {
LAB_0005d374:
      uVar10 = (uVar10 & 0x10) >> 4;
      uVar9 = 0;
      if (uVar10 != 0) {
        if (param_4 <= local_60[0]) goto LAB_0005d4d4;
        uVar9 = *(undefined1 *)(param_3 + (uint)local_60[0]);
        local_60[0] = local_60[0] + 1;
      }
      if (local_60[0] <= param_4) {
        local_54 = (int *)local_34[1];
        piVar5 = local_64 + -3;
        if (*piVar5 + 1 == 0) {
          uVar7 = local_64[-1];
          if (0xfffffff1 < uVar7) {
            FUN_0010f7cc(8,DAT_0005d4e8,DAT_0005d4e8,uVar7,0xfffffff1);
          }
          local_5c = DAT_0005d4e4;
          if (uVar7 != 0) {
            local_5c = (int *)FUN_0010f82c(uVar7 + 0xe,0);
            if (local_5c != (int *)0x0) {
              *local_5c = 0;
              local_5c[1] = 0;
              local_5c[2] = 0;
            }
            local_5c[2] = uVar7;
            *local_5c = 0;
            local_5c[1] = uVar7;
            puVar6 = (undefined1 *)((int)local_5c + uVar7 + 0xc);
            if (puVar6 != (undefined1 *)0x0) {
              *puVar6 = 0;
            }
          }
          local_5c = local_5c + 3;
          FUN_00003628(local_5c,local_64,uVar7);
        }
        else {
          local_5c = local_64;
          if (piVar5 != DAT_0005d4e4) {
            *piVar5 = *piVar5 + 1;
          }
        }
        (**(code **)(*local_54 + 0xf0))
                  (local_54,local_30,local_4c[0],local_58,&local_5c,uVar4,&local_50,uVar1,uVar8,
                   uVar2,local_48,uVar10,uVar9);
        FUN_001da44c(&local_5c);
        FUN_001da44c(local_48);
        FUN_001da44c(&local_50);
        FUN_001da44c(&local_64);
        return;
      }
    }
    else if (local_60[0] < param_4) {
      FUN_00077c0c(local_48,param_3,local_60,param_4 - local_60[0] & 0xffff);
      goto LAB_0005d374;
    }
LAB_0005d4d4:
    FUN_001da44c(local_48);
  }
  else if (local_60[0] < param_4) {
    FUN_00077c0c(&local_50,param_3,local_60,param_4 - local_60[0] & 0xffff);
    goto LAB_0005d314;
  }
LAB_0005d2c4:
  FUN_001da44c(&local_50);
  FUN_001da44c(&local_64);
LAB_0005d2d4:
                    /* WARNING: Could not recover jumptable at 0x0005d2f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*local_34 + 8))(local_34,local_30,6);
  return;
}

