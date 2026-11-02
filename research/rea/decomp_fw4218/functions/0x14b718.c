// rea decompile_all
// name: FUN_0014b718
// address: 0x14b718
// body: available
// range: 0x14b718-0x14b88f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0014b718(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  iVar7 = param_1[1];
  uVar1 = param_2 >> 5;
  param_2 = param_2 & 0x1f;
  FUN_0014b5cc(param_1,iVar7 + uVar1 + 1);
  uVar3 = iVar7 - 1;
  if (iVar7 < 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = ~uVar3 & 1;
    if (uVar2 != 0) {
      *(undefined4 *)(*param_1 + (uVar3 + uVar1) * 4) = *(undefined4 *)(*param_1 + uVar3 * 4);
    }
  }
  uVar3 = (iVar7 - uVar2) - 1;
  if (-1 < (int)uVar3) {
    do {
      iVar4 = uVar3 + uVar1;
      iVar6 = uVar3 * 4;
      *(undefined4 *)(*param_1 + iVar4 * 4) = *(undefined4 *)(*param_1 + uVar3 * 4);
      uVar3 = uVar3 - 2;
      *(undefined4 *)(*param_1 + iVar4 * 4 + -4) = *(undefined4 *)(*param_1 + iVar6 + -4);
    } while (uVar3 < 0x80000000);
  }
  if (uVar1 != 0) {
    uVar3 = uVar1 & 1;
    if (uVar3 != 0) {
      *(undefined4 *)*param_1 = 0;
    }
    uVar2 = (uint)(uVar3 != 0);
    for (; uVar3 < uVar1; uVar3 = uVar3 + 2) {
      *(undefined4 *)(*param_1 + uVar2 * 4) = 0;
      *(undefined4 *)(*param_1 + (uVar2 + 1) * 4) = 0;
      uVar2 = uVar2 + 2;
    }
  }
  if (param_2 != 0) {
    uVar2 = iVar7 + uVar1;
    uVar3 = 0;
    if (uVar1 < uVar2) {
      iVar6 = uVar2 - uVar1;
      iVar7 = 0;
      do {
        iVar4 = uVar1 + iVar7;
        uVar5 = *(uint *)(*param_1 + iVar4 * 4);
        iVar6 = iVar6 + -1;
        uVar8 = uVar3 | uVar5 << param_2;
        uVar3 = uVar5 >> (0x20 - param_2 & 0xff);
        iVar7 = iVar7 + 1;
        *(uint *)(*param_1 + iVar4 * 4) = uVar8;
      } while (iVar6 != 0);
    }
    *(uint *)(*param_1 + uVar2 * 4) = uVar3;
  }
  iVar7 = param_1[1];
  do {
    iVar6 = iVar7;
    iVar7 = iVar6 + -1;
    if (iVar7 < 1) {
      if (iVar7 < 0) {
        return;
      }
      break;
    }
  } while (*(int *)(*param_1 + iVar7 * 4) == 0);
  if (iVar7 < param_1[1] + -1) {
    param_1[1] = iVar6;
  }
  return;
}

