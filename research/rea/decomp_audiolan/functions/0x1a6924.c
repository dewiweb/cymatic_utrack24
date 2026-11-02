// rea decompile_all
// name: FUN_001a6924
// address: 0x1a6924
// body: available
// range: 0x1a6924-0x1a69bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a6924(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28 [2];
  int *local_20;
  int local_1c;
  
  iVar5 = 0;
  iVar1 = FUN_001a4d44();
  if (0 < iVar1) {
    if ((code *)*DAT_001a69c0 == entry) {
      iVar2 = FUN_0019b388(iVar1 * 4);
    }
    else {
      iVar2 = (*(code *)*DAT_001a69c0)(iVar1 * 4);
    }
    if (iVar2 == 0) {
      return 0xfffffffc;
    }
    uVar3 = FUN_001a4c0a(param_1 + 0x30,local_28);
    while ((local_28[0] != 0 && (local_1c < *local_20))) {
      *(undefined4 *)(iVar2 + iVar5 * 4) = uVar3;
      iVar5 = iVar5 + 1;
      uVar3 = FUN_001a4c2a(local_28);
    }
    iVar5 = 0;
    if (0 < iVar1) {
      do {
        iVar6 = *(int *)(iVar2 + iVar5 * 4);
        while (iVar4 = FUN_001a3e96(*(undefined4 *)(iVar6 + 8)), iVar4 != 0) {
          FUN_001a7238(iVar6);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar1);
    }
    if (iVar2 != 0) {
      if ((code *)*DAT_001a69c4 == entry) {
        FUN_0018a280(iVar2);
      }
      else {
        (*(code *)*DAT_001a69c4)(iVar2);
      }
    }
  }
  return 0;
}

