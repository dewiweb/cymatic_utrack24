// rea decompile_all
// name: _ProcessCodePage
// address: 0x5c9204
// body: available
// range: 0x5c9204-0x5c92a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    _ProcessCodePage
   
   Library: Visual Studio 2008 Release */

void _ProcessCodePage(void)

{
  int iVar1;
  CHAR *in_ECX;
  int unaff_EDI;
  CHAR local_10 [8];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  if (((in_ECX == (char *)0x0) || (*in_ECX == '\0')) || (iVar1 = _strcmp(in_ECX,"ACP"), iVar1 == 0))
  {
    iVar1 = GetLocaleInfoA(*(LCID *)(unaff_EDI + 0x1c),0x1004,local_10,8);
    if (iVar1 == 0) goto LAB_005c9263;
    iVar1 = _strcmp(local_10,"0");
    if (iVar1 == 0) {
      GetACP();
      goto LAB_005c9263;
    }
LAB_005c9259:
    in_ECX = local_10;
  }
  else {
    iVar1 = _strcmp(in_ECX,"OCP");
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(*(LCID *)(unaff_EDI + 0x1c),0xb,local_10,8);
      if (iVar1 == 0) goto LAB_005c9263;
      goto LAB_005c9259;
    }
  }
  _atol(in_ECX);
LAB_005c9263:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

