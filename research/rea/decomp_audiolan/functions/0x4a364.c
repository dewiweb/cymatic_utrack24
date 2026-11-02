// rea decompile_all
// name: FUN_0004a364
// address: 0x4a364
// body: available
// range: 0x4a364-0x4a38f inclusive
// range: 0x14cb88-0x14ccbf inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4a38c to 0x289c thunk_FUN_000028a4 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0004a364(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  
  if ((1 < param_1) ||
     (iVar6 = *(int *)(s_d___ERROR__CU_engine_not_intiali_0004a390._0_4_ + param_1 * 4), iVar6 == 0)
     ) {
    thunk_FUN_000028a4(s_d___ERROR__CU_engine_not_intiali_0004a390 + 4,param_1);
    return;
  }
  iVar2 = *(int *)(iVar6 + 0xe4);
  uVar10 = 0;
  if (*(char *)(iVar2 + 0x84) == '\x01') {
    puVar9 = *(undefined4 **)(iVar2 + 0x88);
    if (*(undefined4 **)(iVar2 + 0x8c) != puVar9) {
      do {
        uVar3 = FUN_00154ddc(*puVar9);
        if ((*(uint *)(*(int *)(iVar6 + 0xec) + 0x100) >> (uVar3 & 0xff) & 1) != 0) {
          uVar3 = FUN_00154ddc(*puVar9);
          uVar10 = uVar10 | 1 << (uVar3 & 0xff);
        }
        puVar9 = puVar9 + 1;
      } while (*(undefined4 **)(iVar2 + 0x8c) != puVar9);
    }
    *(uint *)(*(int *)(iVar6 + 0xec) + 0x100) = *(uint *)(*(int *)(iVar6 + 0xec) + 0x100) & ~uVar10;
    iVar1 = DAT_0014ccc0;
    piVar4 = *(int **)(iVar2 + 0x88);
    if (*(int **)(iVar2 + 0x8c) != piVar4) {
      do {
        iVar7 = iVar1 + **(int **)(*piVar4 + 8) * 0x1000;
        *(int *)(iVar6 + 0xe8) = iVar7;
        piVar5 = piVar4 + 1;
        iVar8 = *(int *)(*piVar4 + 4) * 4 + 0x20;
        *(uint *)(iVar7 + iVar8) = *(uint *)(iVar7 + iVar8) & 0xfffffffd;
        piVar4 = piVar5;
      } while (*(int **)(iVar2 + 0x8c) != piVar5);
    }
    *(uint *)(*(int *)(iVar6 + 0xec) + 0x100) = *(uint *)(*(int *)(iVar6 + 0xec) + 0x100) | uVar10;
  }
  else {
    FUN_0014cac4(iVar6,*(undefined4 *)(iVar2 + 0x94));
  }
  uVar10 = 1 << (*(uint *)(iVar6 + 0xdc) & 0xff);
  if ((*(uint *)(*(int *)(iVar6 + 0xec) + 4) & uVar10 & 3) == 0) {
    return;
  }
  *(uint *)(*(int *)(iVar6 + 0xec) + 0xc0c) = uVar10;
  iVar2 = *(int *)(iVar6 + 0xec);
  *(uint *)(iVar2 + 4) =
       ~(1 << (*(uint *)(iVar6 + 0xdc) & 0xff)) & 3U & *(uint *)(iVar2 + 4) |
       *(uint *)(iVar2 + 4) & 0xfffffffc;
  return;
}

