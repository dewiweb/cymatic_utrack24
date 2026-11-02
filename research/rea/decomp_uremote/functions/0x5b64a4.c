// rea decompile_all
// name: __cinit
// address: 0x5b64a4
// body: available
// range: 0x5b64a4-0x5b6528 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __cinit
   
   Library: Visual Studio 2008 Release */

int __cdecl __cinit(int param_1)

{
  BOOL BVar1;
  int iVar2;
  
  BVar1 = __IsNonwritableInCurrentImage((PBYTE)&PTR___fpmath_005f07f0);
  if (BVar1 != 0) {
    __fpmath(param_1);
  }
  __initp_misc_cfltcvt_tab();
  iVar2 = __initterm_e(&DAT_005e88c8,&DAT_005e88e8);
  if (iVar2 == 0) {
    _atexit((_func_4879 *)&LAB_005c3dcc);
    __initterm(&DAT_005e88c4);
    if ((DAT_0095de10 != (code *)0x0) &&
       (BVar1 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0095de10), BVar1 != 0)) {
      (*DAT_0095de10)(0,2,0);
    }
    iVar2 = 0;
  }
  return iVar2;
}

