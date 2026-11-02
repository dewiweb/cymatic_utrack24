// rea decompile_all
// name: Catch@10016685
// address: 0x10016685
// body: available
// range: 0x10016685-0x1001672b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 Catch_10016685(void)

{
  int *piVar1;
  wchar_t *pwVar2;
  undefined **ppuVar3;
  int iVar4;
  int unaff_EBP;
  
  ppuVar3 = FUN_1000ad47();
  FUN_10005e00((void *)(unaff_EBP + -0x418),(int *)ppuVar3);
  piVar1 = *(int **)(unaff_EBP + -0x41c);
  iVar4 = *piVar1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar4 = (**(code **)(iVar4 + 0xc))(unaff_EBP + -0x414,0x200,0);
  if (iVar4 == 0) {
    FUN_100022f0((void *)(unaff_EBP + -0x418),L"%s (%s:%d)");
  }
  else {
    FUN_100022f0((void *)(unaff_EBP + -0x418),L"%s (%s:%d)\n%s");
  }
  pwVar2 = *(wchar_t **)(unaff_EBP + -0x418);
  AfxMessageBox(pwVar2,0,0);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_10001030((undefined4 *)(pwVar2 + -8));
  (**(code **)(*piVar1 + 4))(1);
  return 0x1001667f;
}

