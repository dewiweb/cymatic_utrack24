// rea decompile_all
// name: FUN_0003a00c
// address: 0x3a00c
// body: available
// range: 0x3a00c-0x3a0cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0003a00c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  if (*DAT_0003a0cc != 0) {
    FUN_00024642(3,DAT_0003a0d0);
  }
  piVar1 = DAT_0003a0d4;
  for (piVar5 = *(int **)(&DAT_00001fb8 + param_1); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
    if ((((piVar5[7] == *piVar1) && (*(char *)((int)piVar5 + 0x46) == '\0')) &&
        (iVar2 = FUN_00023df0(piVar5[8]), iVar2 == 0)) && (*(char *)(piVar5 + 0x36) != '\b')) {
      iVar2 = piVar5[0x3c];
      if (iVar2 != 0) {
        *(undefined2 *)(piVar5 + 0x3a) = *DAT_0003a0d8;
        iVar4 = iVar2 + 0x300;
        if ((*(int *)(iVar2 + 0x33c) != -1) &&
           (FUN_0019a220(param_1,iVar2 + 0x32c), *(int *)(iVar4 + 0x3c) != -1)) {
          uVar3 = FUN_000203e4(*(undefined2 *)(iVar2 + 0x55c));
          FUN_00024642(0,DAT_0003a0e0,iVar2 + DAT_0003a0dc,uVar3,*(undefined4 *)(iVar4 + 0x3c));
        }
        FUN_00195340(iVar2);
      }
      uVar3 = FUN_0003ff04(param_1,piVar5[8],0,DAT_0003a0e4,piVar5);
      piVar5[0x3c] = uVar3;
    }
  }
  return;
}

