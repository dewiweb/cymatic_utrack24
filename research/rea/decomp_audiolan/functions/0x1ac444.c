// rea decompile_all
// name: FUN_001ac444
// address: 0x1ac444
// body: available
// range: 0x1ac444-0x1ac4fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_001ac444(byte *param_1,uint param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  piVar1 = DAT_001ac4fc;
  if (param_1 != (byte *)0x0) {
    param_2 = (uint)*param_1;
  }
  if (param_1 != (byte *)0x0 && param_2 != 0) {
    uVar2 = FUN_000163bc();
    iVar3 = FUN_000b636c(uVar2,param_1,1);
    if (iVar3 == -1) {
      return 0xffffffff;
    }
    iVar6 = piVar1[3];
    iVar4 = iVar3;
    if (iVar6 != -1) {
      piVar1[3] = -1;
      uVar2 = FUN_000163bc(iVar3);
      iVar4 = FUN_000b64d8(uVar2,iVar6);
    }
    FUN_000163bc(iVar4);
    piVar5 = (int *)FUN_00016440(iVar3);
    (**(code **)(*piVar5 + 0x2c))(piVar5,1);
    piVar1[3] = iVar3;
    *piVar1 = iVar3;
    return 0;
  }
  iVar3 = DAT_001ac4fc[3];
  if (iVar3 != -1) {
    uVar2 = FUN_000163bc();
    FUN_000b64d8(uVar2,iVar3);
    *piVar1 = -1;
    piVar1[3] = -1;
  }
  return 0;
}

