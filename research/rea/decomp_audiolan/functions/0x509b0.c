// rea decompile_all
// name: FUN_000509b0
// address: 0x509b0
// body: available
// range: 0x509b0-0x50a7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x509ec to 0x110dbc FUN_00110dbc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000509b0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x124) == '\0') {
    return;
  }
  if (param_3 == 1) {
    *(bool *)(param_1 + 0x125) = *(char *)(param_1 + 0x125) == '\0';
    return;
  }
  if (param_3 == 2) {
    uVar2 = FUN_00110eec();
    FUN_00110dbc(uVar2,300,1);
    if (*(char *)(param_1 + 300) == '\0') {
      if (*(char *)(param_1 + 0x125) == '\0') {
        iVar3 = *(int *)(param_1 + 0x128) + -1;
      }
      else {
        iVar3 = *(int *)(param_1 + 0x128) + 1;
      }
      *(int *)(param_1 + 0x128) = iVar3;
    }
    FUN_0006d778(param_1 + 4,3);
    FUN_0006d5f4(param_1 + 4,3,0,*(undefined4 *)(param_1 + 0x128),0);
    cVar1 = *(char *)(param_1 + 300) + '\x01';
    *(char *)(param_1 + 300) = cVar1;
    if (cVar1 == '\x05') {
      *(undefined1 *)(param_1 + 300) = 0;
    }
    return;
  }
  if (param_3 == 3) {
    uVar2 = FUN_00110eec();
    FUN_00110dbc(uVar2,300,0,param_4);
    return;
  }
  return;
}

