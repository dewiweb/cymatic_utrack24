// rea decompile_all
// name: FUN_004bf107
// address: 0x4bf107
// body: available
// range: 0x4bf107-0x4bf137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004bf107(int param_1)

{
  int in_EAX;
  int iVar1;
  int *in_ECX;
  int iVar2;
  int unaff_EBX;
  int unaff_ESI;
  
  iVar1 = (in_EAX - param_1) / unaff_ESI;
  iVar2 = (in_EAX - param_1) % unaff_ESI;
  *in_ECX = param_1 + unaff_EBX;
  in_ECX[1] = unaff_ESI;
  in_ECX[2] = iVar1;
  in_ECX[3] = iVar2;
  in_ECX[4] = iVar2;
  if (iVar2 < 1) {
    in_ECX[3] = iVar2 + unaff_ESI;
    in_ECX[4] = iVar2 + unaff_ESI;
    in_ECX[2] = iVar1 + -1;
  }
  in_ECX[3] = in_ECX[3] - unaff_ESI;
  return;
}

