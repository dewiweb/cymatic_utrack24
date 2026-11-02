// rea decompile_all
// name: FUN_10003510
// address: 0x10003510
// body: available
// range: 0x10003510-0x1000359e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000359a to 0x10001090 FUN_10001090 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; The Ghidra Program references PDB BebobDriverInterface.pdb (GUID 5d64f97b-6aff-43bd-a8e2-d8877626c9d1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_10003510(int param_1)

{
  FUN_10002340((void *)(param_1 + 0x80),(uint *)(param_1 + 100));
  FUN_10002580(param_1 + 0x80);
  if (*(HANDLE *)(param_1 + 0x7c) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x7c));
  }
  *(undefined4 *)(param_1 + 0x7c) = 0;
  if (*(HANDLE *)(param_1 + 0x78) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x78));
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  if (*(HANDLE *)(param_1 + 0x20) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  if (*(HANDLE *)(param_1 + 0x48) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  FUN_100029e0((int *)(param_1 + 0x74));
  *(uint *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  FUN_10001090(0x10164a28);
  return;
}

