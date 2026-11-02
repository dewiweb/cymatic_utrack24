// rea decompile_all
// name: __strcats
// address: 0x5bb2ca
// body: available
// range: 0x5bb2ca-0x5bb309 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __strcats
   
   Library: Visual Studio 2008 Release */

void __strcats(char *param_1,rsize_t param_2,int param_3)

{
  errno_t eVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (0 < param_3) {
    puVar2 = &param_3;
    iVar3 = param_3;
    do {
      puVar2 = puVar2 + 1;
      eVar1 = _strcat_s(param_1,param_2,(char *)*puVar2);
      if (eVar1 != 0) {
        __invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return;
}

