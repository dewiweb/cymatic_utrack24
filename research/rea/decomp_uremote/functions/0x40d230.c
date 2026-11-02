// rea decompile_all
// name: FUN_0040d230
// address: 0x40d230
// body: available
// range: 0x40d230-0x40d285 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040d230(int param_1)

{
  int in_EAX;
  int iVar1;
  int in_ECX;
  int iVar2;
  bool bVar3;
  
  iVar2 = 1;
  if (in_EAX < 0) {
    in_EAX = -in_EAX;
    iVar2 = -1;
  }
  if (param_1 < 0) {
    param_1 = -param_1;
    iVar2 = -iVar2;
  }
  bVar3 = false;
  if (in_ECX < 0) {
    in_ECX = -in_ECX;
    iVar2 = -iVar2;
    bVar3 = in_ECX < 0;
  }
  if (in_ECX == 0 || bVar3) {
    iVar1 = 0x7fffffff;
  }
  else {
    iVar1 = __alldiv((longlong)in_EAX * (longlong)param_1 + CONCAT44(in_ECX >> 0x1f,in_ECX >> 1),
                     in_ECX,in_ECX >> 0x1f);
  }
  if (iVar2 < 1) {
    iVar1 = -iVar1;
  }
  return iVar1;
}

