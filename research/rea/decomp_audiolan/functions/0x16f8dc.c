// rea decompile_all
// name: FUN_0016f8dc
// address: 0x16f8dc
// body: available
// range: 0x16f8dc-0x16f93d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0016f8dc(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  undefined4 local_18;
  
  local_18 = param_4;
  uVar2 = FUN_000034d0();
  iVar6 = 0;
  pcVar5 = param_1;
  for (; uVar2 != 0; uVar2 = uVar2 - 1) {
    cVar1 = *pcVar5;
    if (cVar1 == '%') {
      if ((uVar2 < 3) || (iVar3 = FUN_00002f10(pcVar5 + 1,&LAB_0016f940,&local_18), iVar3 != 1))
      break;
      uVar4 = (uint)(byte)pcVar5[2];
      cVar1 = (char)local_18;
      if ((uVar4 == 0) || (((9 < uVar4 - 0x30 && (5 < uVar4 - 0x61)) && (5 < uVar4 - 0x41)))) {
        uVar2 = uVar2 - 1;
        pcVar5 = pcVar5 + 1;
      }
      else {
        uVar2 = uVar2 - 2;
        pcVar5 = pcVar5 + 2;
      }
    }
    param_1[iVar6] = cVar1;
    iVar6 = iVar6 + 1;
    pcVar5 = pcVar5 + 1;
  }
  param_1[iVar6] = '\0';
  return;
}

