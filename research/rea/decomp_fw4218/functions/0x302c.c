// rea decompile_all
// name: FUN_0000302c
// address: 0x302c
// body: available
// range: 0x302c-0x3175 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0000302c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_30;
  int local_2c;
  int local_1c;
  
  uVar5 = param_4[1];
  local_2c = 0;
  iVar7 = param_4[2];
  iVar9 = -1;
  do {
    iVar8 = iVar9;
    iVar9 = iVar8 + 1;
    local_30 = (*(code *)param_4[6])(param_2);
    iVar1 = (*(code *)param_4[8])();
  } while (iVar1 != 0);
  if (local_30 == -1) {
    return -1;
  }
  uVar6 = uVar5 & 0xfffff9ff;
  iVar1 = iVar7;
  iVar2 = iVar9;
  local_1c = param_3;
  if (0 < iVar7) {
    if ((int)(uVar5 << 0x19) < 0) {
      if (local_30 != 0x2b) {
        if (local_30 != 0x2d) goto LAB_0000308e;
        uVar6 = uVar6 | 0x400;
      }
      iVar9 = iVar8 + 2;
      local_30 = (*(code *)param_4[6])(param_2);
      iVar7 = iVar7 + -1;
      iVar1 = iVar7;
      iVar2 = iVar9;
      if (iVar7 < 1) goto LAB_00003094;
    }
LAB_0000308e:
    iVar1 = iVar7;
    iVar2 = iVar9;
    if (local_30 == 0x30) {
      uVar5 = uVar6 | 0x200;
      iVar1 = iVar7 + -1;
      iVar2 = iVar9 + 1;
      local_30 = (*(code *)param_4[6])(param_2);
      if ((iVar1 < 1) || ((local_30 != 0x78 && (local_30 != 0x58)))) {
        if (param_3 == 0) {
          local_1c = 8;
        }
      }
      else if ((param_3 == 0) || (param_3 == 0x10)) {
        iVar1 = iVar7 + -2;
        iVar2 = iVar9 + 2;
        local_30 = (*(code *)param_4[6])(param_2);
        local_1c = 0x10;
        uVar5 = uVar6;
      }
      goto LAB_00003108;
    }
  }
LAB_00003094:
  uVar5 = uVar6;
  if (param_3 == 0) {
    local_1c = 10;
  }
LAB_00003108:
  while ((0 < iVar1 && (iVar9 = FUN_00004806(local_30,local_1c), -1 < iVar9))) {
    iVar1 = iVar1 + -1;
    local_2c = local_1c * local_2c + iVar9;
    iVar2 = iVar2 + 1;
    local_30 = (*(code *)param_4[6])(param_2);
    uVar5 = uVar5 | 0x200;
  }
  (*(code *)param_4[7])(param_2);
  if ((int)(uVar5 << 0x16) < 0) {
    if ((uVar5 & 1) == 0) {
      if ((int)(uVar5 << 0x19) < 0) {
        if ((int)(uVar5 << 0x15) < 0) {
          local_2c = -local_2c;
        }
        puVar3 = (undefined4 *)*param_4;
        *param_4 = puVar3 + 1;
        piVar4 = (int *)*puVar3;
        if ((int)(uVar5 << 0x14) < 0) {
          *(char *)piVar4 = (char)local_2c;
        }
        else if ((int)(uVar5 << 0x1c) < 0) {
          *(short *)piVar4 = (short)local_2c;
        }
        else {
          *piVar4 = local_2c;
        }
      }
      else {
        puVar3 = (undefined4 *)*param_4;
        *param_4 = puVar3 + 1;
        piVar4 = (int *)*puVar3;
        if ((int)(uVar5 << 0x14) < 0) {
          *(char *)piVar4 = (char)local_2c;
        }
        else if ((int)(uVar5 << 0x1c) < 0) {
          *(short *)piVar4 = (short)local_2c;
        }
        else {
          *piVar4 = local_2c;
        }
      }
    }
  }
  else {
    iVar2 = -2;
  }
  return iVar2;
}

