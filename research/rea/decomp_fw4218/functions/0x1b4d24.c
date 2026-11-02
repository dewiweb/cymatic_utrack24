// rea decompile_all
// name: FUN_001b4d24
// address: 0x1b4d24
// body: available
// range: 0x1b4d24-0x1b4dbd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001b4d24(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [12];
  
  uVar1 = DAT_001b4dc4;
  iVar3 = DAT_001b4dc0;
  FUN_001f00bc(DAT_001b4dc4);
  if (*(int *)(param_1 + 8) == 0) {
    if (*(undefined4 **)(param_1 + 0xc) == *(undefined4 **)(param_1 + 0x10)) {
      if (((*(uint *)(iVar3 + 4) & 1) == 0) && (iVar3 = FUN_001c7162(DAT_001b4dc8), iVar3 != 0)) {
        uVar2 = FUN_00201f28(auStack_20,0);
        uVar2 = FUN_001aaefc(DAT_001b4dcc,uVar2);
        FUN_001c70ac(uVar2,DAT_001b4dd4,DAT_001b4dd0);
        FUN_00201f54(auStack_20);
      }
      FUN_001f06d4(uVar1);
      return DAT_001b4dcc;
    }
    uVar2 = FUN_001b9860(**(undefined4 **)(param_1 + 0xc));
  }
  else {
    uVar2 = FUN_001b3b56();
  }
  FUN_001f06d4(uVar1);
  return uVar2;
}

