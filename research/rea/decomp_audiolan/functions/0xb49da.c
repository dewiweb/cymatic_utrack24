// rea decompile_all
// name: FUN_000b49da
// address: 0xb49da
// body: available
// range: 0xb49da-0xb4b35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000b4a66) */
/* WARNING: Removing unreachable block (ram,0x000b4a6a) */

int FUN_000b49da(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int local_28;
  undefined4 local_24;
  int *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_38 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
  puVar8 = (undefined4 *)*param_2;
  local_24 = param_1;
  local_20 = param_2;
  local_1c = param_3;
  local_18 = param_4;
  if ((undefined4 *)param_2[1] != puVar8) {
    do {
      uVar9 = *puVar8;
      iVar1 = FUN_000c0908(uVar9,local_1c,local_18);
      if (iVar1 != 0) {
        FUN_000b498a(local_24,&local_38,local_1c,local_18);
        FUN_0010fa20(local_38,(int)local_30 - (int)local_38 >> 2,0);
        return iVar1;
      }
      if (local_34 == local_30) {
        local_2c = local_34;
        uVar7 = (int)local_34 - (int)local_38 >> 2;
        if (uVar7 < (uint)((int)local_30 - (int)local_38 >> 2)) {
          if (local_34 != (undefined4 *)0x0) {
            *local_34 = local_34[-1];
          }
          *local_34 = uVar9;
          puVar4 = local_34 + 1;
        }
        else {
          uVar5 = (uVar7 >> 1) + uVar7 + (uVar7 >> 3);
          uVar2 = uVar7 + 1;
          if (uVar7 + 1 <= uVar5) {
            uVar2 = uVar5;
          }
          local_28 = uVar2 << 2;
          puVar3 = (undefined4 *)FUN_0010f82c(local_28,0);
          puVar4 = puVar3;
          for (puVar6 = local_38; puVar6 != local_2c; puVar6 = puVar6 + 1) {
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = *puVar6;
            }
            puVar4 = puVar4 + 1;
          }
          puVar4 = (undefined4 *)(((int)local_2c - (int)local_38 & 0xfffffffcU) + (int)puVar3);
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = uVar9;
          }
          puVar4 = (undefined4 *)(((int)local_2c - (int)local_38 & 0xfffffffcU) + (int)puVar3);
          for (puVar6 = local_2c; puVar6 != local_34; puVar6 = puVar6 + 1) {
            puVar4 = puVar4 + 1;
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = *puVar6;
            }
          }
          iVar1 = (int)local_34 - (int)local_38;
          FUN_0010fa20(local_38,(int)local_30 - (int)local_38 >> 2,0);
          local_30 = (undefined4 *)(local_28 + (int)puVar3);
          local_38 = puVar3;
          puVar4 = puVar3 + (iVar1 >> 2) + 1;
        }
      }
      else {
        puVar4 = local_34 + 1;
        if (local_34 != (undefined4 *)0x0) {
          *local_34 = uVar9;
        }
      }
      local_34 = puVar4;
      puVar8 = puVar8 + 1;
    } while ((undefined4 *)local_20[1] != puVar8);
  }
  FUN_0010fa20(local_38,(int)local_30 - (int)local_38 >> 2,0);
  return 0;
}

