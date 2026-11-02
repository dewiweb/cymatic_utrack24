// rea decompile_all
// name: FUN_0001253c
// address: 0x1253c
// body: available
// range: 0x1253c-0x1261b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_0001253c(int *param_1,uint *param_2,int param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int extraout_r1;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uint *puStack_28;
  
  if (*param_1 == 0) {
    return (uint *)0x0;
  }
  puStack_28 = (uint *)0x0;
  *param_4 = 1;
  uVar1 = FUN_00014ba0();
  uVar4 = 0;
  uVar5 = param_1[2] + uVar1;
  if (*param_2 != 0) {
    do {
      if (param_2[uVar4 + 3] != 0) {
        uVar2 = param_2[uVar4 + 3] + param_3;
        if (uVar5 < uVar1) {
          bVar7 = uVar5 <= uVar2;
          bVar6 = uVar2 == uVar5;
          if (bVar7 && !bVar6) {
            bVar7 = uVar2 <= uVar1;
            bVar6 = uVar1 == uVar2;
          }
          if (!bVar7 || bVar6) goto LAB_000125d0;
        }
        else if (uVar1 <= uVar2 && uVar2 <= uVar5) {
LAB_000125d0:
          uVar3 = uVar2 - uVar1;
          if (param_2[1] <= uVar2 - uVar1) {
            uVar3 = param_2[1];
          }
          param_2[1] = uVar3;
          FUN_00006158(uVar2,param_1[2]);
          puStack_28 = param_2 + 0x23;
          param_2[uVar4 + 0x23] = *param_1 + (param_1[1] * extraout_r1 + uVar4) * 4;
          goto LAB_00012604;
        }
        param_2[uVar4 + 0x23] = 0;
        *param_4 = 0;
      }
LAB_00012604:
      uVar4 = uVar4 + 1;
    } while (uVar4 < *param_2);
  }
  return puStack_28;
}

