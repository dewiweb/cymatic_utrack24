// rea decompile_all
// name: FUN_0013c880
// address: 0x13c880
// body: available
// range: 0x13c880-0x13c98f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0013c880(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [64];
  
  FUN_0011eda0();
  iVar1 = FUN_000a0f3c();
  if (iVar1 == 0x16) {
    for (iVar1 = 0; iVar1 <= param_1[0x40]; iVar1 = iVar1 + 1) {
      FUN_000028cc(auStack_5c,s__s__02d__02d_0013c994,&DAT_0013c990,iVar1 * 8 + 1,iVar1 * 8 + 8);
      uVar2 = FUN_00232964(auStack_60,auStack_5c,auStack_64);
      uVar3 = FUN_00243490(param_1 + 0x25,iVar1);
      FUN_00232a4c(uVar3,uVar2);
      FUN_002329f0(auStack_60);
      uVar2 = FUN_00243490(param_1 + 0x2b,iVar1);
      if (param_1[0x37] == 3) {
        iVar4 = DAT_0013c9a4 + param_1[iVar1 + 0x38] * 4;
      }
      else {
        iVar4 = DAT_0013c9a8 + param_1[iVar1 + 0x38] * 4;
      }
      FUN_00232a4c(uVar2,iVar4);
    }
    iVar1 = (**(code **)(*param_1 + 0x74))(param_1,1);
  }
  return iVar1;
}

