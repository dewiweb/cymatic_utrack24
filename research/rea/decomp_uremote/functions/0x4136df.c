// rea decompile_all
// name: FUN_004136df
// address: 0x4136df
// body: available
// range: 0x4136df-0x41378e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004136df(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  in_ECX[0xc] = in_ECX[6];
  iVar3 = (*in_ECX + in_ECX[2]) / 2;
  iVar2 = (in_ECX[4] + in_ECX[2]) / 2;
  iVar4 = (in_ECX[6] + in_ECX[4]) / 2;
  in_ECX[2] = iVar3;
  iVar1 = (iVar4 + iVar2) / 2;
  in_ECX[8] = iVar1;
  iVar2 = (iVar3 + iVar2) / 2;
  in_ECX[6] = (iVar1 + iVar2) / 2;
  in_ECX[10] = iVar4;
  in_ECX[4] = iVar2;
  in_ECX[0xd] = in_ECX[7];
  iVar3 = (in_ECX[1] + in_ECX[3]) / 2;
  iVar2 = (in_ECX[5] + in_ECX[3]) / 2;
  iVar4 = (in_ECX[7] + in_ECX[5]) / 2;
  in_ECX[3] = iVar3;
  iVar1 = (iVar4 + iVar2) / 2;
  iVar2 = (iVar3 + iVar2) / 2;
  in_ECX[9] = iVar1;
  in_ECX[0xb] = iVar4;
  in_ECX[5] = iVar2;
  in_ECX[7] = (iVar1 + iVar2) / 2;
  return;
}

