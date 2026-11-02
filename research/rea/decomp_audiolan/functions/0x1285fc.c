// rea decompile_all
// name: FUN_001285fc
// address: 0x1285fc
// body: available
// range: 0x1285fc-0x1286e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001285fc(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar3 = *(int *)(param_1 + 0x158);
  uVar5 = 0;
  do {
    if (iVar3 == 0) {
      puVar4 = (undefined4 *)FUN_0016d7a4(0x18,DAT_001286e8);
      uVar2 = DAT_001286ec;
      if (puVar4 == (undefined4 *)0x0) {
        uVar5 = 0x16;
      }
      else {
        puVar4[2] = 0;
        *puVar4 = uVar2;
        *(undefined1 *)((int)puVar4 + 6) = 0;
        *(short *)(puVar4 + 1) = (short)param_2;
        puVar4[4] = param_3;
        puVar4[5] = param_4;
        iVar3 = *(int *)(param_1 + 0x158);
        if (iVar3 == 0) {
          *(undefined4 **)(param_1 + 0x158) = puVar4;
        }
        else {
          for (iVar1 = *(int *)(iVar3 + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
            iVar3 = iVar1;
          }
          *(undefined4 **)(iVar3 + 8) = puVar4;
        }
LAB_001286b4:
        FUN_00131cd0(**(int **)(param_1 + 0x7c) + 0x67c,param_1,param_2);
        FUN_00131cd0(param_1 + 0xc0,param_1,param_2);
      }
      return uVar5;
    }
    if (*(ushort *)(iVar3 + 4) == param_2) {
      if (*(char *)(iVar3 + 6) != '\0') {
        return 0x11;
      }
      *(undefined4 *)(iVar3 + 0x10) = param_3;
      *(undefined4 *)(iVar3 + 0x14) = param_4;
      goto LAB_001286b4;
    }
    iVar3 = *(int *)(iVar3 + 8);
  } while( true );
}

