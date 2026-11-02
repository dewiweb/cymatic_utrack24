// rea decompile_all
// name: FUN_00067524
// address: 0x67524
// body: available
// range: 0x67524-0x675ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00067524(undefined4 param_1,char *param_2,int param_3,char *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;
  char *unaff_r5;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  
  pcVar7 = param_2 + param_3;
  pcVar8 = pcVar7;
  if (pcVar7 <= param_2) {
    pcVar8 = unaff_r5;
  }
  iVar3 = 0;
  if (pcVar7 <= param_2) {
    return 0;
  }
  do {
    pcVar4 = param_2 + 1;
    cVar1 = *param_2;
    iVar2 = 1 - (int)pcVar4;
    iVar9 = 1;
    pcVar7 = pcVar4;
    pcVar6 = param_4;
    cVar5 = cVar1;
    if ((int)(pcVar8 + iVar2) < 2) {
      if (cVar1 == '\0') {
LAB_0006758c:
        param_4 = pcVar6;
        if (cVar1 != -1) {
          iVar3 = iVar3 + 1;
          param_4 = pcVar6 + 1;
          *pcVar6 = '\0';
        }
      }
    }
    else {
      do {
        cVar5 = cVar5 + -1;
        pcVar4 = pcVar7;
        if (cVar5 == '\0') goto LAB_0006758c;
        pcVar4 = pcVar7 + 1;
        iVar9 = iVar9 + 1;
        iVar3 = iVar3 + 1;
        param_4 = pcVar6 + 1;
        *pcVar6 = *pcVar7;
        pcVar7 = pcVar4;
        pcVar6 = param_4;
      } while (iVar9 < (int)(pcVar8 + iVar2));
    }
    param_2 = pcVar4;
    if (pcVar8 <= pcVar4) {
      return iVar3;
    }
  } while( true );
}

