// rea decompile_all
// name: FUN_0013a954
// address: 0x13a954
// body: available
// range: 0x13a954-0x13aa37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0013a954(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined2 param_5,
            undefined1 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 local_20;
  
  local_20 = *(undefined4 *)(param_4 + 0x188);
  uVar3 = 0;
  iVar1 = FUN_00132c40(param_3,param_1,0x3700,param_2);
  if (iVar1 == 0x17) {
    FUN_0012c108(param_4 + 0x584,0,param_2,*(undefined2 *)(param_2 + 0xc));
  }
  else if ((iVar1 == 0 || iVar1 == 0xd) && (iVar1 = FUN_0016d7a4(0xe0,DAT_0013aa38), iVar1 != 0)) {
    local_20 = 2;
    piVar2 = (int *)FUN_0013b694(iVar1,0,param_4);
    if (piVar2 != (int *)0x0) {
      *(undefined2 *)(piVar2 + 0x1c) = param_5;
      *(undefined1 *)((int)piVar2 + 0x72) = param_6;
      uVar3 = (**(code **)(*piVar2 + 0x80))(piVar2,param_1,&local_20,0);
      (**(code **)(*piVar2 + 0x3c))(piVar2);
    }
  }
  return uVar3;
}

