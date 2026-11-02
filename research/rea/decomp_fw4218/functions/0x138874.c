// rea decompile_all
// name: FUN_00138874
// address: 0x138874
// body: available
// range: 0x138874-0x1389e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00138874(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0009dc24(param_1,param_2);
  if (iVar1 != 0) {
    return 0;
  }
  if (param_2 == DAT_001389e8) {
    if (*(char *)((int)param_1 + 0xf5) != '\0') {
      return 1;
    }
    FUN_00243490(param_1 + 0x28,param_1[0x32]);
    iVar1 = FUN_0022d4a8();
    if (iVar1 != 0) {
      FUN_000f4e84();
      uVar2 = FUN_000f4fc0();
      iVar1 = FUN_001b54c0(uVar2);
      if ((iVar1 == 1) && (param_1[0x32] == 3)) {
        return 1;
      }
      *(bool *)(param_1 + 0x3d) = (char)param_1[0x3d] == '\0';
      if ((char)param_1[0x3d] == '\0') {
        (**(code **)(*param_1 + 0x80))(param_1);
        FUN_00138c30(param_1);
        if (*(char *)((int)param_1 + 0xf5) == '\0') {
          (**(code **)(*param_1 + 0x74))(param_1,1);
          FUN_00138ce8(param_1);
        }
      }
      else {
        (**(code **)(*param_1 + 0x8c))(param_1);
      }
      return 1;
    }
  }
  if ((param_2 == 0x192) && ((char)param_1[0x3d] != '\0')) {
    (**(code **)(*param_1 + 0x80))(param_1);
    FUN_00138e80(param_1);
    FUN_001389ec(param_1);
    *(undefined1 *)(param_1 + 0x3d) = 0;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

