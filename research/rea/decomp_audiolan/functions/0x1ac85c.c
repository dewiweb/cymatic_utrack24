// rea decompile_all
// name: FUN_001ac85c
// address: 0x1ac85c
// body: available
// range: 0x1ac85c-0x1ac8f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001ac85c(undefined4 param_1,uint param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  puVar2 = DAT_001ac8f8;
  uVar6 = *DAT_001ac8f8;
  iVar3 = FUN_001ac770();
  if (iVar3 == 0) {
    if (param_2 < param_3) {
      uVar4 = DAT_001ac8fc;
      if (-1 < (int)param_3) {
        uVar4 = DAT_001ac900;
      }
      uVar5 = DAT_001ac904;
      if (param_3 != 1) {
        uVar5 = DAT_001ac908;
      }
      FUN_001ac910(uVar4,DAT_001ac90c,param_3,uVar5);
      iVar3 = 1;
    }
  }
  else if (1 < iVar3) {
    uVar4 = 1;
    goto LAB_001ac8c4;
  }
  uVar4 = 0;
LAB_001ac8c4:
  *puVar2 = uVar4;
  if (iVar3 != 0) {
    if (param_4 != 0) {
      FUN_00184834(param_4);
    }
    bVar7 = iVar3 == 1;
    if (1 < iVar3) {
      *puVar2 = uVar6;
    }
    iVar1 = iVar3 + -1;
    if (1 >= iVar3) {
      bVar7 = iVar3 == 0;
      iVar1 = iVar3;
    }
    if (!bVar7 && iVar1 < 0 == (1 < iVar3 && SBORROW4(iVar3,1))) {
      return 1;
    }
  }
  return 0;
}

