// rea decompile_all
// name: FUN_001fe29c
// address: 0x1fe29c
// body: available
// range: 0x1fe29c-0x1fe357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1fe31c to 0x763a8 FUN_000763a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1fe338 to 0x763a8 FUN_000763a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1fe354 to 0x763a8 FUN_000763a8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_001fe29c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00249204(param_2);
  FUN_001fe1b4();
  uVar3 = FUN_002492ec();
  uVar3 = FUN_00248dc0((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),0,DAT_001fe358);
  FUN_00249444((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar2,(int)((ulonglong)uVar2 >> 0x20)
              );
  uVar1 = FUN_00249194();
  FUN_0004787c(param_1,uVar1);
  if (param_1 == 0) {
    FUN_000762f4(5,param_4,param_5);
    FUN_000763a8(5);
    return;
  }
  if (param_1 != 1) {
    if (param_1 != 2) {
      return;
    }
    FUN_000762f4(7,param_4,param_5);
    FUN_000763a8(7);
    return;
  }
  FUN_000762f4(6,param_4,param_5);
  FUN_000763a8(6);
  return;
}

