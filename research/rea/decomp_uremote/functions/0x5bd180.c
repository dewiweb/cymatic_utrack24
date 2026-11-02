// rea decompile_all
// name: __d_inttype
// address: 0x5bd180
// body: available
// range: 0x5bd180-0x5bd1e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Library Function - Single Match
    __d_inttype
   
   Library: Visual Studio 2008 Release */

undefined4 __d_inttype(double param_1)

{
  uint uVar1;
  float10 fVar2;
  undefined8 extraout_var;
  
  uVar1 = __fpclass(param_1);
  if ((uVar1 & 0x90) == 0) {
    fVar2 = (float10)__frnd(param_1,extraout_var);
    if (fVar2 == (float10)param_1) {
      param_1 = param_1 * 0.5;
      fVar2 = (float10)__frnd();
      if (fVar2 == (float10)param_1) {
        return 2;
      }
      return 1;
    }
  }
  return 0;
}

