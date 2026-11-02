// rea decompile_all
// name: FUN_0017b580
// address: 0x17b580
// body: available
// range: 0x17b580-0x17b75b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0017b580(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  
  if (0x1f < param_2) {
    return 0xf;
  }
  uVar8 = thunk_EXT_FUN_0040001c();
  *param_3 = *(undefined4 *)(param_1 + 0x38);
  puVar5 = DAT_0017b768;
  puVar4 = DAT_0017b764;
  iVar3 = DAT_0017b760;
  puVar2 = DAT_0017b75c;
  iVar1 = 1 << (param_2 & 0xff);
  if (*(int *)(param_1 + 0x3c) == 0) {
    iVar9 = *(int *)(param_1 + 0x38);
    if (*(int *)(param_1 + 0x20) == param_1) {
      *(undefined4 *)(DAT_0017b760 + iVar9 * 4) = 0;
      uVar10 = *(uint *)(param_1 + 0x4c);
      *puVar5 = *puVar5 & ~uVar10;
      *puVar2 = *puVar2 & ~uVar10;
      *(int *)(param_1 + 0x4c) = iVar1;
      uVar10 = *puVar5;
      if ((uVar10 & 0xff) == 0) {
        uVar11 = uVar10 >> 8 & 0xff;
        if (uVar11 == 0) {
          uVar11 = uVar10 >> 0x10 & 0xff;
          if (uVar11 == 0) {
            if (uVar10 >> 0x18 == 0) {
              uVar10 = 0x20;
            }
            else {
              uVar10 = *(byte *)(DAT_0017b76c + (uVar10 >> 0x18)) + 0x18;
            }
          }
          else {
            uVar10 = *(byte *)(DAT_0017b76c + uVar11) + 0x10;
          }
        }
        else {
          uVar10 = *(byte *)(DAT_0017b76c + uVar11) + 8;
        }
        *puVar4 = uVar10;
      }
      else {
        *puVar4 = (uint)*(byte *)(DAT_0017b76c + (uVar10 & 0xff));
      }
    }
    else {
      if (*(int *)(DAT_0017b760 + iVar9 * 4) == param_1) {
        *(int *)(DAT_0017b760 + iVar9 * 4) = *(int *)(param_1 + 0x20);
        *puVar2 = *puVar2 & ~*(uint *)(param_1 + 0x4c);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x24) = *(undefined4 *)(param_1 + 0x24);
      *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x20) = *(undefined4 *)(param_1 + 0x20);
      *(int *)(param_1 + 0x4c) = iVar1;
    }
    piVar6 = DAT_0017b770;
    if (param_1 == *DAT_0017b770) {
      if (*puVar4 == 0x20) {
        *DAT_0017b770 = 0;
      }
      else {
        *DAT_0017b770 = *(int *)(iVar3 + *puVar4 * 4);
      }
    }
    uVar10 = *(uint *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x3c) = 3;
    piVar7 = DAT_0017b774;
    *(uint *)(param_1 + 0x38) = param_2;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *piVar7 = *piVar7 + 1;
    thunk_EXT_FUN_00400034(uVar8);
    FUN_0017b780(param_1);
    piVar7 = DAT_0017b778;
    if (param_2 < uVar10) {
      uVar10 = param_2;
    }
    *(uint *)(param_1 + 0x48) = uVar10;
    if ((*piVar7 != *piVar6) && (*DAT_0017b77c == 0)) {
      FUN_0001181c();
    }
  }
  else {
    *(uint *)(param_1 + 0x38) = param_2;
    if (param_2 < *(uint *)(param_1 + 0x48)) {
      *(uint *)(param_1 + 0x48) = param_2;
    }
    *(int *)(param_1 + 0x4c) = iVar1;
    thunk_EXT_FUN_00400034(uVar8);
  }
  return 0;
}

