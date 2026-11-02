// rea decompile_all
// name: FUN_000f970c
// address: 0xf970c
// body: available
// range: 0xf970c-0xf9877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000f970c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_000f2b24();
  *(undefined1 *)*param_2 = *(undefined1 *)(param_1 + 0x28);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  *(undefined1 *)(iVar1 + 1) = *(undefined1 *)(param_1 + 0x29);
  iVar1 = *param_2;
  *param_2 = iVar1 + 1;
  FUN_00003628(iVar1 + 1,param_1 + 0x2a,6);
  iVar1 = *param_2;
  uVar3 = 0;
  *param_2 = iVar1 + 6;
  *(undefined1 *)(iVar1 + 6) = *(undefined1 *)(param_1 + 0x30);
  *param_2 = *param_2 + 1;
  if (*(char *)(param_1 + 0x30) != '\0') {
    do {
      iVar1 = *(int *)(param_1 + 0x34) + uVar3 * 0xc;
      *(undefined1 *)*param_2 = *(undefined1 *)(iVar1 + 4);
      iVar2 = *param_2;
      *param_2 = iVar2 + 1;
      *(undefined1 *)(iVar2 + 1) = *(undefined1 *)(iVar1 + 5);
      iVar2 = *param_2;
      *param_2 = iVar2 + 1;
      FUN_00003628(iVar2 + 1,iVar1 + 6,6);
      *param_2 = *param_2 + 6;
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < *(byte *)(param_1 + 0x30));
  }
  uVar3 = 0;
  *(undefined1 *)*param_2 = *(undefined1 *)(param_1 + 0x38);
  *param_2 = *param_2 + 1;
  if (*(char *)(param_1 + 0x38) == '\0') {
    return;
  }
  do {
    iVar1 = *(int *)(param_1 + 0x3c) + uVar3 * 0xc;
    *(undefined1 *)*param_2 = *(undefined1 *)(iVar1 + 4);
    iVar2 = *param_2;
    *param_2 = iVar2 + 1;
    *(undefined1 *)(iVar2 + 1) = *(undefined1 *)(iVar1 + 5);
    iVar2 = *param_2;
    *param_2 = iVar2 + 1;
    FUN_00003628(iVar2 + 1,iVar1 + 6,6);
    *param_2 = *param_2 + 6;
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < *(byte *)(param_1 + 0x38));
  return;
}

