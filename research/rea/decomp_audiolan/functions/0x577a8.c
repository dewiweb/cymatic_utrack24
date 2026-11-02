// rea decompile_all
// name: FUN_000577a8
// address: 0x577a8
// body: available
// range: 0x577a8-0x5784b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x57848 to 0x17b0f0 FUN_0017b0f0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000577a8(int param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_28;
  undefined1 auStack_24 [8];
  int iStack_1c;
  uint local_18;
  int iStack_14;
  
  iVar3 = *(int *)(param_1 + 0x138);
  iVar2 = iVar3;
  iVar1 = *(int *)(iVar3 + 4);
  while (iVar1 != 0) {
    if (*(uint *)(iVar1 + 0x10) < param_2) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if ((iVar2 == iVar3) || (param_2 < *(uint *)(iVar2 + 0x10))) {
    iVar2 = iVar3;
  }
  iStack_1c = param_1;
  local_18 = param_2;
  iStack_14 = param_3;
  if (iVar2 != *(int *)(param_1 + 0x138)) {
    local_28 = iVar2;
    FUN_001c1c88(auStack_24,param_1 + 0x128,&local_28);
  }
  if (param_3 != 0) {
    FUN_0017b0f0(param_3);
    return;
  }
  return;
}

