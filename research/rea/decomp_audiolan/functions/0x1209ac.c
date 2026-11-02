// rea decompile_all
// name: FUN_001209ac
// address: 0x1209ac
// body: available
// range: 0x1209ac-0x120a6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001209ac(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_20 [16];
  
  iVar1 = FUN_0017bfc0();
  FUN_0010f638(auStack_20);
  piVar2 = (int *)FUN_0011971c(param_1,*DAT_00120a70,
                               (iVar1 * 1000 ^ (uint)(iVar1 * 1000) >> 0x10) & 0x3fff,0,1,0x80000001
                               ,0,*DAT_00120a6c);
  if (piVar2 != (int *)0x0) {
    iVar1 = FUN_001be020(param_1 + 4,piVar2);
    if (iVar1 == 0) {
      (**(code **)(*piVar2 + 0x3c))(piVar2);
      piVar2 = (int *)0x0;
    }
    else {
      FUN_00128fd0(piVar2,0);
    }
  }
  return piVar2;
}

