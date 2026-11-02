// rea decompile_all
// name: FUN_00134258
// address: 0x134258
// body: available
// range: 0x134258-0x1343b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00134258(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  
  if (param_2 == DAT_001343b8) {
    if (*(char *)(param_1 + 0x26) == '\x06') {
      (**(code **)(**(int **)(param_1 + 0x20) + 0x2c))(*(int **)(param_1 + 0x20),10);
      uVar1 = FUN_00178f04();
      FUN_001772d0(uVar1,*(undefined1 *)(param_1 + 0x29),*(undefined1 *)(param_1 + 0x28),
                   *(undefined1 *)(param_1 + 0x27));
      uVar1 = FUN_00178f04();
      FUN_001772fc(uVar1,*(undefined1 *)(param_1 + 0x2a),*(undefined1 *)(param_1 + 0x2b),
                   *(undefined1 *)(param_1 + 0x2c));
      FUN_001a48f0(param_1,0x35,0);
      uVar1 = 1;
    }
    else {
      *(bool *)(param_1 + 0x25) = *(char *)(param_1 + 0x25) == '\0';
      if (*(char *)(param_1 + 0x25) == '\0') {
        *(undefined1 *)(param_1 + 0x24) = 1;
        (**(code **)(**(int **)(param_1 + 0x20) + 0x2c))(*(int **)(param_1 + 0x20),10);
        FUN_0013415c(param_1);
        FUN_00134424(param_1);
      }
      else {
        (**(code **)(**(int **)(param_1 + 0x20) + 0x24))(*(int **)(param_1 + 0x20),10,0,0x32,500);
      }
      uVar1 = 1;
    }
  }
  else if ((param_2 == 0x192) && (*(char *)(param_1 + 0x25) != '\0')) {
    *(undefined1 *)(param_1 + 0x25) = 0;
    *(undefined1 *)(param_1 + 0x24) = 1;
    pcVar2 = *(code **)(**(int **)(param_1 + 0x20) + 0x2c);
    (*pcVar2)(*(int **)(param_1 + 0x20),10,pcVar2,param_4,param_4);
    FUN_0013415c(param_1);
    FUN_00134424(param_1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

