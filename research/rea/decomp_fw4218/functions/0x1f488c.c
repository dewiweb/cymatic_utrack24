// rea decompile_all
// name: FUN_001f488c
// address: 0x1f488c
// body: available
// range: 0x1f488c-0x1f4941 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001f488c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int extraout_r1;
  uint uVar5;
  int iVar6;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int local_18;
  
  iVar1 = DAT_001f4948;
  iVar6 = DAT_001f4944;
  uVar5 = 0;
  local_38 = param_3;
  local_34 = param_2;
  uStack_24 = param_1;
  uStack_20 = param_2;
  uStack_1c = param_3;
  local_18 = param_4;
  while( true ) {
    if (((*(uint *)(iVar6 + 8) & 1) == 0) && (iVar2 = FUN_001c7162(DAT_001f494c), iVar2 != 0)) {
      FUN_001c70d8(DAT_001f4948,DAT_001f4950,0x10,200);
      FUN_001c70ac(0,DAT_001f4958,DAT_001f4954);
    }
    if (((uVar5 < 200) && (iVar2 = uVar5 * 0x10 + iVar1, iVar2 != 0)) &&
       (*(int *)(iVar2 + 0xc) == 0)) break;
    uVar5 = uVar5 + 1;
    if (199 < (int)uVar5) {
      return 4;
    }
  }
  *(undefined4 *)(iVar2 + 4) = param_1;
  *(undefined4 *)(iVar2 + 0xc) = local_34;
  *(undefined4 *)(iVar2 + 8) = local_38;
  piVar3 = (int *)FUN_000624d8();
  iVar6 = 0;
  if ((local_18 != 0) && (iVar6 = FUN_001b20b0(), iVar6 == 0)) {
    return 3;
  }
  FUN_001c6e90(piVar3[1] - *piVar3);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  FUN_0023e74c(piVar3,&local_38);
  if (extraout_r1 == 0) {
    return 4;
  }
  uVar4 = FUN_00062514(piVar3,iVar6,extraout_r1,iVar2);
  return uVar4;
}

