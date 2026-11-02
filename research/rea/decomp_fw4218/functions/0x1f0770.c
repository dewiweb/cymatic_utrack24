// rea decompile_all
// name: FUN_001f0770
// address: 0x1f0770
// body: available
// range: 0x1f0770-0x1f0817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001f0770(code *param_1)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar2 = DAT_001f081c;
  iVar1 = DAT_001f0818;
  bVar3 = false;
  iVar5 = 9;
  puVar6 = (undefined4 *)(DAT_001f0818 + 0x14);
  do {
    if (*(code **)(iVar2 + iVar5 * 4) == param_1) {
      if (*(int *)(iVar1 + 0xc) == 0) {
        local_28 = *puVar6;
        local_24 = *(undefined4 *)(iVar1 + 0x18);
      }
      else {
        local_28 = FUN_00011c94();
        local_24 = FUN_00011c8c();
        *puVar6 = local_28;
        *(undefined4 *)(iVar1 + 0x18) = local_24;
        *(undefined4 *)(iVar1 + 0xc) = 0;
      }
      (*param_1)(3,&local_28);
      bVar3 = true;
      *(undefined4 *)(iVar2 + iVar5 * 4) = 0;
    }
    bVar7 = iVar5 != 0;
    iVar5 = iVar5 + -1;
  } while (bVar7);
  if (bVar3) {
    uVar4 = 0;
  }
  else {
    uVar4 = 3;
  }
  return uVar4;
}

