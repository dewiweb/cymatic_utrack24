// rea decompile_all
// name: FUN_000156f0
// address: 0x156f0
// body: available
// range: 0x156f0-0x157b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x157b0 to 0x17b0f0 FUN_0017b0f0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000156f0(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = DAT_000157b4;
  uVar3 = FUN_001afb58(DAT_000157b4);
  piVar2 = DAT_000157b8;
  *(int *)(iVar1 + 0x4d0) = *(int *)(iVar1 + 0x4d0) + 1;
  if ((uVar3 & 6) != 0) {
    *(int *)(iVar1 + 0x4d4) = *(int *)(iVar1 + 0x4d4) + 1;
    if ((uVar3 & 4) != 0) {
      *piVar2 = *(int *)(iVar1 + 0x4dc) + 1;
    }
    local_18 = FUN_00073388(0);
    local_14 = FUN_0017bfc0();
    thunk_EXT_FUN_004005e0(iVar1 + 0x164,&local_18,0);
  }
  if ((uVar3 & 0xc00) != 0) {
    *piVar2 = *(int *)(iVar1 + 0x4dc) + 1;
  }
  if ((uVar3 & 0xf0) != 0) {
    *(int *)(iVar1 + 0x4d8) = *(int *)(iVar1 + 0x4d8) + 1;
    if ((uVar3 & 0x70) != 0) {
      *(int *)(iVar1 + 0x4e0) = *(int *)(iVar1 + 0x4e0) + 1;
    }
    FUN_0017b0f0(iVar1 + 0x1a4);
    return;
  }
  return;
}

