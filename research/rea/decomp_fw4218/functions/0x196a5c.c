// rea decompile_all
// name: FUN_00196a5c
// address: 0x196a5c
// body: available
// range: 0x196a5c-0x196afb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x196af8 to 0x180150 FUN_00180150 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00196a5c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_2 == (int *)0x0) {
    param_2 = DAT_00196afc;
  }
  iVar2 = *param_2;
  *param_1 = iVar2;
  *(int *)((int)param_1 + *(int *)(iVar2 + -0x10)) = param_2[9];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0xc)) = param_2[8];
  *(int *)((int)param_1 + *(int *)(*param_1 + -0x14)) = param_2[10];
  iVar2 = FUN_00171ea4(param_1 + 0x2d);
  piVar4 = param_2 + 1;
  if (param_2 + 1 == (int *)0x0) {
    piVar4 = DAT_00196b00;
  }
  piVar3 = (int *)(iVar2 + -0xb4);
  iVar1 = *piVar4;
  *piVar3 = iVar1;
  *(int *)((int)piVar3 + *(int *)(iVar1 + -0x10)) = piVar4[5];
  *(int *)((int)piVar3 + *(int *)(*piVar3 + -0xc)) = piVar4[4];
  *(int *)((int)piVar3 + *(int *)(*piVar3 + -0x14)) = piVar4[6];
  FUN_0014ca10(iVar2 + -0x74);
  FUN_00180150(piVar3,piVar4 + 1);
  return;
}

