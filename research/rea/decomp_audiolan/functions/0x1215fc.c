// rea decompile_all
// name: FUN_001215fc
// address: 0x1215fc
// body: available
// range: 0x1215fc-0x1216c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001215fc(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined1 auStack_20 [12];
  
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3 == (int *)0x0) {
    return;
  }
  for (piVar2 = (int *)piVar3[0x57]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0x57]) {
    piVar3 = piVar2;
  }
  if (piVar3 != (int *)0x0) {
    do {
      (**(code **)(*piVar3 + 0x38))(piVar3);
      iVar1 = DAT_001216c4;
      if (piVar3[0x43] != 0) {
        iVar1 = piVar3[0x43] + 0x40;
      }
      FUN_0010f5fc(auStack_20,iVar1);
      iVar1 = FUN_0015e940(auStack_20,param_2);
      if (iVar1 != 0) {
        FUN_00126d64(piVar3,0,3);
      }
      piVar2 = (int *)FUN_001d79fc(param_1 + 4,piVar3);
      (**(code **)(*piVar3 + 0x3c))(piVar3);
      piVar3 = piVar2;
    } while (piVar2 != (int *)0x0);
    return;
  }
  return;
}

