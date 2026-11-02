// rea decompile_all
// name: FUN_0000bb8c
// address: 0xbb8c
// body: available
// range: 0xbb8c-0xbcd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000bb8c(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = _DAT_0000b8bc;
  param_1[1] = _DAT_0000b8bc + 0x1d4;
  *param_1 = iVar1;
  param_1[0x16] = iVar1 + 0x204;
  iVar1 = param_1[2];
  FUN_001a0700();
  if ((char)param_1[9] == '\x05' || (char)param_1[9] == '\x01') {
    uVar3 = 7;
  }
  else {
    uVar3 = 6;
  }
  *(undefined1 *)(param_1 + 9) = uVar3;
  FUN_0000a1b8();
  FUN_0000ba90(param_1);
  *(undefined1 *)(param_1 + 0xb7) = 1;
  *(undefined1 *)((int)param_1 + 0x2dd) = 1;
  thunk_EXT_FUN_0040010c(param_1[0xb8]);
  FUN_0018e550(param_1[7]);
  FUN_0018e6b0();
  if (param_1[8] != 0) {
    FUN_0018e550();
    FUN_0018e6b0();
  }
  FUN_000083ac(param_1[2],param_1);
  FUN_000868d4(param_1);
  FUN_0000b8d4(param_1);
  iVar4 = param_1[7];
  iVar5 = 0;
  if (iVar4 != 0) {
    iVar5 = *(int *)(iVar4 + 0xcc);
  }
  iVar2 = param_1[8];
  iVar6 = 0;
  if (iVar4 != 0 && iVar5 != 0) {
    iVar6 = iVar5;
  }
  iVar5 = 0;
  if (iVar2 != 0) {
    iVar5 = *(int *)(iVar2 + 0xcc);
  }
  iVar4 = 0;
  if (iVar2 != 0 && iVar5 != 0) {
    iVar4 = iVar5;
  }
  FUN_0000a24c(param_1 + 1);
  if (iVar6 != 0) {
    FUN_0018a2b4(iVar6);
  }
  if (iVar4 != 0) {
    FUN_0018a2b4(iVar4);
  }
  FUN_001a0d18(iVar1 + 0x118);
  iVar1 = param_1[0xb8];
  if (iVar1 != 0) {
    FUN_0017a254();
    FUN_0019f30c(iVar1);
    param_1[0xb8] = 0;
  }
  iVar1 = FUN_0000a294(param_1 + 1);
  return iVar1 + -4;
}

