// rea decompile_all
// name: FUN_0016f2f0
// address: 0x16f2f0
// body: available
// range: 0x16f2f0-0x16f3e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0016f2f0(undefined4 param_1,char *param_2,int *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  
  *param_4 = param_2;
  if (*param_3 != 0) {
    return 0;
  }
  *param_4 = 0;
  iVar2 = FUN_00003318(param_2,0x3d);
  if (iVar2 != 0) {
    uVar3 = FUN_000034d0(param_2);
    if (uVar3 < 6) {
      return 0;
    }
    for (; ((cVar1 = *param_2, cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == ','));
        param_2 = param_2 + 1) {
      if (cVar1 == '\0') {
        return 0xfffffffb;
      }
    }
    uVar4 = FUN_000034d0(param_1);
    iVar5 = FUN_001a7022(param_1,param_2,uVar4);
    if (iVar5 != 0) {
      *param_4 = param_2;
      return 0;
    }
    pcVar6 = (char *)FUN_00003318(param_2,0x2c);
    if (pcVar6 == (char *)0x0) {
      iVar5 = FUN_000034d0(param_2);
      pcVar6 = param_2 + iVar5;
    }
    iVar5 = (int)pcVar6 - iVar2;
    if (1 < iVar5) {
      if ((code *)*DAT_0016f3e8 == entry) {
        iVar7 = FUN_0019b388(iVar5);
      }
      else {
        iVar7 = (*(code *)*DAT_0016f3e8)(iVar5);
      }
      *param_3 = iVar7;
      if (iVar7 == 0) {
        uVar4 = 0xfffffffc;
      }
      else {
        FUN_001a3128(iVar7,iVar2 + 1,iVar5 + -1);
        if (*pcVar6 == '\0') goto LAB_0016f39c;
        do {
          pcVar6 = pcVar6 + 1;
LAB_0016f39c:
        } while ((*pcVar6 == ' ') || (*pcVar6 == '\t'));
        for (; (*pcVar6 == '\n' || (*pcVar6 == '\r')); pcVar6 = pcVar6 + 1) {
        }
        *param_4 = 0;
        cVar1 = *pcVar6;
        uVar4 = 0;
        if (cVar1 != '\0') {
          if ((cVar1 == '\t') || (cVar1 == ' ')) {
            do {
              do {
                pcVar6 = pcVar6 + 1;
                cVar1 = *pcVar6;
              } while (cVar1 == ' ');
            } while (cVar1 == '\t');
            if (cVar1 == '\0') {
              return 0;
            }
          }
          *param_4 = pcVar6;
          return 0;
        }
      }
      return uVar4;
    }
  }
  return 0xfffffffb;
}

