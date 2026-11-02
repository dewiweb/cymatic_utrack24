// rea decompile_all
// name: FUN_00004420
// address: 0x4420
// body: available
// range: 0x4420-0x4563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00004420(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int local_30;
  int local_2c;
  int local_28;
  int local_1c;
  
  iVar8 = param_4[2];
  uVar6 = param_4[1];
  iVar5 = -1;
  do {
    iVar4 = iVar5;
    iVar5 = iVar4 + 1;
    local_28 = (*(code *)param_4[6])(param_2);
    iVar1 = (*(code *)param_4[8])();
  } while (iVar1 != 0);
  if (local_28 == -1) {
    return -1;
  }
  uVar7 = uVar6 & 0xfffff9ff;
  iVar1 = iVar5;
  iVar9 = iVar8;
  local_1c = param_3;
  if (0 < iVar8) {
    if ((int)(uVar6 << 0x19) < 0) {
      if (local_28 != 0x2b) {
        if (local_28 != 0x2d) goto LAB_00004484;
        uVar7 = uVar7 | 0x400;
      }
      iVar5 = iVar4 + 2;
      local_28 = (*(code *)param_4[6])(param_2);
      iVar8 = iVar8 + -1;
      iVar1 = iVar5;
      iVar9 = iVar8;
      if (iVar8 < 1) goto LAB_0000448a;
    }
LAB_00004484:
    iVar1 = iVar5;
    iVar9 = iVar8;
    if (local_28 == 0x30) {
      uVar6 = uVar7 | 0x200;
      iVar9 = iVar8 + -1;
      iVar1 = iVar5 + 1;
      local_28 = (*(code *)param_4[6])(param_2);
      if ((iVar9 < 1) || ((local_28 != 0x78 && (local_28 != 0x58)))) {
        lVar10 = 0;
        if (param_3 == 0) {
          local_1c = 8;
          lVar10 = 0;
        }
      }
      else if ((param_3 == 0) || (lVar10 = 0, param_3 == 0x10)) {
        iVar9 = iVar8 + -2;
        iVar1 = iVar5 + 2;
        local_28 = (*(code *)param_4[6])(param_2);
        local_1c = 0x10;
        uVar6 = uVar7;
        lVar10 = 0;
      }
      goto LAB_0000450c;
    }
  }
LAB_0000448a:
  uVar6 = uVar7;
  lVar10 = 0;
  if (param_3 == 0) {
    local_1c = 10;
    lVar10 = 0;
  }
LAB_0000450c:
  while( true ) {
    local_2c = (int)((ulonglong)lVar10 >> 0x20);
    local_30 = (int)lVar10;
    if ((iVar9 < 1) || (iVar5 = FUN_00004402(local_28,local_1c), iVar5 < 0)) break;
    iVar9 = iVar9 + -1;
    lVar10 = FUN_00002754(local_30,local_2c,local_1c,local_1c >> 0x1f);
    iVar1 = iVar1 + 1;
    local_28 = (*(code *)param_4[6])(param_2);
    uVar6 = uVar6 | 0x200;
    lVar10 = lVar10 + iVar5;
  }
  (*(code *)param_4[7])(param_2);
  if ((int)(uVar6 << 0x16) < 0) {
    if ((uVar6 & 1) == 0) {
      if ((int)(uVar6 << 0x19) < 0) {
        if ((int)(uVar6 << 0x15) < 0) {
          lVar10 = CONCAT44(-(uint)(local_30 != 0) - local_2c,-local_30);
        }
        puVar2 = (undefined4 *)*param_4;
        *param_4 = puVar2 + 1;
        plVar3 = (longlong *)*puVar2;
      }
      else {
        puVar2 = (undefined4 *)*param_4;
        *param_4 = puVar2 + 1;
        plVar3 = (longlong *)*puVar2;
      }
      *plVar3 = lVar10;
    }
  }
  else {
    iVar1 = -2;
  }
  return iVar1;
}

