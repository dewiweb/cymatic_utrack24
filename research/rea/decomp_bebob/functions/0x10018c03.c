// rea decompile_all
// name: FUN_10018c03
// address: 0x10018c03
// body: available
// range: 0x10018c03-0x10018cd8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10018c03(int param_1)

{
  if (((CGdiObject *)(param_1 + 0xa0) != (CGdiObject *)0x0) && (*(int *)(param_1 + 0xa4) != 0)) {
    CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0xa0));
  }
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x114));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x124));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x134));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x144));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x14c));
  CGdiObject::DeleteObject((CGdiObject *)(param_1 + 0x11c));
  FUN_1001879d(param_1);
  FUN_100189d4();
  if ((*(int *)(param_1 + 0x1e8) != 0) && (*(code **)(param_1 + 0x200) != (code *)0x0)) {
    (**(code **)(param_1 + 0x200))();
    *(undefined4 *)(param_1 + 0x1e8) = 0;
  }
  if (*(HMODULE *)(param_1 + 0x1ec) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x1ec));
    *(undefined4 *)(param_1 + 0x1ec) = 0;
  }
  if (*(HMODULE *)(param_1 + 0x1f0) != (HMODULE)0x0) {
    FreeLibrary(*(HMODULE *)(param_1 + 0x1f0));
    *(undefined4 *)(param_1 + 0x1f0) = 0;
  }
  *(undefined4 *)(param_1 + 0x19c) = 0;
  if (*(int *)(param_1 + 0x218) != 0) {
    CoUninitialize();
    *(undefined4 *)(param_1 + 0x218) = 0;
  }
  return;
}

