// rea decompile_all
// name: FUN_001605c8
// address: 0x1605c8
// body: available
// range: 0x1605c8-0x1606cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_001605c8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar4 = 0;
  uVar5 = (uint)*(ushort *)(iVar1 + 0x30);
  if (uVar5 != 0) {
    do {
      iVar3 = 0;
      if (*(int *)(iVar1 + 0x20) != 0 && uVar4 < uVar5) {
        iVar3 = uVar4 * *(ushort *)(iVar1 + 0x2e) + iVar1 + *(int *)(iVar1 + 0x20);
      }
      if (*(int *)(iVar3 + 4) == 2) goto LAB_00160628;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar5);
  }
  iVar3 = 0;
LAB_00160628:
  iVar1 = 0;
  uVar4 = *(uint *)(iVar3 + 0x14) >> 4;
  if (uVar4 != 0) {
    do {
      uVar2 = FUN_0016038c(param_1,iVar1);
      iVar3 = FUN_00003960(uVar2,param_2);
      if (iVar3 == 0) {
        iVar3 = *(int *)(param_1 + 4);
        uVar5 = 0;
        uVar4 = (uint)*(ushort *)(iVar3 + 0x30);
        if (uVar4 == 0) goto LAB_001606b8;
        goto LAB_00160684;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)uVar4);
  }
  return 0;
  while (uVar5 = uVar5 + 1, uVar5 < uVar4) {
LAB_00160684:
    iVar6 = 0;
    if (*(int *)(iVar3 + 0x20) != 0 && uVar5 < uVar4) {
      iVar6 = uVar5 * *(ushort *)(iVar3 + 0x2e) + iVar3 + *(int *)(iVar3 + 0x20);
    }
    if (*(int *)(iVar6 + 4) == 2) goto LAB_001606bc;
  }
LAB_001606b8:
  iVar6 = 0;
LAB_001606bc:
  return *(int *)(iVar6 + 0x10) + iVar3 + iVar1 * 0x10;
}

