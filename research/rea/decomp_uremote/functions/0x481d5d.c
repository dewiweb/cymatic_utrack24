// rea decompile_all
// name: FUN_00481d5d
// address: 0x481d5d
// body: available
// range: 0x481d5d-0x481dd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00481d5d(void)

{
  int in_EAX;
  undefined4 uVar1;
  
  FUN_00481979(0xee);
  FUN_00481993();
  FUN_0048194e(0x41);
  FUN_0048194e(100);
  FUN_0048194e(0x6f);
  FUN_0048194e(0x62);
  FUN_0048194e(0x65);
  FUN_00481993();
  FUN_00481993();
  FUN_00481993();
  if (*(int *)(in_EAX + 0x40) == 3) {
    uVar1 = 1;
  }
  else if (*(int *)(in_EAX + 0x40) == 5) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  FUN_0048194e(uVar1);
  return;
}

