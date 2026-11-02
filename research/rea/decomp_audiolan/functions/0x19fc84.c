// rea decompile_all
// name: FUN_0019fc84
// address: 0x19fc84
// body: available
// range: 0x19fc84-0x19fedb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x19fed8 to 0x17b0f0 FUN_0017b0f0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0019fc84(int *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  
  iVar10 = 0;
  iVar7 = 0;
  if (param_1[4] == _DAT_0019fedc) {
    FUN_0017afd4(param_1 + 5,0xffffffff);
    FUN_000028a4(s__3DMemPool____s_at__08p_0019fedd + 3,param_1[3],param_1);
    piVar9 = (int *)*param_1;
    iVar4 = *piVar9;
    while (iVar4 != 0) {
      FUN_000028a4(_DAT_0019fef8,piVar9,piVar9[4],piVar9[5]);
      FUN_000028a4(s____timestamp_address_length_next_0019fefa + 2);
      piVar6 = (int *)piVar9[2];
      puVar3 = (uint *)piVar9[3];
      puVar2 = (uint *)0;
      while (puVar1 = puVar3, puVar1 != (uint *)0x0) {
        if (puVar1 == puVar2) {
          FUN_000028a4(s_Chunk__08p_should_be_connected_w_0019ff34,puVar2,puVar1);
          FUN_0018b5e4(puVar1,s_error_in_osHeapDump_0019ff68);
        }
        for (; piVar6 < puVar1; piVar6 = (int *)((int)piVar6 + *piVar6 + 7 & 0xfffffff8)) {
          iVar7 = iVar7 + 1;
          puVar8 = (undefined4 *)((int)piVar6 + *piVar6 + -8);
          if (((param_2 & 1) != 0) || (((param_2 & 2) != 0 && ((puVar8[1] & 1) != 0)))) {
            FUN_000028a4(_DAT_0019ff7c,*puVar8,piVar6 + 2);
          }
          if ((param_2 & 4) != 0) {
            puVar8[1] = puVar8[1] & 0xfffffffc;
          }
        }
        if ((param_2 & 8) != 0) {
          FUN_000028a4(s_____08p__08lX__08p_free_0019ff7e + 2,puVar1,puVar1[1],*puVar1);
        }
        iVar10 = iVar10 + 1;
        if (puVar1[1] == 0) {
          FUN_0018b5e4(puVar1,s_memChumk_>length____0_0019ffb0);
        }
        piVar6 = (int *)((int)puVar1 + puVar1[1] + 7 & 0xfffffff8);
        puVar2 = puVar1;
        puVar3 = (uint *)*puVar1;
      }
      iVar4 = piVar9[2];
      iVar5 = piVar9[4];
      for (; piVar6 < (int *)(iVar4 + iVar5);
          piVar6 = (int *)((int)piVar6 + *piVar6 + 7 & 0xfffffff8)) {
        iVar7 = iVar7 + 1;
        puVar8 = (undefined4 *)((int)piVar6 + *piVar6 + -8);
        if (((param_2 & 1) != 0) || (((param_2 & 2) != 0 && ((puVar8[1] & 1) != 0)))) {
          FUN_000028a4(_DAT_0019ff7c,*puVar8,piVar6 + 2);
        }
        if ((param_2 & 4) != 0) {
          puVar8[1] = puVar8[1] & 0xfffffffc;
        }
      }
      piVar9 = (int *)*piVar9;
      iVar4 = *piVar9;
    }
    FUN_000028a4(s_Summary____u_total_blocks___u_us_0019ffc8,iVar7 + iVar10,iVar7,iVar10);
    FUN_0017b0f0(param_1 + 5);
    return;
  }
  return;
}

