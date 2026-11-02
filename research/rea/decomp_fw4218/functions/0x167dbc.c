// rea decompile_all
// name: FUN_00167dbc
// address: 0x167dbc
// body: available
// range: 0x167dbc-0x167e6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00167dbc(int param_1)

{
  byte *pbVar1;
  short sVar2;
  short *psVar3;
  short *psVar4;
  short *psVar5;
  int iVar6;
  bool bVar7;
  
  psVar4 = *(short **)(param_1 + 4);
  if (psVar4 != (short *)0x0) {
    psVar5 = psVar4;
    iVar6 = *(int *)(psVar4 + 0x2e);
    while (iVar6 != 0) {
      psVar5 = *(short **)(psVar5 + 0x2e);
      iVar6 = *(int *)(psVar5 + 0x2e);
    }
    while (psVar5 != (short *)0x0) {
      sVar2 = *psVar5;
      bVar7 = sVar2 == 1;
      if (bVar7) {
        sVar2 = psVar5[1];
      }
      if (bVar7 && sVar2 == 1) {
        return *(undefined4 *)(psVar5 + 2);
      }
      if (psVar5 == (short *)0x0) {
        psVar5 = psVar4;
        iVar6 = *(int *)(psVar4 + 0x2e);
        if (psVar4 == (short *)0x0) {
          return 0;
        }
        while (iVar6 != 0) {
          psVar3 = psVar5 + 0x2e;
          psVar5 = *(short **)psVar3;
          iVar6 = *(int *)(*(short **)psVar3 + 0x2e);
        }
      }
      else {
        pbVar1 = (byte *)(psVar5 + 0x32);
        psVar5 = *(short **)(psVar5 + 0x30);
        psVar3 = psVar5;
        if ((*pbVar1 & 0x80) == 0) {
          do {
            psVar5 = psVar3;
            if (psVar5 == (short *)0x0) {
              return 0;
            }
            psVar3 = *(short **)(psVar5 + 0x2e);
          } while (*(short **)(psVar5 + 0x2e) != (short *)0x0);
        }
      }
    }
  }
  return 0;
}

