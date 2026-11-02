// rea decompile_all
// name: FUN_00146ca8
// address: 0x146ca8
// body: available
// range: 0x146ca8-0x146da3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00146ca8(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined2 *)(param_1 + 0x58) = 0;
  FUN_000ea274(param_1 + 0x6c);
  param_1[0x59] = 0;
  *(undefined1 *)(param_1 + 0x71) = 0;
  FUN_00133c34(param_1 + 0x1aa);
  FUN_000e9908(param_1 + 0x121,param_2);
  if ((char)param_1[0x85] == '\x01') {
    *(undefined1 *)(param_1 + 0x85) = 0;
  }
  iVar2 = FUN_00148f38(param_1 + 0x128);
  if (iVar2 != 0) {
    FUN_00149fec(param_1 + 0x128);
    FUN_00120f7c(param_1 + 0x163);
    FUN_001313cc(param_1 + 0x225);
    uVar1 = DAT_00146da4;
    if ((char)param_1[0x71] != '\0') {
      if (((char)param_1[0x71] == '\x04') &&
         (*(undefined1 *)(param_1 + 0x71) = 0, (char)param_1[0x85] == '\x01')) {
        *(undefined1 *)(param_1 + 0x85) = 0;
      }
      FUN_00136480(param_1 + 0x21f,1,*(int *)(*param_1 + -0xc) + (int)param_1,1,uVar1);
    }
    FUN_00136480(param_1 + 0x21f,param_2,*(int *)(*param_1 + -0xc) + (int)param_1,1,uVar1);
  }
  iVar2 = FUN_0017bfc0();
  param_1[0x76] = iVar2;
  return;
}

