// rea decompile_all
// name: FUN_00015288
// address: 0x15288
// body: available
// range: 0x15288-0x152f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00015288(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  FUN_00002864(DAT_00015584,0xff,param_1,param_2);
  iVar2 = DAT_00015584;
  *(undefined1 *)(DAT_00015584 + 0xff) = 0;
  FUN_000163bc();
  iVar1 = DAT_0001557c;
  piVar3 = (int *)FUN_00016440(*(undefined4 *)(DAT_0001557c + 0x18));
  if (piVar3 == (int *)0x0) {
    return;
  }
  uVar4 = FUN_000034d0(iVar2);
                    /* WARNING: Could not recover jumptable at 0x000152f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x20))(piVar3,*(undefined4 *)(iVar1 + 0x18),iVar2,uVar4);
  return;
}

