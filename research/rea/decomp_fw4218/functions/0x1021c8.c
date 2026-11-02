// rea decompile_all
// name: FUN_001021c8
// address: 0x1021c8
// body: available
// range: 0x1021c8-0x1022cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint * FUN_001021c8(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  
  if (param_2 == 0) {
    uVar1 = 5;
  }
  else {
    uVar1 = param_2 + 4;
    if (0x40 < uVar1) {
      uVar1 = param_2 + 0x13U & 0xfffffff0;
    }
    if (0x100 < uVar1) {
      uVar1 = uVar1 + 0x3f & 0xffffffc0;
    }
  }
  if ((uint)param_1[1] < uVar1) {
    return (uint *)0x0;
  }
  uVar1 = uVar1 - 1 >> 2;
  FUN_001cf70c(param_1 + 3,0xffffffff);
  piVar4 = *(int **)(*param_1 + uVar1 * 4);
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)FUN_001f01e0(0x34);
    *(int **)(*param_1 + uVar1 * 4) = piVar4;
    if (piVar4 == (int *)0x0) goto LAB_001022bc;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    piVar4[5] = 0;
    piVar4[6] = 0;
    piVar4[7] = 0;
    piVar4[8] = 0;
    piVar4[9] = 0;
    piVar4[10] = 0;
    piVar4[0xb] = 0;
    piVar4[0xc] = 0;
    *piVar4 = uVar1 * 4 + 4;
    uVar2 = FUN_00006604(0x800);
    piVar4[1] = uVar2;
    if (0xff < uVar2) {
      piVar4[1] = 0xff;
    }
  }
  puVar3 = (uint *)FUN_0007b548(piVar4);
  if (puVar3 != (uint *)0x0) {
    *puVar3 = uVar1;
    FUN_001cf828(param_1 + 3);
    return puVar3 + 1;
  }
LAB_001022bc:
  FUN_001cf828(param_1 + 3);
  return (uint *)0x0;
}

