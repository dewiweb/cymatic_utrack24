// rea decompile_all
// name: FUN_000049e2
// address: 0x49e2
// body: available
// range: 0x49e2-0x4a89 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_000049e2(char *param_1,undefined4 *param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  uint uVar8;
  uint local_28;
  
  bVar1 = false;
  cVar3 = *param_1;
  pcVar7 = param_1 + 1;
  bVar2 = false;
  if (cVar3 == '0') {
    cVar3 = *pcVar7;
    bVar1 = true;
    pcVar7 = param_1 + 2;
    if ((cVar3 == 'x') || (cVar3 == 'X')) {
      if ((param_3 == 0) || (param_3 == 0x10)) {
        cVar3 = *pcVar7;
        bVar1 = false;
        param_3 = 0x10;
        pcVar7 = param_1 + 3;
      }
    }
    else if (param_3 == 0) {
      param_3 = 8;
    }
  }
  else if (param_3 == 0) {
    param_3 = 10;
  }
  uVar8 = 0;
  local_28 = 0;
  while (iVar5 = FUN_00004806(cVar3,param_3), -1 < iVar5) {
    bVar1 = true;
    uVar4 = param_3 * local_28 + iVar5;
    local_28 = uVar4 & 0xffff;
    uVar8 = uVar8 * param_3 + (uVar4 >> 0x10);
    if (0xffff < uVar8) {
      bVar2 = true;
    }
    cVar3 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  }
  if (param_2 != (undefined4 *)0x0) {
    if (bVar1) {
      param_1 = pcVar7 + -1;
    }
    *param_2 = param_1;
  }
  if (bVar2) {
    puVar6 = (undefined4 *)FUN_00004104();
    *puVar6 = 2;
    local_28 = 0xffffffff;
  }
  else {
    local_28 = uVar8 << 0x10 | local_28;
  }
  return local_28;
}

