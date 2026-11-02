// rea decompile_all
// name: FUN_10006da0
// address: 0x10006da0
// body: available
// range: 0x10006da0-0x10006e0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * __fastcall FUN_10006da0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  piVar1 = FUN_10005e30((int *)(*(int *)(param_1 + 0x38) + -0x10));
  iVar2 = FUN_10006bc0(*(void **)(param_1 + 0x58),(int)(piVar1 + 4));
  *(int *)(param_1 + 0x1c) = iVar2;
  if (iVar2 == -1) {
    return (undefined1 *)0xe0000001;
  }
  if (*(int *)(param_1 + 0x94) != 0) {
    puVar3 = (undefined1 *)FUN_10005f00(param_1);
    FUN_10005a70(param_1);
    return puVar3;
  }
  FUN_10005a70(param_1);
  return &stack0xffffffec;
}

