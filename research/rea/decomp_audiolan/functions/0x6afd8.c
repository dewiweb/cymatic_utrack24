// rea decompile_all
// name: FUN_0006afd8
// address: 0x6afd8
// body: available
// range: 0x6afd8-0x6b10b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6b0b4 to 0x1a0d18 FUN_001a0d18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0006b0a8) */

void FUN_0006afd8(void)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar1 = DAT_0006b10c;
  FUN_001a0700();
  for (piVar2 = DAT_0006b110; iVar4 = *piVar2, piVar3 = DAT_0006b114, iVar4 != 0;
      piVar2 = piVar2 + 1) {
    if (*(char *)(iVar4 + 0x14) == '\0') {
      puVar5 = *(undefined4 **)(iVar4 + 0x18);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
    }
    else if (*(char *)(iVar4 + 0x14) == '\x01') {
      puVar5 = *(undefined4 **)(iVar4 + 0x18);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
    }
  }
  for (; iVar4 = *piVar3, iVar4 != 0; piVar3 = piVar3 + 1) {
    if (*(char *)(iVar4 + 0x14) == '\0') {
      puVar5 = *(undefined4 **)(iVar4 + 0x18);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[6] = 0;
      puVar5[7] = 0;
      puVar5[8] = 0;
      puVar5[9] = 0;
      puVar5[0xb] = 0;
      puVar5[10] = 0;
    }
    else if (*(char *)(iVar4 + 0x14) == '\x01') {
      puVar5 = *(undefined4 **)(iVar4 + 0x18);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      puVar5[5] = 0;
    }
  }
  FUN_001a0d18(uVar1);
  return;
}

