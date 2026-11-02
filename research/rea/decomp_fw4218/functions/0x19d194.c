// rea decompile_all
// name: FUN_0019d194
// address: 0x19d194
// body: available
// range: 0x19d194-0x19d2a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0019d194(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = (int *)FUN_001c6b14(0x68,DAT_0019d2a4,param_3,param_4,param_4);
  piVar1 = DAT_0019d2a8;
  if (piVar2 != (int *)0x0) {
    *piVar2 = *DAT_0019d2a8;
    iVar3 = piVar1[7];
    piVar2[0x18] = iVar3;
    *(int *)((int)piVar2 + *(int *)(iVar3 + -0x38) + 0x60) = piVar1[8];
    iVar3 = piVar1[9];
    piVar2[0x19] = iVar3;
    *(int *)((int)piVar2 + *(int *)(iVar3 + -0x38) + 100) = piVar1[10];
    piVar2 = (int *)FUN_0018007c(piVar2,piVar1 + 1,8,*(undefined4 *)(param_1 + 0xc),piVar2);
    piVar2[0x10] = DAT_0019d2ac;
    piVar2[0x11] = 0;
    piVar2[0x12] = 0;
    iVar3 = DAT_0019d2b0;
    iVar4 = *piVar1;
    *piVar2 = iVar4;
    *(int *)((int)piVar2 + *(int *)(iVar4 + -0x10)) = piVar1[5];
    *(int *)((int)piVar2 + *(int *)(*piVar2 + -0xc)) = piVar1[4];
    *(int *)((int)piVar2 + *(int *)(*piVar2 + -0x14)) = piVar1[6];
    piVar2[0x10] = iVar3;
    piVar2[0x13] = param_1;
    piVar2[0x14] = param_2;
    piVar2[0x15] = 0;
    *(undefined1 *)(piVar2 + 0x17) = 1;
    *(undefined1 *)((int)piVar2 + 0x5d) = 0;
    iVar3 = FUN_0014c62c(piVar2,1,*(int *)(param_1 + 0xc) + 0x548);
    if (iVar3 != 0) {
      return piVar2;
    }
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  return (int *)0x0;
}

