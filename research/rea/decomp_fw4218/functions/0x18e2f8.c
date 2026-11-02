// rea decompile_all
// name: FUN_0018e2f8
// address: 0x18e2f8
// body: available
// range: 0x18e2f8-0x18e403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0018e2f8(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_28 [16];
  
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3 == (int *)0x0) {
    return;
  }
  for (piVar1 = (int *)piVar3[0x3e]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x3e]) {
    piVar3 = piVar1;
  }
  if (piVar3 != (int *)0x0) {
    do {
      if (-1 < piVar3[0x1a] << 7) {
        if (param_2 != 0) {
          while ((short)piVar3[0x14] != 0) {
            FUN_001c00bc(auStack_28,piVar3 + 0x10,0);
            FUN_0017e6ac(piVar3,auStack_28);
            iVar2 = FUN_001beecc(auStack_28);
            if (iVar2 == 0) {
              (**(code **)(*piVar3 + 0xb4))(piVar3,0,auStack_28);
            }
            FUN_00192584(piVar3 + 0x10,0);
          }
          FUN_00192528(piVar3 + 0x10);
          FUN_0018a218(piVar3[0x1b]);
        }
        if (param_3 != 0) {
          (**(code **)(*piVar3 + 0x88))(piVar3);
        }
      }
      piVar3 = (int *)FUN_0022c124(param_1,piVar3);
    } while (piVar3 != (int *)0x0);
    return;
  }
  return;
}

