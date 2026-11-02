// rea decompile_all
// name: FUN_0012c940
// address: 0x12c940
// body: available
// range: 0x12c940-0x12ca5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_0012c940(int *param_1,int param_2,uint param_3,ushort *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int unaff_r8;
  uint uVar5;
  bool bVar6;
  
  uVar4 = (uint)*(ushort *)((int)param_1 + 6);
  if (uVar4 != 0) {
    unaff_r8 = *param_1;
    param_1 = (int *)(uint)*param_4;
  }
  uVar2 = 0;
  if (uVar4 != 0) {
    do {
      piVar3 = *(int **)(unaff_r8 + uVar2 * 4);
      if (((int *)(uint)*(ushort *)((int)piVar3 + 0x3e) == param_1) &&
         (*(ushort *)(piVar3 + 0x10) == param_4[1])) {
        uVar5 = *(uint *)(param_4 + 2);
        bVar6 = piVar3[0x11] == uVar5;
        if (bVar6) {
          uVar5 = (uint)*(ushort *)(piVar3 + 0x12);
        }
        if ((bVar6 && uVar5 == param_3) && (*(ushort *)((int)piVar3 + 0x4a) == param_5)) {
          (**(code **)(*piVar3 + 0x38))(piVar3);
          return piVar3;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  iVar1 = FUN_0015e90c(param_4);
  if (((iVar1 == 0) && (iVar1 = FUN_0016d7a4(0x54,DAT_0012ca5c), iVar1 != 0)) &&
     (piVar3 = (int *)FUN_001444e0(iVar1,0,param_2,param_3,param_4,param_5), piVar3 != (int *)0x0))
  {
    iVar1 = FUN_000e9bb4(piVar3,0x32,param_2 + 0x548);
    if (iVar1 != 0) {
      return piVar3;
    }
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  return (int *)0x0;
}

