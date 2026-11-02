// rea decompile_all
// name: FUN_0050f2a0
// address: 0x50f2a0
// body: available
// range: 0x50f2a0-0x50f329 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0050f2a0(char param_1)

{
  char cVar1;
  int in_ECX;
  int local_c;
  
  cVar1 = FUN_0052e7b0();
  if ((cVar1 == '\0') && (param_1 != '\0')) {
    if (in_ECX == 0) {
      local_c = 0;
    }
    else {
      local_c = in_ECX + 0xc + *(int *)(*(int *)(in_ECX + 0xc) + 4);
    }
    FUN_00537cd0(1,local_c,5,&DAT_0095c854);
    FUN_0052c820(param_1);
  }
  FUN_0052e780();
  return;
}

