// rea decompile_all
// name: FUN_0023da60
// address: 0x23da60
// body: available
// range: 0x23da60-0x23db53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0023da60(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar1 = FUN_0022e654();
  uVar2 = FUN_0022e640(param_1);
  if (uVar2 < uVar1) {
    iVar7 = param_1[1];
    param_1[1] = iVar7 + DAT_0023db54;
    iVar6 = iVar7 - DAT_0023db54;
    FUN_0022f6ae(param_1,iVar7);
    iVar3 = -DAT_0023db54;
    for (; param_2 != iVar6; iVar6 = iVar6 + iVar3) {
      iVar7 = iVar7 + iVar3;
      FUN_0013d02e(iVar7);
    }
    FUN_0013d02e(param_2,param_3);
  }
  else {
    uVar2 = FUN_0022e640(param_1);
    uVar5 = (uVar2 >> 1) + uVar2 + (uVar2 >> 3);
    uVar1 = uVar2 + 1;
    if (uVar2 + 1 <= uVar5) {
      uVar1 = uVar5;
    }
    iVar3 = DAT_0023db54 * uVar1;
    iVar7 = FUN_00173860(iVar3,0);
    FUN_00247044(*param_1,param_2,iVar7,param_1);
    iVar6 = FUN_00003e14(param_2 - *param_1,DAT_0023db54);
    FUN_0022f6ae(param_1,DAT_0023db54 * iVar6 + iVar7,param_3);
    iVar6 = FUN_00003e14(param_2 - *param_1,DAT_0023db54);
    FUN_00247044(param_2,param_1[1],DAT_0023db54 * iVar6 + iVar7 + DAT_0023db54,param_1);
    iVar6 = FUN_0022e640(param_1);
    FUN_0023da40(param_1,*param_1,param_1[1]);
    iVar8 = *param_1;
    uVar4 = FUN_0022e654(param_1);
    FUN_00173a54(iVar8,uVar4,0);
    *param_1 = iVar7;
    param_1[1] = DAT_0023db54 * iVar6 + iVar7 + DAT_0023db54;
    param_1[2] = iVar3 + iVar7;
  }
  return;
}

