// rea decompile_all
// name: FUN_00139c84
// address: 0x139c84
// body: available
// range: 0x139c84-0x139d2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00139c84(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar2 = param_1;
  if (0 < iVar4) {
    iVar2 = *(int *)(param_1 + 0xc);
  }
  iVar3 = 0;
  if (0 < iVar4) {
    do {
      if (*(int *)(iVar2 + iVar3 * 0x24) == param_2) {
        iVar4 = iVar3 * 0x24 + 0xc;
        iVar2 = FUN_0015e784(iVar2 + iVar4,param_3);
        FUN_0010e240(*(int *)(param_1 + 0xc) + iVar4,param_3);
        iVar4 = iVar3 * 0x24 + 0x14;
        uVar1 = *(ushort *)(*(int *)(param_1 + 0xc) + iVar4);
        *(short *)(*(int *)(param_1 + 0xc) + iVar4) = (short)param_4;
        return uVar1 != param_4 || iVar2 != 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return false;
}

