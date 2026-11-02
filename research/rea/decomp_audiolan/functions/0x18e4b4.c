// rea decompile_all
// name: FUN_0018e4b4
// address: 0x18e4b4
// body: available
// range: 0x18e4b4-0x18e54d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_0018e4b4(undefined4 *param_1,char *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;
  char *local_30;
  undefined4 local_28;
  char local_24 [4];
  undefined4 *puStack_20;
  char *local_1c;
  int local_18;
  
  local_18 = param_3;
  local_1c = param_2;
  puStack_20 = param_1;
  local_28 = *param_1;
  iVar8 = 0;
  pbVar9 = (byte *)&local_28;
  bVar5 = 0;
  local_30 = param_2;
  while( true ) {
    uVar7 = 0;
    do {
      bVar1 = *pbVar9;
      cVar4 = FUN_0016dbc8((uint)bVar1);
      uVar6 = bVar1 / 10;
      *pbVar9 = (byte)uVar6;
      local_24[uVar7] = cVar4 + '0';
      uVar7 = uVar7 + 1 & 0xff;
      iVar2 = iVar8;
      pcVar3 = local_30;
    } while (uVar6 != 0);
    while (uVar7 != 0) {
      uVar7 = uVar7 - 1 & 0xff;
      if (local_18 <= iVar2) {
        return (char *)0x0;
      }
      *pcVar3 = local_24[uVar7];
      iVar2 = iVar2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    iVar8 = iVar2 + 1;
    if (local_18 <= iVar2) break;
    *pcVar3 = '.';
    pbVar9 = pbVar9 + 1;
    local_30 = pcVar3 + 1;
    bVar5 = bVar5 + 1;
    if (3 < bVar5) {
      *pcVar3 = '\0';
      return local_1c;
    }
  }
  return (char *)0x0;
}

