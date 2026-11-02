// rea decompile_all
// name: FUN_001a8c60
// address: 0x1a8c60
// body: available
// range: 0x1a8c60-0x1a8d43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001a8c60(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar4 = DAT_001a8d44;
  *param_1 = DAT_001a8d48;
  puVar1 = DAT_001a8d44;
  puVar2 = (undefined4 *)*puVar4;
  puVar3 = (undefined4 *)puVar4[1];
  puVar4 = puVar2;
  do {
    if (puVar3 == puVar4) {
LAB_001a8d2c:
      FUN_001f01ac(param_1 + 4);
      iVar5 = FUN_000b1228(param_1 + 1);
      return iVar5 + -4;
    }
    if ((undefined4 *)puVar4[1] == param_1) {
      if (puVar2 != puVar3) {
        puVar2 = puVar4 + 2;
        if ((puVar2 != puVar3) && (iVar5 = (int)puVar3 - (int)puVar2, 0 < iVar5 >> 3)) {
          puVar3 = puVar4 + -2;
          if (iVar5 * 0x10000000 < 0) {
            *puVar4 = *puVar2;
            puVar4[1] = puVar4[3];
            puVar3 = puVar4;
            puVar4 = puVar2;
          }
          for (iVar5 = iVar5 >> 4; iVar5 != 0; iVar5 = iVar5 + -1) {
            uVar6 = puVar4[3];
            puVar3[2] = puVar4[2];
            puVar3[3] = uVar6;
            uVar6 = puVar4[5];
            puVar3[4] = puVar4[4];
            puVar3[5] = uVar6;
            puVar3 = puVar3 + 4;
            puVar4 = puVar4 + 4;
          }
        }
        puVar1[1] = puVar1[1] + -8;
      }
      goto LAB_001a8d2c;
    }
    puVar4 = puVar4 + 2;
  } while( true );
}

