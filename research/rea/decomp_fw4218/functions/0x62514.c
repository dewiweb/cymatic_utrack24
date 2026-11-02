// rea decompile_all
// name: FUN_00062514
// address: 0x62514
// body: available
// range: 0x62514-0x625c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00062514(int *param_1,uint param_2,uint param_3,int param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  
  if (param_4 == 0) {
    return 6;
  }
  iVar6 = *param_1;
  FUN_001c6e90(param_1[1] - iVar6);
  if (extraout_r1 <= param_3) {
    return 6;
  }
  if (extraout_r1 <= param_2) {
    return 6;
  }
  piVar1 = (int *)(iVar6 + param_3 * 0x14);
  iVar6 = iVar6 + param_2 * 0x14;
  uVar7 = 0;
  *piVar1 = param_4;
  piVar1[1] = param_2;
  piVar1[4] = 0;
  uVar3 = *(uint *)(iVar6 + 0x10);
  uVar2 = *(undefined4 *)(param_4 + 4);
  if (uVar3 != 0) {
    do {
      uVar4 = uVar3;
      iVar8 = *param_1;
      FUN_001c6e90(param_1[1] - iVar8);
      if (extraout_r1_00 <= uVar4) {
        return 6;
      }
      piVar9 = (int *)(iVar8 + uVar4 * 0x14);
      iVar8 = FUN_00003d18(*(undefined4 *)(*piVar9 + 4),uVar2);
    } while ((iVar8 < 1) && (uVar3 = piVar9[2], uVar7 = uVar4, uVar3 != 0));
    if (uVar7 != 0) {
      puVar5 = (uint *)(*param_1 + uVar7 * 0x14 + 8);
      goto LAB_0006259e;
    }
  }
  puVar5 = (uint *)(iVar6 + 0x10);
LAB_0006259e:
  FUN_001c6e90(param_1[1] - *param_1);
  if (extraout_r1_01 <= *puVar5) {
    return 6;
  }
  piVar1[3] = uVar7;
  piVar1[2] = *puVar5;
  *puVar5 = param_3;
  return 0;
}

