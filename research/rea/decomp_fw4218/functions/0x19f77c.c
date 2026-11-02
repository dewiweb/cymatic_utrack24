// rea decompile_all
// name: FUN_0019f77c
// address: 0x19f77c
// body: available
// range: 0x19f77c-0x19f877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0019f77c(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0x58) = 0;
  FUN_0014ccec(param_1 + 0x6c);
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  FUN_00193180(param_1 + 0x1aa);
  FUN_0014c380(param_1 + 0x121,param_2);
  if ((char)param_1[0x85] == '\x01') {
    *(undefined1 *)(param_1 + 0x85) = 0;
  }
  iVar2 = FUN_001a1558(param_1 + 0x128);
  if (iVar2 != 0) {
    FUN_001a260c(param_1 + 0x128);
    FUN_0018472c(param_1 + 0x163);
    FUN_001911b4(param_1 + 0x225);
    uVar1 = DAT_0019f878;
    if ((char)param_1[0x71] != '\0') {
      if (((char)param_1[0x71] == '\x04') &&
         (*(undefined1 *)(param_1 + 0x71) = 0, (char)param_1[0x85] == '\x01')) {
        *(undefined1 *)(param_1 + 0x85) = 0;
      }
      FUN_0019457c(param_1 + 0x21f,1,*(int *)(*param_1 + -0xc) + (int)param_1,1,uVar1);
    }
    FUN_0019457c(param_1 + 0x21f,param_2,*(int *)(*param_1 + -0xc) + (int)param_1,1,uVar1);
  }
  iVar2 = FUN_001d06b8();
  param_1[0x76] = iVar2;
  return;
}

