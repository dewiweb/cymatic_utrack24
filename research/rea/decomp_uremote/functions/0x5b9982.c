// rea decompile_all
// name: __handle_qnan2
// address: 0x5b9982
// body: available
// range: 0x5b9982-0x5b99e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __handle_qnan2
   
   Library: Visual Studio 2008 Release */

float10 __handle_qnan2(undefined4 param_1,double param_2,double param_3,undefined4 param_4)

{
  int *piVar1;
  float10 fVar2;
  
  if (DAT_00957070 == 0) {
    fVar2 = (float10)__umatherr(1,param_1,param_2,param_3,param_2 + param_3,param_4);
    return fVar2;
  }
  piVar1 = __errno();
  *piVar1 = 0x21;
  __ctrlfp();
  return (float10)(param_2 + param_3);
}

