// rea decompile_all
// name: FUN_0017d930
// address: 0x17d930
// body: available
// range: 0x17d930-0x17da63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17da60 to 0x19bc40 FUN_0019bc40 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0017d930(int param_1,uint param_2,uint param_3,byte param_4)

{
  byte bVar1;
  undefined2 uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  piVar3 = *(int **)(param_1 + 0x4c);
  uVar2 = (undefined2)param_3;
  if (piVar3 == (int *)0x0) {
    if ((((*(byte *)(param_1 + 0x62) & ~param_4 & 1) == 0) ||
        (*(ushort *)(param_1 + 0x60) != param_3)) || (*(short *)(param_1 + 0x3e) == 4)) {
      *(undefined2 *)(param_1 + 0x60) = uVar2;
      *(byte *)(param_1 + 0x62) = *(byte *)(param_1 + 0x62) | 3;
    }
  }
  else if (param_2 == 0xffff) {
    iVar6 = 0;
    iVar5 = (**(code **)(*piVar3 + 0x48))();
    if (0 < iVar5) {
      do {
        bVar1 = *(byte *)(*(int *)(param_1 + 100) + iVar6);
        *(byte *)(*(int *)(param_1 + 100) + iVar6) = bVar1 | 1;
        *(byte *)(*(int *)(param_1 + 100) + iVar6) = bVar1 | 3;
        *(undefined2 *)(*(int *)(param_1 + 0x60) + iVar6 * 2) = uVar2;
        iVar6 = iVar6 + 1;
        iVar5 = (**(code **)(**(int **)(param_1 + 0x4c) + 0x48))();
      } while (iVar6 < iVar5);
    }
  }
  else {
    if (param_2 != 0) {
      param_2 = param_2 - 1;
    }
    param_2 = param_2 & 0xffff;
    uVar4 = (**(code **)(*piVar3 + 0x48))();
    if (param_2 < uVar4) {
      bVar1 = *(byte *)(*(int *)(param_1 + 100) + param_2);
      if (((bVar1 & ~param_4 & 1) == 0) ||
         (*(ushort *)(*(int *)(param_1 + 0x60) + param_2 * 2) != param_3)) {
        *(byte *)(*(int *)(param_1 + 100) + param_2) = bVar1 | 1;
        *(byte *)(*(int *)(param_1 + 100) + param_2) = bVar1 | 3;
        *(undefined2 *)(*(int *)(param_1 + 0x60) + param_2 * 2) = uVar2;
      }
    }
  }
  FUN_0019bc40(*(undefined4 *)(param_1 + 0x48));
  return;
}

