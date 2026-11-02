// rea decompile_all
// name: FUN_0016f184
// address: 0x16f184
// body: available
// range: 0x16f184-0x16f2e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0016f184(undefined4 param_1,char *param_2,int *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  *param_4 = param_2;
  if (*param_3 != 0) {
    return 0;
  }
  *param_4 = 0;
  for (; ((cVar2 = *param_2, cVar2 == ' ' || (cVar2 == '\t')) || (cVar2 == ','));
      param_2 = param_2 + 1) {
    if (cVar2 == '\0') {
      return 0xfffffffb;
    }
  }
  uVar3 = FUN_000034d0(param_2);
  uVar4 = FUN_000034d0(param_1);
  if (uVar4 < uVar3) {
    uVar5 = FUN_000034d0(param_1);
    iVar6 = FUN_001a7022(param_1,param_2,uVar5);
    if (iVar6 != 0) {
LAB_0016f27e:
      *param_4 = param_2;
      return 0;
    }
    iVar6 = FUN_00003318(param_2,0x3d);
    if (iVar6 != 0) {
      cVar2 = *(char *)(iVar6 + -1);
      while (cVar2 == ' ') {
        pcVar1 = (char *)(iVar6 + -2);
        iVar6 = iVar6 + -1;
        cVar2 = *pcVar1;
      }
      iVar7 = FUN_000034d0(param_1);
      if (iVar7 != iVar6 - (int)param_2) {
        *param_4 = param_2;
        return 0;
      }
      iVar6 = FUN_0016f10c(param_2);
      if ((iVar6 != 0) && (param_2 = (char *)FUN_0016f10c(iVar6 + 1), param_2 != (char *)0x0)) {
        iVar7 = (int)param_2 - iVar6;
        if (iVar7 == 1) {
          do {
            do {
              param_2 = param_2 + 1;
            } while (*param_2 == ' ');
          } while (*param_2 == '\t');
          for (; (*param_2 == '\n' || (*param_2 == '\r')); param_2 = param_2 + 1) {
          }
          *param_4 = 0;
          cVar2 = *param_2;
          if (cVar2 == '\0') {
            return 0;
          }
          if ((cVar2 == '\t') || (cVar2 == ' ')) {
            do {
              do {
                param_2 = param_2 + 1;
                cVar2 = *param_2;
              } while (cVar2 == ' ');
            } while (cVar2 == '\t');
            if (cVar2 == '\0') {
              return 0;
            }
          }
        }
        else {
          if ((code *)*DAT_0016f2ec == entry) {
            iVar8 = FUN_0019b388(iVar7 + 3);
          }
          else {
            iVar8 = (*(code *)*DAT_0016f2ec)(iVar7 + 3);
          }
          *param_3 = iVar8;
          if (iVar8 == 0) {
            return 0xfffffffc;
          }
          FUN_001a702a(iVar8,iVar6,iVar7 + 1);
          do {
            do {
              param_2 = param_2 + 1;
            } while (*param_2 == ' ');
          } while (*param_2 == '\t');
          for (; (*param_2 == '\n' || (*param_2 == '\r')); param_2 = param_2 + 1) {
          }
          *param_4 = 0;
          cVar2 = *param_2;
          if (cVar2 == '\0') {
            return 0;
          }
          if ((cVar2 == '\t') || (cVar2 == ' ')) {
            do {
              do {
                param_2 = param_2 + 1;
                cVar2 = *param_2;
              } while (cVar2 == ' ');
            } while (cVar2 == '\t');
            if (cVar2 == '\0') {
              return 0;
            }
          }
        }
        goto LAB_0016f27e;
      }
    }
  }
  return 0xfffffffb;
}

