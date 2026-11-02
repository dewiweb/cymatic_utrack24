// rea decompile_all
// name: FUN_004fc81d
// address: 0x4fc81d
// body: available
// range: 0x4fc81d-0x4fc892 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004fc81d(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int in_ECX;
  
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(in_ECX + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(in_ECX + 0x3c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(in_ECX + 0x38);
  if (param_4 == 0) {
    FUN_004ff2f1(in_ECX + 0x30,param_2,param_3);
  }
  else {
    if (param_4 == 1) {
      FUN_004ff287(in_ECX + 0x30,param_2,param_3);
      goto LAB_004fc886;
    }
    if (param_4 == 2) {
      FUN_004ff37a(in_ECX + 0x30,param_2,param_3);
      goto LAB_004fc886;
    }
  }
  if (param_4 == 0) {
    return;
  }
LAB_004fc886:
  FUN_0047dcc7();
  return;
}

