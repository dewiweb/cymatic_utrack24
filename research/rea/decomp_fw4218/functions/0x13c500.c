// rea decompile_all
// name: FUN_0013c500
// address: 0x13c500
// body: available
// range: 0x13c500-0x13c613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0013c500(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_20;
  undefined4 uStack_1c;
  
  if (param_1[0x37] == 1) {
    iVar1 = 2;
  }
  else {
    iVar1 = 0;
  }
  param_1[0x39] = iVar1;
  iStack_20 = param_3;
  uStack_1c = param_4;
  FUN_00013290(s_Max_Index_is__d_0013c614,param_1[0x39]);
  uVar2 = FUN_0023299c(&uStack_1c,&iStack_20);
  FUN_0024331c(param_1 + 0x25,param_1[0x39] + 1,uVar2);
  FUN_002329f0(&uStack_1c);
  uVar2 = FUN_0023299c(&uStack_1c,&iStack_20);
  FUN_0024331c(param_1 + 0x28,param_1[0x39] + 1,uVar2);
  FUN_002329f0(&uStack_1c);
  uVar2 = FUN_0023299c(&uStack_1c,&iStack_20);
  FUN_0024331c(param_1 + 0x2b,param_1[0x39] + 1,uVar2);
  FUN_002329f0(&uStack_1c);
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 0x36) = 0;
    FUN_0013c44c(param_1);
    param_1[0x32] = 0;
    (**(code **)(*param_1 + 0x50))(param_1);
  }
  return;
}

