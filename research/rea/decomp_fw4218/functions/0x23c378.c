// rea decompile_all
// name: FUN_0023c378
// address: 0x23c378
// body: available
// range: 0x23c378-0x23c465 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0023c378(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = FUN_0022e432();
  uVar2 = FUN_0022e424(param_1);
  if (uVar2 < uVar1) {
    iVar6 = param_1[1];
    iVar5 = iVar6 + -0x28;
    param_1[1] = iVar6 + 0x28;
    FUN_0022f574(param_1,iVar6);
    while (param_2 != iVar5) {
      iVar5 = iVar5 + -0x28;
      iVar6 = iVar6 + -0x28;
      FUN_000f41c8(iVar6,iVar5);
    }
    FUN_000f41c8(param_2,param_3);
  }
  else {
    uVar2 = FUN_0022e424(param_1);
    uVar4 = (uVar2 >> 1) + uVar2 + (uVar2 >> 3);
    uVar1 = uVar2 + 1;
    if (uVar2 + 1 <= uVar4) {
      uVar1 = uVar4;
    }
    iVar5 = FUN_00173860(uVar1 * 0x28,0);
    FUN_00246f28(*param_1,param_2,iVar5,param_1);
    iVar6 = FUN_00003e14(param_2 - *param_1,0x28);
    FUN_0022f574(param_1,iVar6 * 0x28 + iVar5,param_3);
    iVar6 = FUN_00003e14(param_2 - *param_1,0x28);
    FUN_00246f28(param_2,param_1[1],iVar6 * 0x28 + iVar5 + 0x28,param_1);
    iVar6 = FUN_0022e424(param_1);
    FUN_0023c360(param_1,*param_1,param_1[1]);
    iVar7 = *param_1;
    uVar3 = FUN_0022e432(param_1);
    FUN_00173a54(iVar7,uVar3,0);
    *param_1 = iVar5;
    param_1[1] = iVar6 * 0x28 + iVar5 + 0x28;
    param_1[2] = uVar1 * 0x28 + iVar5;
  }
  return;
}

