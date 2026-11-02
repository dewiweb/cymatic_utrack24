// rea decompile_all
// name: FUN_000233e8
// address: 0x233e8
// body: available
// range: 0x233e8-0x2345f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000233e8(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  FUN_000209c2();
  iVar1 = FUN_0016dc78();
  iVar3 = *(int *)(param_2 + 4);
  piVar2 = *(int **)(iVar1 * 4 + param_1 + 0x15c);
  do {
    if (piVar2 == (int *)0x0) {
      piVar2 = (int *)0x0;
joined_r0x00023436:
      for (; piVar2 != (int *)0x0; piVar2 = (int *)*piVar2) {
        if (piVar2[0x10] == param_2) {
          piVar2[0xc] = *(undefined4 *)(param_1 + 0xdc);
          piVar2[3] = param_3;
          piVar2[0x11] = 0;
          FUN_0003f53c(param_1,piVar2);
        }
      }
      return;
    }
    if ((piVar2[1] == iVar3) && (iVar1 = FUN_0003b48a(piVar2[4],param_2 + 0x130), iVar1 != 0)) {
      if (piVar2 == (int *)0x0) {
        return;
      }
      piVar2 = (int *)piVar2[2];
      goto joined_r0x00023436;
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}

