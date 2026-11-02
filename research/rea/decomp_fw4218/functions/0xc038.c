// rea decompile_all
// name: FUN_0000c038
// address: 0xc038
// body: available
// range: 0xc038-0xc17f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0000c038(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = _DAT_0000bd68;
  param_1[1] = _DAT_0000bd68 + 0x1d4;
  *param_1 = iVar1;
  param_1[0x16] = iVar1 + 0x204;
  iVar1 = param_1[2];
  FUN_001f00bc();
  if ((char)param_1[9] == '\x05' || (char)param_1[9] == '\x01') {
    uVar3 = 7;
  }
  else {
    uVar3 = 6;
  }
  *(undefined1 *)(param_1 + 9) = uVar3;
  FUN_0000a664();
  FUN_0000bf3c(param_1);
  *(undefined1 *)(param_1 + 0xb7) = 1;
  *(undefined1 *)((int)param_1 + 0x2dd) = 1;
  thunk_EXT_FUN_0040010c(param_1[0xb8]);
  FUN_001df310(param_1[7]);
  FUN_001df470();
  if (param_1[8] != 0) {
    FUN_001df310();
    FUN_001df470();
  }
  FUN_00008858(param_1[2],param_1);
  FUN_00097fec(param_1);
  FUN_0000bd80(param_1);
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
  FUN_0000a6f8(param_1 + 1);
  if (iVar6 != 0) {
    FUN_001dae58(iVar6);
  }
  if (iVar4 != 0) {
    FUN_001dae58(iVar4);
  }
  FUN_001f06d4(iVar1 + 0x118);
  iVar1 = param_1[0xb8];
  if (iVar1 != 0) {
    FUN_001ce98c();
    FUN_001eecc8(iVar1);
    param_1[0xb8] = 0;
  }
  iVar1 = FUN_0000a740(param_1 + 1);
  return iVar1 + -4;
}

