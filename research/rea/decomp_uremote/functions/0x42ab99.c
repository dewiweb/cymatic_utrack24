// rea decompile_all
// name: FUN_0042ab99
// address: 0x42ab99
// body: available
// range: 0x42ab99-0x42ac4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042ab99(void)

{
  int in_EAX;
  uint uVar1;
  uint *unaff_EDI;
  
  uVar1 = *unaff_EDI & 0xff;
  if (uVar1 == 0xff) {
    *(undefined1 *)(in_EAX + 0x151) = 1;
    return;
  }
  if (uVar1 != 0) {
    if (((*unaff_EDI & 0x100) != 0) && (*(ushort *)(in_EAX + 0xfc) <= uVar1)) {
      *(undefined1 *)(in_EAX + 0x151) = 1;
    }
    if (((*unaff_EDI & 0x200) != 0) && (*(char *)(in_EAX + 0x119) != '\0')) {
      *(undefined1 *)(in_EAX + 0x151) = 1;
    }
    if (((*unaff_EDI & 0x400) != 0) && (*(char *)(in_EAX + 0x11a) != '\0')) {
      *(undefined1 *)(in_EAX + 0x151) = 1;
    }
    if (((*unaff_EDI & 0x800) != 0) && (uVar1 < *(ushort *)(in_EAX + 0xfc))) {
      *(undefined1 *)(in_EAX + 0x151) = 0;
    }
    if (((*unaff_EDI & 0x1000) != 0) && (*(char *)(in_EAX + 0x119) != '\0')) {
      *(undefined1 *)(in_EAX + 0x151) = 0;
    }
    if ((*unaff_EDI & 0x2000) == 0) {
      return;
    }
    if (*(char *)(in_EAX + 0x11a) == '\0') {
      return;
    }
  }
  *(undefined1 *)(in_EAX + 0x151) = 0;
  return;
}

