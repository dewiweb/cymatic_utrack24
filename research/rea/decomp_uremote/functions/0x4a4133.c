// rea decompile_all
// name: FUN_004a4133
// address: 0x4a4133
// body: available
// range: 0x4a4133-0x4a41c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_004a4133(LPCWSTR param_1)

{
  LPCWSTR c;
  LPWORD pgi;
  DWORD DVar1;
  int in_ECX;
  float10 fVar2;
  float local_8;
  
  FUN_00466af8(&param_1);
  c = (LPCWSTR)FUN_00474e32();
  pgi = _malloc((int)c * 2 + 2);
  local_8 = 0.0;
  pgi[(int)c] = 0xffff;
  DVar1 = GetGlyphIndicesW(*(HDC *)(in_ECX + 0x34),param_1,(int)c,pgi,1);
  if ((DVar1 != 0xffffffff) && (param_1 = (LPCWSTR)0x0, c != (LPCWSTR)0x0)) {
    do {
      fVar2 = (float10)FUN_004a4832(*(undefined4 *)(in_ECX + 0x34));
      param_1 = (LPCWSTR)((int)param_1 + 1);
      local_8 = (float)(fVar2 + (float10)local_8);
    } while (param_1 < c);
  }
  _free(pgi);
  return (float10)local_8;
}

