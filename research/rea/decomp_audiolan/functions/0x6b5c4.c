// rea decompile_all
// name: FUN_0006b5c4
// address: 0x6b5c4
// body: available
// range: 0x6b5c4-0x6b637 inclusive
// range: 0x6b6c0-0x6b6c7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Control flow encountered bad instruction data */

void FUN_0006b5c4(void)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = *DAT_0006b6c8;
  piVar3 = DAT_0006b6c8;
  if (iVar1 != 0) {
    do {
      FUN_000028a4(DAT_0006b6cc,iVar1,piVar3[1]);
      uVar2 = extraout_r1;
      for (piVar4 = DAT_0006b6d0; iVar1 = *piVar4, iVar1 != 0; piVar4 = piVar4 + 1) {
        uVar2 = (uint)*(byte *)(iVar1 + 0x14);
        if (uVar2 == 0) {
          uVar2 = *(uint *)(iVar1 + 0x18);
          switch((char)piVar3[2]) {
          case '\0':
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case '\x01':
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case '\x02':
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case '\x03':
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case '\x04':
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case '\x05':
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case '\x06':
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case '\a':
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case '\b':
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case '\t':
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          case '\n':
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
      FUN_000028a4(DAT_0006b6d4,uVar2);
      piVar3 = piVar3 + 3;
      iVar1 = *piVar3;
    } while (iVar1 != 0);
    return;
  }
  return;
}

