// rea decompile_all
// name: FUN_0009b540
// address: 0x9b540
// body: available
// range: 0x9b540-0x9b6c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0009b540(int param_1)

{
  short sVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  
  sVar1 = *(short *)(param_1 + 0x232);
  uVar5 = 0xffffffff;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  if (sVar1 != 0) {
    uVar3 = 0;
    piVar6 = (int *)(param_1 + 0x254);
    puVar10 = (uint *)(param_1 + 0x248);
    uVar7 = DAT_0009b6c4;
    do {
      sVar1 = sVar1 + -1;
      uVar9 = 0;
      if (*piVar6 != 0) {
        uVar9 = *puVar10;
      }
      if (*piVar6 != 0 && uVar9 < uVar5) {
        uVar7 = uVar3 & 0xffff;
        uVar5 = uVar9;
      }
      piVar6 = piVar6 + 0xe;
      puVar10 = puVar10 + 0xe;
      uVar3 = uVar3 + 1;
    } while (sVar1 != 0);
    if (uVar7 != DAT_0009b6c4) {
      iVar8 = param_1 + uVar7 * 0x38;
      FUN_00003b88(&local_38,iVar8 + 0x248,0x13);
      piVar6 = _DAT_0009b6c8;
      if ((local_2c & 0x40000000) == 0) {
        piVar2 = (int *)*_DAT_0009b6c8;
        if (piVar2[1] != *piVar2) {
          puVar4 = (undefined4 *)piVar2[5];
          if (puVar4 != (undefined4 *)0x0) {
            *puVar4 = local_38;
            puVar4[1] = local_34;
            puVar4[2] = local_30;
            puVar4[3] = local_2c;
            puVar4[4] = local_28;
          }
          puVar4 = puVar4 + 5;
          if ((undefined4 *)piVar2[3] <= puVar4) {
            puVar4 = (undefined4 *)piVar2[2];
          }
          piVar2[5] = (int)puVar4;
          FUN_000298e0(piVar2 + 1);
        }
      }
      else {
        *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(param_1 + 0x940);
        FUN_0009b9a4(param_1,(uint)CONCAT21(CONCAT11((undefined1)local_28,local_28._1_1_),
                                            local_28._2_1_));
        *(undefined4 *)(param_1 + 0x940) = *(undefined4 *)(param_1 + 0x238);
        FUN_0009aef8(param_1,uVar7);
      }
      *(undefined4 *)(iVar8 + 0x254) = 0;
      iVar8 = FUN_0009a3c0(param_1,uVar7);
      if (iVar8 == 0) {
        FUN_00002898(s__A_ERROR__Error_in_picking_Event_0009b6c9 + 3,uVar7);
        *(undefined1 *)(piVar6 + 8) = 0;
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

