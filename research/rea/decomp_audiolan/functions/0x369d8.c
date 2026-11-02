// rea decompile_all
// name: FUN_000369d8
// address: 0x369d8
// body: available
// range: 0x369d8-0x36adb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000369d8(int *param_1,uint *param_2,uint *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint local_30;
  uint local_2c;
  uint local_28;
  undefined1 local_24;
  int *piStack_20;
  uint *local_1c;
  uint *puStack_18;
  
  iVar2 = DAT_00036adc;
  iVar6 = param_2[2] - param_3[2];
  iVar7 = 0;
  iVar8 = 0;
  local_30 = *param_3;
  local_2c = param_3[1];
  uVar5 = *param_2;
  uVar4 = param_2[1];
  if (uVar4 < local_2c || local_2c - uVar4 < (uint)(uVar5 <= local_30)) {
    if (local_2c < uVar4 || uVar4 - local_2c < (uint)(local_30 <= uVar5)) {
      iVar3 = 0;
    }
    else {
      iVar8 = local_30 - uVar5;
      iVar7 = (local_2c - uVar4) - (uint)(local_30 < uVar5);
      iVar3 = 2;
    }
  }
  else {
    iVar8 = uVar5 - local_30;
    iVar7 = (uVar4 - local_2c) - (uint)(uVar5 < local_30);
    iVar3 = 1;
  }
  piStack_20 = param_1;
  local_1c = param_2;
  puStack_18 = param_3;
  if ((char)param_2[3] == '\0') {
    if ((char)param_3[3] != '\0') {
      local_28 = param_3[2];
      local_24 = 0;
      FUN_000363bc(param_1,param_2,&local_30);
      return;
    }
LAB_00036abe:
    local_28 = param_3[2];
    local_24 = 1;
    FUN_000363bc(param_1,param_2,&local_30);
    return;
  }
  if ((char)param_3[3] == '\0') goto LAB_00036abe;
  param_1[1] = iVar7;
  *param_1 = iVar8;
  if (iVar6 < 0) {
    if ((iVar3 == 0) || (iVar3 == 2)) {
      local_30 = uVar5;
      local_2c = uVar4;
      iVar2 = FUN_00035800(iVar6);
      param_1[2] = iVar2;
      uVar1 = 0;
      goto LAB_00036a96;
    }
    param_1[2] = iVar6 + iVar2;
    param_1[1] = iVar7 + -1 + (uint)(iVar8 != 0);
    *param_1 = iVar8 + -1;
  }
  else {
    if (iVar6 < 1) {
      if (iVar3 == 2) {
        uVar1 = 0;
        param_1[2] = 0;
        goto LAB_00036a96;
      }
    }
    else if (iVar3 == 2) {
      param_1[2] = iVar2 - iVar6;
      *(undefined1 *)(param_1 + 3) = 0;
      *param_1 = iVar8 + -1;
      param_1[1] = iVar7 + -1 + (uint)(iVar8 != 0);
      return;
    }
    param_1[2] = iVar6;
  }
  uVar1 = 1;
LAB_00036a96:
  *(undefined1 *)(param_1 + 3) = uVar1;
  return;
}

