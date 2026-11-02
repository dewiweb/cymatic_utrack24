// rea decompile_all
// name: FUN_000b0ff0
// address: 0xb0ff0
// body: available
// range: 0x79460-0x79483 inclusive
// range: 0xb0ff0-0xb10a3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x79480 to 0x710f8 FUN_000710f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000b0ff0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_000b10a4 + 0x80;
  *param_1 = DAT_000b10a4;
  param_1[0x45] = iVar2;
  FUN_00071c88(param_1);
  iVar2 = FUN_001b6c4c(param_1 + 0x50);
  if (iVar2 != 0) {
    (**(code **)(*(int *)param_1[0x52] + 0x38))((int *)param_1[0x52],param_1 + 0x45);
  }
  *DAT_000b10a8 = 0;
  iVar3 = param_1[0x53];
  for (iVar2 = iVar3; iVar2 != param_1[0x54]; iVar2 = iVar2 + 0x20) {
  }
  FUN_00173a54(iVar3,param_1[0x55] - iVar3 >> 5,0);
  iVar2 = FUN_000b1228(param_1 + 0x50);
  iVar2 = FUN_000b1228(iVar2 + -0xc);
  iVar2 = FUN_000b1228(iVar2 + -0xc);
  iVar2 = FUN_000b1228(iVar2 + -0xc);
  puVar1 = (undefined4 *)(iVar2 + -0x11c);
  *puVar1 = DAT_00079484;
  FUN_00071c88(puVar1);
  FUN_000710f8(puVar1);
  return;
}

