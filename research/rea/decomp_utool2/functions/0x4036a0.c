// rea decompile_all
// name: FUN_004036a0
// address: 0x4036a0
// body: available
// range: 0x4036a0-0x4037c4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004036a0(void)

{
  double in_XMM0_Qa;
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = ABS(in_XMM0_Qa);
  if (dVar3 < 3.75) {
    return;
  }
  dVar1 = 3.75 / dVar3;
  dVar2 = ABS(in_XMM0_Qa);
  FUN_006f7ee0(dVar3);
  __libm_sse2_sqrt_precise(dVar3,dVar2,dVar1);
  return;
}

