// rea decompile_all
// name: FUN_000290b8
// address: 0x290b8
// body: available
// range: 0x290b8-0x291f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000290b8(byte *param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = (uint)*param_1;
  uVar7 = 0;
  if (param_2 == 0) {
    if ((1 < uVar4) && (uVar6 = uVar4, param_1[uVar4] - 0x30 < 10)) {
      do {
        uVar6 = uVar6 - 1 & 0xffff;
        if (uVar6 < 3) break;
      } while (param_1[uVar6] - 0x30 < 10);
      if (param_1[uVar6] == 0x2d) goto LAB_0002912c;
      goto LAB_00029198;
    }
  }
  else if (((3 < uVar4) && (uVar6 = uVar4 - 1 & 0xffff, param_1[uVar4] == 0x29)) &&
          (param_1[uVar6] - 0x30 < 10)) {
    do {
      uVar6 = uVar6 - 1 & 0xffff;
      if (uVar6 < 3) break;
    } while (param_1[uVar6] - 0x30 < 10);
    if ((param_1[uVar6] == 0x28) && (param_1[uVar6 - 1] == 0x20)) {
LAB_0002912c:
      uVar7 = 0;
      iVar5 = 1;
      if ((param_2 != 0) && ((uVar4 != 0 && (param_1[uVar4] == 0x29)))) {
        *param_1 = *param_1 - 1;
      }
      bVar1 = param_1[*param_1];
      while (bVar1 - 0x30 < 10) {
        bVar1 = param_1[*param_1];
        uVar4 = *param_1 - 1;
        *param_1 = (byte)uVar4;
        uVar7 = iVar5 * (bVar1 - 0x30) + uVar7;
        iVar5 = iVar5 * 10;
        bVar1 = param_1[uVar4 & 0xff];
      }
      uVar4 = (uint)*param_1;
      if (param_2 == 0) {
        if ((uVar4 != 0) && (param_1[uVar4] == 0x2d)) {
          cVar2 = -1;
          goto LAB_00029196;
        }
      }
      else if (((1 < uVar4) && (param_1[uVar4] == 0x28)) && (param_1[uVar4 - 1] == 0x20)) {
        cVar2 = -2;
LAB_00029196:
        *param_1 = *param_1 + cVar2;
      }
    }
LAB_00029198:
    piVar3 = DAT_000291f4;
    if (uVar7 != 0) {
      if (uVar7 < 10) {
        iVar5 = uVar7 + 1;
      }
      else {
        uVar4 = 1;
        do {
          uVar4 = uVar4 * 2 + 1;
        } while (uVar4 < 99);
        do {
          if (*piVar3 == 0) {
            iVar5 = FUN_001e58cc();
            iVar5 = FUN_001e54ec(iVar5 * 0x15 + 1,99);
            piVar3[1] = iVar5;
            *piVar3 = 1;
          }
          uVar6 = piVar3[1] * 0x15 + 1;
          piVar3[1] = uVar6;
          uVar6 = uVar6 & uVar4;
        } while (99 < uVar6);
        iVar5 = uVar6 + uVar7 + 1;
      }
      goto LAB_000291e6;
    }
  }
  iVar5 = 2;
LAB_000291e6:
  FUN_0001d824(param_1,iVar5,param_2);
  return;
}

