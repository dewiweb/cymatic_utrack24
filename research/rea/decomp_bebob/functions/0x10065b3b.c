// rea decompile_all
// name: FUN_10065b3b
// address: 0x10065b3b
// body: available
// range: 0x10065b3b-0x10065b76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 FUN_10065b3b(void)

{
  void *this;
  undefined4 uVar1;
  int unaff_EBP;
  int *unaff_ESI;
  
  if (*(int **)(unaff_EBP + -0x14) != unaff_ESI) {
    FUN_100085b9(*(void **)(unaff_EBP + -0x14));
  }
  if (*(int **)(unaff_EBP + -0x1c) == unaff_ESI) {
    this = *(void **)(unaff_EBP + -0x28);
    *(int **)((int)this + 0x2910) = unaff_ESI;
    FUN_10063d75(this,unaff_ESI);
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (*(int **)(unaff_EBP + -0x24) != unaff_ESI) {
    (**(code **)(**(int **)(unaff_EBP + -0x24) + 4))(1);
  }
  uVar1 = *(undefined4 *)(unaff_EBP + -0x1c);
  FUN_10001030((undefined4 *)(*(int *)(unaff_EBP + 8) + -0x10));
  FUN_10001030((undefined4 *)(*(int *)(unaff_EBP + -0x18) + -0x10));
  return uVar1;
}

