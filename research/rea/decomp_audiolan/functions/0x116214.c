// rea decompile_all
// name: FUN_00116214
// address: 0x116214
// body: available
// range: 0x116214-0x1162a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1162a0 to 0x1179d0 FUN_001179d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00116214(int *param_1)

{
  int iVar1;
  undefined1 auStack_18 [16];
  
  FUN_001179e0();
  while ((short)param_1[0x19] != 0) {
    FUN_00160270(auStack_18,param_1 + 0x15,0);
    FUN_00115e98(param_1,auStack_18);
    iVar1 = FUN_0015ea90(auStack_18);
    if (iVar1 == 0) {
      (**(code **)(*param_1 + 0xb4))(param_1,1,auStack_18);
    }
    FUN_00132df0(param_1 + 0x15,0);
  }
  FUN_00132d94(param_1 + 0x15);
  FUN_00129060(param_1[0x1b]);
  FUN_001179d0(param_1);
  return;
}

