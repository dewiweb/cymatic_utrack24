// rea decompile_all
// name: FUN_0002762c
// address: 0x2762c
// body: available
// range: 0x2762c-0x27819 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0002762c(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *local_2c;
  
  local_2c = (undefined4 *)0x0;
  if (*(char *)(param_1 + 0x34) != '\0') {
    FUN_0002a1c6(0,s_GetFreeCacheRR_ERROR__Cache_alre_0002781c);
    return (undefined4 *)0x0;
  }
  *(undefined1 *)(param_1 + 0x34) = 1;
  puVar2 = *(undefined4 **)(param_1 + 0x158);
  if (puVar2 == (undefined4 *)0x0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      if (*(int *)(param_1 + 0x14c) != *(int *)(param_1 + 0x148)) {
        FUN_0002a1c6(0,DAT_00027848);
      }
      if ((DAT_0002784c < *(uint *)(param_1 + 0x148)) &&
         (*(uint *)(param_1 + 0x150) < *(uint *)(param_1 + 0x148) >> 5)) {
        if (*DAT_00027850 != 0) {
          FUN_0002a1c6(3,DAT_00027854);
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x30) + 1;
        *(int *)(param_1 + 0x30) = iVar3;
        if (*(int *)(param_1 + 0x2c) != iVar3) {
          FUN_0002a1c6(0,s_____s__Locking_Failure__mDNS_bus_00027859 + 3,_DAT_00027858,
                       *(int *)(param_1 + 0x2c),iVar3);
        }
        (**(code **)(param_1 + 0x24))(param_1,DAT_0002789c);
        if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
          FUN_0002a1c6(0,s__s__Unlocking_Failure__mDNS_busy_000278a0,_DAT_00027858,
                       *(int *)(param_1 + 0x2c),*(int *)(param_1 + 0x30));
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
      }
      puVar2 = *(undefined4 **)(param_1 + 0x158);
      if (puVar2 != (undefined4 *)0x0) goto LAB_000277c8;
    }
    iVar3 = *(int *)(param_1 + 0x14c);
    uVar8 = 0;
    do {
      piVar7 = (int *)(uVar8 * 4 + param_1 + 0x15c);
      iVar4 = *piVar7;
      while (iVar4 != 0) {
        piVar5 = *(int **)(iVar4 + 8);
        piVar1 = (int *)(iVar4 + 8);
        while (piVar6 = piVar5, piVar6 != (int *)0x0) {
          if ((piVar6[0x10] == 0) && (piVar6[0x13] == 0)) {
            *piVar1 = *piVar6;
            if (((int *)piVar6[9] != (int *)0x0) && ((int *)piVar6[9] != piVar6 + 0x14)) {
              FUN_001e5828();
            }
            piVar6[9] = 0;
            *piVar6 = *(int *)(param_1 + 0x158);
            *(int **)(param_1 + 0x158) = piVar6;
            *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + -1;
            piVar6 = piVar1;
          }
          piVar1 = piVar6;
          piVar5 = (int *)*piVar6;
        }
        *(int **)(*piVar7 + 0xc) = piVar1;
        piVar5 = (int *)*piVar7;
        if ((piVar5[2] == 0) && (piVar5 != param_2)) {
          if (piVar1 != piVar5 + 2) {
            FUN_0002a1c6(0,DAT_000278e0);
          }
          if (*(int *)(*piVar7 + 0x10) != *piVar7 + 0x14) {
            FUN_001e5828();
          }
          *(undefined4 *)(*piVar7 + 0x10) = 0;
          *piVar7 = *(int *)*piVar7;
          *piVar5 = *(int *)(param_1 + 0x158);
          *(int **)(param_1 + 0x158) = piVar5;
          *(int *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) + -1;
          piVar5 = piVar7;
        }
        piVar7 = piVar5;
        iVar4 = *piVar5;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 499);
    if (*DAT_00027850 != 0) {
      FUN_0002a1c6(3,_DAT_000278e4,iVar3 - *(int *)(param_1 + 0x14c),iVar3,*(int *)(param_1 + 0x14c)
                  );
    }
    puVar2 = *(undefined4 **)(param_1 + 0x158);
    if (puVar2 == (undefined4 *)0x0) goto LAB_0002780e;
  }
LAB_000277c8:
  *(undefined4 *)(param_1 + 0x158) = *puVar2;
  uVar8 = *(int *)(param_1 + 0x14c) + 1;
  *(uint *)(param_1 + 0x14c) = uVar8;
  if (*(uint *)(param_1 + 0x154) <= uVar8) {
    if (*DAT_00027850 != 0) {
      FUN_0002a1c6(3,s___RR_Cache_now_using__ld_objects_000278e6 + 2);
    }
    uVar8 = *(uint *)(param_1 + 0x154);
    if (uVar8 < 100) {
      *(uint *)(param_1 + 0x154) = uVar8 + 10;
    }
    else {
      if (uVar8 < 1000) {
        iVar3 = uVar8 + 100;
      }
      else {
        iVar3 = uVar8 + 1000;
      }
      *(int *)(param_1 + 0x154) = iVar3;
    }
  }
  FUN_001e58ac(puVar2,0x98);
  local_2c = puVar2;
LAB_0002780e:
  *(undefined1 *)(param_1 + 0x34) = 0;
  return local_2c;
}

