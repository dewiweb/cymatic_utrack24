// rea decompile_all
// name: FUN_00611960
// address: 0x611960
// body: available
// range: 0x611960-0x6119c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00611960(void)

{
  BOOL BVar1;
  HANDLE in_ECX;
  int in_EDX;
  int nPriority;
  
  nPriority = 0xf;
  if (in_EDX < 1) {
    nPriority = -0xf;
  }
  else if (in_EDX < 2) {
    nPriority = -2;
  }
  else if (in_EDX < 5) {
    nPriority = -1;
  }
  else if (in_EDX < 7) {
    nPriority = 0;
  }
  else if (in_EDX < 9) {
    nPriority = 1;
  }
  else if (in_EDX < 10) {
    nPriority = 2;
  }
  if (in_ECX == (HANDLE)0x0) {
    in_ECX = GetCurrentThread();
  }
  BVar1 = SetThreadPriority(in_ECX,nPriority);
  return BVar1 != 0;
}

