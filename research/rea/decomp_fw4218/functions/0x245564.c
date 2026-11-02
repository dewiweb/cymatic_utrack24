// rea decompile_all
// name: FUN_00245564
// address: 0x245564
// body: available
// range: 0x245564-0x245613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00245564(int param_1,int param_2,int param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iStack_2c;
  undefined4 uStack_28;
  
  iVar5 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  while( true ) {
    iVar1 = iVar5 * 2;
    iVar3 = iVar1 + 2;
    if (param_3 <= iVar3) break;
    iVar2 = (*param_5)(param_1 + iVar3 * 8,param_1 + (iVar1 + 1) * 8);
    if (iVar2 != 0) {
      iVar3 = iVar1 + 1;
    }
    FUN_00070a84(param_1 + iVar5 * 8,param_1 + iVar3 * 8);
    iVar5 = iVar3;
  }
  if (iVar3 == param_3) {
    FUN_00070a84(param_1 + iVar5 * 8,param_1 + (iVar1 + 1) * 8);
    iVar5 = iVar1 + 1;
  }
  uVar4 = FUN_00070a08(&iStack_2c,param_4);
  FUN_00245468(param_1,iVar5,param_2,uVar4,param_5);
  FUN_00070a68(&iStack_2c);
  return;
}

