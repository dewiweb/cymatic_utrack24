// rea decompile_all
// name: FUN_0042725a
// address: 0x42725a
// body: available
// range: 0x42725a-0x42728c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042725a(void)

{
  int in_EAX;
  
  *(code **)(in_EAX + 0x200) = FUN_00426bba;
  *(undefined1 **)(in_EAX + 0x208) = &LAB_00426c05;
  *(code **)(in_EAX + 0x20c) = FUN_00426ca1;
  *(code **)(in_EAX + 0x210) = FUN_00427018;
  *(undefined1 **)(in_EAX + 0x204) = &LAB_00426bf6;
  return;
}

