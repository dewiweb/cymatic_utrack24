// rea decompile_all
// name: FUN_0043bbb0
// address: 0x43bbb0
// body: available
// range: 0x43bbb0-0x43bce6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043bbb0(undefined4 param_1,int param_2)

{
  undefined4 *in_ECX;
  undefined4 *puVar1;
  int iVar2;
  
  FUN_00441520(*in_ECX);
  FUN_00441520(in_ECX[1]);
  FUN_00441520(in_ECX[2]);
  FUN_00441520(in_ECX[3]);
  FUN_00441520(in_ECX[4]);
  FUN_00441520(in_ECX[5]);
  FUN_00441520(in_ECX[6]);
  FUN_00441520(in_ECX[7]);
  FUN_00441520(in_ECX[8]);
  iVar2 = 0;
  if (0 < (int)in_ECX[7]) {
    puVar1 = in_ECX + 9;
    do {
      if ((undefined4 *)(param_2 + (int)in_ECX) < puVar1 + 6) {
        return;
      }
      FUN_0043bae0("Identifier",*puVar1);
      FUN_0043bae0(&DAT_00c14884,puVar1[1]);
      FUN_0043bae0("Start",puVar1[2]);
      FUN_0043bae0(&DAT_00c147e0,puVar1[3]);
      FUN_0043bae0("Fraction",puVar1[4]);
      FUN_0043bae0("PlayCount",puVar1[5]);
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 6;
    } while (iVar2 < (int)in_ECX[7]);
  }
  return;
}

