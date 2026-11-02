// rea decompile_all
// name: FUN_0023ccd0
// address: 0x23ccd0
// body: available
// range: 0x23ccd0-0x23ce27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_0023ccd0(int *param_1,uint param_2)

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
  uVar1 = FUN_0022e53c(param_1);
  if (uVar1 < local_20) {
    local_28 = FUN_0022e53c(param_1);
    FUN_00173800(8,&DAT_0023ce28,&DAT_0023ce28,local_20);
  }
  uVar1 = FUN_0022e51c(param_1);
  if (uVar1 < local_20) {
    uVar2 = FUN_0022e4a0(param_1);
    local_28 = FUN_0020b1f4(uVar2,param_1);
    piVar3 = (int *)FUN_00247bfc(&local_20,&local_28);
    iVar8 = *piVar3;
    iVar4 = FUN_0022f5c0(param_1,iVar8,*param_1);
    uVar2 = FUN_0023ca0c(param_1,iVar4);
    uVar5 = FUN_0023cbe8(param_1);
    uVar6 = FUN_0023cc00(param_1);
    FUN_00246f64(uVar6,uVar5,uVar2,param_1);
    uVar2 = FUN_0023cbe8(param_1);
    uVar5 = FUN_0023cc00(param_1);
    FUN_0023c9dc(param_1,uVar5,uVar2);
    uVar2 = FUN_00003e14(param_1[2] - *param_1,0x18);
    FUN_0022f584(param_1,*param_1,uVar2);
    iVar7 = FUN_0022e4a0(param_1);
    param_1[1] = iVar4 + iVar7 * 0x18;
    *param_1 = iVar4;
    uVar1 = *param_1 + iVar8 * 0x18;
    param_1[2] = uVar1;
  }
  return CONCAT44(local_28,uVar1);
}

