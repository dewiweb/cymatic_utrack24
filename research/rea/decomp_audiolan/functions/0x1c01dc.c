// rea decompile_all
// name: FUN_001c01dc
// address: 0x1c01dc
// body: available
// range: 0x1c01dc-0x1c02a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_001c01dc(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *local_28;
  char local_24;
  int *piStack_1c;
  undefined4 local_18;
  
  piStack_1c = param_1;
  local_18 = param_2;
  FUN_001d9f00(&local_28,param_1);
  if (local_24 != '\0') {
    piVar1 = (int *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x18);
    iVar4 = *piVar1;
    if ((*(uint *)(iVar4 + 0xc) <= *DAT_001c02a4) ||
       (piVar5 = *(int **)(*(int *)(iVar4 + 8) + *DAT_001c02a4 * 4), piVar5 == (int *)0x0)) {
      piVar5 = (int *)FUN_00160cdc(piVar1,DAT_001c02a4,1,0x80,DAT_001c02a8);
    }
    iVar4 = *(int *)(*param_1 + -0xc) + (int)param_1;
    iVar4 = (**(code **)(*piVar5 + 0x14))
                      (piVar5,*(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x34),iVar4
                       ,*(undefined1 *)(iVar4 + 0x3c),local_18);
    *(undefined4 *)((int)param_1 + *(int *)(*param_1 + -0xc) + 0xc) = 0;
    if ((iVar4 == 0) != 0) {
      iVar2 = *(int *)(*param_1 + -0xc) + (int)param_1;
      uVar3 = *(uint *)(iVar2 + 0x10) | (uint)(iVar4 == 0);
      if (*(int *)(iVar2 + 0x34) == 0) {
        uVar3 = uVar3 | 1;
      }
      FUN_00161878(iVar2,uVar3,0xffffffff);
    }
  }
  if (local_28 != (int *)0x0) {
    local_28 = (int *)((int)local_28 + *(int *)(*local_28 + -0xc));
  }
  uVar3 = local_28[1] << 0x12;
  if (-1 < (int)uVar3) {
    uVar3 = (uint)*DAT_001c02ac;
  }
  return CONCAT44(uVar3,param_1);
}

