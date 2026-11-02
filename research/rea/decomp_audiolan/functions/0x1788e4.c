// rea decompile_all
// name: FUN_001788e4
// address: 0x1788e4
// body: available
// range: 0x1788e4-0x1789a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001788e4(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  uVar1 = FUN_001a4490(0);
  for (piVar4 = *(int **)(param_1 + 0x8c); piVar4 != (int *)0x0; piVar4 = (int *)piVar4[7]) {
    if (0 < *piVar4) {
      for (piVar3 = (int *)piVar4[1]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[0xe]) {
        if (((0 < *piVar3) && (piVar3[1] != 0)) && (piVar3[8] != 0)) {
          if (piVar3[7] == 9) {
            piVar3[7] = 0;
            FUN_001a52e0();
            piVar3[8] = 0;
            iVar2 = FUN_00186c84(param_1,*piVar4,*piVar3);
            if (iVar2 == 0) {
              FUN_00178792(param_1,0x15,piVar4,piVar3,0);
            }
          }
          else if ((uint)piVar3[6] < uVar1) {
            iVar2 = piVar3[7] + 1;
            piVar3[7] = iVar2;
            if (iVar2 == 1) {
              iVar2 = FUN_001a4490(0);
              piVar3[6] = iVar2 + 1;
            }
            if (piVar3[7] == 2) {
              iVar2 = FUN_001a4490(0);
              piVar3[6] = iVar2 + 2;
            }
            if (2 < piVar3[7]) {
              iVar2 = FUN_001a4490(0);
              piVar3[6] = iVar2 + 4;
            }
            piVar3 = (int *)piVar4[1];
            FUN_00178fcc(param_1,0,piVar3[8],0,0,0xffffffff);
          }
        }
      }
    }
  }
  return;
}

