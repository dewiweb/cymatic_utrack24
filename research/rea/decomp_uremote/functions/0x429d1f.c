// rea decompile_all
// name: FUN_00429d1f
// address: 0x429d1f
// body: available
// range: 0x429d1f-0x429d85 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00429d1f(void)

{
  int in_EAX;
  undefined1 in_CL;
  
  switch(in_CL) {
  case 0:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_00429bcc;
    return;
  case 1:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_00429ba1;
    return;
  case 2:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_00429c52;
    return;
  case 3:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_00429bff;
    return;
  case 4:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_00429c27;
    return;
  case 5:
    *(code **)(in_EAX + 0x238) = FUN_00429b7c;
    return;
  case 6:
    *(code **)(in_EAX + 0x238) = FUN_00429c7d;
    return;
  case 7:
    *(code **)(in_EAX + 0x238) = FUN_00429cca;
  }
  return;
}

