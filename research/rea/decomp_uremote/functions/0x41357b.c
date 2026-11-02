// rea decompile_all
// name: FUN_0041357b
// address: 0x41357b
// body: available
// range: 0x41357b-0x4135d6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041357b(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  
  in_ECX[8] = in_ECX[4];
  iVar2 = in_ECX[2];
  iVar1 = (*in_ECX + iVar2) / 2;
  in_ECX[2] = iVar1;
  iVar2 = (in_ECX[4] + iVar2) / 2;
  in_ECX[4] = (iVar1 + iVar2) / 2;
  in_ECX[9] = in_ECX[5];
  in_ECX[6] = iVar2;
  iVar2 = (in_ECX[1] + in_ECX[3]) / 2;
  iVar1 = (in_ECX[5] + in_ECX[3]) / 2;
  in_ECX[3] = iVar2;
  in_ECX[7] = iVar1;
  in_ECX[5] = (iVar2 + iVar1) / 2;
  return;
}

