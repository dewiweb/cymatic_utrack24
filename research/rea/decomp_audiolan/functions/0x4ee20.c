// rea decompile_all
// name: FUN_0004ee20
// address: 0x4ee20
// body: available
// range: 0x4ee20-0x4ee57 inclusive
// range: 0x4eec0-0x4ef0f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

bool FUN_0004ee20(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_14 [2];
  
  iVar1 = FUN_00041c14(s__cfg_AppSettings_DSP_0004ef10,local_14);
  if (iVar1 != 0) {
    switch(param_2) {
    case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 1:
    case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 3:
    case 4:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    case 5:
    case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    default:
      FUN_00041dd4(local_14[0]);
    }
  }
  uVar2 = FUN_001e3fb4(0x8c);
  uVar2 = FUN_001e3d8c(uVar2,DAT_0004ef90);
  FUN_001e400c(uVar2,DAT_0004ef94);
  uVar2 = FUN_001e3f1c();
  FUN_000e2078(param_1[1],uVar2);
  iVar1 = (**(code **)(*param_1 + 0x108))(param_1);
  return iVar1 != 0;
}

