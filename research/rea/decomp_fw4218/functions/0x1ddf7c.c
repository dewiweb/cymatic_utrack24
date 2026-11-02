// rea decompile_all
// name: FUN_001ddf7c
// address: 0x1ddf7c
// body: available
// range: 0x1ddf7c-0x1ddfed inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001ddf7c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  code *pcVar5;
  
  piVar2 = DAT_001ddff4;
  piVar1 = DAT_001ddff0;
  piVar3 = (int *)*DAT_001ddff4;
  do {
    if (piVar3 == (int *)0x0) {
LAB_001ddfa6:
      piVar3 = (int *)FUN_001ed0b4(9);
      if (piVar3 == (int *)0x0) {
        return 0xfffffffe;
      }
      piVar3[1] = param_1;
      if (piVar1 == (int *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *piVar1;
      }
      piVar3[2] = iVar4;
      *(undefined2 *)((int)piVar3 + 0xe) = 0;
      *(undefined1 *)((int)piVar3 + 0xd) = 0;
      *(undefined1 *)(piVar3 + 3) = 0;
      *(undefined1 *)(piVar3 + 4) = 0;
      *piVar3 = *piVar2;
      *piVar2 = (int)piVar3;
LAB_001ddfc8:
      *(undefined1 *)((int)piVar3 + 0xd) = 2;
      *(char *)(piVar3 + 4) = (char)piVar3[4] + '\x01';
      pcVar5 = *(code **)(param_1 + 0x40);
      if (pcVar5 != entry) {
        (*pcVar5)(param_1,DAT_001ddff0,1,pcVar5,param_4);
      }
      return 0;
    }
    if ((piVar3[1] == param_1) && (piVar3[2] == *DAT_001ddff0)) {
      if (piVar3 != (int *)0x0) goto LAB_001ddfc8;
      goto LAB_001ddfa6;
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}

