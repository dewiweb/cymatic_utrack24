// rea decompile_all
// name: FUN_0003ea08
// address: 0x3ea08
// body: available
// range: 0x3ea08-0x3ea7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0003ea08(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 auStack_38 [20];
  int local_24;
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  FUN_00003628(auStack_38,DAT_0003ea80,0x14);
  FUN_0003ea84(local_20,uStack_1c,uStack_18,auStack_38);
  iVar1 = local_20;
  piVar3 = *(int **)(&DAT_00001fb8 + local_20);
  do {
    if (piVar3 == (int *)0x0) {
      return;
    }
    local_24 = (int)piVar3 + 0x47;
    iVar2 = FUN_00195368(auStack_38,local_24,0x14);
    if (iVar2 == 0) {
      for (puVar4 = *(undefined4 **)(&DAT_00001fb8 + iVar1);
          (puVar4 != (undefined4 *)0x0 && (puVar4 != piVar3)); puVar4 = (undefined4 *)*puVar4) {
        iVar2 = FUN_00195368((int)piVar3 + 0x47,(int)puVar4 + 0x47,0x14);
        if (iVar2 != 0) goto LAB_0003ea76;
      }
      FUN_00003628(auStack_38,local_24,0x14);
      FUN_0003ea84(local_20,uStack_1c,uStack_18,auStack_38);
    }
LAB_0003ea76:
    piVar3 = (int *)*piVar3;
  } while( true );
}

