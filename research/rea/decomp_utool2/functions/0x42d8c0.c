// rea decompile_all
// name: FUN_0042d8c0
// address: 0x42d8c0
// body: available
// range: 0x42d8c0-0x42d986 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042d8c0(void)

{
  code *pcVar1;
  undefined4 *in_ECX;
  
  FUN_0040f7f0();
  if (in_ECX[1] != 0) {
    FID_conflict__free((void *)*in_ECX);
    *in_ECX = 0;
    in_ECX[1] = 0;
  }
  in_ECX[2] = 0;
  FUN_0040f7f0();
  if (in_ECX[4] != 0) {
    FID_conflict__free((void *)in_ECX[3]);
    in_ECX[3] = 0;
    in_ECX[4] = 0;
  }
  in_ECX[5] = 0;
  if (in_ECX[7] != 0) {
    FID_conflict__free((void *)in_ECX[6]);
    in_ECX[6] = 0;
    in_ECX[7] = 0;
  }
  in_ECX[8] = 0;
  if (in_ECX[10] != 0) {
    FID_conflict__free((void *)in_ECX[9]);
    in_ECX[9] = 0;
    in_ECX[10] = 0;
  }
  pcVar1 = DAT_00c8a5f8;
  in_ECX[0xb] = 0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(FUN_0042dc70);
    (*DAT_00c8a5f0)(FUN_0042dcb0);
  }
  return;
}

