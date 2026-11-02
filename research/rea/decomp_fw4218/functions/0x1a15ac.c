// rea decompile_all
// name: FUN_001a15ac
// address: 0x1a15ac
// body: available
// range: 0x1a15ac-0x1a169f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_001a15ac(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_20;
  
  uVar4 = 0;
  while( true ) {
    local_20 = 0;
    piVar1 = *(int **)(param_1 + 4);
    iVar5 = 0;
    if ((piVar1 != (int *)0x0) &&
       (iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,&local_20), iVar2 == 0)) {
      iVar5 = FUN_0014f858(param_1 + 0x30,local_20);
    }
    if ((local_20 & -iVar5) == 0) break;
    *(uint *)(param_1 + 0x14) =
         *(int *)(param_1 + 0x14) + (uint)(0xfffffffe < *(uint *)(param_1 + 0x10));
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) + 1;
    uVar4 = uVar4 + 1 & 0xfffeffff;
    uVar3 = *(uint *)(param_1 + 0x20);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x38) + uVar3;
    *(uint *)(param_1 + 0x24) =
         *(int *)(param_1 + 0x24) + (uint)CARRY4(*(uint *)(param_1 + 0x38),uVar3);
    (**(code **)(**(int **)(param_1 + 0x28) + 0x48))();
    FUN_001a16a0(param_1,param_1 + 0x30);
    (**(code **)(**(int **)(param_1 + 0x28) + 0x4c))();
    FUN_0015111c(param_1 + 0x30);
    if (0xf < uVar4) {
      return uVar4;
    }
  }
  if (local_20 == 0) {
    return uVar4;
  }
  FUN_0015223c();
  return uVar4;
}

