// rea decompile_all
// name: FUN_0042a782
// address: 0x42a782
// body: available
// range: 0x42a782-0x42a7d4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042a782(void)

{
  int in_EAX;
  uint uVar1;
  uint *unaff_ESI;
  
  if (*unaff_ESI < (uint)*(ushort *)(in_EAX + 0x74)) {
    if ((*(byte *)(in_EAX + 0x170) & 1) == 0) {
      uVar1 = (**(code **)(in_EAX + 0x23c))();
    }
    else {
      uVar1 = (**(code **)(in_EAX + 0x240))();
    }
  }
  else {
    if (*(char *)(in_EAX + 0x231) != '\0') {
      *(undefined4 *)(in_EAX + 0xc) = 0x86;
    }
    uVar1 = 0;
  }
  *unaff_ESI = uVar1;
  return;
}

