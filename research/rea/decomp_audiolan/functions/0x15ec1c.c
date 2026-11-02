// rea decompile_all
// name: FUN_0015ec1c
// address: 0x15ec1c
// body: available
// range: 0x15ec1c-0x15ecfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0015ec1c(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_18 [4];
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  
  FUN_0007b98c(auStack_18);
  local_14 = *(undefined1 *)(param_2 + 0x30);
  local_13 = *(undefined1 *)(param_2 + 0x31);
  local_12 = *(undefined1 *)(param_2 + 0x32);
  local_11 = *(undefined1 *)(param_2 + 0x33);
  iVar1 = FUN_00156078(auStack_18);
  if ((iVar1 == 5 || iVar1 == 6) || iVar1 == 7) {
    iVar1 = FUN_0016deb0(param_3,DAT_0015ed00,DAT_0015ecfc,0xffffffff);
    if ((iVar1 != 0) &&
       (puVar4 = *(undefined4 **)(iVar1 + 0x18), *(undefined4 **)(iVar1 + 0x1c) != puVar4)) {
      do {
        uVar2 = FUN_00154ddc(*puVar4);
        iVar3 = FUN_00160748(param_2,uVar2);
        if ((iVar3 != 0) && (*(char *)(iVar3 + 0x29) == '\0')) goto LAB_0015ece8;
        puVar4 = puVar4 + 1;
      } while (*(undefined4 **)(iVar1 + 0x1c) != puVar4);
    }
    FUN_0007b9a4(auStack_18);
    return 0;
  }
LAB_0015ece8:
  FUN_0007b9a4(auStack_18);
  return 1;
}

