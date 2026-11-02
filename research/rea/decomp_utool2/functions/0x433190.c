// rea decompile_all
// name: FUN_00433190
// address: 0x433190
// body: available
// range: 0x433190-0x4331f0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00433190(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a8c0);
  if (DAT_00c8a8dc < DAT_00c8a8e0 + 1) {
    FUN_00433920((DAT_00c8a8e0 + 1) / 2 + DAT_00c8a8e0 + 9 & 0xfffffff8);
  }
  iVar2 = DAT_00c8a8e0 + 1;
  puVar1 = (undefined4 *)(DAT_00c8a8d8 + DAT_00c8a8e0 * 4);
  DAT_00c8a8e0 = iVar2;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x004331eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_00c8a8c0);
  return;
}

