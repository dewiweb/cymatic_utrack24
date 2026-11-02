// rea decompile_all
// name: FUN_00499848
// address: 0x499848
// body: available
// range: 0x499848-0x4998a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x499879 to 0x4913c4 FUN_004913c4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00499848(void)

{
  int in_EAX;
  
  if (in_EAX != 0) {
    if ((*(uint *)(in_EAX + 0x28) & 0x8000) == 0) {
      if (*(char *)(in_EAX + 0x10b) == '\0') {
        if (*(byte *)(in_EAX + 0x10c) < 8) goto LAB_00499879;
        *(undefined1 *)(in_EAX + 0x110) = 2;
      }
      else {
        if (*(char *)(in_EAX + 0x10b) != '\x02') {
LAB_00499879:
          FUN_004913c4();
          return;
        }
        *(undefined1 *)(in_EAX + 0x110) = 4;
      }
    }
    else {
      *(undefined2 *)(in_EAX + 0x114) = 0xff;
    }
    *(uint *)(in_EAX + 0x30) = *(uint *)(in_EAX + 0x30) | 0x8000;
    *(uint *)(in_EAX + 0x2c) = *(uint *)(in_EAX + 0x2c) | 0x80;
  }
  return;
}

