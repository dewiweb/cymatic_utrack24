// rea decompile_all
// name: FUN_00244634
// address: 0x244634
// body: available
// range: 0x244634-0x244777 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_00244634(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 local_28;
  int *piStack_24;
  uint local_20;
  
  piStack_24 = param_1;
  local_20 = param_2;
  uVar1 = FUN_0022f000(param_1);
  if (uVar1 < local_20) {
    local_28 = FUN_0022f000(param_1);
    FUN_00173800(8,&DAT_00244778,&DAT_00244778,local_20);
  }
  uVar1 = FUN_0022efe8(param_1);
  if (uVar1 < local_20) {
    uVar2 = FUN_0022ef74(param_1);
    local_28 = FUN_0020b494(uVar2,param_1);
    piVar3 = (int *)FUN_00247bfc(&local_20,&local_28);
    iVar8 = *piVar3;
    iVar4 = FUN_00230d38(param_1,iVar8,*param_1);
    uVar2 = FUN_00244530(param_1,iVar4);
    uVar5 = FUN_0024453c(param_1);
    uVar6 = FUN_0024456c(param_1);
    FUN_00247714(uVar6,uVar5,uVar2,param_1);
    uVar2 = FUN_0024453c(param_1);
    uVar5 = FUN_0024456c(param_1);
    FUN_00244500(param_1,uVar5,uVar2);
    FUN_00230cfc(param_1,*param_1,param_1[2] - *param_1 >> 2);
    iVar7 = FUN_0022ef74(param_1);
    param_1[1] = iVar4 + iVar7 * 4;
    *param_1 = iVar4;
    uVar1 = *param_1 + iVar8 * 4;
    param_1[2] = uVar1;
  }
  return CONCAT44(local_28,uVar1);
}

