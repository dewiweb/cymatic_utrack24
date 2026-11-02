// rea decompile_all
// name: FUN_001b20b0
// address: 0x1b20b0
// body: available
// range: 0x1b20b0-0x1b2167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001b20b0(int *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar6;
  int local_20;
  
  uVar6 = 0;
  do {
    if ((param_2 == (char *)0x0) || (cVar1 = *param_2, pcVar2 = param_2, cVar1 == '\0')) {
      return uVar6;
    }
    while (cVar1 == '/') {
      cVar1 = pcVar2[1];
      pcVar2 = pcVar2 + 1;
    }
    param_2 = (char *)FUN_000035d4(pcVar2,0x2f);
    if (param_2 == (char *)0x0) {
      local_20 = FUN_00003738(pcVar2);
    }
    else {
      local_20 = (int)param_2 - (int)pcVar2;
      do {
        if (*param_2 != '/') break;
        param_2 = param_2 + 1;
      } while (param_2 != (char *)0x0);
    }
    iVar3 = *param_1;
    FUN_001c6e90(param_1[1] - iVar3);
    if (extraout_r1 <= uVar6) {
      return 0;
    }
    uVar6 = *(uint *)(iVar3 + uVar6 * 0x14 + 0x10);
    while( true ) {
      if (uVar6 == 0) {
        return 0;
      }
      iVar3 = *param_1;
      FUN_001c6e90(param_1[1] - iVar3);
      if (extraout_r1_00 <= uVar6) {
        return 0;
      }
      piVar4 = (int *)(iVar3 + uVar6 * 0x14);
      iVar3 = *(int *)(*piVar4 + 4);
      iVar5 = FUN_00003928(iVar3,pcVar2,local_20);
      if ((iVar5 == 0) && (*(char *)(iVar3 + local_20) == '\0')) break;
      uVar6 = piVar4[2];
    }
    if (uVar6 == 0) {
      return 0;
    }
  } while( true );
}

