// rea decompile_all
// name: FUN_0001d8c8
// address: 0x1d8c8
// body: available
// range: 0x1d8c8-0x1d949 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0001d8c8(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  iVar3 = *(int *)(param_1 + 0xdc);
  iVar5 = *DAT_0001d94c;
  iVar4 = iVar3 + -0x10000000;
  piVar6 = *(int **)(param_4 * 4 + param_1 + 0x15c);
  do {
    iVar2 = iVar4;
    if (piVar6 == (int *)0x0) {
      piVar6 = (int *)0x0;
LAB_0001d912:
      if (piVar6 != (int *)0x0) {
        do {
          iVar1 = piVar6[0xc] + *DAT_0001d94c * piVar6[3];
          if ((-1 < (iVar3 + iVar5) - iVar1) && (iVar2 - iVar1 < 0)) {
            iVar2 = iVar1;
          }
          piVar6 = (int *)*piVar6;
        } while (piVar6 != (int *)0x0);
      }
LAB_0001d932:
      if (iVar2 - iVar4 < 1) {
        return 0;
      }
      if (iVar2 == 0) {
        iVar2 = 1;
      }
      return iVar2;
    }
    if ((piVar6[1] == param_3) && (iVar1 = FUN_0003b48a(piVar6[4],param_2), iVar1 != 0)) {
      if (piVar6 == (int *)0x0) goto LAB_0001d932;
      piVar6 = (int *)piVar6[2];
      goto LAB_0001d912;
    }
    piVar6 = (int *)*piVar6;
  } while( true );
}

