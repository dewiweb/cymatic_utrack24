// rea decompile_all
// name: FUN_0006cbf4
// address: 0x6cbf4
// body: available
// range: 0x6cbf4-0x6ccef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_0006cbf4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5,
            int param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int local_28 [2];
  
  uVar7 = param_5 & 0xf;
  iVar1 = FUN_0016deb0(param_2,DAT_0006ccf4,DAT_0006ccf0,0xffffffff);
  if (iVar1 != 0) {
    piVar8 = (int *)(iVar1 + 0x18);
    local_28[0] = *(int *)(iVar1 + 0x1c) - *piVar8 >> 2;
    local_28[1] = 1;
    piVar2 = local_28;
    if (local_28[0] == 0) {
      piVar2 = local_28 + 1;
    }
    iVar9 = *piVar2;
    puVar3 = (undefined4 *)FUN_0010f82c(iVar9 << 2,0);
    puVar6 = *(undefined4 **)(iVar1 + 0x1c);
    puVar4 = puVar3;
    for (puVar5 = (undefined4 *)*piVar8; puVar5 != puVar6; puVar5 = puVar5 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar5;
      }
      puVar4 = puVar4 + 1;
    }
    if ((param_6 == 0) && (param_5 < (uint)((*(int *)(iVar1 + 0x1c) - *piVar8 >> 2) * 4 >> 2))) {
      uVar7 = uVar7 | 0x10;
    }
    FUN_0010fa20(puVar3,iVar9 * 4 >> 2,0);
  }
  if (param_6 == 0) {
    *(uint *)(param_4 + 0x10) = uVar7;
  }
  else {
    *(uint *)(param_4 + 0x14) = uVar7;
  }
  return 0;
}

