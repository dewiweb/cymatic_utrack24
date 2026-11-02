// rea decompile_all
// name: FUN_0010ad78
// address: 0x10ad78
// body: available
// range: 0x10ad78-0x10ae73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10ae70 to 0x1a43c <EXTERNAL>::thunk_EXT_FUN_0040010c (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0010ad78(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [68];
  
  FUN_001a0700(param_1 + 0xee);
  piVar1 = (int *)param_1[0x4e];
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[3];
    param_1[0x4e] = iVar2;
    if (iVar2 == 0) {
      param_1[0x4f] = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    param_1[0x50] = param_1[0x50] + -1;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar3 = piVar1;
  }
  FUN_001a0d18(param_1 + 0xee);
  if (piVar3 != (int *)0x0) {
    FUN_000eea30(&local_68);
    FUN_0010a4f0(param_1,piVar3,&local_68);
    FUN_001a0700(param_1 + 0xee);
    (**(code **)(*param_1 + 0x30))(param_1,&local_68,piVar3[8]);
    FUN_001a0d18(param_1 + 0xee);
    (**(code **)(*piVar3 + 4))(piVar3);
    FUN_000ee880(&local_68);
    FUN_000e9f98(auStack_54);
    FUN_000e9f98(auStack_5c);
    local_64 = 0;
    local_68 = 0;
    local_60 = 0;
  }
  if (param_1[0x50] != 0) {
    thunk_EXT_FUN_0040010c(param_1 + 0x52);
    return;
  }
  return;
}

