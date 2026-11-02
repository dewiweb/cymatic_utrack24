// rea decompile_all
// name: FUN_0000a3b8
// address: 0xa3b8
// body: available
// range: 0xa3b8-0xa477 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0000a3b8(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14)) {
    FUN_00002898(DAT_0000a610,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                 *(int *)(param_2 + 0x14),param_4);
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x18);
  iVar3 = *(int *)(param_2 + 0x18);
  if (iVar2 == 0) {
    cVar5 = -1;
  }
  else {
    cVar5 = *(char *)(iVar2 + 0x5c);
  }
  if (iVar3 == 0) {
    cVar4 = -1;
  }
  else {
    cVar4 = *(char *)(iVar3 + 0x5c);
  }
  if (cVar5 == cVar4) {
    if (iVar2 == 0) {
      iVar1 = 0xff;
    }
    else {
      iVar1 = *(int *)(iVar2 + 0x60);
    }
    if (iVar3 == 0) {
      iVar6 = 0xff;
    }
    else {
      iVar6 = *(int *)(iVar3 + 0x60);
    }
    if (iVar1 == iVar6) {
      return 1;
    }
    if (iVar3 == 0) {
      uVar7 = 0xff;
    }
    else {
      uVar7 = *(undefined4 *)(iVar3 + 0x60);
    }
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0x60);
    }
    if (iVar2 == 0) {
      iVar3 = 0xff;
    }
    FUN_00002898(DAT_0000a618,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),iVar3,
                 uVar7);
  }
  else {
    FUN_00002898(DAT_0000a614,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),iVar3,
                 param_4);
  }
  return 0;
}

