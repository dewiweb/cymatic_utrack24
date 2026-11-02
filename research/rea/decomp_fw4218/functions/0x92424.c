// rea decompile_all
// name: FUN_00092424
// address: 0x92424
// body: available
// range: 0x92424-0x924d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00092424(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  uStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  puVar1 = (undefined4 *)FUN_00130fac(param_1);
  *puVar1 = _DAT_000924d8;
  iVar2 = FUN_00091838(puVar1 + 1,s___UIService_000924da + 2);
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  iVar2 = FUN_00068008(iVar2 + 0x30);
  FUN_00203d74(&uStack_20);
  uVar3 = FUN_000b4964();
  iVar4 = FUN_000b4840(uVar3,s___UIService_000924da + 2,&uStack_20);
  if (iVar4 == 0) {
    FUN_00002898(DAT_000924e8);
    thunk_FUN_000b1228(&uStack_20);
  }
  else {
    piVar5 = (int *)FUN_0022bc54(&uStack_20);
    (**(code **)(*piVar5 + 0x14))(piVar5,iVar2 + -0x34);
    thunk_FUN_000b1228(&uStack_20);
  }
  return CONCAT44(uStack_20,iVar2 + -0x34);
}

