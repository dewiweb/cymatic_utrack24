// rea decompile_all
// name: FUN_001a2724
// address: 0x1a2724
// body: available
// range: 0x1a2724-0x1a2797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a2724(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  puVar1 = DAT_001a2798;
  if ((code *)*DAT_001a2798 == entry) {
    puVar2 = (undefined4 *)FUN_0019b388(0x10);
  }
  else {
    puVar2 = (undefined4 *)(*(code *)*DAT_001a2798)(0x10);
  }
  *param_1 = (int)puVar2;
  if (puVar2 == (undefined4 *)0x0) {
    return 0xfffffffc;
  }
  *puVar2 = 0;
  *(undefined4 *)(*param_1 + 0xc) = 0;
  *(undefined4 *)(*param_1 + 4) = 0;
  if ((code *)*puVar1 == entry) {
    iVar3 = FUN_0019b388(8);
  }
  else {
    iVar3 = (*(code *)*puVar1)(8);
  }
  *(int *)(*param_1 + 8) = iVar3;
  iVar4 = *param_1;
  if (iVar3 != 0) {
    FUN_001a4c50();
    return 0;
  }
  if (iVar4 != 0) {
    if ((code *)*DAT_001a279c == entry) {
      FUN_0018a280(iVar4);
    }
    else {
      (*(code *)*DAT_001a279c)(iVar4);
    }
  }
  *param_1 = 0;
  return 0xfffffffc;
}

