// rea decompile_all
// name: FUN_0004b46c
// address: 0x4b46c
// body: available
// range: 0x4b46c-0x4b50f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0004b46c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_20 [8];
  
  FUN_001f0370(auStack_20);
  iVar1 = DAT_0004b510;
  iVar4 = 9;
  do {
    pcVar3 = *(code **)(iVar1 + iVar4 * 4);
    if (pcVar3 != entry) {
      (*pcVar3)(0,auStack_20,param_1);
    }
    bVar5 = iVar4 != 0;
    iVar4 = iVar4 + -1;
  } while (bVar5);
  FUN_001fe1dc(param_1,0);
  puVar2 = DAT_0004b514;
  *DAT_0004b514 = *param_1;
  iVar4 = 9;
  puVar2[1] = param_1[1];
  do {
    pcVar3 = *(code **)(iVar1 + iVar4 * 4);
    if (pcVar3 != entry) {
      (*pcVar3)(1,auStack_20,param_1);
    }
    bVar5 = iVar4 != 0;
    iVar4 = iVar4 + -1;
  } while (bVar5);
  return;
}

