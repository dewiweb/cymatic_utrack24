// rea decompile_all
// name: FUN_000fd6fc
// address: 0xfd6fc
// body: available
// range: 0xfd6fc-0xfd777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0xfd774 to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fd6fc(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  param_2 = (undefined4 *)*param_2;
  piVar4 = (int *)*DAT_000fd778;
  puVar2 = DAT_000fd778;
  if (param_2 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)piVar4[0xa0];
  }
  if (param_2 == (undefined4 *)0x0 || param_2 == puVar2) {
    return;
  }
  uVar5 = *DAT_000fd77c;
  uVar6 = DAT_000fd77c[1];
  puVar2 = (undefined4 *)FUN_001f01c4(0x14,1);
  uVar1 = DAT_000fd780;
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[4] = param_2;
    *puVar2 = uVar1;
    puVar2[1] = piVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
  }
  iVar3 = (**(code **)(*piVar4 + 0x2c))(piVar4,puVar2,0);
  if (iVar3 == 0) {
    thunk_FUN_00002898(DAT_000fd784);
    return;
  }
  piVar4[0xa0] = (int)param_2;
  return;
}

