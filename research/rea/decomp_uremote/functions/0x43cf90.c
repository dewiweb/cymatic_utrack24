// rea decompile_all
// name: FUN_0043cf90
// address: 0x43cf90
// body: available
// range: 0x43cf90-0x43d143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0043cf90(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int in_ECX;
  int unaff_EBX;
  
  if (param_1 < *(int *)(in_ECX + 0x6b4)) {
    if (*(int *)(in_ECX + 0x6b8) != 0) {
      FUN_0047ceaa();
      FUN_004d076d();
      FUN_0047cda7();
      FUN_0047d12a(0,0,*(undefined4 *)(in_ECX + 0x6b8));
    }
    FUN_0047ceaa();
    FUN_004d076d();
    FUN_0047cda7();
    FUN_0047d12a(in_ECX,0,param_3 - in_ECX,param_4);
    if ((param_1 == 0) && (1 < *(int *)(unaff_EBX + 0x6b4))) {
      FUN_0047d5bd(param_2,0,0x40000000,(float)param_3);
    }
    else if (param_1 < *(int *)(unaff_EBX + 0x6b4) + -1) {
      FUN_0047d84f(param_2);
    }
  }
  return;
}

