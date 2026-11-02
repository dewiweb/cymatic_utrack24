// rea decompile_all
// name: FUN_000179c0
// address: 0x179c0
// body: available
// range: 0x179c0-0x17b43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x179dc to 0x32f8 FUN_000032f8 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_000179c0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  piVar1 = DAT_00017b44;
  if (*(char *)(*(int *)(param_1 + 0x28) + 0x24) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_000032f8();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x20);
  if ((iVar3 < 0x10) && ((*(uint *)(*DAT_00017b44 + iVar3 * 4 + 0x3000) & 0x800) != 0)) {
    return (undefined4 *)0x0;
  }
  puVar4 = (uint *)FUN_00014bac(*(undefined4 *)(param_1 + 4),0);
  piVar2 = DAT_00017b48;
  if (puVar4 == (uint *)0x0) {
    iVar3 = *(int *)(param_1 + 0x28);
    iVar6 = *(int *)(param_1 + 0x24) + 0xc;
    *(int *)(iVar3 + 0x18) = iVar6;
    *(int *)(*piVar2 + *(int *)(iVar3 + 4) * 0x40 + 8) = iVar6;
    iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x20);
    if (iVar3 < 0x10) {
      *(uint *)(*piVar1 + iVar3 * 4 + 0x3000) =
           *(int *)(*(int *)(param_1 + 0x28) + 4) + 0x800U | 0x400;
    }
    **(int **)(param_2 + 0x14) = **(int **)(param_2 + 0x14) + 1;
    return (undefined4 *)0x0;
  }
  if (*(short *)(param_2 + 0x22) != 0) {
    FUN_0018a24c(puVar4,(*puVar4 & 0xffff) + 4);
  }
  iVar3 = *(int *)(param_1 + 0x28);
  *(uint **)(iVar3 + 0x18) = puVar4 + 3;
  *(uint **)(*piVar2 + *(int *)(iVar3 + 4) * 0x40 + 8) = puVar4 + 3;
  iVar3 = *(int *)(*(int *)(param_1 + 0x28) + 0x20);
  if (iVar3 < 0x10) {
    *(uint *)(*piVar1 + iVar3 * 4 + 0x3000) =
         *(int *)(*(int *)(param_1 + 0x28) + 4) + 0x800U | 0x400;
  }
  puVar5 = *(undefined4 **)(param_1 + 0x24);
  *(uint **)(param_1 + 0x24) = puVar4;
  *puVar5 = *(undefined4 *)(param_1 + 0xc);
  puVar5[1] = puVar5[4];
  puVar5[2] = *(undefined4 *)(param_1 + 0x14);
  puVar5[3] = *(undefined4 *)(param_1 + 0x18);
  puVar5[4] = *(undefined4 *)(param_1 + 0x1c);
  *(char *)(param_1 + 0x18) = (char)*(undefined4 *)(param_1 + 0x18) + *(char *)(param_1 + 0x21);
  *(int *)(*(int *)(param_2 + 0x14) + 0x18) = *(int *)(*(int *)(param_2 + 0x14) + 0x18) + 1;
  return puVar5;
}

