// rea decompile_all
// name: FUN_0010e518
// address: 0x10e518
// body: available
// range: 0x10e518-0x10e5db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0010e518(int *param_1,int param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return param_1;
  }
  if (*(short *)((int)param_1 + 6) == 0) {
    uVar2 = FUN_000034d0(param_2);
    FUN_0010e274(param_1,param_2,uVar2);
  }
  else {
    uVar1 = FUN_000034d0(param_2);
    uVar4 = (uint)*(ushort *)((int)param_1 + 6) + uVar1 + 1 & 0xfffcffff;
    if ((*(ushort *)(param_1 + 1) < uVar4) && (iVar3 = FUN_0016d774(uVar4,DAT_0010e5dc), iVar3 != 0)
       ) {
      FUN_00003628(iVar3,*param_1,*(undefined2 *)((int)param_1 + 6));
      FUN_0016d744(*param_1);
      *param_1 = iVar3;
      *(short *)(param_1 + 1) = (short)uVar4;
    }
    FUN_00003628(*param_1 + (uint)*(ushort *)((int)param_1 + 6),param_2,uVar1 + 1);
    *(ushort *)((int)param_1 + 6) = *(short *)((int)param_1 + 6) + uVar1;
  }
  return param_1;
}

