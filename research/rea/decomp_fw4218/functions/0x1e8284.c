// rea decompile_all
// name: FUN_001e8284
// address: 0x1e8284
// body: available
// range: 0x1e8284-0x1e82eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


short FUN_001e8284(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined2 local_18;
  
  uVar1 = DAT_001e82ec;
  iVar4 = 0;
  do {
    iVar2 = FUN_001e5af4(uVar1);
    local_18 = CONCAT11((char)(iVar2 + 1),(char)((uint)(iVar2 + 1) >> 8));
    for (piVar3 = *(int **)(&DAT_00001fb8 + param_1); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3)
    {
      if (local_18 == *(short *)(piVar3 + 0x3a)) goto LAB_001e82e0;
    }
    piVar3 = *(int **)(param_1 + 0x130);
    while( true ) {
      if (piVar3 == (int *)0x0) {
        return local_18;
      }
      if (local_18 == *(short *)((int)piVar3 + 0x12e)) break;
      piVar3 = (int *)*piVar3;
    }
LAB_001e82e0:
    iVar4 = iVar4 + 1;
    if (9 < iVar4) {
      return local_18;
    }
  } while( true );
}

