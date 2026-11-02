// rea decompile_all
// name: FUN_002263e8
// address: 0x2263e8
// body: available
// range: 0x2263e8-0x226537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_002263e8(undefined4 *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_0022cdc4(param_1 + 1);
  if (iVar1 == 0) {
    if ((param_2 != 3) && (param_2 != 4)) {
      FUN_00003548(s_type____kObjectType____type____k_0022658c,
                   s_j__PROJECTS_bebob7_Official_incl_00226538,0x8e);
    }
  }
  else {
    pcVar2 = (char *)FUN_00229050(param_1 + 1);
    if (*pcVar2 == '\0') {
      if (*(int *)(pcVar2 + 4) == 0) {
        FUN_00228578(*param_1,10);
      }
      else if ((*(uint *)(pcVar2 + 4) & 1) == 0) {
        FUN_00228578(*param_1,0x2c);
        FUN_00228578(*param_1,10);
      }
      else {
        FUN_00228578(*param_1,0x3a);
        FUN_00228578(*param_1,0x20);
      }
      if ((*(uint *)(pcVar2 + 4) & 1) == 0) {
        FUN_002263b8(param_1);
      }
    }
    else {
      if (*(int *)(pcVar2 + 4) == 0) {
        FUN_00228578(*param_1,10);
      }
      else {
        FUN_00228578(*param_1,0x2c);
        FUN_00228578(*param_1,10);
      }
      FUN_002263b8(param_1);
    }
    if (((*pcVar2 == '\0') && ((*(uint *)(pcVar2 + 4) & 1) == 0)) && (param_2 != 5)) {
      FUN_00003548(s_type____kStringType_00226578,s_j__PROJECTS_bebob7_Official_incl_00226538,0x8a);
    }
    *(int *)(pcVar2 + 4) = *(int *)(pcVar2 + 4) + 1;
  }
  return;
}

