// rea decompile_all
// name: FUN_001332b0
// address: 0x1332b0
// body: available
// range: 0x1332b0-0x1333cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001332b0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  
  iVar7 = param_1 + 4;
  FUN_001f00bc(iVar7);
  puVar6 = *(undefined4 **)(param_1 + 0x28);
  if (*(undefined4 **)(param_1 + 0x2c) != puVar6) {
    do {
      iVar1 = (**(code **)(*(int *)*puVar6 + 0x10))((int *)*puVar6,param_2);
      if (iVar1 != 0) {
        puVar3 = *(undefined4 **)(param_1 + 0x2c);
        if (*(undefined4 **)(param_1 + 0x28) != puVar3) {
          puVar2 = puVar6 + 1;
          if (puVar2 != puVar3) {
            iVar1 = (int)puVar3 - (int)puVar2 >> 2;
            if (0 < iVar1) {
              iVar5 = 0;
              if (puVar2 < puVar3) {
                iVar4 = -(((int)puVar3 - (int)puVar2) * 0x20000000 >> 0x1f);
                if (iVar4 == 1) {
                  iVar5 = 1;
                  *puVar6 = *puVar2;
                }
              }
              else {
                iVar4 = 0;
              }
              for (; iVar4 < iVar1; iVar4 = iVar4 + 2) {
                puVar6[iVar5] = puVar2[iVar5];
                puVar6[iVar5 + 1] = puVar2[iVar5 + 1];
                iVar5 = iVar5 + 2;
              }
            }
          }
          *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -4;
        }
        FUN_001f06d4(iVar7);
        return 1;
      }
      puVar6 = puVar6 + 1;
    } while (*(undefined4 **)(param_1 + 0x2c) != puVar6);
  }
  FUN_001f06d4(iVar7);
  return 0;
}

