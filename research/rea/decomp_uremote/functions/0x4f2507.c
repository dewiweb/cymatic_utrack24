// rea decompile_all
// name: FUN_004f2507
// address: 0x4f2507
// body: available
// range: 0x4f2507-0x4f2559 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004f2507(void)

{
  int lParam;
  int in_ECX;
  
  lParam = FUN_004f100b(1,0,0);
  if (lParam != 0) {
    SendMessageW(*(HWND *)(in_ECX + 0x38),0x80,1,lParam);
    SendMessageW(*(HWND *)(in_ECX + 0x38),0x80,0,lParam);
    if (*(HICON *)(in_ECX + 0x70) != (HICON)0x0) {
      DestroyIcon(*(HICON *)(in_ECX + 0x70));
    }
    *(int *)(in_ECX + 0x70) = lParam;
  }
  return;
}

