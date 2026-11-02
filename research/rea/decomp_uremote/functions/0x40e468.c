// rea decompile_all
// name: FUN_0040e468
// address: 0x40e468
// body: available
// range: 0x40e468-0x40e504 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0040e468(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int *param_5)

{
  int iVar1;
  
  iVar1 = FUN_0040e41f(param_1,param_2);
  if (iVar1 == 0) {
    if (param_4 != 0) {
      FUN_0040ff71(param_4);
    }
    iVar1 = FUN_0040ed53();
    if (iVar1 == 0) {
      *(uint *)(*param_5 + 8) = *(uint *)(*param_5 + 8) & 0xfffffbff;
    }
    else {
      FUN_0041105d();
      FUN_00411a5c(0);
    }
  }
  else {
    FUN_00411a5c(param_1);
  }
  return iVar1;
}

