// rea decompile_all
// name: FUN_001a73b4
// address: 0x1a73b4
// body: available
// range: 0x1a73b4-0x1a7473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a73b4(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  code *pcVar4;
  
  if (param_1 != 0) {
    cVar1 = *(char *)(param_1 + 0x44);
    if (cVar1 == '\0') {
      FUN_0016e5c4(*(undefined4 *)(param_1 + 0x48));
    }
    else if (cVar1 == '\x01') {
      FUN_0016e890(*(undefined4 *)(param_1 + 0x4c));
    }
    else if (cVar1 == '\x02') {
      FUN_0016ed5c(*(undefined4 *)(param_1 + 0x50));
    }
    else {
      FUN_0016effc(*(undefined4 *)(param_1 + 0x54));
    }
    puVar2 = DAT_001a7474;
    if (*(int *)(param_1 + 8) != 0) {
      iVar3 = FUN_001a3e96();
      while (iVar3 != 0) {
        FUN_001a52e0(*(undefined4 *)(iVar3 + 8));
        if (iVar3 != 0) {
          pcVar4 = (code *)*puVar2;
          if (pcVar4 == entry) {
            FUN_0018a280(iVar3);
          }
          else {
            (*pcVar4)(iVar3);
          }
        }
        iVar3 = FUN_001a3e96(*(undefined4 *)(param_1 + 8));
      }
      FUN_001a3e64(*(undefined4 *)(param_1 + 8));
    }
    FUN_001a52e0(*(undefined4 *)(param_1 + 0x20));
    FUN_001a52e0(*(undefined4 *)(param_1 + 0x24));
    FUN_001a52e0(*(undefined4 *)(param_1 + 0x28));
    FUN_001a88d0(*(undefined4 *)(param_1 + 0xc));
    FUN_001a40ac(*(undefined4 *)(param_1 + 0x10));
    FUN_001a71d0(*(undefined4 *)(param_1 + 0x14));
    FUN_001a2ca4(*(undefined4 *)(param_1 + 0x18));
    FUN_001a37f8(*(undefined4 *)(param_1 + 0x1c));
    if (param_1 != 0) {
      pcVar4 = (code *)*puVar2;
      if (pcVar4 == entry) {
        FUN_0018a280(param_1);
      }
      else {
        (*pcVar4)(param_1);
      }
    }
    return 0;
  }
  return 0xfffffffe;
}

