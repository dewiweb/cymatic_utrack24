// rea decompile_all
// name: FUN_0014fa6a
// address: 0x14fa6a
// body: available
// range: 0x14fa6a-0x14fad7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0014fa6a(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_0014f93a(param_1);
    return param_1;
  }
  iVar7 = *(int *)(param_2 + 8);
  if (iVar7 == 0) {
    return param_1;
  }
  iVar6 = *(int *)(param_1 + 8) + iVar7;
  if (*(char *)(param_1 + 0xc) != '\0') {
    uVar4 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      uVar4 = *(uint *)(*(int *)(param_1 + 4) + 4);
    }
    if (iVar6 + 1U <= uVar4) goto LAB_0014fa9e;
  }
  iVar1 = FUN_000a5910(param_1 + 4);
  if (iVar1 == 0) {
    return param_1;
  }
LAB_0014fa9e:
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    iVar1 = iVar1 + 8;
  }
  puVar5 = (undefined1 *)(iVar1 + *(int *)(param_1 + 8));
  iVar1 = 0;
  if (0 < iVar7) {
    do {
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 != 0) {
        iVar2 = iVar2 + 8;
      }
      puVar3 = (undefined1 *)(iVar2 + iVar1);
      iVar1 = iVar1 + 1;
      *puVar5 = *puVar3;
      puVar5 = puVar5 + 1;
    } while (iVar1 < iVar7);
  }
  *puVar5 = 0;
  *(int *)(param_1 + 8) = iVar6;
  return param_1;
}

