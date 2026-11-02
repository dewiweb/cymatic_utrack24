// rea decompile_all
// name: FUN_000fd810
// address: 0xfd810
// body: available
// range: 0xfd810-0xfd88f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfd88c to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fd810(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint unaff_r5;
  undefined4 uVar4;
  undefined4 uVar5;
  
  piVar3 = (int *)*DAT_000fd890;
  if (param_2 != 0) {
    unaff_r5 = 1;
  }
  if (param_2 == 0) {
    unaff_r5 = 0;
  }
  if (*(byte *)(piVar3 + 0xa3) != unaff_r5) {
    uVar4 = *DAT_000fd894;
    uVar5 = DAT_000fd894[1];
    puVar1 = (undefined4 *)FUN_001f01c4(0x14,1);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = DAT_000fd898;
      puVar1[1] = piVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      *(char *)(puVar1 + 4) = (char)unaff_r5;
    }
    iVar2 = (**(code **)(*piVar3 + 0x2c))(piVar3,puVar1,0);
    if (iVar2 == 0) {
      thunk_FUN_00002898(DAT_000fd89c);
      return;
    }
    *(char *)(piVar3 + 0xa3) = (char)unaff_r5;
    return;
  }
  return;
}

