// rea decompile_all
// name: FUN_0046ce07
// address: 0x46ce07
// body: available
// range: 0x46ce07-0x46ce5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0046ce07(void)

{
  int in_EAX;
  
  if (*(int *)(in_EAX + 0x16bc) < 9) {
    if (*(int *)(in_EAX + 0x16bc) < 1) goto LAB_0046ce4d;
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b8);
  }
  else {
    *(undefined1 *)(*(int *)(in_EAX + 8) + *(int *)(in_EAX + 0x14)) =
         *(undefined1 *)(in_EAX + 0x16b8);
    *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
    *(undefined1 *)(*(int *)(in_EAX + 0x14) + *(int *)(in_EAX + 8)) =
         *(undefined1 *)(in_EAX + 0x16b9);
  }
  *(int *)(in_EAX + 0x14) = *(int *)(in_EAX + 0x14) + 1;
LAB_0046ce4d:
  *(undefined4 *)(in_EAX + 0x16bc) = 0;
  *(undefined2 *)(in_EAX + 0x16b8) = 0;
  return;
}

