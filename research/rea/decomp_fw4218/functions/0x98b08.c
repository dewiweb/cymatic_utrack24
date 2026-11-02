// rea decompile_all
// name: FUN_00098b08
// address: 0x98b08
// body: available
// range: 0x98b08-0x98d17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00098b08(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined1 auStack_54 [49];
  undefined1 local_23;
  
  piVar3 = (int *)FUN_001f01c4(8,1);
  if (piVar3 == (int *)0x0) {
    piVar3 = (int *)0x0;
  }
  else {
    *piVar3 = _DAT_00098d18;
    piVar3[1] = 0;
  }
  piVar4 = *(int **)(param_1 + 0x10);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0xc))();
    }
    *(int **)(param_1 + 0x10) = piVar3;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_000028f8(auStack_54,0x31,s____s_ISO_Ch_d_00098d1a + 2,param_3);
    local_23 = 0;
    FUN_00063a90(*(undefined4 *)(param_1 + 0x10),auStack_54);
    iVar5 = FUN_001c7218(param_2,DAT_00098d2c,DAT_00098d28,0xffffffff);
    if (iVar5 == 0) {
      return 0xfffffffb;
    }
    iVar6 = FUN_001f01c4(0x54,*(undefined1 *)(*(int *)(iVar5 + 4) + 0xd8));
    if (iVar6 == 0) {
      iVar6 = 0;
    }
    else {
      uVar8 = *(undefined4 *)(*(int *)(iVar5 + 4) + 0xd4);
      uVar1 = *(undefined1 *)(*(int *)(iVar5 + 4) + 0xd8);
      iVar6 = FUN_001ad814();
      FUN_001ad784(iVar6,1,uVar8,uVar1);
    }
    *(undefined1 *)(param_1 + 0x14) = 0;
    cVar2 = *(char *)(*(int *)(iVar5 + 4) + 0xd0);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(int *)(iVar5 + 4) + 0xc4);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(*(int *)(iVar5 + 4) + 200);
    if (iVar6 != 0) {
      if (*(int *)(param_1 + 0x18) == 0) {
        uVar8 = FUN_001eed14(param_1);
        puVar7 = (undefined4 *)FUN_001f01c4(0x30,uVar8);
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = 0;
          puVar7[1] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          puVar7[4] = 0;
          puVar7[5] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[10] = 0;
          puVar7[0xb] = 0;
        }
        *(undefined4 **)(param_1 + 0x18) = puVar7;
        if (puVar7 == (undefined4 *)0x0) {
          FUN_001ad838(iVar6);
          FUN_001eecc8();
          return 0xffffffde;
        }
      }
      if (cVar2 == '\b' || cVar2 == '\x01') {
        *(undefined1 *)(param_1 + 0x26) = 1;
      }
      else {
        *(undefined1 *)(param_1 + 0x26) = 0;
      }
      if (*(int *)(param_1 + 8) != iVar6) {
        if (*(int *)(param_1 + 8) != 0) {
          FUN_001ad838();
          FUN_001eecc8();
        }
        *(int *)(param_1 + 8) = iVar6;
      }
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 8) + 0x10;
      return 0;
    }
  }
  return 0xffffffce;
}

