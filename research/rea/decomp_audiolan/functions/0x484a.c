// rea decompile_all
// name: FUN_0000484a
// address: 0x484a
// body: available
// range: 0x484a-0x492d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0000484a(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4,
                undefined4 param_5,undefined4 param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 *puStack_1c;
  int local_18;
  
  local_38 = (undefined1 *)0x0;
  uVar1 = param_3[1];
  iVar6 = param_3[2];
  local_30 = 0;
  local_2c = 0;
  iVar5 = 0;
  uStack_24 = param_1;
  local_20 = param_2;
  puStack_1c = param_3;
  local_18 = param_4;
  uVar2 = (*(code *)param_3[6])(param_2);
  if (local_18 == 0 && param_7 == 0) {
    while (iVar4 = (*(code *)param_3[8])(uVar2), iVar4 != 0) {
      iVar5 = iVar5 + 1;
      uVar2 = (*(code *)param_3[6])(local_20);
    }
  }
  if (uVar2 == 0xffffffff) {
    iVar5 = -1;
  }
  else {
    if ((uVar1 & 1) == 0) {
      puVar3 = (undefined4 *)*param_3;
      *param_3 = puVar3 + 1;
      local_38 = (undefined1 *)*puVar3;
    }
    while ((0 < iVar6 && (uVar2 != 0xffffffff))) {
      if (local_18 == 0) {
        if ((param_7 == 0) && (iVar4 = (*(code *)param_3[8])(uVar2), iVar4 != 0)) break;
      }
      else {
        iVar4 = FUN_00005788(local_18,param_5,param_6,uVar2);
        if (iVar4 == 0) break;
      }
      if ((uVar1 & 1) == 0) {
        iVar4 = FUN_00004a28(local_38,uVar2 & 0xffff,&local_30);
        if (iVar4 == -1) goto LAB_00004924;
        local_38 = local_38 + iVar4;
      }
      iVar6 = iVar6 + -1;
      iVar5 = iVar5 + 1;
      uVar2 = (*(code *)param_3[6])(local_20);
    }
    (*(code *)param_3[7])(local_20);
    if ((uVar1 & 1) == 0 && param_7 == 0) {
      *local_38 = 0;
    }
    if (((int)param_3[2] <= iVar6) || ((param_7 != 0 && (iVar6 != 0)))) {
LAB_00004924:
      iVar5 = -2;
    }
  }
  return iVar5;
}

