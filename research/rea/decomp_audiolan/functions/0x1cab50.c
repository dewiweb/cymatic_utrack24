// rea decompile_all
// name: FUN_001cab50
// address: 0x1cab50
// body: available
// range: 0x1cab50-0x1cac6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_001cab50(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piStack_28;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  piStack_28 = param_1;
  local_24 = param_2;
  uStack_20 = param_3;
  uStack_1c = param_4;
  FUN_001ca12c(param_1,param_2);
  FUN_001ca14c(&uStack_1c,param_2);
  iVar1 = FUN_001d39b4(param_3,&uStack_1c);
  if (iVar1 != 0) {
    FUN_001ca12c(&uStack_20,param_2);
    iVar1 = FUN_001d39b4(param_4,&uStack_20);
    if ((iVar1 != 0) && (*(int *)(param_2 + 0x14) != 0)) {
      puVar2 = (undefined4 *)FUN_001d7b60(param_2);
      FUN_001caebc(param_2,*puVar2);
      puVar2 = (undefined4 *)FUN_001d7b38(param_2);
      *puVar2 = *(undefined4 *)(param_2 + 0x10);
      puVar2 = (undefined4 *)FUN_001d7b60(param_2);
      *puVar2 = 0;
      puVar2 = (undefined4 *)FUN_001d7b4c(param_2);
      *puVar2 = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)(param_2 + 0x14) = 0;
      FUN_001ca12c(&local_24,param_2);
      *param_1 = local_24;
      goto LAB_001cac68;
    }
  }
  while (iVar1 = FUN_001d39d8(param_3,param_4), iVar1 != 0) {
    FUN_001c0510(&piStack_28,param_3,0);
    FUN_001ca178(&local_24,param_2,&piStack_28);
    *param_1 = local_24;
  }
LAB_001cac68:
  return CONCAT44(local_24,piStack_28);
}

