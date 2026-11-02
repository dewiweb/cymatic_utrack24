// rea decompile_all
// name: FUN_0004401c
// address: 0x4401c
// body: available
// range: 0x4401c-0x4408b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0004401c(int param_1,int param_2,undefined2 param_3)

{
  short sVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 != 0) {
    *(int *)(param_1 + 0x20) = param_2;
    *(undefined2 *)(param_1 + 0xc) = param_3;
  }
  sVar1 = *(short *)(param_1 + 2);
  if ((((sVar1 == 2) || (sVar1 == 5)) || (sVar1 == 0xc)) || (sVar1 == 0x27)) {
    iVar4 = *(int *)(param_1 + 0x20) + 4;
  }
  else if (((sVar1 == 0xf) || (sVar1 == 0x12)) || ((sVar1 == 0x15 || (sVar1 == 0x24)))) {
    iVar4 = *(int *)(param_1 + 0x20) + 6;
  }
  else if (sVar1 == 0x21) {
    iVar4 = *(int *)(param_1 + 0x20) + 10;
  }
  else {
    iVar4 = 0;
  }
  uVar2 = FUN_0002813a(param_1,0);
  *(undefined2 *)(param_1 + 0xc) = uVar2;
  uVar2 = FUN_0002813a(param_1,1);
  *(undefined2 *)(param_1 + 0xe) = uVar2;
  if (iVar4 == 0) {
    uVar3 = FUN_0003f058(param_1);
  }
  else {
    uVar3 = FUN_00025cca(iVar4);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return;
}

