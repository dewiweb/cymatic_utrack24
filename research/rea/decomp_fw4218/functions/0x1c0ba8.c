// rea decompile_all
// name: FUN_001c0ba8
// address: 0x1c0ba8
// body: available
// range: 0x1c0ba8-0x1c0c73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001c0ba8(int param_1,undefined1 *param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  ushort local_24;
  undefined4 local_20;
  
  puVar5 = param_2 + param_3 + -1;
  if (param_3 < 1) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    *param_2 = 0;
    return 1;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    pbVar8 = (byte *)0x0;
    iVar2 = 0;
  }
  else {
    pbVar8 = (byte *)(iVar2 + 8);
    iVar2 = iVar2 + 8;
  }
  local_20 = 1;
  while( true ) {
    if (((byte *)(iVar2 + iVar7) <= pbVar8) || (puVar5 <= param_2)) goto LAB_001c0c6a;
    if ((*pbVar8 == 0xff) || (iVar3 = FUN_000c7878(pbVar8), iVar3 == 0)) break;
    iVar4 = FUN_000c7878(pbVar8);
    if (iVar4 == 0) {
      local_24 = 0;
LAB_001c0c54:
      *param_2 = (char)local_24;
      param_2 = param_2 + 1;
    }
    else {
      local_24 = (ushort)(*pbVar8 & *(byte *)(DAT_001c0c74 + iVar4));
      iVar6 = 1;
      if (1 < iVar4) {
        do {
          if (pbVar8[iVar6] >> 6 != 2) break;
          pbVar1 = pbVar8 + iVar6;
          iVar6 = iVar6 + 1;
          local_24 = local_24 << 6 | *pbVar1 & 0x3f;
        } while (iVar6 < iVar4);
      }
      if (local_24 < 0x100) goto LAB_001c0c54;
    }
    pbVar8 = pbVar8 + iVar3;
  }
  local_20 = 0;
LAB_001c0c6a:
  *param_2 = 0;
  return local_20;
}

