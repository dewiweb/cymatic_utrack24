// rea decompile_all
// name: FUN_00050c68
// address: 0x50c68
// body: available
// range: 0x50c68-0x50c9b inclusive
// range: 0x1a6c34-0x1a6cfb inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x50c98 to 0x2890 thunk_FUN_00002898 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00050c68(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  if ((param_1 < 2) && (iVar3 = *(int *)(_DAT_00050c9c + param_1 * 4), iVar3 != 0)) {
    FUN_001a6a70();
    uVar1 = FUN_001b2a1c(param_2);
    iVar2 = *(int *)(iVar3 + 0xec);
    uVar1 = 1 << (uVar1 & 0xff) & *(uint *)(iVar2 + 0x100);
    *(uint *)(iVar2 + 0x100) = *(uint *)(iVar2 + 0x100) & ~uVar1;
    iVar2 = DAT_001a6cfc + **(int **)(param_2 + 8) * 0x1000;
    *(int *)(iVar3 + 0xe8) = iVar2;
    puVar4 = (uint *)(*(int *)(param_2 + 4) * 4 + 0x20 + iVar2);
    *puVar4 = *puVar4 | 2;
    puVar4 = (uint *)(*(int *)(param_2 + 4) * 4 + 0x20 + *(int *)(iVar3 + 0xe8));
    *puVar4 = (param_3 & 3) << 4 | *puVar4 & 0xffffffcf;
    puVar4 = (uint *)(*(int *)(param_2 + 4) * 4 + 0x20 + *(int *)(iVar3 + 0xe8));
    *puVar4 = (*(uint *)(iVar3 + 0xdc) & 1) << 2 | *puVar4 & 0xfffffffb;
    *(uint *)(*(int *)(iVar3 + 0xec) + 0x100) = uVar1 | *(uint *)(*(int *)(iVar3 + 0xec) + 0x100);
    return;
  }
  thunk_FUN_00002898(s_E__ERROR__CU_engine_not_intializ_00050c9d + 3,param_1);
  return;
}

