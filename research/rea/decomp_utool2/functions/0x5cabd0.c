// rea decompile_all
// name: FUN_005cabd0
// address: 0x5cabd0
// body: available
// range: 0x5cabd0-0x5cac34 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005cabd0(void)

{
  int in_ECX;
  LARGE_INTEGER in_XMM1_Qa;
  LARGE_INTEGER local_c;
  
  local_c = in_XMM1_Qa;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10));
  ((LARGE_INTEGER *)(in_ECX + 0x38))->QuadPart = (LONGLONG)local_c;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  QueryPerformanceCounter(&local_c);
  FUN_006f5730();
  *(double *)(in_ECX + 8) = local_c.QuadPart * _DAT_00c8a910;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10));
  return;
}

