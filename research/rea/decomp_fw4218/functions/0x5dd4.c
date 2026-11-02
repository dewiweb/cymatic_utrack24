// rea decompile_all
// name: FUN_00005dd4
// address: 0x5dd4
// body: available
// range: 0x5dd4-0x5e71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_00005dd4(undefined1 *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  char cVar6;
  char *pcVar7;
  int iVar8;
  
  if ((param_2 & ~-param_2) != 0) {
    pcVar7 = param_1 + 1;
    iVar8 = 0;
    *param_1 = 0x2a;
    iVar2 = FUN_000040ec();
    do {
      iVar3 = 0;
      uVar5 = *(uint *)(iVar2 + iVar8 * 4);
      do {
        bVar1 = (byte)(uVar5 >> 0x18);
        if (uVar5 >> 0x1c < 10) {
          cVar6 = (bVar1 >> 4) + 0x30;
        }
        else {
          cVar6 = (bVar1 >> 4) + 0x57;
        }
        *pcVar7 = cVar6;
        pcVar7 = pcVar7 + 1;
        iVar3 = iVar3 + 1;
        uVar5 = uVar5 << 4;
      } while (iVar3 < 8);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 5);
    *pcVar7 = '\0';
    return param_1;
  }
  if (param_2 == 4) {
    iVar2 = FUN_000040ec();
    uVar5 = *(uint *)(iVar2 + 8);
  }
  else if ((int)param_2 < 5) {
    if (param_2 == 1) {
      puVar4 = (uint *)FUN_000040ec();
      uVar5 = *puVar4;
    }
    else {
      if (param_2 != 2) {
        return (undefined1 *)0x0;
      }
      iVar2 = FUN_000040ec();
      uVar5 = *(uint *)(iVar2 + 4);
    }
  }
  else if (param_2 == 8) {
    iVar2 = FUN_000040ec();
    uVar5 = *(uint *)(iVar2 + 0xc);
  }
  else {
    if (param_2 != 0x10) {
      return (undefined1 *)0x0;
    }
    iVar2 = FUN_000040ec();
    uVar5 = *(uint *)(iVar2 + 0x10);
  }
  if (uVar5 == 0) {
    return &DAT_00005f6c;
  }
  return (undefined1 *)(*(int *)((uVar5 & 0xfffffffc) - 4) + (uVar5 & 0xfffffffc));
}

