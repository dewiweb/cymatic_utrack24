// rea decompile_all
// name: FUN_001330c8
// address: 0x1330c8
// body: available
// range: 0x1330c8-0x133233 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001330c8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  piVar1 = (int *)FUN_0016d7a4(0x1cc,DAT_00133234);
  piVar4 = DAT_00133238;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *DAT_00133238;
    iVar3 = piVar4[0xc];
    piVar1[0x71] = iVar3;
    *(int *)((int)piVar1 + *(int *)(iVar3 + -0x38) + 0x1c4) = piVar4[0xd];
    iVar3 = piVar4[0xe];
    piVar1[0x72] = iVar3;
    *(int *)((int)piVar1 + *(int *)(iVar3 + -0x38) + 0x1c8) = piVar4[0xf];
    iVar3 = piVar4[0x10];
    piVar1[0x72] = iVar3;
    *(int *)((int)piVar1 + *(int *)(iVar3 + -0x38) + 0x1c8) = piVar4[0x12];
    *(int *)((int)piVar1 + *(int *)(piVar1[0x72] + -0x1ec) + 0x1c8) = piVar4[0x11];
    piVar1 = (int *)FUN_0012a6a0(piVar1,piVar4 + 1,DAT_0013323c,param_1);
    iVar3 = *piVar4;
    *piVar1 = iVar3;
    *(int *)((int)piVar1 + *(int *)(iVar3 + -0x10)) = piVar4[9];
    *(int *)((int)piVar1 + *(int *)(*piVar1 + -0xc)) = piVar4[8];
    *(int *)((int)piVar1 + *(int *)(*piVar1 + -0x14)) = piVar4[10];
    *(int *)((int)piVar1 + *(int *)(*piVar1 + -0x18)) = piVar4[0xb];
    iVar3 = FUN_00125190(piVar1 + 0x5a);
    piVar4 = (int *)(iVar3 + -0x168);
    iVar2 = FUN_001289f8(piVar4,param_2,param_3,param_4);
    if ((iVar2 != 0) && (iVar3 = FUN_00123290(iVar3,3), iVar3 != 0)) {
      return piVar4;
    }
    (**(code **)(*piVar4 + 4))(piVar4);
  }
  return (int *)0x0;
}

