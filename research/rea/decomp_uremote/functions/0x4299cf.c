// rea decompile_all
// name: FUN_004299cf
// address: 0x4299cf
// body: available
// range: 0x4299cf-0x429a25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_004299cf(void)

{
  int *piVar1;
  int in_EAX;
  int in_EDX;
  uint unaff_EDI;
  
  if (in_EDX - 1U < 3) {
    piVar1 = (int *)(in_EAX + 0x1b4 + in_EDX * 8);
    if (*piVar1 == 0) {
      *(undefined4 *)(in_EAX + 0xc) = 0x8a;
    }
    else {
      if (unaff_EDI <= (uint)piVar1[1]) {
        *(int *)(in_EAX + 0x164) = *piVar1;
        *(int *)(in_EAX + 0x16c) = piVar1[1];
        *(uint *)(in_EAX + 0x168) = unaff_EDI;
        *(int *)(in_EAX + 0x160) = in_EDX;
        return 0;
      }
      *(undefined4 *)(in_EAX + 0xc) = 0x83;
    }
  }
  else {
    *(undefined4 *)(in_EAX + 0xc) = 0x84;
  }
  return 1;
}

