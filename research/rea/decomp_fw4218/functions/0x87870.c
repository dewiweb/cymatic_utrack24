// rea decompile_all
// name: FUN_00087870
// address: 0x87870
// body: available
// range: 0x87870-0x8791b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00087870(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  piVar6 = (int *)(param_1 + 0x870);
  piVar7 = *(int **)(param_1 + 0x880);
  piVar1 = (int *)*piVar7;
  while( true ) {
    if (piVar1 == piVar7) {
      puVar2 = *(undefined4 **)(param_1 + 0x874);
      if (puVar2 == (undefined4 *)0x0) {
        if (*(int *)(param_1 + 0x878) == *(int *)(param_1 + 0x87c)) {
          uVar3 = 1;
          if (*piVar6 != 0) {
            uVar5 = *(uint *)(*piVar6 + 4);
            uVar3 = (uVar5 >> 1) + uVar5 + (uVar5 >> 3);
            if (uVar3 < uVar5 + 1) {
              uVar3 = uVar5 + 1;
            }
          }
          piVar1 = (int *)FUN_00173860(0xc,0);
          iVar4 = FUN_00173860(uVar3 * 0xc,0);
          piVar1[2] = iVar4;
          iVar4 = *piVar6;
          piVar1[1] = uVar3;
          *piVar1 = iVar4;
          *piVar6 = (int)piVar1;
          iVar4 = piVar1[2];
          *(int *)(param_1 + 0x878) = iVar4;
          *(uint *)(param_1 + 0x87c) = iVar4 + uVar3 * 0xc;
        }
        puVar2 = *(undefined4 **)(param_1 + 0x878);
        *(undefined4 **)(param_1 + 0x878) = puVar2 + 3;
      }
      else {
        *(undefined4 *)(param_1 + 0x874) = *puVar2;
      }
      if (puVar2 + 2 != (int *)0x0) {
        puVar2[2] = param_2;
      }
      *puVar2 = piVar7;
      puVar2[1] = piVar7[1];
      *(undefined4 **)piVar7[1] = puVar2;
      piVar7[1] = (int)puVar2;
      *(int *)(param_1 + 0x884) = *(int *)(param_1 + 0x884) + 1;
      return 1;
    }
    if (piVar1[2] == param_2) break;
    piVar1 = (int *)*piVar1;
  }
  return 1;
}

