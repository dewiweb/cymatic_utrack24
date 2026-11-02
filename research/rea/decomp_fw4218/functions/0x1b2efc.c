// rea decompile_all
// name: FUN_001b2efc
// address: 0x1b2efc
// body: available
// range: 0x1b2efc-0x1b2f9d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001b2efc(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6
                )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = 0;
  do {
    iVar5 = FUN_001b301a(param_1);
    if (iVar5 <= iVar7) {
      return 0;
    }
    iVar5 = FUN_001b302e(param_1,iVar7);
    if (iVar5 == 0) {
      return 0;
    }
    for (uVar6 = 0; uVar4 = FUN_001b990e(iVar5), uVar6 < uVar4; uVar6 = uVar6 + 1) {
      iVar1 = FUN_001b991e(iVar5,uVar6);
      if (iVar1 == 0) {
        return 0;
      }
      for (uVar4 = 0; uVar3 = FUN_00003e14(*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc),0x1c),
          uVar4 < uVar3; uVar4 = uVar4 + 1) {
        iVar2 = FUN_001bad80(iVar1,uVar4);
        if (iVar2 == 0) {
          return 0;
        }
        if (((((param_2 == 0xff) || (*(byte *)(iVar2 + 4) == param_2)) &&
             ((param_3 == 0xff || (*(byte *)(iVar2 + 5) == param_3)))) &&
            ((param_4 == 0xff || (*(byte *)(iVar2 + 6) == param_4)))) &&
           ((param_5 == 0xff || (*(byte *)(iVar2 + 7) == param_5)))) {
          if (param_6 == 0xff) {
            return iVar2;
          }
          if (*(byte *)(iVar2 + 8) == param_6) {
            return iVar2;
          }
        }
      }
    }
    iVar7 = iVar7 + 1;
  } while( true );
}

