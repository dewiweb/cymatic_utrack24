// rea decompile_all
// name: FUN_0011971c
// address: 0x11971c
// body: available
// range: 0x11971c-0x11985b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0011971c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_0016d7a4(0x170,DAT_0011985c);
  piVar1 = DAT_00119860;
  if (piVar2 != (int *)0x0) {
    *piVar2 = *DAT_00119860;
    iVar3 = piVar1[0xc];
    piVar2[0x5a] = iVar3;
    *(int *)((int)piVar2 + *(int *)(iVar3 + -0x38) + 0x168) = piVar1[0xd];
    iVar3 = piVar1[0xe];
    piVar2[0x5b] = iVar3;
    *(int *)((int)piVar2 + *(int *)(iVar3 + -0x38) + 0x16c) = piVar1[0xf];
    iVar3 = piVar1[0x10];
    piVar2[0x5b] = iVar3;
    *(int *)((int)piVar2 + *(int *)(iVar3 + -0x38) + 0x16c) = piVar1[0x12];
    *(int *)((int)piVar2 + *(int *)(piVar2[0x5b] + -0x1ec) + 0x16c) = piVar1[0x11];
    piVar2 = (int *)FUN_0012a6a0(piVar2,piVar1 + 1,0x100,param_1);
    iVar3 = *piVar1;
    *piVar2 = iVar3;
    *(int *)((int)piVar2 + *(int *)(iVar3 + -0x10)) = piVar1[9];
    *(int *)((int)piVar2 + *(int *)(*piVar2 + -0xc)) = piVar1[8];
    *(int *)((int)piVar2 + *(int *)(*piVar2 + -0x14)) = piVar1[10];
    *(int *)((int)piVar2 + *(int *)(*piVar2 + -0x18)) = piVar1[0xb];
    iVar3 = FUN_001289f8(piVar2,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if (iVar3 != 0) {
      return piVar2;
    }
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return (int *)0x0;
}

