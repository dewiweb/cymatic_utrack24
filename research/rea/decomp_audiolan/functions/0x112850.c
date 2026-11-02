// rea decompile_all
// name: FUN_00112850
// address: 0x112850
// body: available
// range: 0x112850-0x1129b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00112850(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  puVar1 = DAT_001129b8;
  puVar5 = (undefined4 *)*DAT_001129b8;
  if ((undefined4 *)DAT_001129b8[1] != puVar5) {
    do {
      iVar4 = *(int *)*puVar5;
      if ((*(int *)(param_1 + 4) == **(int **)(iVar4 + 8)) &&
         (*(char *)(param_2 + *(int *)(iVar4 + 4) * 0xc + 0x14) != '\0')) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        iVar2 = FUN_00156078(param_2 + 4);
        if ((iVar2 == 6 || iVar2 == 7) &&
           ((*(int *)(param_1 + 0xc) == 0 ||
            (((((*(char *)(param_1 + 0x1c) == '\0' ||
                ((*(uint *)(*(int *)(param_1 + 0x18) + 0x20) & 1) != 0)) &&
               ((*(char *)(param_1 + 0x1d) == '\0' ||
                ((*(uint *)(*(int *)(param_1 + 0x18) + 0x24) & 1) != 0)))) &&
              ((*(char *)(param_1 + 0x1e) == '\0' ||
               ((*(uint *)(*(int *)(param_1 + 0x18) + 0x28) & 1) != 0)))) &&
             ((*(char *)(param_1 + 0x1f) == '\0' ||
              ((*(uint *)(*(int *)(param_1 + 0x18) + 0x2c) & 1) != 0)))))))) {
          FUN_00113814(param_1);
        }
        puVar3 = *(uint **)(param_1 + 0x18);
        *puVar3 = (*puVar3 | 1 << (*(uint *)(iVar4 + 4) & 0xff)) & 0xf | *puVar3 & 0xfffffff0;
      }
      puVar5 = puVar5 + 1;
    } while ((undefined4 *)puVar1[1] != puVar5);
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    *DAT_001129bc =
         (*DAT_001129bc | 1 << (*(uint *)(param_1 + 4) & 0xff)) & 0xff | *DAT_001129bc & 0xffffff00;
  }
  return 0;
}

