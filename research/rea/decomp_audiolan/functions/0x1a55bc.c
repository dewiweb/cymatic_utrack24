// rea decompile_all
// name: FUN_001a55bc
// address: 0x1a55bc
// body: available
// range: 0x1a55bc-0x1a55d1 inclusive
// range: 0x1a55da-0x1a5647 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001a55bc(int param_1)

{
  int iVar1;
  undefined4 extraout_r1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  FUN_0016da84();
  switch(extraout_r1) {
  default:
    goto switchD_001a55d0_caseD_0;
  case 1:
    iVar3 = DAT_001a5648;
    goto LAB_001a55e6;
  case 2:
    uVar4 = 2;
    iVar3 = DAT_001a564c;
    break;
  case 3:
    iVar3 = DAT_001a5650;
LAB_001a55e6:
    uVar4 = 5;
    break;
  case 4:
    uVar4 = 0x21;
    iVar3 = DAT_001a5654;
    break;
  case 5:
    uVar4 = 6;
    iVar3 = DAT_001a5658;
    break;
  case 6:
    uVar4 = 4;
    iVar3 = DAT_001a565c;
  }
  uVar2 = uVar4 & 1;
  iVar1 = 0;
  if (uVar2 != 0) {
    do {
      if (*(int *)(iVar3 + iVar1 * 8) == param_1) {
        return *(undefined4 *)(iVar1 * 8 + iVar3 + 4);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar2);
  }
  if (uVar2 < uVar4) {
    do {
      if (*(int *)(iVar3 + uVar2 * 8) == param_1) {
        return *(undefined4 *)(uVar2 * 8 + iVar3 + 4);
      }
      if (*(int *)(uVar2 * 8 + iVar3 + 8) == param_1) {
        return *(undefined4 *)(uVar2 * 8 + iVar3 + 0xc);
      }
      uVar2 = uVar2 + 2;
    } while ((int)uVar2 < (int)uVar4);
  }
switchD_001a55d0_caseD_0:
  return 0;
}

