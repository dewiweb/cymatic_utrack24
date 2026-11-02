// rea decompile_all
// name: FUN_000236c0
// address: 0x236c0
// body: available
// range: 0x236c0-0x2387b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000236c0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *DAT_0002387c;
  iVar1 = (int)(((uint)(iVar4 >> 0x1f) >> 0x1e) + iVar4) >> 2;
  iVar3 = iVar4;
  if (*(int *)(param_2 + 0x5c) == 0) {
    uVar2 = (uint)*(byte *)(param_2 + 4);
    if (((uVar2 & 0xf) >> 2 != 0) ||
       ((iVar3 = iVar1, -1 < (int)(uVar2 << 0x1e) && (iVar3 = 0, (uVar2 & 0x3f) >> 4 != 0)))) {
      iVar3 = *DAT_0002387c / 2;
    }
  }
  *(int *)(param_2 + 0xb0) = iVar3;
  if (*(char *)(param_2 + 0x7a) == '\0') {
    iVar4 = *(int *)(&DAT_00001fd8 + param_1);
    if ((iVar4 == 0) || (iVar4 - *(int *)(param_1 + 0xdc) < 0)) {
      iVar3 = *(int *)(param_1 + 0xdc) - iVar3;
    }
    else {
      iVar3 = (iVar4 - iVar3) + iVar1 * 3 + iVar3 / 2;
    }
    *(int *)(param_2 + 0xb4) = iVar3;
  }
  else {
    if ((*(int *)(&DAT_00001fd8 + param_1) == 0) ||
       (*(int *)(&DAT_00001fd8 + param_1) - *(int *)(param_1 + 0xdc) < 0)) {
      iVar3 = FUN_0019560c((int)(((uint)(iVar4 >> 0x1f) >> 0x1d) + iVar4) >> 3);
      iVar1 = *(int *)(param_1 + 0xdc);
      iVar3 = iVar3 + ((int)(((uint)(iVar4 >> 0x1f) >> 0x1d) + iVar4) >> 3) + iVar1;
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      *(int *)(&DAT_00001fd8 + param_1) = iVar3;
      iVar4 = *(int *)(param_1 + 0xf8);
      if (iVar3 - iVar4 < 0) {
        iVar3 = *(int *)(&DAT_00001fd8 + param_1);
      }
      else {
        iVar3 = iVar4;
        if (iVar4 == 0) {
          iVar3 = 1;
        }
        *(int *)(&DAT_00001fd8 + param_1) = iVar3;
      }
      if (iVar3 - iVar1 < 0) {
        *(int *)(&DAT_00001fd8 + param_1) = iVar1;
      }
      iVar3 = *(int *)(param_1 + 0xf4);
      if (*(int *)(&DAT_00001fd8 + param_1) - iVar3 < 0) {
        iVar5 = *(int *)(&DAT_00001fd8 + param_1);
      }
      else {
        iVar5 = iVar3;
        if (iVar3 == 0) {
          iVar5 = 1;
        }
        *(int *)(&DAT_00001fd8 + param_1) = iVar5;
      }
      if (iVar5 - iVar1 < 0) {
        *(int *)(&DAT_00001fd8 + param_1) = iVar1;
      }
      iVar5 = *(int *)(param_1 + 0xec);
      if ((iVar5 != 0) && (*(int *)(&DAT_00001fd8 + param_1) - iVar5 < 0)) {
        *(int *)(&DAT_00001fd8 + param_1) = iVar5;
      }
      if (*DAT_0002387c * 8 < *(int *)(&DAT_00001fd8 + param_1) - iVar1) {
        FUN_00024642(0,DAT_00023880,*(int *)(&DAT_00001fd8 + param_1) - iVar1,iVar4 - iVar1,
                     iVar3 - iVar1,iVar5,iVar5 - iVar1);
        iVar1 = *DAT_0002387c;
        iVar3 = FUN_0019560c((int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3);
        iVar3 = iVar3 + ((int)(((uint)(iVar1 >> 0x1f) >> 0x1d) + iVar1) >> 3) +
                *(int *)(param_1 + 0xdc);
        if (iVar3 == 0) {
          iVar3 = 1;
        }
        *(int *)(&DAT_00001fd8 + param_1) = iVar3;
      }
    }
    *(int *)(param_2 + 0xb4) = *(int *)(&DAT_00001fd8 + param_1) - *(int *)(param_2 + 0xb0);
  }
  if (*(int *)(param_2 + 0x5c) != 0) {
    *(undefined4 *)(param_2 + 0xb4) = *(undefined4 *)(param_1 + 0xdc);
  }
  if ((((*(uint *)(param_1 + 4) & 1) != 0) &&
      (*(int3 *)(param_2 + 0x49) != 0 || *(char *)(param_2 + 0x4c) != '\0')) &&
     (*(short *)(param_2 + 6) == 0x1c)) {
    *(int *)(param_2 + 0xb4) =
         (*(int *)(param_1 + 0xdc) - *(int *)(param_2 + 0xb0)) + *DAT_0002387c * 10;
  }
  *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)(param_2 + 0xbc) = *DAT_00023884;
  FUN_0003f42c(param_1,param_2);
  return;
}

