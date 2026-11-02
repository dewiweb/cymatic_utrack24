// rea decompile_all
// name: FUN_00237a74
// address: 0x237a74
// body: available
// range: 0x237a74-0x237b37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00237a74(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar4 = 1;
  uStack_20 = param_3;
  uStack_1c = param_4;
  if (param_2 == 0) {
    if (*param_1 == 0) {
      iVar4 = FUN_0020b044(0,param_1);
    }
    else {
      iVar4 = FUN_0020b044(*(undefined4 *)(*param_1 + 4),param_1);
    }
  }
  uVar1 = FUN_002302b8(&uStack_1c,param_1);
  piVar2 = (int *)FUN_00230294(uVar1,1,*param_1);
  uVar1 = FUN_00230a88(&uStack_20,param_1);
  iVar3 = FUN_00230a64(uVar1,iVar4,param_1[3]);
  piVar2[2] = iVar3;
  *piVar2 = *param_1;
  piVar2[1] = iVar4;
  *param_1 = (int)piVar2;
  param_1[2] = *(int *)(*param_1 + 8);
  param_1[3] = param_1[2] + iVar4 * 0xc;
  return;
}

