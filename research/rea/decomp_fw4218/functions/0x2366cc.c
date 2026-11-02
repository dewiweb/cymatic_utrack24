// rea decompile_all
// name: FUN_002366cc
// address: 0x2366cc
// body: available
// range: 0x2366cc-0x23679f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_002366cc(undefined4 param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_20;
  int *local_1c;
  undefined4 uStack_18;
  
  iStack_20 = param_2;
  local_1c = param_3;
  uStack_18 = param_4;
  FUN_00236654(&uStack_18,param_2);
  iVar1 = FUN_0022d854(param_3,&uStack_18);
  if (iVar1 == 0) {
    local_1c = *(int **)*param_3;
    FUN_002364f4(&iStack_20,param_2,&local_1c);
    **(undefined4 **)(*param_3 + 4) = *(undefined4 *)*param_3;
    *(undefined4 *)(*(int *)*param_3 + 4) = *(undefined4 *)(*param_3 + 4);
    *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + -1;
    uVar2 = FUN_0022ce18(param_2,*param_3 + 8);
    FUN_002303f4(param_2,uVar2);
    FUN_002364e4(param_2,*param_3);
    uVar2 = FUN_00232c04(param_1,&iStack_20);
  }
  else {
    uVar2 = FUN_00236654(param_1,param_2);
  }
  return CONCAT44(iStack_20,uVar2);
}

