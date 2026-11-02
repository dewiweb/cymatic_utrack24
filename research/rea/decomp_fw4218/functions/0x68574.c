// rea decompile_all
// name: FUN_00068574
// address: 0x68574
// body: available
// range: 0x68574-0x68697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00068660) */
/* WARNING: Removing unreachable block (ram,0x00068654) */
/* WARNING: Removing unreachable block (ram,0x00068678) */

undefined4 FUN_00068574(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  char cVar5;
  undefined4 local_28;
  int local_24;
  
  uVar1 = DAT_00068698;
  FUN_001f00bc();
  piVar2 = DAT_0006869c;
  *(undefined1 *)(DAT_0006869c + -0xb) = *(undefined1 *)(param_1 + 0x11);
  if (*piVar2 != 0) {
    FUN_001f06d4(uVar1);
    return 0;
  }
  uVar3 = FUN_001cfb1c();
  FUN_001cfbe0(uVar3,1,&local_28);
  while (iVar4 = thunk_EXT_FUN_004002f0(*(int *)(param_1 + 4) + 0x10,&local_24,0), iVar4 == 0) {
    if ((*(char *)(param_1 + 0x10) == '\0') &&
       (cVar5 = *(char *)(local_24 + -4) + -1, *(char *)(local_24 + -4) = cVar5, cVar5 == '\0')) {
      FUN_001ce72c();
    }
  }
  uVar3 = FUN_001cfb1c();
  FUN_001cfbe0(uVar3,local_28,&local_28);
  thunk_EXT_FUN_0040001c();
  *piVar2 = param_1;
  thunk_EXT_FUN_00400034();
  FUN_001f06d4(uVar1);
  return 1;
}

