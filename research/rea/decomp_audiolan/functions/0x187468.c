// rea decompile_all
// name: FUN_00187468
// address: 0x187468
// body: available
// range: 0x187468-0x187551 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00187468(int param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*(code **)(param_1 + 0x58) == entry) {
    iVar4 = param_1 + DAT_00187558;
    iVar5 = param_1 + DAT_0018755c;
    iVar1 = param_1 + DAT_00187560;
    iVar6 = param_1 + DAT_00187564;
    iVar2 = param_1 + DAT_00187568;
    iVar3 = param_1 + DAT_0018756c;
    iVar7 = param_1 + DAT_00187570;
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      FUN_000038a0(param_1 + DAT_00187554,0x40);
      FUN_0016d924(iVar4);
      FUN_00003860(iVar5,0x40);
      FUN_0016d8d4(iVar1);
      FUN_000038a0(iVar6,0x40);
      FUN_0016d924(iVar2);
      FUN_000038a0(iVar3,0x40);
      FUN_0016d924(iVar7);
      return;
    }
    FUN_000027f4(param_1 + DAT_00187554,0x40,&DAT_00187574,param_2);
    FUN_000027f4(iVar5,0x40,&DAT_00187574,param_2);
    FUN_000027f4(iVar6,0x40,&DAT_00187574,param_2);
    FUN_000027f4(iVar3,0x40,&DAT_00187574,param_2);
    if (0 < param_3) {
      FUN_000027f4(iVar4,10,&DAT_00187578,param_3);
      FUN_000027f4(iVar1,10,&DAT_00187578,param_3);
      FUN_000027f4(iVar2,10,&DAT_00187578,param_3);
      FUN_000027f4(iVar7,10,&DAT_00187578,param_3);
      return;
    }
  }
  else {
    (**(code **)(param_1 + 0x58))(param_1,param_2,param_3);
  }
  return;
}

