// rea decompile_all
// name: FUN_004306cb
// address: 0x4306cb
// body: available
// range: 0x4306cb-0x430735 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004306cb(void)

{
  int in_EAX;
  
  if (*(code **)(in_EAX + 0x94) != (code *)0x0) {
    (**(code **)(in_EAX + 0x94))(in_EAX + 100);
  }
  if (*(code **)(in_EAX + 0x100) != (code *)0x0) {
    (**(code **)(in_EAX + 0x100))(in_EAX + 0xd0);
  }
  if (*(code **)(in_EAX + 0xcc) != (code *)0x0) {
    (**(code **)(in_EAX + 0xcc))(in_EAX + 0x9c);
  }
  if (*(code **)(in_EAX + 0x134) != (code *)0x0) {
    (**(code **)(in_EAX + 0x134))(in_EAX + 0x104);
  }
  if (*(code **)(in_EAX + 0x16c) != (code *)0x0) {
    (**(code **)(in_EAX + 0x16c))(in_EAX + 0x13c);
  }
  FUN_0042e6ea();
  return;
}

