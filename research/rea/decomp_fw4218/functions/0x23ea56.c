// rea decompile_all
// name: FUN_0023ea56
// address: 0x23ea56
// body: available
// range: 0x23ea56-0x23eb2d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0023ea56(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  
  iVar1 = param_1[2];
  iVar5 = *param_1;
  piVar8 = param_1;
  iVar7 = param_2;
  uVar2 = FUN_0022e6a4(param_1);
  if (uVar2 < (uint)(iVar1 - iVar5 >> 3)) {
    iVar1 = param_1[1];
    iVar7 = iVar1 + -8;
    param_1[1] = iVar1 + 8;
    FUN_0022f6f4(param_1,iVar1);
    while (param_2 != iVar7) {
      iVar7 = iVar7 + -8;
      iVar1 = iVar1 + -8;
      FUN_00003b88(iVar1,iVar7,5);
    }
    FUN_00003b88(param_2,param_3,5);
    return;
  }
  uVar3 = FUN_0022e6a4(param_1);
  uVar6 = (uVar3 >> 1) + uVar3 + (uVar3 >> 3);
  uVar2 = uVar3 + 1;
  if (uVar3 + 1 <= uVar6) {
    uVar2 = uVar6;
  }
  iVar1 = FUN_00173860(uVar2 * 8,0);
  FUN_00247316(*param_1,param_2,iVar1,param_1,piVar8,iVar7);
  FUN_0022f6f4(param_1,(param_2 - *param_1 & 0xfffffff8U) + iVar1,param_3);
  FUN_00247316(param_2,param_1[1],(param_2 - *param_1 & 0xfffffff8U) + iVar1 + 8,param_1);
  iVar5 = FUN_0022e6a4(param_1);
  iVar4 = *param_1;
  for (iVar7 = iVar4; iVar7 != param_1[1]; iVar7 = iVar7 + 8) {
  }
  FUN_00173a54(iVar4,param_1[2] - iVar4 >> 3,0);
  *param_1 = iVar1;
  param_1[1] = iVar5 * 8 + iVar1 + 8;
  param_1[2] = uVar2 * 8 + iVar1;
  return;
}

