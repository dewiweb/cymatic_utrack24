// rea decompile_all
// name: FUN_00471272
// address: 0x471272
// body: available
// range: 0x471272-0x4712bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4712bb with no resolved callee; its no-return basis is unknown.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00471272(char *param_1)

{
  code *pcVar1;
  char *pcVar2;
  undefined **local_10 [3];
  
  if (param_1 == (char *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    pcVar2 = param_1;
    if ((int)(0xffffffff / ZEXT48(param_1)) == 0) {
      param_1 = (char *)0x0;
      std::exception::exception((exception *)local_10,&param_1);
      local_10[0] = std::bad_alloc::vftable;
      __CxxThrowException_8(local_10,&DAT_00941648);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FUN_005af82d(pcVar2);
  return;
}

