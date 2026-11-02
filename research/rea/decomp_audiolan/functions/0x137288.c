// rea decompile_all
// name: FUN_00137288
// address: 0x137288
// body: available
// range: 0x137288-0x137397 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00137288(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)FUN_0016d7a4(0x104,DAT_00137398,param_3,param_4,param_4);
  piVar3 = DAT_0013739c;
  if (piVar1 != (int *)0x0) {
    *piVar1 = *DAT_0013739c;
    iVar2 = piVar3[7];
    piVar1[0x40] = iVar2;
    *(int *)((int)piVar1 + *(int *)(iVar2 + -0x38) + 0x100) = piVar3[8];
    iVar2 = piVar3[9];
    piVar1[0x40] = iVar2;
    *(int *)((int)piVar1 + *(int *)(iVar2 + -0x38) + 0x100) = piVar3[0xb];
    *(int *)((int)piVar1 + *(int *)(piVar1[0x40] + -0x48) + 0x100) = piVar3[10];
    piVar1 = (int *)FUN_00117bd8(piVar1,piVar3 + 1,DAT_001373a0,param_1,piVar1);
    iVar2 = *piVar3;
    *piVar1 = iVar2;
    *(int *)((int)piVar1 + *(int *)(iVar2 + -0x10)) = piVar3[5];
    *(int *)((int)piVar1 + *(int *)(*piVar1 + -0xc)) = piVar3[4];
    *(int *)((int)piVar1 + *(int *)(*piVar1 + -0x14)) = piVar3[6];
    iVar2 = FUN_000f12fc(piVar1 + 0x10);
    iVar2 = FUN_000f584c(iVar2 + 0x54);
    piVar3 = (int *)(iVar2 + -0x94);
    *(undefined1 *)(iVar2 + -0x57) = 1;
    FUN_000f58d4(iVar2,param_2);
    iVar2 = FUN_000e9bb4(piVar3,0x46,param_1 + 0x548);
    if (iVar2 != 0) {
      return piVar3;
    }
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  return (int *)0x0;
}

