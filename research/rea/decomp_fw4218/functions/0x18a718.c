// rea decompile_all
// name: FUN_0018a718
// address: 0x18a718
// body: available
// range: 0x18a718-0x18a727 inclusive
// range: 0x18c4cc-0x18c5e7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0018a718(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_28 [12];
  undefined2 uStack_1c;
  
  *(byte *)(param_1 + 0x148) = *(byte *)(param_1 + 0x148) & 0xfd;
  piVar3 = *(int **)(param_1 + 0x94);
  if (piVar3 == (int *)0x0) {
    return;
  }
  for (piVar1 = (int *)piVar3[0x41]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[0x41]) {
    piVar3 = piVar1;
  }
  if (piVar3 == (int *)0x0) {
    return;
  }
  do {
    if (*(char *)((int)piVar3 + 0x96) != '\0') {
      *(undefined1 *)((int)piVar3 + 0x96) = 0;
      FUN_0015111c(piVar3 + 0x26);
      (**(code **)(*piVar3 + 0x74))(auStack_28,piVar3);
      iVar2 = FUN_0018f044(piVar3 + 0x1b,piVar3 + 0x26,0x3700,auStack_28);
      if (iVar2 == 0x17) {
        FUN_0018d280(piVar3[9] + 0x584,0,auStack_28,uStack_1c);
      }
      if (*(short *)((int)piVar3 + 0xaa) != 0) {
        FUN_00190f6c(piVar3 + 0x19);
        if (piVar3[0x28] != 0) {
          FUN_001a2410(piVar3[9] + 0x4a0,piVar3 + 0x26,0);
        }
        FUN_0015111c(piVar3 + 0x26);
      }
    }
    piVar3 = (int *)FUN_0022c17c(param_1 + 0x90,piVar3);
  } while (piVar3 != (int *)0x0);
  return;
}

