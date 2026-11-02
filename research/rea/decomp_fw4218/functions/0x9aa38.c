// rea decompile_all
// name: FUN_0009aa38
// address: 0x9aa38
// body: available
// range: 0x9aa38-0x9ac13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009aa38(int param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  iVar8 = param_1 + param_2 * 0x38;
  puVar5 = *(uint **)(iVar8 + 0x26c);
  uVar9 = *(int *)(iVar8 + 0x240) - *(int *)(iVar8 + 0x244);
  uVar3 = *puVar5;
  if ((puVar5[1] < uVar3) && (uVar9 != 0)) {
    if (uVar3 - puVar5[1] <= uVar9) {
      uVar9 = uVar3 - puVar5[1];
    }
    uVar10 = puVar5[5];
    uVar3 = (uVar3 - puVar5[1]) + uVar10;
    if (puVar5[3] < uVar3) {
      uVar3 = puVar5[3];
    }
    uVar6 = uVar3 - uVar10;
    if (uVar9 < uVar3 - uVar10) {
      uVar6 = uVar9;
    }
    iVar1 = FUN_0005f284(param_1,*(undefined4 *)(param_1 + 0x218),*(int *)(iVar8 + 0x244));
    if (iVar1 == 0) {
      FUN_00002898(s_U__ERROR__MidiFileDecoder__updat_0009ac19 + 3);
      return 0;
    }
    uVar3 = uVar6;
    if (*puVar5 - puVar5[1] < uVar6) {
      uVar3 = *puVar5 - puVar5[1];
    }
    puVar2 = (undefined1 *)puVar5[5];
    uVar4 = 0;
    if (uVar3 != 0) {
      do {
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = 0;
        }
        puVar2 = puVar2 + 1;
        if ((undefined1 *)puVar5[3] <= puVar2) {
          puVar2 = puVar2 + -*puVar5;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar3);
    }
    puVar5[5] = (uint)puVar2;
    FUN_00029904(puVar5 + 1);
    iVar1 = FUN_00099650(param_1,uVar10,uVar6,1);
    if (iVar1 != 0) {
      FUN_00002898(_DAT_0009ac18,DAT_0009ac14);
      return 0;
    }
    uVar9 = uVar9 - uVar6;
    *(uint *)(iVar8 + 0x244) = *(int *)(iVar8 + 0x244) + uVar6;
    if (uVar9 != 0) {
      puVar2 = (undefined1 *)puVar5[5];
      uVar3 = uVar9;
      if (*puVar5 - puVar5[1] < uVar9) {
        uVar3 = *puVar5 - puVar5[1];
      }
      uVar10 = 0;
      puVar7 = puVar2;
      if (uVar3 != 0) {
        do {
          if (puVar7 != (undefined1 *)0x0) {
            *puVar7 = 0;
          }
          puVar7 = puVar7 + 1;
          if ((undefined1 *)puVar5[3] <= puVar7) {
            puVar7 = puVar7 + -*puVar5;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar3);
      }
      puVar5[5] = (uint)puVar7;
      FUN_00029904(puVar5 + 1);
      iVar1 = FUN_00099650(param_1,puVar2,uVar9,1);
      if (iVar1 != 0) {
        FUN_00002898(_DAT_0009ac18,DAT_0009ac54);
        return 0;
      }
      *(uint *)(iVar8 + 0x244) = *(int *)(iVar8 + 0x244) + uVar9;
    }
  }
  return 1;
}

