// rea decompile_all
// name: FUN_001336b8
// address: 0x1336b8
// body: available
// range: 0x1336b8-0x13378f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_001336b8(int param_1,undefined2 *param_2,int param_3,undefined4 param_4,int param_5)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  undefined2 *puVar4;
  uint uVar5;
  
  iVar2 = FUN_0016d7a4(DAT_00133794,DAT_00133790);
  if ((iVar2 != 0) && (piVar3 = (int *)FUN_00133820(iVar2,0,param_1,param_4), piVar3 != (int *)0x0))
  {
    if (3 < param_3 - (int)param_2) {
      *(undefined2 *)((int)piVar3 + 0x6e) = *param_2;
      puVar4 = param_2 + 2;
      uVar1 = param_2[1];
      uVar5 = (uint)uVar1;
      *(ushort *)(piVar3 + 0x1c) = uVar1;
      if (((int)uVar5 <= param_3 - (int)puVar4) && (uVar5 < 0x401)) {
        FUN_00003628((int)piVar3 + 0x72,puVar4,uVar5);
        if (param_5 != 0) {
          *(ushort *)((int)piVar3 + 0x6a) = ((short)puVar4 + uVar1) - (short)param_2;
        }
        iVar2 = FUN_000e9bb4(piVar3,0x3c,param_1 + 0x548);
        if (iVar2 != 0) {
          return piVar3;
        }
      }
    }
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  return (int *)0x0;
}

