// rea decompile_all
// name: FUN_00197ab0
// address: 0x197ab0
// body: available
// range: 0x197ab0-0x197c75 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00197ab0(undefined4 *param_1,undefined4 param_2,int *param_3,uint param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint local_18;
  
  local_18 = param_4;
  if (param_3 == (int *)0x0) {
    local_18 = 0;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  *param_1 = param_2;
  param_1[3] = param_5;
  param_1[5] = 1;
  uVar4 = DAT_00197c7c;
  uVar1 = *DAT_00197c78;
  *(undefined2 *)(param_1 + 6) = uVar1;
  *(undefined2 *)((int)param_1 + 0x1a) = uVar1;
  FUN_0016d964(param_1 + 7,uVar4);
  param_1[10] = param_7;
  iVar3 = DAT_00197c80;
  param_1[9] = param_6;
  *(undefined1 *)((int)param_1 + iVar3 + 0x10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x3a] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  iVar3 = FUN_0019559e();
  if (iVar3 == 0) {
    uVar4 = FUN_0019560c(0xffffffff);
    param_1[0x36] = uVar4;
    iVar3 = FUN_001953f2();
    piVar2 = DAT_00197c84;
    iVar3 = iVar3 + param_1[0x36];
    iVar6 = iVar3 + 0x78000000;
    param_1[0x38] = iVar3;
    param_1[0x39] = iVar3;
    param_1[0x3c] = iVar6;
    param_1[0x3d] = iVar6;
    param_1[0x3e] = iVar6;
    param_1[0x37] = 0;
    param_1[0x3b] = iVar3;
    param_1[0x3f] = iVar6;
    param_1[0x40] = iVar6;
    param_1[0x41] = iVar6;
    param_1[0x42] = 0;
    param_1[0x43] = 0;
    param_1[0x44] = 0;
    param_1[0x4b] = iVar6;
    *(undefined1 *)(param_1 + 0x45) = 0;
    *(undefined1 *)((int)param_1 + 0x115) = 0;
    *(undefined1 *)((int)param_1 + 0x116) = 0;
    *(undefined1 *)((int)param_1 + 0x117) = 0;
    iVar3 = *piVar2 * 0x3c + iVar3;
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    param_1[0x48] = 0;
    param_1[0x49] = 0;
    param_1[0x4c] = 0;
    param_1[0x4d] = 0;
    param_1[0x4e] = 0;
    param_1[0x4f] = 0;
    param_1[0x47] = iVar3;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[0x52] = 0;
    param_1[0x53] = 0;
    param_1[0x54] = 0;
    param_1[0x56] = 0;
    param_1[0x55] = 10;
    iVar7 = 499;
    iVar3 = 0;
    do {
      param_1[iVar3 + 0x57] = 0;
      iVar7 = iVar7 + -1;
      param_1[iVar3 + 0x24a] = iVar6;
      iVar3 = iVar3 + 1;
    } while (iVar7 != 0);
    if ((param_3 != (int *)0x0) && (local_18 != 0)) {
      uVar8 = local_18 & 1;
      if (uVar8 == 1) {
        *param_3 = (int)(param_3 + 0x26);
      }
      uVar5 = (uint)(uVar8 == 1);
      for (; uVar8 < local_18; uVar8 = uVar8 + 2) {
        param_3[uVar5 * 0x26] = (int)(param_3 + uVar5 * 0x26 + 0x26);
        param_3[(uVar5 + 1) * 0x26] = (int)(param_3 + (uVar5 + 1) * 0x26 + 0x26);
        uVar5 = uVar5 + 2;
      }
      param_3[local_18 * 0x26 + -0x26] = param_1[0x56];
      param_1[0x56] = param_3;
      param_1[0x52] = param_1[0x52] + local_18;
    }
    param_1[0x441] = 0;
    param_1[0x442] = 0;
    uVar8 = 1;
    iVar3 = 1;
    do {
      param_1[iVar3 + 0x442] = 0;
      uVar8 = uVar8 + 2;
      param_1[iVar3 + 0x443] = 0;
      iVar3 = iVar3 + 2;
    } while (uVar8 < 499);
    *(undefined1 *)(param_1 + 0x645) = 0;
    *(undefined1 *)(param_1 + 0x635) = 0;
    *(undefined1 *)(param_1 + 0x655) = 0;
    *(undefined1 *)(param_1 + 0x695) = 0;
    *(undefined1 *)(param_1 + 0x6d5) = 0;
    param_1[0x7ee] = 0;
    param_1[0x7ef] = 0;
    param_1[0x7f0] = 0;
    param_1[0x7f2] = 0;
    param_1[0x7f1] = 0;
    param_1[0x7f3] = 0;
    param_1[0x7f4] = 0;
    param_1[0x7f5] = 0;
    param_1[0x7f6] = 0;
    FUN_00195018(param_1);
  }
  return;
}

